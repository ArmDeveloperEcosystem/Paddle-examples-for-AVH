# PPOCR方向分类模型

此文件夹包含如何使用[Arm Virtual Hardware](https://www.arm.com/products/development-tools/simulation/virtual-hardware)
在裸机[Cortex(R)-M55 CPU](https://www.arm.com/products/silicon-ip-cpu/cortex-m/cortex-m55)上运行 PaddleOCR 模型的示例。

## 准备运行环境

Demo在Arm Virtual Hardware Amazon Machine Image(AMI)实例中运行，因此将通过[configure_avh.sh](./configure_avh.sh)
脚本来自动安装软件。
您可以参考[这份指南](https://arm-software.github.io/AVH/main/examples/html/MicroSpeech.html#amilaunch)来启动Arm虚拟硬件AMI实例。

## 转换模型

在运行Demo前，我们需要在PC上转换模型。
在转换模型前，请确保你已经正确安装了TVM。
如果你需要从源代码开始编译，请确保你在config.cmake中设置以下内容:

* set(USE_MICRO ON)
* set(USE_LLVM ON)
* set(USE_LLVM /opt/homebrew/Cellar/llvm/15.0.7_1/bin/llvm-config)
* set(USE_CMSISNN ON)

```bash
# 下载模型
wget https://paddleocr.bj.bcebos.com/dygraph_v2.0/ch/ch_ppocr_mobile_v2.0_cls_infer.tar
tar -xf ch_ppocr_mobile_v2.0_cls_infer.tar

# 重命名文件夹
mv ch_ppocr_mobile_v2.0_cls_infer ppcls

# 导出模型
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

## 