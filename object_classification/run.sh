#!/bin/bash

# download paddle model
wget https://paddle-imagenet-models-name.bj.bcebos.com/dygraph/inference/MobileNetV3_small_x0_35_ssld_infer.tar
tar -xf MobileNetV3_small_x0_35_ssld_infer.tar
rm MobileNetV3_small_x0_35_ssld_infer.tar
mv MobileNetV3_small_x0_35_ssld_infer/inference ${PWD}/model

# convert paddle model to onnx model
paddle2onnx --model_dir  ${PWD}/model\
            --model_filename inference.pdmodel \
            --params_filename inference.pdiparams \
            --save_file inference.onnx
rm -rf ${PWD}/model

# convert onnx model to tvm model
python3 -m tvm.driver.tvmc compile --target=cmsis-nn,c \
    --target-cmsis-nn-mcpu=cortex-m55 \
    --target-c-mcpu=cortex-m55 \
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
    --input-shapes x:[1,3,56,56] \
    --module-name=cls \
    --output=cls.tar
rm inference.onnx

# decompression cls.tar
mkdir -p ${PWD}/MobileNetV3_small_x0_35_ssld_infer/cls
tar -xvf cls.tar -C ${PWD}/MobileNetV3_small_x0_35_ssld_infer/cls
rm cls.tar

# create input and output head file
python3 ./convert_image.py ./imgs/ILSVRC2012_val_00020010.jpg

# build
csolution list packs -s object_classification.csolution.yml -m > packs.txt
cpackget update-index
cpackget add -f packs.txt
cbuild object_classification.csolution.yml 

# run
VHT_MPS3_Corstone_SSE-300 -C cpu0.CFGDTCMSZ=15 \
                        -C cpu0.CFGITCMSZ=15 \
                        -C mps3_board.uart0.out_file=\"-\" \
                        -C mps3_board.uart0.shutdown_tag=\"EXITTHESIM\" \
                        -C mps3_board.visualisation.disable-visualisation=1 \
                        -C mps3_board.telnetterminal0.start_telnet=0 \
                        -C mps3_board.telnetterminal1.start_telnet=0 \
                        -C mps3_board.telnetterminal2.start_telnet=0 \
                        -C mps3_board.telnetterminal5.start_telnet=0 \
                        out/object_classification/MobileNetV3smallx035ssldinfer/object_classification.axf \
                        --stat

# clean
rm -rf out
rm -rf tmp
rm -rf packs.txt
rm object_classification+MobileNetV3smallx035ssldinfer.cbuild.yml
rm object_classification+MobileNetV3smallx035ssldinfer.cprj
rm object_classification.cbuild-idx.yml
rm object_classification.cbuild-pack.yml