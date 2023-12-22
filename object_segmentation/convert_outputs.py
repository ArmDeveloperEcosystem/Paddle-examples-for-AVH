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
import sys
import cv2
import numpy as np

def create_mask_jpg(output_file):
    """
    This function generates a jpg format image of the inference result.
    """
    label_colors = np.array([[0,0,0],[255,255,255]])

    # read outputs file
    with open(output_file) as f:
        content = f.read()
    
    # process outputs
    height, width = (224, 398)
    
    mask = []
    for line in content.splitlines():
        for word in line.split():
            if word.isdigit():
                mask.append(int(word))

    mask_img_rgb = np.zeros((height, width, 3), dtype=np.uint8)
    for i in range(height):
        for j in range(width):
            mask_img_rgb[i][j] = label_colors[mask[i * width + j]]

    mask_gray = cv2.cvtColor(mask_img_rgb, cv2.COLOR_RGB2GRAY)

    # save result image
    if cv2.imwrite("result.jpg", mask_gray):
        print("Save result.jpg successfully!\n")
    else:
        print("Failed to save result.jpg!\n")

if __name__ == "__main__":
    create_mask_jpg(sys.argv[1])
