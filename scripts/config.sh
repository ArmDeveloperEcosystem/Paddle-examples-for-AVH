#!/bin/bash



script_path=$(realpath "$0")
script_dir=$(dirname "$script_path")
bash $script_dir/config_python.sh
bash $script_dir/config_gcc-arm-none-eabi.sh
bash $script_dir/config_cmsis.sh
bash $script_dir/config_ethos-u-core-platform.sh