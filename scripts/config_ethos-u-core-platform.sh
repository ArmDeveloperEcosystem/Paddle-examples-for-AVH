#!/bin/bash

current_dir=$(pwd)
ethos_directory="$HOME/opt/arm/ethosu/core_platform"
if [ -d "$ethos_directory" ]; then
    echo "The directory $ethos_directory exists. If you don't install ethos-u-core-platform, please remove this folder."
    exit 0
fi

echo -e "-> Start installing Arm(R) Ethos(TM)-U NPU driver stack."
git clone "https://review.mlplatform.org/ml/ethos-u/ethos-u-core-platform" $ethos_directory
if [ ! -d "$ethos_directory" ]; then
    echo "The directory $ethos_directory don't exists."
    exit 0
fi
echo -e "-> Installing Arm(R) Ethos(TM)-U NPU driver stack success."

echo -e "-> Start checkouting tags."
cd $ethos_directory
git checkout tags/"23.05"
echo -e "-> Checkouting tags success."

echo -e "-> Return to the directory where the script is executed."
cd "$current_dir"