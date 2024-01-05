# Running PaddleClas image classification model using Arm Virtual Hardware

## Running environment and prerequisites

If you are running this project for the first time, please go back to [the homepage](../README.md) and follow the
documentation there to install the dependencies.

## Supported Models List

For your convenience, we have provided a corresponding table of models currently adapted and the devices that support each of these models.

| Model       | Cortex-M55 | Cortex-M85 | 
|-------------|------------|------------|
| MobileNetV3 | ✅          | ✅          | 
| PP_LCNet    | ✅          | ✅          | 

## Run Classification Model Demo

We use **run_demo.sh** to build the entire project. The parameters you need to pass are listed in the table below.

| Arguments | Details                                                                                                      |
|-----------|--------------------------------------------------------------------------------------------------------------|
| --model   | The '--model' parameter is used to select the desired model. Currently, it supports MobileNetV3/PP_LCNet.    |
| --device  | The '--device' parameter is used to select the desired device. Currently, it supports cortex-m55/cortex-m85. |

For example, running the following command can execute the MobileNetV3 model on Cortex-M55:

```bash
cd /path/to/Paddle-examples-for-AVH/object_classification
bash run_demo.sh --model MobileNetV3 --device cortex-m55
```