#!/bin/bash
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.
set -e
set -u
set -o pipefail

# Show usage
function show_usage() {
    cat <<EOF
Usage: run_demo.sh
-h, --help
	Display this help message.
--cmsis_path CMSIS_PATH
	Set path to CMSIS.
--ethosu_platform_path ETHOSU_PLATFORM_PATH
	Set path to Arm(R) Ethos(TM)-U core platform.
--fvp_path FVP_PATH
	Set path to FVP.
--cmake_path
	Set path to cmake.
--enable_FVP
	Set 1 to run application on local Fixed Virtual Platforms (FVPs) executables.
EOF
}

# Configure environment variables
FVP_enable=0
export PATH=/opt/arm/gcc-arm-none-eabi/bin:$PATH

# Install python libraries
echo -e "\e[36mInstall python libraries\e[0m"
sudo pip install -r ./requirements.txt

# Parse arguments
while (( $# )); do
    case "$1" in
        -h|--help)
            show_usage
            exit 0
            ;;

        --cmsis_path)
            if [ $# -gt 1 ]
            then
                export CMSIS_PATH="$2"
                shift 2
            else
                echo 'ERROR: --cmsis_path requires a non-empty argument' >&2
                show_usage >&2
                exit 1
            fi
            ;;

        --ethosu_platform_path)
            if [ $# -gt 1 ]
            then
                export ETHOSU_PLATFORM_PATH="$2"
                shift 2
            else
                echo 'ERROR: --ethosu_platform_path requires a non-empty argument' >&2
                show_usage >&2
                exit 1
            fi
            ;;

        --fvp_path)
            if [ $# -gt 1 ]
            then
                export PATH="$2/models/Linux64_GCC-6.4:$PATH"
                shift 2
            else
                echo 'ERROR: --fvp_path requires a non-empty argument' >&2
                show_usage >&2
                exit 1
            fi
            ;;

        --cmake_path)
            if [ $# -gt 1 ]
            then
                export CMAKE="$2"
                shift 2
            else
                echo 'ERROR: --cmake_path requires a non-empty argument' >&2
                show_usage >&2
                exit 1
            fi
            ;;
            
        --enable_FVP)
            if [ $# -gt 1 ] && [ "$2" == "1" -o "$2" == "0" ];
            then
                FVP_enable="$2"
                shift 2
            else
                echo 'ERROR: --enable_FVP requires a right argument 1 or 0' >&2
                show_usage >&2
                exit 1
            fi
            ;;

        -*|--*)
            echo "Error: Unknown flag: $1" >&2
            show_usage >&2
            exit 1
            ;;
    esac
done

# Choose running environment: cloud(default) or local environment
Platform="VHT_Corstone_SSE-310"
if [ ! -d "/opt/arm/" ]; then
		sudo ./configure_avh.sh
fi

# Directories
script_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

# Make build directory
make cleanall
mkdir -p build

cp -r MobileNetV1_infer ./build
cd build

## Get PaddlePaddle inference model
paddle2onnx --model_dir MobileNetV1_infer \
            --model_filename best_model.pdmodel \
            --params_filename best_model.pdiparams \
            --save_file MobileNetV1_infer/inference.onnx \
            --enable_dev_version True
python3 -m tvm.driver.tvmc compile --target=cmsis-nn,c \
    --target-cmsis-nn-mcpu=cortex-m85 \
    --target-c-mcpu=cortex-m85 \
    --runtime=crt \
    --executor=aot \
    --executor-aot-interface-api=c \
    --executor-aot-unpacked-api=1 \
    --pass-config tir.usmp.enable=1 \
    --pass-config tir.usmp.algorithm=hill_climb \
    --pass-config tir.disable_storage_rewrite=1 \
    --pass-config tir.disable_vectorize=1 MobileNetV1_infer/inference.onnx \
    --output-format=mlf \
    --model-format=onnx \
    --module-name=cls \
    --input-shapes inputs:[1,3,224,224] \
    --output=cls.tar
tar -xf cls.tar

# Create C header files
cd ..
python3 ./convert_image.py ./imgs/OIF-e2bexWrojgtQnAPPcUfOWQ.jpeg

# Build demo executable
export PATH=/opt/arm/gcc-arm-none-eabi/arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi/bin:$PATH
cd ${script_dir}
echo ${script_dir}
make

# Run demo executable on the AVH
$Platform -C cpu0.CFGDTCMSZ=15 \
-C cpu0.CFGITCMSZ=15 -C mps3_board.uart0.out_file=\"./result.txt\" -C mps3_board.uart0.shutdown_tag=\"EXITTHESIM\" \
-C mps3_board.visualisation.disable-visualisation=1 -C mps3_board.telnetterminal0.start_telnet=0 \
-C mps3_board.telnetterminal1.start_telnet=0 -C mps3_board.telnetterminal2.start_telnet=0 -C mps3_board.telnetterminal5.start_telnet=0 \
./build/demo --stat

python ./labels/convert_label.py ./labels/label_list.txt