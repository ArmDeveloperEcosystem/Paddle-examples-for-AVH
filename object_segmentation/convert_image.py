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

import os
import pathlib
import re
import sys
import cv2
import math
from PIL import Image
import numpy as np


def resize_norm_img(img, image_shape, padding=True):
    imgC, imgH, imgW = image_shape
    resized_image = cv2.resize(img, (imgW, imgH))
    cv2.imwrite("./temp.png", resized_image)
    resized_image = resized_image.astype('float32')
    if image_shape[0] == 1:
        resized_image = resized_image / 255
        resized_image = resized_image[np.newaxis, :]
    else:
        resized_image = resized_image.transpose((2, 0, 1)) / 255
    resized_image -= 0.5
    resized_image /= 0.5
    return resized_image


def create_header_file(name, dtype, tensor_name, tensor_data, output_path):
    """
    This function generates a header file containing the data from the numpy array provided.
    """
    file_path = pathlib.Path(f"{output_path}/" + name).resolve()
    # Create header file with npy_data as a C array
    raw_path = file_path.with_suffix(".h").resolve()
    with open(raw_path, "w") as header_file:
        header_file.write(
            "\n" + f"const size_t {tensor_name}_len = {tensor_data.size};\n" +
            f'__attribute__((section(".data.tvm"), aligned(16))) {dtype} {tensor_name}[] = '
        )

        header_file.write("{")
        for i in np.ndindex(tensor_data.shape):
            header_file.write(f"{tensor_data[i]}, ")
        header_file.write("};\n\n")


def create_headers(image_name):
    """
    This function generates C header files for the input and output arrays required to run inferences
    """
    img_path = os.path.join("./", f"{image_name}")

    # Resize image to 224x224
    img = cv2.imread(img_path)
    img = resize_norm_img(img, [3,114,256])
    img_data = img.astype("float32")

    # # Add the batch dimension, as we are expecting 4-dimensional input: NCHW.
    img_data = np.expand_dims(img_data, axis=0)

    # Create input header file
    create_header_file("inputs", "float", "input", img_data, "./include")
    # Create output header file
    output_data = np.zeros([114*256], np.int32)
    create_header_file("outputs", "int", "output", output_data, "./include")


if __name__ == "__main__":
    create_headers(sys.argv[1])
