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
if [ "$MODEL_NAME" == "CH_PPOCRV2_CLS" ]; then
    wget https://paddleocr.bj.bcebos.com/dygraph_v2.0/ch/ch_ppocr_mobile_v2.0_cls_infer.tar
    tar -xvf ch_ppocr_mobile_v2.0_cls_infer.tar
    rm ch_ppocr_mobile_v2.0_cls_infer.tar
    mv ch_ppocr_mobile_v2.0_cls_infer model
    MODEL_NAME="CHPPOCRV2CLS"
else
  echo 'ERROR: --model only support CH_PPOCRV2_CLS' >&2
  exit 1
fi

# convert paddle model to onnx model
paddle2onnx --model_dir  "${PWD}/model" \
            --model_filename inference.pdmodel \
            --params_filename inference.pdiparams \
            --save_file model.onnx
rm -rf "${PWD}/model"

# convert onnx model to tvm model
python3 -m tvm.driver.tvmc compile --target=cmsis-nn,c \
    --target-cmsis-nn-mcpu="${TVM_TARGET}" \
    --target-c-mcpu="${TVM_TARGET}" \
    --runtime=crt \
    --executor=aot \
    --executor-aot-interface-api=c \
    --executor-aot-unpacked-api=1 \
    --pass-config tir.usmp.enable=1 \
    --pass-config tir.usmp.algorithm=hill_climb \
    --pass-config tir.disable_storage_rewrite=1 \
    --pass-config tir.disable_vectorize=1 model.onnx \
    --output-format=mlf \
    --model-format=onnx \
    --module-name=text_angle_cls \
    --input-shapes "x:[1,3,48,192]" \
    --output=text_angle_cls.tar
rm model.onnx

# decompression cls.tar
mkdir -p "${PWD}/text_angle_cls"
tar -xvf text_angle_cls.tar -C "${PWD}/text_angle_cls"
rm text_angle_cls.tar

# create input and output head file
python3 ./convert_image.py image/horizontal.png

# build
csolution list packs -s text_angle_classification.csolution.yml -m > packs.txt
cpackget update-index
cpackget add -f packs.txt
PROJECT_FILE_NAME="text_angle_classification+$MODEL_NAME$RUN_DEVICE_NAME.cprj"
echo "Project file name is $PROJECT_FILE_NAME"
cbuild "$PROJECT_FILE_NAME"

rm -rf "${PWD}/text_angle_cls"
rm "${PWD}/include/inputs.h"
rm "${PWD}/include/outputs.h"

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
            "out/text_angle_classification/$MODEL_NAME$RUN_DEVICE_NAME/text_angle_classification.axf" \
            --stat

# clean
rm -rf out
rm -rf tmp
rm -rf packs.txt