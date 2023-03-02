# 基于metal Arm(R) Cortex(R)-M55 CPU在Arm Virtual Hardware上运行PPOCR方向分类模型

此文件夹包含如何使用[Arm Virtual Hardware](https://www.arm.com/products/development-tools/simulation/virtual-hardware)
在裸机[Cortex(R)-M55 CPU](https://www.arm.com/products/silicon-ip-cpu/cortex-m/cortex-m55)上运行 PaddleOCR 模型的示例。

## 准备运行环境

Demo在Arm Virtual Hardware Amazon Machine Image(AMI)实例中运行，因此将通过[configure_avh.sh](./configure_avh.sh)
脚本来自动安装软件。
您可以参考[这份指南](https://arm-software.github.io/AVH/main/examples/html/MicroSpeech.html#amilaunch)来启动Arm虚拟硬件AMI实例。

你可以通过以下脚本快速安装开发环境

```bash
sudo ./configure_avh.sh
```

## 运行demo

你可以通过以下代码快速运行demo，它将：

* 如果在 Arm 虚拟硬件 Amazon AMI 实例中运行，则通过自动安装所需的先决条件来设置运行环境（不指定 --enable_FVP 为 1）
* 下载一个PaddleOCR文字识别模型
* 使用 tvmc 为 Cortex(R)-M55 CPU 和 CMSIS-NN 编译文本识别模型
* 创建一个包含图像数据作为 C 数组的 C 头文件 inputs.c
* 创建一个 C 头文件 outputs.c，其中包含将存储推理输出的 C 数组
* 构建演示应用程序
* 在基于 Arm(R) Corstone(TM)-300 软件的 Arm 虚拟硬件上运行演示应用程序
* 该应用程序将报告图像上的分类结果和相应的置信度。

```bash
./run_demo.sh
```

## 使用您自己的图像

请修改`run_demo.sh`的174行，例如你可以进行如下修改:

```bash
python3 ./convert_image.py path/to/picture
```