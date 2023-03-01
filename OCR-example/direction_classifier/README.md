
## Transformation model

```bash
# Download model
wget https://paddleocr.bj.bcebos.com/dygraph_v2.0/ch/ch_ppocr_mobile_v2.0_cls_infer.tar
tar -xf ch_ppocr_mobile_v2.0_cls_infer.tar

# rename model
mv ch_ppocr_mobile_v2.0_cls_infer ppcls

# export model
python3 -m tvm.driver.tvmc compile \
    --target=cmsis-nn,c \
    --target-cmsis-nn-mcpu=cortex-m55 \
    --target-c-mcpu=cortex-m55 \
    --runtime=crt \
    --executor=aot \
    --executor-aot-interface-api=c \
    --executor-aot-unpacked-api=1 \
    --pass-config tir.usmp.enable=1 \
    --pass-config tir.usmp.algorithm=hill_climb \
    --pass-config tir.disable_storage_rewrite=1 \
    --pass-config tir.disable_vectorize=1 ppcls/inference.pdmodel \
    --output-format=mlf \
    --model-format=paddle \
    --module-name=cls \
    --input-shapes "x:[1,3,48,192]" \
    --output=cls.tar
    
tar -xf cls.tar
```