# Paddle Examples for Arm Virtual Hardware(AVH)

## Arm Virtual Hardware(AVH)
[Arm Virtual Hardware (AVH)](https://www.arm.com/products/development-tools/simulation/virtual-hardware) scales and accelerates IoT software development by virtualising popular IoT development kits, Arm-based processors, and systems in the cloud. It is an evolution of Arm’s modelling technology that removes the wait for hardware and the complexity of building and configuring board farms for testing. It enables modern agile software development practices, such as DevOps and MLOps workflows.

Arm Virtual Hardware is available for [Corstone](https://www.arm.com/products/silicon-ip-subsystems) platforms and [Cortex](https://www.arm.com/products/silicon-ip-cpu) processors via an Amazon Machine Image (AMI) on [AWS Marketplace](https://aws.amazon.com/marketplace/pp/prodview-urbpq7yo5va7g) as well for third-party hardware available via Arm’s [SaaS platform](https://avh.arm.com/). 

For examples in this repository, we use Arm Virtual Hardware with Corstone platforms and Cortex processors via AWS.

## PaddlePaddle
PaddlePaddle (PArallel Distributed Deep LEarning) is a simple, efficient and extensible deep learning framework developed by Baidu, Inc. As the first independent R&D deep learning platform in China, it has been officially open-sourced to professional communities since 2016. It is an industrial platform with advanced technologies and rich features that cover core deep learning frameworks, basic model libraries, end-to-end development kits, tools & components as well as service platforms. For more details, please refer to [PaddlePaddle Github](https://github.com/PaddlePaddle/Paddle) for details.

## Example
|  Example  |  Model  |  Hardware  |  Project overview  |
|  ----  | ----  | ---- |---- |
|[PaddleOCR for AVH](./PaddleOCR%20example%20for%20AVH)|[PP-OCRv3 English recognition model](https://paddleocr.bj.bcebos.com/tvm/ocr_en.tar)| AVH [Corstone-300](https://www.arm.com/products/silicon-ip-subsystems/corstone-300) platform| This project contains an example of how to run a PaddleOCR model on bare metal [Cortex(R)-M55](https://www.arm.com/products/silicon-ip-cpu/cortex-m/cortex-m55) CPU using Arm Virtual Hardware Corstone-300 platform.
|[PaddleOCR for AVH](./PaddleOCR%20example%20for%20AVH)|[PP-OCRv3 text angle classification model](https://paddleocr.bj.bcebos.com/dygraph_v2.0/ch/ch_ppocr_mobile_v2.0_cls_infer.tar)| AVH [Corstone-300](https://www.arm.com/products/silicon-ip-subsystems/corstone-300) platform| This project contains an example of how to run a PaddleOCR model on bare metal [Cortex(R)-M55](https://www.arm.com/products/silicon-ip-cpu/cortex-m/cortex-m55) CPU using Arm Virtual Hardware Corstone-300 platform.
|[PaddleDetection for AVH](./PaddleDetection%20example%20for%20AVH)|[PP-PicoDet object detection model](https://bj.bcebos.com/v1/paddledet/deploy/Inference/picodet_s_320_coco_lcnet_no_nms.tar)|AVH Corstone-300 platform| This project contains an example of how to run a PP-PicoDet model on bare metal Cortex(R)-M55 CPU using Arm Virtual Hardware Corstone-300 platform.
