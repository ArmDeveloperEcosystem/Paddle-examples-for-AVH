#!/bin/bash

echo -e "-> Start updating pip."
sudo pip uninstall pip -y
sudo apt install python3-pip -y
python3 -m pip install --user --upgrade pip -y
echo -e "-> updating pip SUCCESS."

echo -e "-> Start installing TVM."
pip install tlcpack-nightly -f https://tlcpack.ai/wheels
script_path=$(realpath "$0")
script_dir=$(dirname "$script_path")
pip install -r $script_dir/requirements.txt
echo -e "-> TVM Installation SUCCESS."