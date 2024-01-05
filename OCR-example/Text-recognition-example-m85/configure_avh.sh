#!/bin/bash
# Copyright (c) 2022 Arm Limited and Contributors. All rights reserved.
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.

set -e
set -u
set -o pipefail

# Show usage
function show_usage() {
    cat <<EOF
Usage: Set up running environment by installing the required prerequisites.
-h, --help
    Display this help message.
EOF
}

if [ "$#" -eq 1 ] && [ "$1" == "--help" -o "$1" == "-h" ]; then
    show_usage
    exit 0
elif [ "$#" -ge 1 ]; then
        show_usage
        exit 1
fi

echo -e "\e[36mStart setting up running environment\e[0m"

# Remove ethosu
rm -rf /opt/arm/ethosu/

# Install CMSIS
echo -e "\e[36mStart installing CMSIS\e[0m"
CMSIS_PATH="/opt/arm/ethosu/cmsis"
mkdir -p "${CMSIS_PATH}"

CMSIS_SHA="51263182d16c92649a48144ba56c0945f9fce60e"
CMSIS_SHASUM="d02573e5a8908c741d8558f01be2939aae6e940933ccb58123fa972864947759eefe5d554688db3910c8ed665a248b477b5e4458e12773385c67f8a2136b3b34"
CMSIS_URL="http://github.com/ARM-software/CMSIS_5/archive/${CMSIS_SHA}.tar.gz"
DOWNLOAD_PATH="/tmp/${CMSIS_SHA}.tar.gz"

wget ${CMSIS_URL} -O "${DOWNLOAD_PATH}"
echo "$CMSIS_SHASUM" ${DOWNLOAD_PATH} | sha512sum -c
tar -xf "${DOWNLOAD_PATH}" -C "${CMSIS_PATH}" --strip-components=1
touch "${CMSIS_PATH}"/"${CMSIS_SHA}".sha
echo -e "\e[36mCMSIS Installation SUCCESS\e[0m"

# Install Arm(R) Ethos(TM)-U NPU driver stack
echo -e "\e[36mStart installing Arm(R) Ethos(TM)-U NPU driver stack\e[0m"
git clone "https://review.mlplatform.org/ml/ethos-u/ethos-u-core-platform" /opt/arm/ethosu/core_platform
echo -e "\e[36mArm(R) Ethos(TM)-U Core Platform Installation SUCCESS\e[0m"

# Install Arm(R) GNU Toolchain
echo -e "\e[36mStart installing Arm(R) GNU Toolchain\e[0m"
sudo rm -rf /opt/arm/gcc-arm-none-eabi
sudo mkdir -p /opt/arm/gcc-arm-none-eabi
cd /opt/arm/gcc-arm-none-eabi
export gcc_arm_url='https://armkeil.blob.core.windows.net/developer/Files/downloads/gnu/12.2.mpacbti-rel1/binrel/arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi.tar.xz'
wget ${gcc_arm_url}
sudo xz -d arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi.tar.xz
sudo tar -xvf arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi.tar -C /opt/arm/gcc-arm-none-eabi
sudo rm -rf arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi.tar
export PATH=/opt/arm/gcc-arm-none-eabi/arm-gnu-toolchain-12.2.mpacbti-rel1-x86_64-arm-none-eabi/bin:$PATH
arm-none-eabi-gcc --version
arm-none-eabi-g++ --version
echo -e "\e[36mArm(R) Arm(R) GNU Toolchain Installation SUCCESS\e[0m"

# Install TVM from TLCPack
echo -e "\e[36mStart installing TVM\e[0m"
pip install tlcpack-nightly -f https://tlcpack.ai/wheels
echo -e "\e[36mTVM Installation SUCCESS\e[0m"