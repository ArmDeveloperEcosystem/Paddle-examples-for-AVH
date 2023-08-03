#!/bin/bash

gcc_directory="$HOME/opt/arm/gcc-arm-none-eabi"
if [ -d "$gcc_directory" ]; then
    echo "The directory $gcc_directory exists. If you don't install arm-gnu-toolchain, please remove this folder."
    exit 0
fi

echo "-> Start downloading gcc-arm-none-eabi."
wget https://armkeil.blob.core.windows.net/developer/Files/downloads/gnu/12.2.mpacbti-rel1/binrel/arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi.tar.xz
echo "-> Downloading gcc-arm-none-eabi success."

echo "-> Start extracting arm-gnu-toolchain."
tar -xvf arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi.tar.xz
echo "-> Extracting arm-gnu-toolchain success."

echo "-> Start moving arm-gnu-toolchain to ~/opt."
mv arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi $gcc_directory
echo "-> Moving arm-gnu-toolchain to ~/opt success."

echo "-> Start writing arm-gnu-toolchain to environment path."
echo "export PATH=\$PATH:\$HOME/opt/arm/gcc-arm-none-eabi/bin" >> ~/.bashrc
export PATH=$PATH:$HOME/opt/arm/gcc-arm-none-eabi/bin
echo "-> Writing arm-gnu-toolchain to environment path."

echo "-> Start showing the version of arm-none-eabi-gcc."
arm-none-eabi-gcc -v
echo "-> Showing the version of arm-none-eabi-gcc success."

echo "-> Start deleting unnecessary files."
rm -rf arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi.tar.xz
echo "-> Deleting unnecessary files success."
