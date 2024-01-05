# Paddle Examples for Arm Virtual Hardware(AVH)

## Arm Virtual Hardware(AVH)

[Arm Virtual Hardware (AVH)](https://www.arm.com/products/development-tools/simulation/virtual-hardware) scales and
accelerates IoT software development by virtualising popular IoT development kits, Arm-based processors, and systems in
the cloud. It is an evolution of Arm’s modelling technology that removes the wait for hardware and the complexity of
building and configuring board farms for testing. It enables modern agile software development practices, such as DevOps
and MLOps workflows.

Arm Virtual Hardware is available for [Corstone](https://www.arm.com/products/silicon-ip-subsystems) platforms
and [Cortex](https://www.arm.com/products/silicon-ip-cpu) processors via an Amazon Machine Image (AMI)
on [AWS Marketplace](https://aws.amazon.com/marketplace/pp/prodview-urbpq7yo5va7g) as well for third-party hardware
available via Arm’s [SaaS platform](https://avh.arm.com/).

For examples in this repository, we use Arm Virtual Hardware with Corstone platforms and Cortex processors via AWS.

## PaddlePaddle

PaddlePaddle (PArallel Distributed Deep LEarning) is a simple, efficient and extensible deep learning framework
developed by Baidu, Inc. As the first independent R&D deep learning platform in China, it has been officially
open-sourced to professional communities since 2016. It is an industrial platform with advanced technologies and rich
features that cover core deep learning frameworks, basic model libraries, end-to-end development kits, tools &
components as well as service platforms. For more details, please refer
to [PaddlePaddle Github](https://github.com/PaddlePaddle/Paddle) for details.

## Example

We provide 4 use cases in this reposiotry ([ocr](./ocr), [object_classification](./object_classification), [object_detection](./object_detection) and [object_segmentation](./object_segmentation))
To run the demos in Arm Virtual Hardware context, please follow these 3 steps:

#### 1. Set up running environment

When you try to run the demo for the first time, you need to set up the running environment in AVH instance by the following command.
```bash
cd /path/to/Paddle-examples-for-AVH
sudo bash scripts/config_cmsis_toolbox.sh
sudo bash scripts/config_tvm.sh
```
#### 2. Run the demo

You must specify the model name (by parameter `--model`) and the device name (by parameter `--device`) when you run the demo.
```bash
cd /path/to/usecase
bash run_demo.sh --model model_name --device device_name
```
Parameter options can be found in the following table. 

| Use Case | Model Name | Device Name| 
|-------------------------------------------|-------------|------------|
|object_classification| MobileNetV3<br>PP_LCNet | cortex-m55<br>cortex-m85 |
|ocr| CH_PPOCRV2_CLS <br> EN_PPOCRV3_REC| cortex-m55<br>cortex-m85 |
|object_detection| Picodet | cortex-m55<br>cortex-m85 |
|object_segmentation| PP_HumanSeg | cortex-m55<br>cortex-m85 |

For example, to run object classfication demo with PP-LCNet model on Arm Cortex-M55 platform, input the following command:

```bash
bash run_demo.sh --model PP_LCNet --device cortex-m55
```
