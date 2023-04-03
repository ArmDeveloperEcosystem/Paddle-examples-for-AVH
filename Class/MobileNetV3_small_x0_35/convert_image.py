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

import pathlib
import sys
import cv2
import numpy as np


def decode_image(img_bgr):
    img_rgb = cv2.cvtColor(img_bgr, cv2.COLOR_BGR2RGB)
    return img_rgb


def resize_image(im_rgb, resize_short=256):
    img_h = im_rgb.shape[0]
    img_w = im_rgb.shape[1]
    percent = float(resize_short) / min(img_w, img_h)
    w = int(round(img_w * percent))
    h = int(round(img_h * percent))
    resize_img = cv2.resize(im_rgb, (w, h), cv2.INTER_LINEAR)
    return resize_img


def crop_image(im_rgb, size=224):
    if type(size) is int:
        size = (size, size)
    else:
        size = size  # (h, w)
    w, h = size
    img_h, img_w = im_rgb.shape[:2]
    w_start = (img_w - w) // 2
    h_start = (img_h - h) // 2

    w_end = w_start + w
    h_end = h_start + h
    return im_rgb[h_start:h_end, w_start:w_end, :]


def normalize_image(im_rgb, mean, std):
    im_rgb = im_rgb.astype('float32')
    im_rgb = im_rgb * 0.00392157
    shape = (1, 1, 3)
    mean = np.array(mean).reshape(shape).astype('float32')
    std = np.array(std).reshape(shape).astype('float32')
    im_rgb = (im_rgb.astype('float32') - mean) / std
    return im_rgb.astype('float32')


def resize_norm_img(img):
    image = np.array(img)
    image = decode_image(image)
    image = resize_image(image)
    image = crop_image(image)
    image = normalize_image(image, [0.485, 0.456, 0.406], [0.229, 0.224, 0.225])
    image = np.transpose(image, [2, 0, 1])
    return image


def create_header_file(name, tensor_name, tensor_data, output_path):
    """
    This function generates a header file containing the data from the numpy array provided.
    """
    file_path = pathlib.Path(f"{output_path}/" + name).resolve()
    # Create header file with npy_data as a C array
    raw_path = file_path.with_suffix(".h").resolve()
    with open(raw_path, "w") as header_file:
        header_file.write(
            "\n"
            + f"const size_t {tensor_name}_len = {tensor_data.size};\n"
            + f'__attribute__((section(".data.tvm"), aligned(16))) float {tensor_name}[] = '
        )

        header_file.write("{")
        for i in np.ndindex(tensor_data.shape):
            header_file.write(f"{tensor_data[i]}, ")
        header_file.write("};\n\n")


def create_headers(img_path):
    """
    This function generates C header files for the input and output arrays required to run inferences
    """

    # Resize image to 32x320
    img = cv2.imread(img_path)
    img = resize_norm_img(img)
    img_data = img.astype("float32")

    # Add the batch dimension, as we are expecting 4-dimensional input: NCHW.
    img_data = np.expand_dims(img_data, axis=0)

    # Create input header file
    create_header_file("inputs", "input", img_data, "include")
    # Create output header file
    output_data = np.zeros([1000], np.float32)
    create_header_file(
        "outputs",
        "output",
        output_data,
        "include",
    )


if __name__ == "__main__":
    create_headers(sys.argv[1])