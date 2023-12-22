#!/bin/bash

# Show usage
function show_usage() {
    cat <<EOF
Usage: run_demo.sh
-h, --help Display this help message.
--model_name MODEL_NAME
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

        --model_name)
            if [ $# -gt 1 ]
            then
                export MODEL_NAME="$2"
                shift 2
            else
                echo 'ERROR: --model_name requires a non-empty argument' >&2
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
if [ "$MODEL_NAME" == "PP_HumanSeg" ]; then
  wget https://paddleseg.bj.bcebos.com/dygraph/pp_humanseg_v2/portrait_pp_humansegv1_lite_398x224_inference_model.zip
  unzip portrait_pp_humansegv1_lite_398x224_inference_model.zip
  rm portrait_pp_humansegv1_lite_398x224_inference_model.zip
  mv portrait_pp_humansegv1_lite_398x224_inference_model model
  rm -rf __MACOSX
  MODEL_NAME="PPHumanSeg"
else
  echo 'ERROR: --model_name only support PP_HumanSeg' >&2
  exit 1
fi

# convert paddle model to onnx model
python paddle_infer_shape.py --model_dir model \
                             --model_filename model.pdmodel \
                             --params_filename model.pdiparams \
                             --save_dir model \
                             --input_shape_dict="{'x':[1,3,224,398]}"
paddle2onnx --model_dir  "${PWD}/model" \
            --model_filename model.pdmodel \
            --params_filename model.pdiparams \
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
    --module-name=object_segmentation \
    --input-shapes "x:[1,3,224,398]"  \
    --output=object_segmentation.tar
rm model.onnx

# decompression cls.tar
mkdir -p "${PWD}/object_segmentation"
tar -xvf object_segmentation.tar -C "${PWD}/object_segmentation"
rm object_segmentation.tar

# create input and output head file
python3 ./convert_image.py images/portrait_heng.jpg

# build
csolution list packs -s object_segmentation.csolution.yml -m > packs.txt
cpackget update-index
cpackget add -f packs.txt
PROJECT_FILE_NAME="object_segmentation+$MODEL_NAME$RUN_DEVICE_NAME.cprj"
echo "Project file name is $PROJECT_FILE_NAME"
cbuild "$PROJECT_FILE_NAME"

rm -rf "${PWD}/object_segmentation"
rm "${PWD}/include/inputs.h"
rm "${PWD}/include/outputs.h"

# run
$VHT_Platform  -C cpu0.CFGDTCMSZ=15 \
           -C cpu0.CFGITCMSZ=15 \
           -C mps3_board.uart0.out_file=\"uart0.txt\" \
           -C mps3_board.uart0.shutdown_tag=\"EXITTHESIM\" \
           -C mps3_board.visualisation.disable-visualisation=1 \
           -C mps3_board.telnetterminal0.start_telnet=0 \
           -C mps3_board.telnetterminal1.start_telnet=0 \
           -C mps3_board.telnetterminal2.start_telnet=0 \
           -C mps3_board.telnetterminal5.start_telnet=0 \
           "out/object_segmentation/$MODEL_NAME$RUN_DEVICE_NAME/object_segmentation.axf" \
           --stat

# Convert outputs to image
python3 ./convert_outputs.py uart0.txt

# clean
rm -rf out
rm -rf tmp
rm -rf packs.txt