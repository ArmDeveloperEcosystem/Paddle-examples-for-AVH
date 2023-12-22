/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <stdint.h>
#include <stdio.h>
#include <crt_config.h>
#include <tvm_runtime.h>
#include <tvmgen_object_segmentation.h>
#include "inputs.h"
#include "outputs.h"
#include "stdout_USART.h"


int main(int argc, char** argv) {
  stdout_init();
  struct tvmgen_object_segmentation_outputs seg_outputs = {
      .output = output,
  };
  struct tvmgen_object_segmentation_inputs seg_inputs = {
      .x = input,
  };

  tvmgen_object_segmentation_run(&seg_inputs, &seg_outputs);

  // print output
  int width = 128, height = 128;
  for (int i = 0; i < width * height; i++) {
    printf("%d ", output[i]);
  }
  printf("\n");

  // The FVP will shut down when it receives "EXITTHESIM" on the UART
  printf("EXITTHESIM\n");
  while (1 == 1);
  return 0;
}