#!/bin/bash

current_dir=$(pwd)

cmsis_directory="$HOME/opt/arm/ethosu/cmsis"
if [ -d "$cmsis_directory" ]; then
    echo "The directory $cmsis_directory exists. If you don't install CMSIS_5, please remove this folder."
    exit 0
fi

echo -e "-> Start installing CMSIS_5."
git clone https://github.com/ARM-software/CMSIS_5.git $cmsis_directory
echo -e "-> Installing CMSIS_5 success."

echo -e "-> Start checkouting tags."
cd $cmsis_directory
git checkout tags/"5.9.1-dev"
echo -e "-> Checkouting tags success."

echo -e "-> Return to the directory where the script is executed."
cd "$current_dir"