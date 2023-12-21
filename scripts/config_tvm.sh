#!/bin/bash

echo 'export PATH=/home/ubuntu/.local/bin:$PATH' >>~/.bashrc

pip install --upgrade pip
pip install opencv-python
pip install apache-tvm
pip install paddle2onnx