#!/bin/bash

echo -e "-> Start installing TVM."
pip install paddlepaddle
pip install apache-tvm
pip install opencv-python
pip3 install --user numpy decorator attrs scipy psutil typing_extensions
echo -e "-> TVM Installation SUCCESS."