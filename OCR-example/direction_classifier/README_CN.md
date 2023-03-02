# PPOCR方向分类模型

此文件夹包含如何使用[Arm Virtual Hardware](https://www.arm.com/products/development-tools/simulation/virtual-hardware)
在裸机[Cortex(R)-M55 CPU](https://www.arm.com/products/silicon-ip-cpu/cortex-m/cortex-m55)上运行 PaddleOCR 模型的示例。

## 准备运行环境

Demo在Arm Virtual Hardware Amazon Machine Image(AMI)实例中运行，因此将通过[configure_avh.sh](./configure_avh.sh)
脚本来自动安装软件。
您可以参考[这份指南](https://arm-software.github.io/AVH/main/examples/html/MicroSpeech.html#amilaunch)来启动Arm虚拟硬件AMI实例。

## 安装必备的环境

你可以通过以下脚本快速安装开发所需要的环境

```bash
sudo ./configure_avh.sh
```

## 运行demo

你可以通过以下代码快速运行demo

```bash
./run_demo.sh
```