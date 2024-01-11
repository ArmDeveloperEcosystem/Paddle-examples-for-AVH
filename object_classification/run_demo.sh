#!/bin/bash

# Show usage
function show_usage() {
    cat <<EOF
Usage: run_demo.sh
-h, --help
  Display this help message.
--model MODEL
	Set name of paddle model.
--device DEVICE
  Set device to run.
EOF
}

while (( $# )); do
    case "$1" in
        -h|--help)
            show_usage
            exit 0
            ;;

        --model)
            if [ $# -gt 1 ]
            then
                export MODEL_NAME="$2"
                shift 2
            else
                echo 'ERROR: --model requires a non-empty argument' >&2
                show_usage >&2
                exit 1
            fi
            ;;

        --device)
            if [ $# -gt 1 ]
            then
                export DEVICE="$2"
                shift 2
            else
                echo 'ERROR: --device requires a non-empty argument' >&2
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

echo "Device name is $DEVICE"
if [ "$DEVICE" == "cortex-m55" ]; then
   RUN_DEVICE_NAME="M55"
   VHT_Platform="VHT_MPS3_Corstone_SSE-300"
   TVM_TARGET="cortex-m55"
elif [ "$DEVICE" == "cortex-m85" ]; then
   RUN_DEVICE_NAME="M85"
   VHT_Platform="VHT_Corstone_SSE-310"
   TVM_TARGET="cortex-m85"
else
  echo 'ERROR: --device only support cortex-m55/cortex-m85' >&2
  exit 1
fi

# download paddle model
echo "Model name is $MODEL_NAME"
if [ "$MODEL_NAME" == "MobileNetV3" ]; then
	wget "https://paddle-imagenet-models-name.bj.bcebos.com/dygraph/inference/MobileNetV3_small_x0_35_ssld_infer.tar"
  tar -xf MobileNetV3_small_x0_35_ssld_infer.tar
  rm MobileNetV3_small_x0_35_ssld_infer.tar
  mv MobileNetV3_small_x0_35_ssld_infer/inference "${PWD}/model"
  rm -rf MobileNetV3_small_x0_35_ssld_infer
  INPUT_NODE_NAME="x"
elif [ "$MODEL_NAME" == "PP_LCNet" ]; then
  wget "https://paddle-imagenet-models-name.bj.bcebos.com/dygraph/inference/PPLCNet_x0_75_infer.tar"
  tar -xf PPLCNet_x0_75_infer.tar
  rm PPLCNet_x0_75_infer.tar
  mv PPLCNet_x0_75_infer "${PWD}/model"
  MODEL_NAME="PPLCNet"
  INPUT_NODE_NAME="x"
elif [ "$MODEL_NAME" == "MobileNetV1" ]; then
  wget "https://paddle-imagenet-models-name.bj.bcebos.com/dygraph/inference/MobileNetV1_x0_25_infer.tar"
  tar -xf MobileNetV1_x0_25_infer.tar
  rm MobileNetV1_x0_25_infer.tar
  mv MobileNetV1_x0_25_infer "${PWD}/model"
  MODEL_NAME="MobileNetV3"
  INPUT_NODE_NAME="inputs"
else
  echo 'ERROR: --model only support MobileNetV3/PP_LCNet/MobileNetV1' >&2
  exit 1
fi

# convert paddle model to onnx model
paddle2onnx --model_dir  "${PWD}/model" \
            --model_filename inference.pdmodel \
            --params_filename inference.pdiparams \
            --save_file inference.onnx
rm -rf "${PWD}/model"

if [ "$DEVICE" != "x" ]; then
  python rename_onnx_model.py --model inference.onnx \
                              --origin_names ${INPUT_NODE_NAME} \
                              --new_names x \
                              --save_file inference.onnx
fi

# convert onnx model to tvm model
python3 -m tvm.driver.tvmc compile --target=cmsis-nn,c \
    --target-cmsis-nn-mcpu=$TVM_TARGET \
    --target-c-mcpu=$TVM_TARGET \
    --runtime=crt \
    --executor=aot \
    --executor-aot-interface-api=c \
    --executor-aot-unpacked-api=1 \
    --pass-config tir.usmp.enable=1 \
    --pass-config tir.usmp.algorithm=hill_climb \
    --pass-config tir.disable_storage_rewrite=1 \
    --pass-config tir.disable_vectorize=1 \
    inference.onnx \
    --output-format=mlf \
    --model-format=onnx \
    --input-shapes x:[1,3,224,224] \
    --module-name=cls \
    --output=cls.tar
rm inference.onnx

# decompression cls.tar
mkdir -p "${PWD}/cls"
tar -xvf cls.tar -C "${PWD}/cls"
rm cls.tar

# create input and output head file
python3 ./convert_labels.py ./labels/labels.txt
python3 ./convert_image.py ./image/ILSVRC2012_val_00020010.jpg

# build
csolution list packs -s object_classification.csolution.yml -m > packs.txt
cpackget update-index
cpackget add -f packs.txt

PROJECT_FILE_NAME="object_classification+$MODEL_NAME$RUN_DEVICE_NAME.cprj"
echo "Project file name is $PROJECT_FILE_NAME"
cbuild "$PROJECT_FILE_NAME"

rm -rf "${PWD}/cls"
rm "${PWD}/include/inputs.h"
rm "${PWD}/include/outputs.h"
rm "${PWD}/include/labels.h"

# run
$VHT_Platform  -C cpu0.CFGDTCMSZ=15 \
              -C cpu0.CFGITCMSZ=15 \
              -C mps3_board.uart0.out_file=\"-\" \
              -C mps3_board.uart0.shutdown_tag=\"EXITTHESIM\" \
              -C mps3_board.visualisation.disable-visualisation=1 \
              -C mps3_board.telnetterminal0.start_telnet=0 \
              -C mps3_board.telnetterminal1.start_telnet=0 \
              -C mps3_board.telnetterminal2.start_telnet=0 \
              -C mps3_board.telnetterminal5.start_telnet=0 \
              "out/object_classification/$MODEL_NAME$RUN_DEVICE_NAME/object_classification.axf" \
              --stat

# clean
rm -rf out
rm -rf tmp
rm -rf packs.txt