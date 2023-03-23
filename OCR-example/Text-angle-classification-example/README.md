# Running PaddleOCR text angle classification model on bare metal Arm(R) Cortex(R)-M55 CPU using Arm Virtual Hardware

This folder contains an example of how to run a PaddleOCR-Cls model on bare
metal [Cortex(R)-M55 CPU](https://www.arm.com/products/silicon-ip-cpu/cortex-m/cortex-m55)
using [Arm Virtual Hardware](https://www.arm.com/products/development-tools/simulation/virtual-hardware).

## Prepare the operating environment

If the demo is run in Arm Virtual Hardware Amazon Machine Image(AMI) instance hosted by [AWS](https://aws.amazon.com/marketplace/pp/prodview-urbpq7yo5va7g?sr=0-1&ref_=beagle&applicationId=AWSMPContessa)/[AWS China](https://awsmarketplace.amazonaws.cn/marketplace/pp/prodview-2y7nefntbmybu), the following software will be installed through [configure_avh.sh](configure_avh.sh) script. It will install automatically when you run the application through [run_demo.sh](run_demo.sh) script.
You can refer to this [guide](https://arm-software.github.io/AVH/main/examples/html/MicroSpeech.html#amilaunch) to launch an Arm Virtual Hardware AMI instance.

You can quickly install the development environment through the following script.

```bash
sudo ./configure_avh.sh
```

## Running the demo application

You can use run_demo script for rapid development.

With [run_demo.sh](run_demo.sh) to run the demo application, it will:
- Set up running environment by installing the required prerequisites automatically if running in Arm Virtual Hardware Amazon AMI instance(not specify --enable_FVP to 1)
- Download a PaddleOCR text recognition model
- Use tvmc to compile the text recognition model for Cortex(R)-M55 CPU and CMSIS-NN
- Create a C header file inputs.c containing the image data as a C array
- Create a C header file outputs.c containing a C array where the output of inference will be stored
- Build the demo application
- Run the demo application on a Arm Virtual Hardware based on Arm(R) Corstone(TM)-300 software
- The application will report the text on the image and the corresponding score.

```bash
./run_demo.sh
```

## Use your own image

Please modify line 174 of this file. For example, you can make the following modifications:

```text
python3 ./convert_image.py path/to/picture
```

Model description
-----------------
The example is built on [PP-OCRv3](https://github.com/PaddlePaddle/PaddleOCR/blob/dygraph/doc/doc_ch/PP-OCRv3_introduction.md) English recognition model released by [PaddleOCR](https://github.com/PaddlePaddle/PaddleOCR). 

PP-OCRv3 is the third version of the PP-OCR series model. This series of models has the following features:
  - PP-OCRv3: ultra-lightweight OCR system: detection (3.6M) + direction classifier (1.4M) + recognition (12M) = 17.0M
  - Support more than 80 kinds of multi-language recognition models, including English, Chinese, French, German, Arabic, Korean, Japanese and so on. For details
  - Support vertical text recognition, and long text recognition