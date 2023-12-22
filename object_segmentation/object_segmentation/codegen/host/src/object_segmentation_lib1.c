// tvm target: c -keys=arm_cpu,cpu -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_argmax(float* p0, int32_t* p0_red, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* p0_red_temp_v0_let = (&(global_workspace_117_var[233472]));
  void* p0_red_temp_v1_let = (&(global_workspace_117_var[350208]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 29184; ++ax0_ax1_fused_ax2_fused) {
    ((int32_t*)p0_red_temp_v0_let)[ax0_ax1_fused_ax2_fused] = -1;
    ((float*)p0_red_temp_v1_let)[ax0_ax1_fused_ax2_fused] = -3.402823e+38f;
    for (int32_t k1 = 0; k1 < 2; ++k1) {
      int32_t cse_var_1 = ((k1 * 29184) + ax0_ax1_fused_ax2_fused);
      ((int32_t*)p0_red_temp_v0_let)[ax0_ax1_fused_ax2_fused] = (((p0[cse_var_1] < ((float*)p0_red_temp_v1_let)[ax0_ax1_fused_ax2_fused]) || ((((float*)p0_red_temp_v1_let)[ax0_ax1_fused_ax2_fused] == p0[cse_var_1]) && (((int32_t*)p0_red_temp_v0_let)[ax0_ax1_fused_ax2_fused] < k1))) ? ((int32_t*)p0_red_temp_v0_let)[ax0_ax1_fused_ax2_fused] : k1);
      ((float*)p0_red_temp_v1_let)[ax0_ax1_fused_ax2_fused] = ((p0[cse_var_1] < ((float*)p0_red_temp_v1_let)[ax0_ax1_fused_ax2_fused]) ? ((float*)p0_red_temp_v1_let)[ax0_ax1_fused_ax2_fused] : p0[cse_var_1]);
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 29184; ++ax0_ax1_fused_ax2_fused_1) {
    p0_red[ax0_ax1_fused_ax2_fused_1] = ((int32_t*)p0_red_temp_v0_let)[ax0_ax1_fused_ax2_fused_1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_cast(int32_t* p0, int64_t* T_cast, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 114; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 128; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 2; ++ax2_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 256) + (ax2_outer * 2)) + ax2_inner);
        T_cast[cse_var_1] = ((int64_t)p0[cse_var_1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape(float* p0, float* p0_1, float* p1, float* T_reshape, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* concatenate_ext_let = (&(global_workspace_39_var[138240]));
  for (int32_t j = 0; j < 17280; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 17280; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 17280)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1080; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (ax3_outer * 4);
        T_reshape[(((ax0_ax1_fused_ax2_fused * 32) + cse_var_1) + ax3_inner)] = ((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_ax2_fused % 30) / 15) * 17280) + ((ax0_ax1_fused_ax2_fused / 30) * 480)) + ((ax0_ax1_fused_ax2_fused % 15) * 32)) + cse_var_1) + ax3_inner)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_1(float* p0, float* p0_1, float* p1, float* T_reshape, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* concatenate_ext_let = (&(global_workspace_97_var[73728]));
  for (int32_t j = 0; j < 9216; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 9216; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 9216)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1152; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (ax3_outer * 4);
        T_reshape[(((ax0_ax1_fused_ax2_fused * 16) + cse_var_1) + ax3_inner)] = ((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_ax2_fused & 15) >> 3) * 9216) + ((ax0_ax1_fused_ax2_fused >> 4) * 128)) + ((ax0_ax1_fused_ax2_fused & 7) * 16)) + cse_var_1) + ax3_inner)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split(float* p0, float* p1, float* T_split_sections, float* T_split_sections_1, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* concatenate_ext_let = (&(global_workspace_17_var[0]));
  for (int32_t j = 0; j < 17280; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 17280; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 17280)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 540; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (ax3_outer * 4);
        T_split_sections[(((ax0_ax1_fused_ax2_fused * 32) + cse_var_1) + ax3_inner)] = ((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_ax2_fused % 30) / 15) * 17280) + ((ax0_ax1_fused_ax2_fused / 30) * 480)) + ((ax0_ax1_fused_ax2_fused % 15) * 32)) + cse_var_1) + ax3_inner)];
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        int32_t cse_var_2 = (ax2 * 32);
        T_split_sections_1[(((ax1 * 480) + cse_var_2) + ax3)] = ((float*)concatenate_ext_let)[((((((ax1 & 1) * 17280) + ((ax1 >> 1) * 480)) + cse_var_2) + ax3) + 8640)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_1(float* p0, float* p0_1, float* p1, float* T_split_sections, float* T_split_sections_1, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* concatenate_ext_let = (&(global_workspace_25_var[0]));
  for (int32_t j = 0; j < 17280; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 17280; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 17280)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 540; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (ax3_outer * 4);
        T_split_sections[(((ax0_ax1_fused_ax2_fused * 32) + cse_var_1) + ax3_inner)] = ((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_ax2_fused % 30) / 15) * 17280) + ((ax0_ax1_fused_ax2_fused / 30) * 480)) + ((ax0_ax1_fused_ax2_fused % 15) * 32)) + cse_var_1) + ax3_inner)];
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        int32_t cse_var_2 = (ax2 * 32);
        T_split_sections_1[(((ax1 * 480) + cse_var_2) + ax3)] = ((float*)concatenate_ext_let)[((((((ax1 & 1) * 17280) + ((ax1 >> 1) * 480)) + cse_var_2) + ax3) + 8640)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_2(float* p0, float* p1, float* T_split_sections, float* T_split_sections_1, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* concatenate_ext_let = (&(global_workspace_51_var[0]));
  for (int32_t j = 0; j < 9216; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 9216; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 9216)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 576; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (ax3_outer * 4);
        T_split_sections[(((ax0_ax1_fused_ax2_fused * 16) + cse_var_1) + ax3_inner)] = ((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_ax2_fused & 15) >> 3) * 9216) + ((ax0_ax1_fused_ax2_fused >> 4) * 128)) + ((ax0_ax1_fused_ax2_fused & 7) * 16)) + cse_var_1) + ax3_inner)];
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        int32_t cse_var_2 = (ax2 * 16);
        T_split_sections_1[(((ax1 * 128) + cse_var_2) + ax3)] = ((float*)concatenate_ext_let)[((((((ax1 & 1) * 9216) + ((ax1 >> 1) * 128)) + cse_var_2) + ax3) + 4608)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_3(float* p0, float* p0_1, float* p1, float* T_split_sections, float* T_split_sections_1, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* concatenate_ext_let = (&(global_workspace_59_var[0]));
  for (int32_t j = 0; j < 9216; ++j) {
    ((float*)concatenate_ext_let)[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 9216; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 9216)] = p1[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 576; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        int32_t cse_var_1 = (ax3_outer * 4);
        T_split_sections[(((ax0_ax1_fused_ax2_fused * 16) + cse_var_1) + ax3_inner)] = ((float*)concatenate_ext_let)[(((((((ax0_ax1_fused_ax2_fused & 15) >> 3) * 9216) + ((ax0_ax1_fused_ax2_fused >> 4) * 128)) + ((ax0_ax1_fused_ax2_fused & 7) * 16)) + cse_var_1) + ax3_inner)];
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        int32_t cse_var_2 = (ax2 * 16);
        T_split_sections_1[(((ax1 * 128) + cse_var_2) + ax3)] = ((float*)concatenate_ext_let)[((((((ax1 & 1) * 9216) + ((ax1 >> 1) * 128)) + cse_var_2) + ax3) + 4608)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_image_resize2d(float* p0, float* resize, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 228; ++i0_i1_fused_i2_fused) {
    for (int32_t i3_outer = 0; i3_outer < 64; ++i3_outer) {
      for (int32_t i3_inner = 0; i3_inner < 4; ++i3_inner) {
        int32_t cse_var_4 = (i3_outer * 4);
        int32_t cse_var_3 = ((i0_i1_fused_i2_fused / 114) * 7296);
        float cse_var_2 = (((((float)(i0_i1_fused_i2_fused % 114)) + 5.000000e-01f) * 5.000000e-01f) - 5.000000e-01f);
        float cse_var_1 = (((((float)(cse_var_4 + i3_inner)) + 5.000000e-01f) * 5.000000e-01f) - 5.000000e-01f);
        int32_t __1 = (int32_t)floorf(cse_var_2);
        int32_t __2 = (__1) < (56) ? (__1) : (56);
        int32_t __3 = (int32_t)floorf(cse_var_1);
        int32_t __4 = (__3) < (127) ? (__3) : (127);
        int32_t __5 = ((int32_t)floorf(cse_var_1)) + 1;
        int32_t __6 = (__5) < (127) ? (__5) : (127);
        int32_t __7 = ((int32_t)floorf(cse_var_2)) + 1;
        int32_t __8 = (__7) < (56) ? (__7) : (56);
        resize[(((i0_i1_fused_i2_fused * 256) + cse_var_4) + i3_inner)] = ((((p0[((cse_var_3 + (((__2) > (0) ? (__2) : (0)) * 128)) + ((__4) > (0) ? (__4) : (0)))] * (1.000000e+00f - (cse_var_1 - ((float)((int32_t)floorf(cse_var_1)))))) + (p0[((cse_var_3 + (((__2) > (0) ? (__2) : (0)) * 128)) + ((__6) > (0) ? (__6) : (0)))] * (cse_var_1 - ((float)((int32_t)floorf(cse_var_1)))))) * (1.000000e+00f - (cse_var_2 - ((float)((int32_t)floorf(cse_var_2)))))) + (((p0[((cse_var_3 + (((__8) > (0) ? (__8) : (0)) * 128)) + ((__4) > (0) ? (__4) : (0)))] * (1.000000e+00f - (cse_var_1 - ((float)((int32_t)floorf(cse_var_1)))))) + (p0[((cse_var_3 + (((__8) > (0) ? (__8) : (0)) * 128)) + ((__6) > (0) ? (__6) : (0)))] * (cse_var_1 - ((float)((int32_t)floorf(cse_var_1)))))) * (cse_var_2 - ((float)((int32_t)floorf(cse_var_2))))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_image_resize2d_concatenate(float* p0, float* p1, float* concatenate_ext, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* resize_let = (&(global_workspace_105_var[0]));
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 466944; ++i0_i1_fused_i2_fused_i3_fused) {
    int32_t cse_var_3 = ((i0_i1_fused_i2_fused_i3_fused / 7296) * 128);
    float cse_var_2 = (((((float)(i0_i1_fused_i2_fused_i3_fused & 127)) + 5.000000e-01f) * 1.250000e-01f) - 5.000000e-01f);
    float cse_var_1 = (((((float)((i0_i1_fused_i2_fused_i3_fused % 7296) >> 7)) + 5.000000e-01f) * 1.403509e-01f) - 5.000000e-01f);
    int32_t __1 = (int32_t)floorf(cse_var_1);
    int32_t __2 = (__1) < (7) ? (__1) : (7);
    int32_t __3 = (int32_t)floorf(cse_var_2);
    int32_t __4 = (__3) < (15) ? (__3) : (15);
    int32_t __5 = ((int32_t)floorf(cse_var_2)) + 1;
    int32_t __6 = (__5) < (15) ? (__5) : (15);
    int32_t __7 = ((int32_t)floorf(cse_var_1)) + 1;
    int32_t __8 = (__7) < (7) ? (__7) : (7);
    ((float*)resize_let)[i0_i1_fused_i2_fused_i3_fused] = ((((p0[((cse_var_3 + (((__2) > (0) ? (__2) : (0)) * 16)) + ((__4) > (0) ? (__4) : (0)))] * (1.000000e+00f - (cse_var_2 - ((float)((int32_t)floorf(cse_var_2)))))) + (p0[((cse_var_3 + (((__2) > (0) ? (__2) : (0)) * 16)) + ((__6) > (0) ? (__6) : (0)))] * (cse_var_2 - ((float)((int32_t)floorf(cse_var_2)))))) * (1.000000e+00f - (cse_var_1 - ((float)((int32_t)floorf(cse_var_1)))))) + (((p0[((cse_var_3 + (((__8) > (0) ? (__8) : (0)) * 16)) + ((__4) > (0) ? (__4) : (0)))] * (1.000000e+00f - (cse_var_2 - ((float)((int32_t)floorf(cse_var_2)))))) + (p0[((cse_var_3 + (((__8) > (0) ? (__8) : (0)) * 16)) + ((__6) > (0) ? (__6) : (0)))] * (cse_var_2 - ((float)((int32_t)floorf(cse_var_2)))))) * (cse_var_1 - ((float)((int32_t)floorf(cse_var_1))))));
  }
  for (int32_t j = 0; j < 131328; ++j) {
    concatenate_ext[j] = p1[j];
  }
  for (int32_t j_1 = 0; j_1 < 466944; ++j_1) {
    concatenate_ext[(j_1 + 131328)] = ((float*)resize_let)[j_1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add(float* p0, float* T_add, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_6_var[515312]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[502464]));
  void* fused_constant_1_global_global_let = (&(global_workspace_7_var[76400]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 9; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_1_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_1_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 9; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_7_var[69120]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 65; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 260) + (ax3_c_1 * 4)) + ax1_inner_c)] = ((((1 <= ((i_c_outer * 6) + ax2_c_1)) && (((ax2_c_1 / 6) + i_c_outer) < 5)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 7424) + (ax1_inner_c * 1856)) + (i_c_outer * 384)) + (ax2_c_1 * 64)) + ax3_c_1) - 65)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 16; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 256)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 260) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 260) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 520)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 256);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 260) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 1040)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        T_add[(((ax1 * 480) + (ax2 * 32)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 1920) + (ax2 * 128)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_1_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_1(float* p0, float* T_add, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_12_var[514160]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[498576]));
  void* fused_constant_4_global_global_let = (&(global_workspace_13_var[343664]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 9; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_4_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_4_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_13_var[267264]));
  for (int32_t c_outer_c = 0; c_outer_c < 9; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_13_var[336384]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 65; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 260) + (ax3_c_1 * 4)) + ax1_inner_c)] = ((((1 <= ((i_c_outer * 6) + ax2_c_1)) && (((ax2_c_1 / 6) + i_c_outer) < 5)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 7424) + (ax1_inner_c * 1856)) + (i_c_outer * 384)) + (ax2_c_1 * 64)) + ax3_c_1) - 65)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 16; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 256)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 260) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_4_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 260) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 520)] * ((float*)fused_constant_4_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 256);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 260) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 1040)] * ((float*)fused_constant_4_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        T_add[(((ax1 * 480) + (ax2 * 32)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 1920) + (ax2 * 128)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_4_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_10(float* p0, float* T_add, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_74_var[508064]));
  void* fused_constant_30_let = (&(global_const_workspace_74_var[479424]));
  void* fused_constant_30_global_global_let = (&(global_workspace_75_var[110592]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_30_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_30_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_75_var[36864]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_75_var[113184]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_30_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_30_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_11(float* p0, float* T_add, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_80_var[507200]));
  void* fused_constant_33_let = (&(global_const_workspace_80_var[476832]));
  void* fused_constant_33_global_global_let = (&(global_workspace_81_var[110592]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_33_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_33_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_81_var[36864]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_81_var[113184]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_12(float* p0, float* T_add, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_86_var[506336]));
  void* fused_constant_36_let = (&(global_const_workspace_86_var[474240]));
  void* fused_constant_36_global_global_let = (&(global_workspace_87_var[110592]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_36_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_36_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_87_var[36864]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_87_var[113184]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_36_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_36_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_13(float* p0, float* T_add, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_92_var[505472]));
  void* fused_constant_39_let = (&(global_const_workspace_92_var[471648]));
  void* fused_constant_39_global_global_let = (&(global_workspace_93_var[73728]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_39_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_39_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_93_var[36864]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_93_var[76320]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_39_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_39_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_14(float* p0, float* T_add, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_98_var[503760]));
  void* fused_constant_41_let = (&(global_const_workspace_98_var[431104]));
  void* fused_constant_41_global_global_let = (&(global_workspace_99_var[147456]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 36; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_41_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_41_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_99_var[73728]));
  for (int32_t c_outer_c = 0; c_outer_c < 36; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_99_var[152640]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_41_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_41_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_41_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_41_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 144; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_41_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_15(float* p0, float* T_add, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_106_var[504848]));
  void* fused_constant_44_let = (&(global_const_workspace_106_var[466096]));
  void* fused_constant_44_global_global_let = (&(global_workspace_107_var[4791376]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 41; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 18);
          ((float*)fused_constant_44_global_global_let)[(((cse_var_1 + (ax2_c * 6)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_44_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_107_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 41; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 19; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_107_var[4786176]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 5; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 130; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 260) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 58)) && (1 <= ax3_c_1)) && (ax3_c_1 < 129)) ? p0[((((((c_outer_c * 14592) + (ax1_inner_c * 7296)) + (i_c_outer * 384)) + (ax2_c_1 * 128)) + ax3_c_1) - 129)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 64; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 14592) + (i_c_outer * 768)) + (j_c_outer * 4)) + (j_c_inner_init * 2)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 14592) + (i_c_outer * 768)) + (j_c_outer * 4)) + (j_c_inner_init_1 * 2)) + c_inner_c_init_1) + 256)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 14592) + (i_c_outer * 768)) + (j_c_outer * 4)) + (j_c_inner_init_2 * 2)) + c_inner_c_init_2) + 512)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 4);
                int32_t cse_var_5 = (j_c_inner * 2);
                int32_t cse_var_4 = (dj * 2);
                int32_t cse_var_3 = (((((c_outer_c * 14592) + (i_c_outer * 768)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 260) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 4);
                int32_t cse_var_9 = (j_c_inner_1 * 2);
                int32_t cse_var_8 = (dj * 2);
                int32_t cse_var_7 = ((((((c_outer_c * 14592) + (i_c_outer * 768)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 256);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 260) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 260)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 4);
                int32_t cse_var_13 = (j_c_inner_2 * 2);
                int32_t cse_var_12 = (dj * 2);
                int32_t cse_var_11 = ((((((c_outer_c * 14592) + (i_c_outer * 768)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 512);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 260) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 520)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_12) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 82; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 57; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        T_add[(((ax1 * 7296) + (ax2 * 128)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 1) * 14592) + (ax2 * 256)) + (ax3 * 2)) + (ax1 & 1))] + ((float*)fused_nn_conv2d_constant_44_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_16(float* p0, float* T_add, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_110_var[512672]));
  void* fused_constant_46_let = (&(global_const_workspace_110_var[494976]));
  void* fused_constant_46_global_global_let = (&(global_workspace_111_var[1878176]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 16; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_46_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_46_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_111_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 16; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 19; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_111_var[1867776]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 5; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 130; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 520) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 58)) && (1 <= ax3_c_1)) && (ax3_c_1 < 129)) ? p0[((((((c_outer_c * 29184) + (ax1_inner_c * 7296)) + (i_c_outer * 384)) + (ax2_c_1 * 128)) + ax3_c_1) - 129)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 64; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 29184) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 29184) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 512)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 29184) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 1024)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 29184) + (i_c_outer * 1536)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 520) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_46_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 29184) + (i_c_outer * 1536)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 512);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 520) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 520)] * ((float*)fused_constant_46_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 29184) + (i_c_outer * 1536)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 1024);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 520) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 1040)] * ((float*)fused_constant_46_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 57; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        T_add[(((ax1 * 7296) + (ax2 * 128)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 29184) + (ax2 * 512)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_46_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_2(float* p0, float* T_add, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_20_var[513728]));
  void* fused_constant_7_let = (&(global_const_workspace_20_var[497280]));
  void* fused_constant_7_global_global_let = (&(global_workspace_21_var[210080]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 9; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_7_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_7_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_21_var[69120]));
  for (int32_t c_outer_c = 0; c_outer_c < 9; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_21_var[207360]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 5; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 34; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 136) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 16)) && (1 <= ax3_c_1)) && (ax3_c_1 < 33)) ? p0[((((((c_outer_c * 1920) + (ax1_inner_c * 480)) + (i_c_outer * 96)) + (ax2_c_1 * 32)) + ax3_c_1) - 33)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 16; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 256)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 136) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 136) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 136)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 256);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 136) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 272)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        T_add[(((ax1 * 480) + (ax2 * 32)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 1920) + (ax2 * 128)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_7_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_3(float* p0, float* T_add, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_28_var[515168]));
  void* fused_constant_10_let = (&(global_const_workspace_28_var[501168]));
  void* fused_constant_10_global_global_let = (&(global_workspace_29_var[210080]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 9; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_10_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_10_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_29_var[69120]));
  for (int32_t c_outer_c = 0; c_outer_c < 9; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_29_var[207360]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 5; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 34; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 136) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 16)) && (1 <= ax3_c_1)) && (ax3_c_1 < 33)) ? p0[((((((c_outer_c * 1920) + (ax1_inner_c * 480)) + (i_c_outer * 96)) + (ax2_c_1 * 32)) + ax3_c_1) - 33)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 16; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 256)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 136) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 136) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 136)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 256);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 136) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 272)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        T_add[(((ax1 * 480) + (ax2 * 32)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 1920) + (ax2 * 128)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_10_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_4(float* p0, float* T_add, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_34_var[514736]));
  void* fused_constant_13_let = (&(global_const_workspace_34_var[499872]));
  void* fused_constant_13_global_global_let = (&(global_workspace_35_var[140960]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 9; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_13_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_13_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_35_var[69120]));
  for (int32_t c_outer_c = 0; c_outer_c < 9; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_35_var[138240]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 5; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 34; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 136) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 16)) && (1 <= ax3_c_1)) && (ax3_c_1 < 33)) ? p0[((((((c_outer_c * 1920) + (ax1_inner_c * 480)) + (i_c_outer * 96)) + (ax2_c_1 * 32)) + ax3_c_1) - 33)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 16; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1920) + (i_c_outer * 384)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 256)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 136) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 136) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 136)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1920) + (i_c_outer * 384)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 256);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 136) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 272)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 15; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        T_add[(((ax1 * 480) + (ax2 * 32)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 1920) + (ax2 * 128)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_5(float* p0, float* T_add, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_40_var[512384]));
  void* fused_constant_15_let = (&(global_const_workspace_40_var[492384]));
  void* fused_constant_15_global_global_let = (&(global_workspace_41_var[179856]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_15_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_15_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_41_var[138240]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_41_var[175104]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 33; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 132) + (ax3_c_1 * 4)) + ax1_inner_c)] = ((((1 <= ((i_c_outer * 8) + ax2_c_1)) && (((ax2_c_1 >> 3) + i_c_outer) < 2)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 1920) + (ax1_inner_c * 480)) + (i_c_outer * 256)) + (ax2_c_1 * 32)) + ax3_c_1) - 33)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 132) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 132) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 264)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 132) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 528)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 132) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 792)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_15_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_6(float* p0, float* T_add, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_46_var[511520]));
  void* fused_constant_18_let = (&(global_const_workspace_46_var[489792]));
  void* fused_constant_18_global_global_let = (&(global_workspace_47_var[179856]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_18_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_18_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_47_var[138240]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_47_var[175104]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 33; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 132) + (ax3_c_1 * 4)) + ax1_inner_c)] = ((((1 <= ((i_c_outer * 8) + ax2_c_1)) && (((ax2_c_1 >> 3) + i_c_outer) < 2)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 1920) + (ax1_inner_c * 480)) + (i_c_outer * 256)) + (ax2_c_1 * 32)) + ax3_c_1) - 33)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 132) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 132) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 264)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 132) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 528)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 132) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 792)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_18_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_7(float* p0, float* T_add, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_54_var[510656]));
  void* fused_constant_21_let = (&(global_const_workspace_54_var[487200]));
  void* fused_constant_21_global_global_let = (&(global_workspace_55_var[110592]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_21_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_21_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_55_var[36864]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_55_var[113184]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_21_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_8(float* p0, float* T_add, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_62_var[509792]));
  void* fused_constant_24_let = (&(global_const_workspace_62_var[484608]));
  void* fused_constant_24_global_global_let = (&(global_workspace_63_var[110592]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_24_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_24_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_63_var[36864]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_63_var[113184]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_24_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_24_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_9(float* p0, float* T_add, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_68_var[508928]));
  void* fused_constant_27_let = (&(global_const_workspace_68_var[482016]));
  void* fused_constant_27_global_global_let = (&(global_workspace_69_var[110592]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 18; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_27_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_27_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_69_var[36864]));
  for (int32_t c_outer_c = 0; c_outer_c < 18; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_69_var[113184]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 18; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 72) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 9)) && (1 <= ax3_c_1)) && (ax3_c_1 < 17)) ? p0[((((((c_outer_c * 512) + (ax1_inner_c * 128)) + (i_c_outer * 64)) + (ax2_c_1 * 16)) + ax3_c_1) - 17)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 8; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 64)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 128)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 512) + (i_c_outer * 256)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 72) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 64);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 72)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 128);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 144)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 512) + (i_c_outer * 256)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 72) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 216)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 72; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        T_add[(((ax1 * 128) + (ax2 * 16)) + ax3)] = (((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 512) + (ax2 * 64)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_27_let)[ax1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_2_var[515456]));
  void* fused_constant_let = (&(global_const_workspace_2_var[462208]));
  void* data_vec_let = (&(global_workspace_3_var[0]));
  for (int32_t h = 0; h < 57; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 3; ++ci) {
        for (int32_t vh = 0; vh < 3; ++vh) {
          for (int32_t vw = 0; vw < 17; ++vw) {
            int32_t cse_var_1 = (w * 16);
            ((float*)data_vec_let)[(((((h * 2448) + (w * 153)) + (ci * 51)) + (vh * 17)) + vw)] = (((1 <= ((h * 2) + vh)) && (1 <= (cse_var_1 + vw))) ? p0[((((((ci * 29184) + (h * 512)) + (vh * 256)) + cse_var_1) + vw) - 257)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 57; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_3_var[558144]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 3; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51))] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_2 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 2)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_3 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 4)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_4 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 6)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_5 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 8)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_6 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 10)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_7 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 12)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_8 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 14)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc_7)]));
          }
          for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
            ((float*)conv_let)[vc_8] = (((float*)conv_let)[vc_8] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 1)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 4)]));
          }
          for (int32_t vc_9 = 0; vc_9 < 4; ++vc_9) {
            int32_t cse_var_9 = (vc_9 + 4);
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 3)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_9) + 4)]));
          }
          for (int32_t vc_10 = 0; vc_10 < 4; ++vc_10) {
            int32_t cse_var_10 = (vc_10 + 8);
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 5)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_10) + 4)]));
          }
          for (int32_t vc_11 = 0; vc_11 < 4; ++vc_11) {
            int32_t cse_var_11 = (vc_11 + 12);
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 7)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_11) + 4)]));
          }
          for (int32_t vc_12 = 0; vc_12 < 4; ++vc_12) {
            int32_t cse_var_12 = (vc_12 + 16);
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 9)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_12) + 4)]));
          }
          for (int32_t vc_13 = 0; vc_13 < 4; ++vc_13) {
            int32_t cse_var_13 = (vc_13 + 20);
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_13) + 4)]));
          }
          for (int32_t vc_14 = 0; vc_14 < 4; ++vc_14) {
            int32_t cse_var_14 = (vc_14 + 24);
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 13)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_14) + 4)]));
          }
          for (int32_t vc_15 = 0; vc_15 < 4; ++vc_15) {
            int32_t cse_var_15 = (vc_15 + 28);
            ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 15)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_15) + 4)]));
          }
          for (int32_t vc_16 = 0; vc_16 < 4; ++vc_16) {
            ((float*)conv_let)[vc_16] = (((float*)conv_let)[vc_16] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 2)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_16) + 8)]));
          }
          for (int32_t vc_17 = 0; vc_17 < 4; ++vc_17) {
            int32_t cse_var_16 = (vc_17 + 4);
            ((float*)conv_let)[cse_var_16] = (((float*)conv_let)[cse_var_16] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 4)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_17) + 8)]));
          }
          for (int32_t vc_18 = 0; vc_18 < 4; ++vc_18) {
            int32_t cse_var_17 = (vc_18 + 8);
            ((float*)conv_let)[cse_var_17] = (((float*)conv_let)[cse_var_17] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 6)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_18) + 8)]));
          }
          for (int32_t vc_19 = 0; vc_19 < 4; ++vc_19) {
            int32_t cse_var_18 = (vc_19 + 12);
            ((float*)conv_let)[cse_var_18] = (((float*)conv_let)[cse_var_18] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 8)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_19) + 8)]));
          }
          for (int32_t vc_20 = 0; vc_20 < 4; ++vc_20) {
            int32_t cse_var_19 = (vc_20 + 16);
            ((float*)conv_let)[cse_var_19] = (((float*)conv_let)[cse_var_19] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 10)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_20) + 8)]));
          }
          for (int32_t vc_21 = 0; vc_21 < 4; ++vc_21) {
            int32_t cse_var_20 = (vc_21 + 20);
            ((float*)conv_let)[cse_var_20] = (((float*)conv_let)[cse_var_20] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_21) + 8)]));
          }
          for (int32_t vc_22 = 0; vc_22 < 4; ++vc_22) {
            int32_t cse_var_21 = (vc_22 + 24);
            ((float*)conv_let)[cse_var_21] = (((float*)conv_let)[cse_var_21] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 14)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_22) + 8)]));
          }
          for (int32_t vc_23 = 0; vc_23 < 4; ++vc_23) {
            int32_t cse_var_22 = (vc_23 + 28);
            ((float*)conv_let)[cse_var_22] = (((float*)conv_let)[cse_var_22] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 16)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_23) + 8)]));
          }
          for (int32_t vc_24 = 0; vc_24 < 4; ++vc_24) {
            ((float*)conv_let)[vc_24] = (((float*)conv_let)[vc_24] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 17)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_24) + 12)]));
          }
          for (int32_t vc_25 = 0; vc_25 < 4; ++vc_25) {
            int32_t cse_var_23 = (vc_25 + 4);
            ((float*)conv_let)[cse_var_23] = (((float*)conv_let)[cse_var_23] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 19)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_25) + 12)]));
          }
          for (int32_t vc_26 = 0; vc_26 < 4; ++vc_26) {
            int32_t cse_var_24 = (vc_26 + 8);
            ((float*)conv_let)[cse_var_24] = (((float*)conv_let)[cse_var_24] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 21)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_26) + 12)]));
          }
          for (int32_t vc_27 = 0; vc_27 < 4; ++vc_27) {
            int32_t cse_var_25 = (vc_27 + 12);
            ((float*)conv_let)[cse_var_25] = (((float*)conv_let)[cse_var_25] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 23)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_27) + 12)]));
          }
          for (int32_t vc_28 = 0; vc_28 < 4; ++vc_28) {
            int32_t cse_var_26 = (vc_28 + 16);
            ((float*)conv_let)[cse_var_26] = (((float*)conv_let)[cse_var_26] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 25)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_28) + 12)]));
          }
          for (int32_t vc_29 = 0; vc_29 < 4; ++vc_29) {
            int32_t cse_var_27 = (vc_29 + 20);
            ((float*)conv_let)[cse_var_27] = (((float*)conv_let)[cse_var_27] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 27)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_29) + 12)]));
          }
          for (int32_t vc_30 = 0; vc_30 < 4; ++vc_30) {
            int32_t cse_var_28 = (vc_30 + 24);
            ((float*)conv_let)[cse_var_28] = (((float*)conv_let)[cse_var_28] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 29)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_30) + 12)]));
          }
          for (int32_t vc_31 = 0; vc_31 < 4; ++vc_31) {
            int32_t cse_var_29 = (vc_31 + 28);
            ((float*)conv_let)[cse_var_29] = (((float*)conv_let)[cse_var_29] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 31)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_31) + 12)]));
          }
          for (int32_t vc_32 = 0; vc_32 < 4; ++vc_32) {
            ((float*)conv_let)[vc_32] = (((float*)conv_let)[vc_32] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 18)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_32) + 16)]));
          }
          for (int32_t vc_33 = 0; vc_33 < 4; ++vc_33) {
            int32_t cse_var_30 = (vc_33 + 4);
            ((float*)conv_let)[cse_var_30] = (((float*)conv_let)[cse_var_30] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 20)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_33) + 16)]));
          }
          for (int32_t vc_34 = 0; vc_34 < 4; ++vc_34) {
            int32_t cse_var_31 = (vc_34 + 8);
            ((float*)conv_let)[cse_var_31] = (((float*)conv_let)[cse_var_31] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 22)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_34) + 16)]));
          }
          for (int32_t vc_35 = 0; vc_35 < 4; ++vc_35) {
            int32_t cse_var_32 = (vc_35 + 12);
            ((float*)conv_let)[cse_var_32] = (((float*)conv_let)[cse_var_32] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 24)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_35) + 16)]));
          }
          for (int32_t vc_36 = 0; vc_36 < 4; ++vc_36) {
            int32_t cse_var_33 = (vc_36 + 16);
            ((float*)conv_let)[cse_var_33] = (((float*)conv_let)[cse_var_33] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 26)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_36) + 16)]));
          }
          for (int32_t vc_37 = 0; vc_37 < 4; ++vc_37) {
            int32_t cse_var_34 = (vc_37 + 20);
            ((float*)conv_let)[cse_var_34] = (((float*)conv_let)[cse_var_34] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 28)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_37) + 16)]));
          }
          for (int32_t vc_38 = 0; vc_38 < 4; ++vc_38) {
            int32_t cse_var_35 = (vc_38 + 24);
            ((float*)conv_let)[cse_var_35] = (((float*)conv_let)[cse_var_35] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 30)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_38) + 16)]));
          }
          for (int32_t vc_39 = 0; vc_39 < 4; ++vc_39) {
            int32_t cse_var_36 = (vc_39 + 28);
            ((float*)conv_let)[cse_var_36] = (((float*)conv_let)[cse_var_36] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 32)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_39) + 16)]));
          }
          for (int32_t vc_40 = 0; vc_40 < 4; ++vc_40) {
            ((float*)conv_let)[vc_40] = (((float*)conv_let)[vc_40] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 19)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_40) + 20)]));
          }
          for (int32_t vc_41 = 0; vc_41 < 4; ++vc_41) {
            int32_t cse_var_37 = (vc_41 + 4);
            ((float*)conv_let)[cse_var_37] = (((float*)conv_let)[cse_var_37] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 21)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_41) + 20)]));
          }
          for (int32_t vc_42 = 0; vc_42 < 4; ++vc_42) {
            int32_t cse_var_38 = (vc_42 + 8);
            ((float*)conv_let)[cse_var_38] = (((float*)conv_let)[cse_var_38] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 23)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_42) + 20)]));
          }
          for (int32_t vc_43 = 0; vc_43 < 4; ++vc_43) {
            int32_t cse_var_39 = (vc_43 + 12);
            ((float*)conv_let)[cse_var_39] = (((float*)conv_let)[cse_var_39] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 25)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_43) + 20)]));
          }
          for (int32_t vc_44 = 0; vc_44 < 4; ++vc_44) {
            int32_t cse_var_40 = (vc_44 + 16);
            ((float*)conv_let)[cse_var_40] = (((float*)conv_let)[cse_var_40] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 27)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_44) + 20)]));
          }
          for (int32_t vc_45 = 0; vc_45 < 4; ++vc_45) {
            int32_t cse_var_41 = (vc_45 + 20);
            ((float*)conv_let)[cse_var_41] = (((float*)conv_let)[cse_var_41] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 29)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_45) + 20)]));
          }
          for (int32_t vc_46 = 0; vc_46 < 4; ++vc_46) {
            int32_t cse_var_42 = (vc_46 + 24);
            ((float*)conv_let)[cse_var_42] = (((float*)conv_let)[cse_var_42] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 31)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_46) + 20)]));
          }
          for (int32_t vc_47 = 0; vc_47 < 4; ++vc_47) {
            int32_t cse_var_43 = (vc_47 + 28);
            ((float*)conv_let)[cse_var_43] = (((float*)conv_let)[cse_var_43] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 33)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_47) + 20)]));
          }
          for (int32_t vc_48 = 0; vc_48 < 4; ++vc_48) {
            ((float*)conv_let)[vc_48] = (((float*)conv_let)[vc_48] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 34)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_48) + 24)]));
          }
          for (int32_t vc_49 = 0; vc_49 < 4; ++vc_49) {
            int32_t cse_var_44 = (vc_49 + 4);
            ((float*)conv_let)[cse_var_44] = (((float*)conv_let)[cse_var_44] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 36)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_49) + 24)]));
          }
          for (int32_t vc_50 = 0; vc_50 < 4; ++vc_50) {
            int32_t cse_var_45 = (vc_50 + 8);
            ((float*)conv_let)[cse_var_45] = (((float*)conv_let)[cse_var_45] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 38)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_50) + 24)]));
          }
          for (int32_t vc_51 = 0; vc_51 < 4; ++vc_51) {
            int32_t cse_var_46 = (vc_51 + 12);
            ((float*)conv_let)[cse_var_46] = (((float*)conv_let)[cse_var_46] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 40)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_51) + 24)]));
          }
          for (int32_t vc_52 = 0; vc_52 < 4; ++vc_52) {
            int32_t cse_var_47 = (vc_52 + 16);
            ((float*)conv_let)[cse_var_47] = (((float*)conv_let)[cse_var_47] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 42)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_52) + 24)]));
          }
          for (int32_t vc_53 = 0; vc_53 < 4; ++vc_53) {
            int32_t cse_var_48 = (vc_53 + 20);
            ((float*)conv_let)[cse_var_48] = (((float*)conv_let)[cse_var_48] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 44)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_53) + 24)]));
          }
          for (int32_t vc_54 = 0; vc_54 < 4; ++vc_54) {
            int32_t cse_var_49 = (vc_54 + 24);
            ((float*)conv_let)[cse_var_49] = (((float*)conv_let)[cse_var_49] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 46)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_54) + 24)]));
          }
          for (int32_t vc_55 = 0; vc_55 < 4; ++vc_55) {
            int32_t cse_var_50 = (vc_55 + 28);
            ((float*)conv_let)[cse_var_50] = (((float*)conv_let)[cse_var_50] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 48)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_55) + 24)]));
          }
          for (int32_t vc_56 = 0; vc_56 < 4; ++vc_56) {
            ((float*)conv_let)[vc_56] = (((float*)conv_let)[vc_56] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 35)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_56) + 28)]));
          }
          for (int32_t vc_57 = 0; vc_57 < 4; ++vc_57) {
            int32_t cse_var_51 = (vc_57 + 4);
            ((float*)conv_let)[cse_var_51] = (((float*)conv_let)[cse_var_51] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 37)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_57) + 28)]));
          }
          for (int32_t vc_58 = 0; vc_58 < 4; ++vc_58) {
            int32_t cse_var_52 = (vc_58 + 8);
            ((float*)conv_let)[cse_var_52] = (((float*)conv_let)[cse_var_52] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 39)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_58) + 28)]));
          }
          for (int32_t vc_59 = 0; vc_59 < 4; ++vc_59) {
            int32_t cse_var_53 = (vc_59 + 12);
            ((float*)conv_let)[cse_var_53] = (((float*)conv_let)[cse_var_53] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 41)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_59) + 28)]));
          }
          for (int32_t vc_60 = 0; vc_60 < 4; ++vc_60) {
            int32_t cse_var_54 = (vc_60 + 16);
            ((float*)conv_let)[cse_var_54] = (((float*)conv_let)[cse_var_54] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 43)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_60) + 28)]));
          }
          for (int32_t vc_61 = 0; vc_61 < 4; ++vc_61) {
            int32_t cse_var_55 = (vc_61 + 20);
            ((float*)conv_let)[cse_var_55] = (((float*)conv_let)[cse_var_55] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 45)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_61) + 28)]));
          }
          for (int32_t vc_62 = 0; vc_62 < 4; ++vc_62) {
            int32_t cse_var_56 = (vc_62 + 24);
            ((float*)conv_let)[cse_var_56] = (((float*)conv_let)[cse_var_56] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 47)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_62) + 28)]));
          }
          for (int32_t vc_63 = 0; vc_63 < 4; ++vc_63) {
            int32_t cse_var_57 = (vc_63 + 28);
            ((float*)conv_let)[cse_var_57] = (((float*)conv_let)[cse_var_57] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 49)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_63) + 28)]));
          }
          for (int32_t vc_64 = 0; vc_64 < 4; ++vc_64) {
            ((float*)conv_let)[vc_64] = (((float*)conv_let)[vc_64] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 36)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_64) + 32)]));
          }
          for (int32_t vc_65 = 0; vc_65 < 4; ++vc_65) {
            int32_t cse_var_58 = (vc_65 + 4);
            ((float*)conv_let)[cse_var_58] = (((float*)conv_let)[cse_var_58] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 38)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_65) + 32)]));
          }
          for (int32_t vc_66 = 0; vc_66 < 4; ++vc_66) {
            int32_t cse_var_59 = (vc_66 + 8);
            ((float*)conv_let)[cse_var_59] = (((float*)conv_let)[cse_var_59] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 40)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_66) + 32)]));
          }
          for (int32_t vc_67 = 0; vc_67 < 4; ++vc_67) {
            int32_t cse_var_60 = (vc_67 + 12);
            ((float*)conv_let)[cse_var_60] = (((float*)conv_let)[cse_var_60] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 42)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_67) + 32)]));
          }
          for (int32_t vc_68 = 0; vc_68 < 4; ++vc_68) {
            int32_t cse_var_61 = (vc_68 + 16);
            ((float*)conv_let)[cse_var_61] = (((float*)conv_let)[cse_var_61] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 44)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_68) + 32)]));
          }
          for (int32_t vc_69 = 0; vc_69 < 4; ++vc_69) {
            int32_t cse_var_62 = (vc_69 + 20);
            ((float*)conv_let)[cse_var_62] = (((float*)conv_let)[cse_var_62] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 46)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_69) + 32)]));
          }
          for (int32_t vc_70 = 0; vc_70 < 4; ++vc_70) {
            int32_t cse_var_63 = (vc_70 + 24);
            ((float*)conv_let)[cse_var_63] = (((float*)conv_let)[cse_var_63] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 48)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_70) + 32)]));
          }
          for (int32_t vc_71 = 0; vc_71 < 4; ++vc_71) {
            int32_t cse_var_64 = (vc_71 + 28);
            ((float*)conv_let)[cse_var_64] = (((float*)conv_let)[cse_var_64] + (((float*)data_vec_let)[((((ax2_outer * 2448) + (ax3_outer * 153)) + (ci_1 * 51)) + 50)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_71) + 32)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 29184) + (ax1_inner * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 29184) + (ax1_inner_1 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 29184) + (ax1_inner_2 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 29184) + (ax1_inner_3 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 29184) + (ax1_inner_4 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 29184) + (ax1_inner_5 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 29184) + (ax1_inner_6 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 29184) + (ax1_inner_7 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_8_var[514448]));
  void* fused_constant_2_let = (&(global_const_workspace_8_var[441472]));
  void* data_vec_let = (&(global_workspace_9_var[0]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_9_var[69120]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_2_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_2_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_10(float* p0, float* T_relu, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_42_var[512096]));
  void* fused_constant_16_let = (&(global_const_workspace_42_var[389632]));
  void* data_vec_let = (&(global_workspace_43_var[138240]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_43_var[175104]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_16_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_11(float* p0, float* T_relu, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_44_var[511808]));
  void* fused_constant_17_let = (&(global_const_workspace_44_var[368896]));
  void* data_vec_let = (&(global_workspace_45_var[138240]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 2304) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_45_var[313344]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_17_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_17_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_12(float* p0, float* T_relu, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_48_var[511232]));
  void* fused_constant_19_let = (&(global_const_workspace_48_var[348160]));
  void* data_vec_let = (&(global_workspace_49_var[0]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_49_var[36864]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_19_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_19_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_13(float* p0, float* T_relu, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_52_var[510944]));
  void* fused_constant_20_let = (&(global_const_workspace_52_var[327424]));
  void* data_vec_let = (&(global_workspace_53_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_53_var[110592]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_20_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_20_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_14(float* p0, float* T_relu, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_56_var[510368]));
  void* fused_constant_22_let = (&(global_const_workspace_56_var[306688]));
  void* data_vec_let = (&(global_workspace_57_var[0]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_57_var[36864]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_22_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_22_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_15(float* p0, float* T_relu, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_60_var[510080]));
  void* fused_constant_23_let = (&(global_const_workspace_60_var[285952]));
  void* data_vec_let = (&(global_workspace_61_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_61_var[110592]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_23_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_23_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_16(float* p0, float* T_relu, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_64_var[509504]));
  void* fused_constant_25_let = (&(global_const_workspace_64_var[265216]));
  void* data_vec_let = (&(global_workspace_65_var[0]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_65_var[36864]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_25_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_25_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_17(float* p0, float* T_relu, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_66_var[509216]));
  void* fused_constant_26_let = (&(global_const_workspace_66_var[244480]));
  void* data_vec_let = (&(global_workspace_67_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_67_var[110592]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_26_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_18(float* p0, float* T_relu, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_70_var[508640]));
  void* fused_constant_28_let = (&(global_const_workspace_70_var[223744]));
  void* data_vec_let = (&(global_workspace_71_var[0]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_71_var[36864]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_28_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_28_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_19(float* p0, float* T_relu, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_72_var[508352]));
  void* fused_constant_29_let = (&(global_const_workspace_72_var[203008]));
  void* data_vec_let = (&(global_workspace_73_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_73_var[110592]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_29_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_29_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_2(float* p0, float* T_relu, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_10_var[514304]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[436288]));
  void* data_vec_let = (&(global_workspace_11_var[267264]));
  for (int32_t h = 0; h < 29; ++h) {
    for (int32_t w = 0; w < 8; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 2304) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 1856) + (h * 64)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 29; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        void* conv_let = (&(global_workspace_11_var[603648]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_3_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 7424) + (ax1_inner * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 7424) + (ax1_inner_1 * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 7424) + (ax1_inner_2 * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 7424) + (ax1_inner_3 * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 7424) + (ax1_inner_4 * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 7424) + (ax1_inner_5 * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 7424) + (ax1_inner_6 * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_3_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 7424) + (ax1_inner_7 * 1856)) + (ax2_outer * 64)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_20(float* p0, float* T_relu, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_76_var[507776]));
  void* fused_constant_31_let = (&(global_const_workspace_76_var[182272]));
  void* data_vec_let = (&(global_workspace_77_var[0]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_77_var[36864]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_31_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_21(float* p0, float* T_relu, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_78_var[507488]));
  void* fused_constant_32_let = (&(global_const_workspace_78_var[161536]));
  void* data_vec_let = (&(global_workspace_79_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_79_var[110592]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_32_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_32_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_22(float* p0, float* T_relu, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_82_var[506912]));
  void* fused_constant_34_let = (&(global_const_workspace_82_var[140800]));
  void* data_vec_let = (&(global_workspace_83_var[0]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_83_var[36864]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_34_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_34_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_23(float* p0, float* T_relu, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_84_var[506624]));
  void* fused_constant_35_let = (&(global_const_workspace_84_var[120064]));
  void* data_vec_let = (&(global_workspace_85_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_85_var[110592]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_35_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_35_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_24(float* p0, float* T_relu, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_88_var[506048]));
  void* fused_constant_37_let = (&(global_const_workspace_88_var[99328]));
  void* data_vec_let = (&(global_workspace_89_var[0]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_89_var[36864]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_37_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_37_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_25(float* p0, float* T_relu, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_90_var[505760]));
  void* fused_constant_38_let = (&(global_const_workspace_90_var[78592]));
  void* data_vec_let = (&(global_workspace_91_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_91_var[73728]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_38_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_38_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_26(float* p0, float* T_relu, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_94_var[505184]));
  void* fused_constant_40_let = (&(global_const_workspace_94_var[57856]));
  void* data_vec_let = (&(global_workspace_95_var[36864]));
  for (int32_t h = 0; h < 8; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 72; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 576)) + (ci * 8)) + vw)] = p0[((((ci * 128) + (h * 16)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 18; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 8; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_95_var[73728]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 72; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8))] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 576)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_40_let)[(((ax1_outer * 288) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 16)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_2 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_3 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_4 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_5 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_6 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_40_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 512) + (ax1_inner_7 * 128)) + (ax2_outer * 16)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_27(float* p0, float* T_relu, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_100_var[513184]));
  void* fused_constant_42_let = (&(global_const_workspace_100_var[0]));
  void* data_vec_let = (&(global_workspace_101_var[0]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 8; ++w) {
      for (int32_t ci = 0; ci < 144; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 4608) + (w * 576)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 128) + (h * 32)) + (vh * 16)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 8; ++ax3_outer) {
        void* conv_let = (&(global_workspace_101_var[73728]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 144; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 576)) + cse_var_2) + vw_1)] * ((float*)fused_constant_42_let)[(((ax1_outer * 576) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 4608) + (ax3_outer * 576)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_42_let)[(((ax1_outer * 576) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            float __1 = ((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_42_let)[((ax1_outer * 4) + ax1_inner)];
            T_relu[(((((ax1_outer * 512) + (ax1_inner * 128)) + (ax2_outer * 32)) + (ax3_outer * 2)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            float __2 = ((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_42_let)[((ax1_outer * 4) + ax1_inner_1)];
            T_relu[((((((ax1_outer * 512) + (ax1_inner_1 * 128)) + (ax2_outer * 32)) + (ax3_outer * 2)) + ax3_inner_1) + 16)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_28(float* p0, float* T_relu, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_102_var[515600]));
  void* fused_constant_43_let = (&(global_const_workspace_102_var[469056]));
  void* data_vec_let = (&(global_workspace_103_var[0]));
  for (int32_t h = 0; h < 57; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 4608) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 7296) + (h * 128)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 6; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 57; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_103_var[1050624]));
        for (int32_t vc_init = 0; vc_init < 3; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 3; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 3)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 3; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 6)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 3; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 9)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 3; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 3; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 15)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 3; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 18)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 3; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 21)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 3; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 3; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 3);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 3; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 6);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 3; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 9);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 3; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 12);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 3; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 15);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 3; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 18);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 3; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 21);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 4608) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_43_let)[(((ax1_outer * 108) + (ci_1 * 3)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 3; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner)];
          T_relu[((((ax1_outer * 21888) + (ax1_inner * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 3; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 3)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 21888) + (ax1_inner_1 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 3; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 6)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 21888) + (ax1_inner_2 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 3; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 9)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 21888) + (ax1_inner_3 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 3; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 12)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 21888) + (ax1_inner_4 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 3; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 15)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 21888) + (ax1_inner_5 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 3; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 18)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 21888) + (ax1_inner_6 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 3; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 21)] + ((float*)fused_nn_conv2d_constant_43_let)[((ax1_outer * 3) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 21888) + (ax1_inner_7 * 7296)) + (ax2_outer * 128)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_29(float* p0, float* T_relu, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_108_var[512928]));
  void* fused_constant_45_let = (&(global_const_workspace_108_var[36864]));
  void* data_vec_let = (&(global_workspace_109_var[0]));
  for (int32_t h = 0; h < 57; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 82; ++ci) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((h * 10496) + (w * 328)) + (ci * 4)) + vw)] = p0[((((ci * 7296) + (h * 128)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 57; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
        void* conv_let = (&(global_workspace_109_var[4260864]));
        for (int32_t vw_init = 0; vw_init < 4; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 82; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 10496) + (ax3_outer * 328)) + cse_var_2) + vw_1)] * ((float*)fused_constant_45_let)[(((ax1_outer * 328) + cse_var_2) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            float __1 = ((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_45_let)[((ax1_outer * 4) + ax1_inner)];
            T_relu[(((((ax1_outer * 29184) + (ax1_inner * 7296)) + (ax2_outer * 128)) + (ax3_outer * 4)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_3(float* p0, float* T_relu, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_14_var[514016]));
  void* fused_constant_5_let = (&(global_const_workspace_14_var[425920]));
  void* data_vec_let = (&(global_workspace_15_var[0]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_15_var[69120]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_5_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_30(float* p0, float* T_relu, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_112_var[515680]));
  void* fused_constant_47_let = (&(global_const_workspace_112_var[504336]));
  void* data_vec_let = (&(global_workspace_113_var[0]));
  for (int32_t h = 0; h < 57; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 64; ++ci) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((h * 8192) + (w * 256)) + (ci * 4)) + vw)] = p0[((((ci * 7296) + (h * 128)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 57; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
      void* conv_let = (&(global_workspace_113_var[1926144]));
      for (int32_t vw_init = 0; vw_init < 4; ++vw_init) {
        for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
          ((float*)conv_let)[((vw_init * 2) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 64; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
          for (int32_t vc = 0; vc < 2; ++vc) {
            int32_t cse_var_1 = ((vw_1 * 2) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 8192) + (ax3_outer * 256)) + (ci_1 * 4)) + vw_1)] * ((float*)fused_constant_47_let)[((ci_1 * 2) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
          float __1 = ((float*)conv_let)[((ax3_inner * 2) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_47_let)[ax1_inner];
          T_relu[((((ax1_inner * 7296) + (ax2_outer * 128)) + (ax3_outer * 4)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_4(float* p0, float* T_relu, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_18_var[513872]));
  void* fused_constant_6_let = (&(global_const_workspace_18_var[420736]));
  void* data_vec_let = (&(global_workspace_19_var[69120]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_19_var[207360]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_6_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_5(float* p0, float* T_relu, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_22_var[513584]));
  void* fused_constant_8_let = (&(global_const_workspace_22_var[415552]));
  void* data_vec_let = (&(global_workspace_23_var[0]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_23_var[69120]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_8_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_6(float* p0, float* T_relu, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_26_var[513440]));
  void* fused_constant_9_let = (&(global_const_workspace_26_var[410368]));
  void* data_vec_let = (&(global_workspace_27_var[69120]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_27_var[207360]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_9_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_7(float* p0, float* T_relu, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_30_var[515024]));
  void* fused_constant_11_let = (&(global_const_workspace_30_var[457024]));
  void* data_vec_let = (&(global_workspace_31_var[0]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_31_var[69120]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_11_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_8(float* p0, float* T_relu, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_32_var[514880]));
  void* fused_constant_12_let = (&(global_const_workspace_32_var[451840]));
  void* data_vec_let = (&(global_workspace_33_var[69120]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_33_var[138240]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_12_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_12_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_9(float* p0, float* T_relu, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_36_var[514592]));
  void* fused_constant_14_let = (&(global_const_workspace_36_var[446656]));
  void* data_vec_let = (&(global_workspace_37_var[69120]));
  for (int32_t h = 0; h < 15; ++h) {
    for (int32_t w = 0; w < 4; ++w) {
      for (int32_t ci = 0; ci < 36; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1152) + (w * 288)) + (ci * 8)) + vw)] = p0[((((ci * 480) + (h * 32)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 9; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 15; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
        void* conv_let = (&(global_workspace_37_var[138240]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t vc_init_1 = 0; vc_init_1 < 4; ++vc_init_1) {
          ((float*)conv_let)[(vc_init_1 + 4)] = 0.000000e+00f;
        }
        for (int32_t vc_init_2 = 0; vc_init_2 < 4; ++vc_init_2) {
          ((float*)conv_let)[(vc_init_2 + 8)] = 0.000000e+00f;
        }
        for (int32_t vc_init_3 = 0; vc_init_3 < 4; ++vc_init_3) {
          ((float*)conv_let)[(vc_init_3 + 12)] = 0.000000e+00f;
        }
        for (int32_t vc_init_4 = 0; vc_init_4 < 4; ++vc_init_4) {
          ((float*)conv_let)[(vc_init_4 + 16)] = 0.000000e+00f;
        }
        for (int32_t vc_init_5 = 0; vc_init_5 < 4; ++vc_init_5) {
          ((float*)conv_let)[(vc_init_5 + 20)] = 0.000000e+00f;
        }
        for (int32_t vc_init_6 = 0; vc_init_6 < 4; ++vc_init_6) {
          ((float*)conv_let)[(vc_init_6 + 24)] = 0.000000e+00f;
        }
        for (int32_t vc_init_7 = 0; vc_init_7 < 4; ++vc_init_7) {
          ((float*)conv_let)[(vc_init_7 + 28)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 36; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8))] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            int32_t cse_var_1 = (vc_1 + 4);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 1)] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_1)]));
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            int32_t cse_var_2 = (vc_2 + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 2)] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_2)]));
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            int32_t cse_var_3 = (vc_3 + 12);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 3)] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_3)]));
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            int32_t cse_var_4 = (vc_4 + 16);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 4)] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_4)]));
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            int32_t cse_var_5 = (vc_5 + 20);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 5)] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_5)]));
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            int32_t cse_var_6 = (vc_6 + 24);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 6)] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_6)]));
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            int32_t cse_var_7 = (vc_7 + 28);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax2_outer * 1152) + (ax3_outer * 288)) + (ci_1 * 8)) + 7)] * ((float*)fused_constant_14_let)[(((ax1_outer * 144) + (ci_1 * 4)) + vc_7)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 1920) + (ax1_inner * 480)) + (ax2_outer * 32)) + (ax3_outer * 8))] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(ax1_inner_1 + 4)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_1 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 1)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(ax1_inner_2 + 8)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_2 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 2)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(ax1_inner_3 + 12)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_3 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 3)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(ax1_inner_4 + 16)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_4 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 4)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(ax1_inner_5 + 20)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_5 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 5)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(ax1_inner_6 + 24)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_6 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 6)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(ax1_inner_7 + 28)] + ((float*)fused_nn_conv2d_constant_14_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 1920) + (ax1_inner_7 * 480)) + (ax2_outer * 32)) + (ax3_outer * 8)) + 7)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation_fused_nn_max_pool2d(float* p0, float* pool_max, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* pad_temp_let = (&(global_workspace_5_var[0]));
  for (int32_t ax1 = 0; ax1 < 36; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 59; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 129; ++ax3) {
        ((float*)pad_temp_let)[(((ax1 * 7611) + (ax2 * 129)) + ax3)] = ((((1 <= ax2) && (ax2 < 58)) && (1 <= ax3)) ? p0[((((ax1 * 7296) + (ax2 * 128)) + ax3) - 129)] : -3.402823e+38f);
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 36; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 29; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        pool_max[(((ax1_1 * 1856) + (ax2_1 * 64)) + ax3_1)] = -3.402823e+38f;
        for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
          for (int32_t rv1 = 0; rv1 < 3; ++rv1) {
            int32_t cse_var_1 = (((ax1_1 * 1856) + (ax2_1 * 64)) + ax3_1);
            float __1 = pool_max[cse_var_1];
            float __2 = ((float*)pad_temp_let)[(((((ax1_1 * 7611) + (ax2_1 * 258)) + (rv0 * 129)) + (ax3_1 * 2)) + rv1)];
            pool_max[cse_var_1] = ((__1) > (__2) ? (__1) : (__2));
          }
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_object_segmentation___tvm_main__(float* x_buffer_var, int64_t* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_61_let = (&(global_workspace_1_var[0]));
  void* sid_44_let = (&(global_workspace_1_var[73728]));
  void* sid_54_let = (&(global_workspace_1_var[73728]));
  void* sid_47_let = (&(global_workspace_1_var[110592]));
  void* sid_43_let = (&(global_workspace_1_var[110592]));
  void* sid_39_let = (&(global_workspace_1_var[73728]));
  void* sid_53_let = (&(global_workspace_1_var[110592]));
  void* sid_37_let = (&(global_workspace_1_var[110592]));
  void* sid_34_let = (&(global_workspace_1_var[73728]));
  void* sid_52_let = (&(global_workspace_1_var[110592]));
  void* sid_46_let = (&(global_workspace_1_var[0]));
  void* sid_32_let = (&(global_workspace_1_var[110592]));
  void* sid_51_let = (&(global_workspace_1_var[0]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  void* sid_58_let = (&(global_workspace_1_var[110592]));
  void* sid_60_let = (&(global_workspace_1_var[73728]));
  void* sid_59_let = (&(global_workspace_1_var[147456]));
  void* sid_13_let = (&(global_workspace_1_var[138240]));
  void* sid_56_let = (&(global_workspace_1_var[0]));
  void* sid_40_let = (&(global_workspace_1_var[110592]));
  void* sid_4_let = (&(global_workspace_1_var[534528]));
  void* sid_7_let = (&(global_workspace_1_var[138240]));
  void* sid_41_let = (&(global_workspace_1_var[0]));
  void* sid_62_let = (&(global_workspace_1_var[0]));
  void* sid_55_let = (&(global_workspace_1_var[110592]));
  void* sid_35_let = (&(global_workspace_1_var[110592]));
  void* sid_57_let = (&(global_workspace_1_var[110592]));
  void* sid_48_let = (&(global_workspace_1_var[110592]));
  void* sid_2_let = (&(global_workspace_1_var[2146608]));
  void* sid_14_let = (&(global_workspace_1_var[207360]));
  void* sid_1_let = (&(global_workspace_1_var[1095984]));
  void* sid_11_let = (&(global_workspace_1_var[207360]));
  void* sid_50_let = (&(global_workspace_1_var[110592]));
  void* sid_49_let = (&(global_workspace_1_var[73728]));
  void* sid_36_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[207360]));
  void* sid_9_let = (&(global_workspace_1_var[207360]));
  void* sid_8_let = (&(global_workspace_1_var[138240]));
  void* sid_63_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[69120]));
  void* sid_12_let = (&(global_workspace_1_var[207360]));
  void* sid_64_let = (&(global_workspace_1_var[0]));
  void* sid_16_let = (&(global_workspace_1_var[207360]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[276480]));
  void* sid_33_let = (&(global_workspace_1_var[110592]));
  void* sid_19_let = (&(global_workspace_1_var[138240]));
  void* sid_45_let = (&(global_workspace_1_var[110592]));
  void* sid_25_let = (&(global_workspace_1_var[276480]));
  void* sid_20_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[69120]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[175104]));
  void* sid_26_let = (&(global_workspace_1_var[0]));
  void* sid_38_let = (&(global_workspace_1_var[110592]));
  void* sid_27_let = (&(global_workspace_1_var[36864]));
  void* sid_28_let = (&(global_workspace_1_var[73728]));
  void* sid_42_let = (&(global_workspace_1_var[110592]));
  void* sid_30_let = (&(global_workspace_1_var[110592]));
  void* sid_29_let = (&(global_workspace_1_var[73728]));
  void* sid_65_let = (&(global_workspace_1_var[147456]));
  void* sid_66_let = (&(global_workspace_1_var[2393088]));
  void* sid_67_let = (&(global_workspace_1_var[1867776]));
  void* sid_68_let = (&(global_workspace_1_var[2393088]));
  void* sid_69_let = (&(global_workspace_1_var[2393088]));
  void* sid_72_let = (&(global_workspace_1_var[1867776]));
  void* sid_70_let = (&(global_workspace_1_var[2393088]));
  void* sid_71_let = (&(global_workspace_1_var[1867776]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_74_let = (&(global_workspace_1_var[0]));
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu(x_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_max_pool2d(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_2(sid_2_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_3(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split(sid_4_let, sid_7_let, sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_4(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_2(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_5(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_1(sid_8_let, sid_9_let, sid_12_let, sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_6(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_3(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_7(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_1(sid_13_let, sid_14_let, sid_17_let, sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_8(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_4(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_9(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape(sid_18_let, sid_19_let, sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_5(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_10(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_11(sid_23_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_6(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_12(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_2(sid_25_let, sid_28_let, sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_13(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_7(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_14(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_3(sid_29_let, sid_30_let, sid_33_let, sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_15(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_8(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_16(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_3(sid_34_let, sid_35_let, sid_38_let, sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_17(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_9(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_18(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_3(sid_39_let, sid_40_let, sid_43_let, sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_19(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_10(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_20(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_3(sid_44_let, sid_45_let, sid_48_let, sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_21(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_11(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_22(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_3(sid_49_let, sid_50_let, sid_53_let, sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_23(sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_12(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_24(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_split_3(sid_54_let, sid_55_let, sid_58_let, sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_25(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_13(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_26(sid_62_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_concatenate_reshape_transpose_reshape_1(sid_59_let, sid_60_let, sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_14(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_27(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_28(sid_1_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_image_resize2d_concatenate(sid_66_let, sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_15(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_29(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_16(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_nn_conv2d_add_nn_relu_30(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_image_resize2d(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_argmax(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_object_segmentation_fused_cast(sid_74_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

