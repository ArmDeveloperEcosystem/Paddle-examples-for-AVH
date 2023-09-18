#!/bin/bash

if [ -z "$1" ]; then
    echo "Please Select Arm(R) Cortex(R)-M Architecture. (cortex-m55,cortex-m85, etc)."
    echo "Example: bash run_model.sh cortex-m55."
    exit 1
fi

architecture=$1
current_dir=$(pwd)
model_name="MobileNetV3_small_x0_35"
model_url="https://bj.bcebos.com/v1/paddledet/deploy/Inference/picodet_s_320_coco_lcnet_no_nms.tar"
model_zip_name="picodet_s_320_coco_lcnet_no_nms.tar"
model_input_node_name="image"
tvm_input_model_path="picodet_s_320_coco_lcnet_no_nms/model.pdmodel"
tvm_output_model_name="detection"
tvm_output_zip_name="detection.tar"


echo "****************************** BASH OPTIONS ******************************"
echo "Arm(R) Cortex(R)-M Architecture: $architecture"
echo "current_dir: $current_dir"
echo "model_name: $model_name"
echo "model_url: $model_url"
echo "model_zip_name: $model_zip_name"
echo "tvm_input_model_path: $tvm_input_model_path"
echo "tvm_output_model_name: $tvm_output_model_name"
echo "tvm_output_zip_name: $tvm_output_zip_name"
echo "****************************** BASH OPTIONS ******************************"

python3 ./convert_image.py images/000000014439_640x640.jpg
rm -rf build && mkdir -p build && cd build

wget $model_url
tar -xf $model_zip_name

# Compile model for Arm(R) Cortex(R)-M CPU and CMSIS-NN
# An alternative to using "python3 -m tvm.driver.tvmc" is to call
# "tvmc" directly once TVM has been pip installed.
python3 -m tvm.driver.tvmc compile --target=cmsis-nn,c \
    --target-cmsis-nn-mcpu=$architecture \
    --target-c-mcpu=$architecture \
    --runtime=crt \
    --executor=aot \
    --executor-aot-interface-api=c \
    --executor-aot-unpacked-api=1 \
    --pass-config tir.usmp.enable=1 \
    --pass-config tir.usmp.algorithm=hill_climb \
    --pass-config tir.disable_storage_rewrite=1 \
    --pass-config tir.disable_vectorize=1 \
    $tvm_input_model_path \
    --output-format=mlf \
    --model-format=paddle \
    --module-name=$tvm_output_model_name \
    --input-shapes $model_input_node_name:[1,3,320,320] \
    --output=$tvm_output_zip_name
tar -xf $tvm_output_zip_name

mv templates/crt_config.h.template runtime/include/crt_config.h

cmake .. -DCMAKE_TOOLCHAIN_FILE=${PWD}/../../cmake/arm-none-eabi-gcc.cmake \
        -DCMAKE_SYSTEM_PROCESSOR=$architecture \
        -DINPUT_NODE_NAME=$model_input_node_name
make -j8


if [ "$architecture" = "cortex-m55" ]; then
  VHT_MPS3_Corstone_SSE-300 -C cpu0.CFGDTCMSZ=15 \
                            -C cpu0.CFGITCMSZ=15 \
                            -C mps3_board.uart0.out_file=\"-\" \
                            -C mps3_board.uart0.shutdown_tag=\"EXITTHESIM\" \
                            -C mps3_board.visualisation.disable-visualisation=1 \
                            -C mps3_board.telnetterminal0.start_telnet=0 \
                            -C mps3_board.telnetterminal1.start_telnet=0 \
                            -C mps3_board.telnetterminal2.start_telnet=0 \
                            -C mps3_board.telnetterminal5.start_telnet=0 \
                            demo --stat
elif [ "$architecture" = "cortex-m85" ]; then
  VHT_Corstone_SSE-310 -C cpu0.CFGDTCMSZ=15 \
                        -C cpu0.CFGITCMSZ=15 \
                        -C mps3_board.uart0.out_file=\"-\" \
                        -C mps3_board.uart0.shutdown_tag=\"EXITTHESIM\" \
                        -C mps3_board.visualisation.disable-visualisation=1 \
                        -C mps3_board.telnetterminal0.start_telnet=0 \
                        -C mps3_board.telnetterminal1.start_telnet=0 \
                        -C mps3_board.telnetterminal2.start_telnet=0 \
                        -C mps3_board.telnetterminal5.start_telnet=0 \
                        demo --stat
fi

