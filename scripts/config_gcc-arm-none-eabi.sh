#!/bin/bash

arm_opt_folder="${HOME}/opt/arm"
mkdir -p "${arm_opt_folder}"

gcc_directory="${arm_opt_folder}/arm-gnu-toolchain"
if [ -d "$gcc_directory" ]; then
    echo "The directory $gcc_directory exists. If you don't install arm-gnu-toolchain, please remove this folder."
    exit 0
fi

architecture=$(uname -m)

echo "-> Start downloading arm-gnu-toolchain."
download_url="https://armkeil.blob.core.windows.net/developer/Files/downloads/gnu/12.3.rel1/binrel/"
arm_gnu_toolchain_file_name="arm-gnu-toolchain-12.3.rel1-${architecture}-arm-none-eabi.tar.xz"
echo "${download_url}${arm_gnu_toolchain_file_name}"
wget "${download_url}${arm_gnu_toolchain_file_name}"
echo "-> Downloading arm-gnu-toolchain success."

echo "-> Start extracting arm-gnu-toolchain."
tar -xvf ${arm_gnu_toolchain_file_name}
echo "-> Extracting arm-gnu-toolchain success."

echo "-> Start moving arm-gnu-toolchain to ~/opt."
arm_gnu_toolchain_folder_name="arm-gnu-toolchain-12.3.rel1-${architecture}-arm-none-eabi"
mv ${arm_gnu_toolchain_folder_name} ${gcc_directory}
echo "-> Moving arm-gnu-toolchain to ~/opt success."

echo "-> Start writing arm-gnu-toolchain to environment path."
echo "export PATH=\$PATH:\$HOME/opt/arm/arm-gnu-toolchain/bin" >> ~/.bashrc
export PATH=$PATH:$HOME/opt/arm/arm-gnu-toolchain/bin
echo "-> Writing arm-gnu-toolchain to environment path."

echo "-> Start showing the version of arm-none-eabi-gcc."
arm-none-eabi-gcc -v
echo "-> Showing the version of arm-none-eabi-gcc success."

echo "-> Start deleting unnecessary files."
rm -rf ${arm_gnu_toolchain_file_name}
echo "-> Deleting unnecessary files success."
