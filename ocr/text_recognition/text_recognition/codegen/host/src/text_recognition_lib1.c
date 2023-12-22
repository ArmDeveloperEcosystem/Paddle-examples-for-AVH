// tvm target: c -keys=arm_cpu,cpu -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip(float* p0, float* compute, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_54_var[2150976]));
  void* fused_constant_25_let = (&(global_const_workspace_54_var[1934928]));
  void* data_vec_let = (&(global_workspace_55_var[207104]));
  for (int32_t ci = 0; ci < 44; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 179; ++i1_outer) {
    void* conv_let = (&(global_workspace_55_var[206928]));
    ((float*)conv_let)[0] = 0.000000e+00f;
    for (int32_t ci_1 = 0; ci_1 < 44; ++ci_1) {
      ((float*)conv_let)[0] = (((float*)conv_let)[0] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_25_let)[((i1_outer * 44) + ci_1)]));
    }
    float __1 = (((float*)conv_let)[0] + ((float*)fused_nn_conv2d_constant_25_let)[i1_outer]) + 5.000000e-01f;
    float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
    compute[i1_outer] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_1(float* p0, float* compute, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_66_var[2143680]));
  void* fused_constant_29_let = (&(global_const_workspace_66_var[1548784]));
  void* data_vec_let = (&(global_workspace_67_var[0]));
  for (int32_t ci = 0; ci < 89; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 179; ++i1_outer) {
    void* conv_let = (&(global_workspace_67_var[368]));
    for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 89; ++ci_1) {
      for (int32_t vc = 0; vc < 2; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_29_let)[(((i1_outer * 178) + (ci_1 * 2)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 2; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 2) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_29_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide(float* p0, float* T_divide, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_2_var[2164096]));
  void* fused_constant_let = (&(global_const_workspace_2_var[2148000]));
  void* data_vec_let = (&(global_workspace_3_var[0]));
  for (int32_t h = 0; h < 24; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 3; ++ci) {
        for (int32_t vh = 0; vh < 3; ++vh) {
          for (int32_t vw = 0; vw < 13; ++vw) {
            int32_t cse_var_1 = (w * 12);
            ((float*)data_vec_let)[(((((h * 1872) + (w * 117)) + (ci * 39)) + (vh * 13)) + vw)] = (((1 <= ((h * 2) + vh)) && (1 <= (cse_var_1 + vw))) ? p0[((((((ci * 9216) + (h * 384)) + (vh * 192)) + cse_var_1) + vw) - 193)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 24; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_3_var[281088]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 3; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_1 * 2))] * ((float*)fused_constant_let)[((ax1_outer * 27) + (ci_1 * 9))]));
          }
          for (int32_t vw_2 = 0; vw_2 < 6; ++vw_2) {
            ((float*)conv_let)[vw_2] = (((float*)conv_let)[vw_2] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_2 * 2)) + 1)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 1)]));
          }
          for (int32_t vw_3 = 0; vw_3 < 6; ++vw_3) {
            ((float*)conv_let)[vw_3] = (((float*)conv_let)[vw_3] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_3 * 2)) + 2)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 2)]));
          }
          for (int32_t vw_4 = 0; vw_4 < 6; ++vw_4) {
            ((float*)conv_let)[vw_4] = (((float*)conv_let)[vw_4] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_4 * 2)) + 13)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 3)]));
          }
          for (int32_t vw_5 = 0; vw_5 < 6; ++vw_5) {
            ((float*)conv_let)[vw_5] = (((float*)conv_let)[vw_5] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_5 * 2)) + 14)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 4)]));
          }
          for (int32_t vw_6 = 0; vw_6 < 6; ++vw_6) {
            ((float*)conv_let)[vw_6] = (((float*)conv_let)[vw_6] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_6 * 2)) + 15)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 5)]));
          }
          for (int32_t vw_7 = 0; vw_7 < 6; ++vw_7) {
            ((float*)conv_let)[vw_7] = (((float*)conv_let)[vw_7] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_7 * 2)) + 26)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 6)]));
          }
          for (int32_t vw_8 = 0; vw_8 < 6; ++vw_8) {
            ((float*)conv_let)[vw_8] = (((float*)conv_let)[vw_8] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_8 * 2)) + 27)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 7)]));
          }
          for (int32_t vw_9 = 0; vw_9 < 6; ++vw_9) {
            ((float*)conv_let)[vw_9] = (((float*)conv_let)[vw_9] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_9 * 2)) + 28)] * ((float*)fused_constant_let)[(((ax1_outer * 27) + (ci_1 * 9)) + 8)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 2304) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_1(float* p0, float* T_divide, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_4_var[2164048]));
  void* fused_constant_1_let = (&(global_const_workspace_4_var[2160336]));
  void* fused_constant_1_global_global_let = (&(global_workspace_5_var[103728]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 11; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 9) + (ax2_c * 3)) + ax3_c);
        ((float*)fused_constant_1_global_global_let)[cse_var_1] = ((float*)fused_constant_1_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_5_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 11; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 6; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_5_var[101376]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 98) + ax3_c_1)] = (((((1 <= cse_var_2) && (cse_var_2 < 25)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[(((((c_outer_c * 2304) + (i_c_outer * 384)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 2304) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 2304) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 2304) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 2304) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init_3) + 288)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_4 = (j_c_outer * 2);
              int32_t cse_var_3 = ((((c_outer_c * 2304) + (i_c_outer * 384)) + cse_var_4) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 98) + cse_var_4) + j_c_inner) + dj)] * ((float*)fused_constant_1_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_6 = (j_c_outer * 2);
              int32_t cse_var_5 = (((((c_outer_c * 2304) + (i_c_outer * 384)) + cse_var_6) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_6) + j_c_inner_1) + dj) + 98)] * ((float*)fused_constant_1_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_8 = (j_c_outer * 2);
              int32_t cse_var_7 = (((((c_outer_c * 2304) + (i_c_outer * 384)) + cse_var_8) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_8) + j_c_inner_2) + dj) + 196)] * ((float*)fused_constant_1_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              int32_t cse_var_10 = (j_c_outer * 2);
              int32_t cse_var_9 = (((((c_outer_c * 2304) + (i_c_outer * 384)) + cse_var_10) + j_c_inner_3) + 288);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_10) + j_c_inner_3) + dj) + 294)] * ((float*)fused_constant_1_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 11; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 24; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_11 = (((ax1 * 2304) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_1_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_11] = (((((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_1_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_10(float* p0, float* T_divide, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_22_var[2162608]));
  void* fused_constant_10_let = (&(global_const_workspace_22_var[1903232]));
  void* data_vec_let = (&(global_workspace_23_var[410112]));
  for (int32_t h = 0; h < 12; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 89; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 8544) + (w * 534)) + (ci * 6)) + vw)] = p0[((((ci * 1152) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 89; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 12; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_23_var[820224]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 89; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 8544) + (ax3_outer * 534)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_10_let)[((ax1_outer * 89) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_10_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 1152) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_10_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_11(float* p0, float* T_divide, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_24_var[2162240]));
  void* fused_constant_11_let = (&(global_const_workspace_24_var[2135856]));
  void* fused_constant_11_global_global_let = (&(global_workspace_25_var[615168]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 89; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 9) + (ax2_c * 3)) + ax3_c);
        ((float*)fused_constant_11_global_global_let)[cse_var_1] = ((float*)fused_constant_11_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_25_var[410112]));
  for (int32_t c_outer_c = 0; c_outer_c < 89; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_25_var[618384]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 98) + ax3_c_1)] = ((((1 <= ((i_c_outer * 6) + ax2_c_1)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[(((((c_outer_c * 1152) + (i_c_outer * 576)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_3 = (j_c_outer * 2);
              int32_t cse_var_2 = ((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_3) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 98) + cse_var_3) + j_c_inner) + dj)] * ((float*)fused_constant_11_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_5 = (j_c_outer * 2);
              int32_t cse_var_4 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_5) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_5) + j_c_inner_1) + dj) + 196)] * ((float*)fused_constant_11_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_7 = (j_c_outer * 2);
              int32_t cse_var_6 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_7) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_7) + j_c_inner_2) + dj) + 392)] * ((float*)fused_constant_11_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 89; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_8 = (((ax1 * 576) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_11_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_8] = (((((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_11_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_12(float* p0, float* T_divide, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_26_var[2159616]));
  void* fused_constant_12_let = (&(global_const_workspace_26_var[1803696]));
  void* data_vec_let = (&(global_workspace_27_var[412416]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 89; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 8544) + (w * 534)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_27_var[617472]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 89; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 8544) + (ax3_outer * 534)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_12_let)[((ax1_outer * 89) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_12_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_12_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_13(float* p0, float* T_divide, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_28_var[2158896]));
  void* fused_constant_13_let = (&(global_const_workspace_28_var[2087456]));
  void* fused_constant_13_global_global_let = (&(global_workspace_29_var[824832]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 179; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 25) + (ax2_c * 5)) + ax3_c);
        ((float*)fused_constant_13_global_global_let)[cse_var_1] = ((float*)fused_constant_13_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_29_var[412416]));
  for (int32_t c_outer_c = 0; c_outer_c < 179; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_29_var[842736]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
          int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 100) + ax3_c_1)] = (((((2 <= cse_var_2) && (cse_var_2 < 8)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 576) + (i_c_outer * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_4 = (j_c_outer * 2);
              int32_t cse_var_3 = ((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_4) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 100) + cse_var_4) + j_c_inner) + dj)] * ((float*)fused_constant_13_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_6 = (j_c_outer * 2);
              int32_t cse_var_5 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_6) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_6) + j_c_inner_1) + dj) + 100)] * ((float*)fused_constant_13_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_8 = (j_c_outer * 2);
              int32_t cse_var_7 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_8) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_8) + j_c_inner_2) + dj) + 200)] * ((float*)fused_constant_13_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 179; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_9 = (((ax1 * 576) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_9] = (((((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_14(float* p0, float* T_divide, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_30_var[2158176]));
  void* fused_constant_14_let = (&(global_const_workspace_30_var[1420608]));
  void* data_vec_let = (&(global_workspace_31_var[412416]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 179; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 17184) + (w * 1074)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_31_var[824832]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 179; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 17184) + (ax3_outer * 1074)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_14_let)[((ax1_outer * 179) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_14_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_14_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_15(float* p0, float* T_divide, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_32_var[2157456]));
  void* fused_constant_15_let = (&(global_const_workspace_32_var[2069552]));
  void* fused_constant_15_global_global_let = (&(global_workspace_33_var[824832]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 179; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 25) + (ax2_c * 5)) + ax3_c);
        ((float*)fused_constant_15_global_global_let)[cse_var_1] = ((float*)fused_constant_15_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_33_var[412416]));
  for (int32_t c_outer_c = 0; c_outer_c < 179; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_33_var[842736]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
          int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 100) + ax3_c_1)] = (((((2 <= cse_var_2) && (cse_var_2 < 8)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 576) + (i_c_outer * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_4 = (j_c_outer * 2);
              int32_t cse_var_3 = ((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_4) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 100) + cse_var_4) + j_c_inner) + dj)] * ((float*)fused_constant_15_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_6 = (j_c_outer * 2);
              int32_t cse_var_5 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_6) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_6) + j_c_inner_1) + dj) + 100)] * ((float*)fused_constant_15_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_8 = (j_c_outer * 2);
              int32_t cse_var_7 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_8) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_8) + j_c_inner_2) + dj) + 200)] * ((float*)fused_constant_15_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 179; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_9 = (((ax1 * 576) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_15_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_9] = (((((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_15_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_16(float* p0, float* T_divide, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_34_var[2156736]));
  void* fused_constant_16_let = (&(global_const_workspace_34_var[1292432]));
  void* data_vec_let = (&(global_workspace_35_var[412416]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 179; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 17184) + (w * 1074)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_35_var[824832]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 179; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 17184) + (ax3_outer * 1074)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_16_let)[((ax1_outer * 179) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_16_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_16_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_17(float* p0, float* T_divide, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_36_var[2156016]));
  void* fused_constant_17_let = (&(global_const_workspace_36_var[2051648]));
  void* fused_constant_17_global_global_let = (&(global_workspace_37_var[824832]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 179; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 25) + (ax2_c * 5)) + ax3_c);
        ((float*)fused_constant_17_global_global_let)[cse_var_1] = ((float*)fused_constant_17_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_37_var[412416]));
  for (int32_t c_outer_c = 0; c_outer_c < 179; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_37_var[842736]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
          int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 100) + ax3_c_1)] = (((((2 <= cse_var_2) && (cse_var_2 < 8)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 576) + (i_c_outer * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_4 = (j_c_outer * 2);
              int32_t cse_var_3 = ((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_4) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 100) + cse_var_4) + j_c_inner) + dj)] * ((float*)fused_constant_17_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_6 = (j_c_outer * 2);
              int32_t cse_var_5 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_6) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_6) + j_c_inner_1) + dj) + 100)] * ((float*)fused_constant_17_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_8 = (j_c_outer * 2);
              int32_t cse_var_7 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_8) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_8) + j_c_inner_2) + dj) + 200)] * ((float*)fused_constant_17_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 179; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_9 = (((ax1 * 576) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_17_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_9] = (((((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_17_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_18(float* p0, float* T_divide, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_38_var[2155296]));
  void* fused_constant_18_let = (&(global_const_workspace_38_var[1164256]));
  void* data_vec_let = (&(global_workspace_39_var[412416]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 179; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 17184) + (w * 1074)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_39_var[824832]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 179; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 17184) + (ax3_outer * 1074)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_18_let)[((ax1_outer * 179) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_18_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_18_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_19(float* p0, float* T_divide, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_40_var[2154576]));
  void* fused_constant_19_let = (&(global_const_workspace_40_var[2033744]));
  void* fused_constant_19_global_global_let = (&(global_workspace_41_var[824832]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 179; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 25) + (ax2_c * 5)) + ax3_c);
        ((float*)fused_constant_19_global_global_let)[cse_var_1] = ((float*)fused_constant_19_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_41_var[412416]));
  for (int32_t c_outer_c = 0; c_outer_c < 179; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_41_var[842736]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
          int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 100) + ax3_c_1)] = (((((2 <= cse_var_2) && (cse_var_2 < 8)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 576) + (i_c_outer * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_4 = (j_c_outer * 2);
              int32_t cse_var_3 = ((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_4) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 100) + cse_var_4) + j_c_inner) + dj)] * ((float*)fused_constant_19_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_6 = (j_c_outer * 2);
              int32_t cse_var_5 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_6) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_6) + j_c_inner_1) + dj) + 100)] * ((float*)fused_constant_19_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_8 = (j_c_outer * 2);
              int32_t cse_var_7 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_8) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_8) + j_c_inner_2) + dj) + 200)] * ((float*)fused_constant_19_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 179; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_9 = (((ax1 * 576) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_19_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_9] = (((((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_19_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_2(float* p0, float* T_divide, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_6_var[2163952]));
  void* fused_constant_2_let = (&(global_const_workspace_6_var[2149200]));
  void* data_vec_let = (&(global_workspace_7_var[202752]));
  for (int32_t h = 0; h < 24; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 11; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 1056) + (w * 66)) + (ci * 6)) + vw)] = p0[((((ci * 2304) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 24; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_7_var[304128]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
            ((float*)conv_let)[((vw_init * 2) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 11; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 2; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 2) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1056) + (ax3_outer * 66)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_2_let)[(((ax1_outer * 22) + (ci_1 * 2)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 2) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 2) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_2_let)[cse_var_2]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 4608) + (ax1_inner * 2304)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_2_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_20(float* p0, float* T_divide, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_42_var[2153856]));
  void* fused_constant_20_let = (&(global_const_workspace_42_var[1036080]));
  void* data_vec_let = (&(global_workspace_43_var[412416]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 179; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 17184) + (w * 1074)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_43_var[824832]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 179; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 17184) + (ax3_outer * 1074)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_20_let)[((ax1_outer * 179) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_20_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_20_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_21(float* p0, float* T_divide, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_44_var[2153136]));
  void* fused_constant_21_let = (&(global_const_workspace_44_var[2015840]));
  void* fused_constant_21_global_global_let = (&(global_workspace_45_var[824832]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 179; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 25) + (ax2_c * 5)) + ax3_c);
        ((float*)fused_constant_21_global_global_let)[cse_var_1] = ((float*)fused_constant_21_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_45_var[412416]));
  for (int32_t c_outer_c = 0; c_outer_c < 179; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_45_var[842736]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
          int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 100) + ax3_c_1)] = (((((2 <= cse_var_2) && (cse_var_2 < 8)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 576) + (i_c_outer * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (i_c_outer * 288)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_4 = (j_c_outer * 2);
              int32_t cse_var_3 = ((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_4) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 100) + cse_var_4) + j_c_inner) + dj)] * ((float*)fused_constant_21_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_6 = (j_c_outer * 2);
              int32_t cse_var_5 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_6) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_6) + j_c_inner_1) + dj) + 100)] * ((float*)fused_constant_21_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_8 = (j_c_outer * 2);
              int32_t cse_var_7 = (((((c_outer_c * 576) + (i_c_outer * 288)) + cse_var_8) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_8) + j_c_inner_2) + dj) + 200)] * ((float*)fused_constant_21_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 179; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_9 = (((ax1 * 576) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_21_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_9] = (((((float*)DepthwiseConv2d_global_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_21_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_22(float* p0, float* T_divide, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_46_var[2152416]));
  void* fused_constant_22_let = (&(global_const_workspace_46_var[907904]));
  void* data_vec_let = (&(global_workspace_47_var[412416]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 179; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 17184) + (w * 1074)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_47_var[824832]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 179; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 17184) + (ax3_outer * 1074)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_22_let)[((ax1_outer * 179) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_22_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_22_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_23(float* p0, float* T_divide, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_48_var[2151696]));
  void* fused_constant_23_let = (&(global_const_workspace_48_var[1997936]));
  void* fused_constant_23_global_global_let = (&(global_workspace_49_var[618624]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 179; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 25) + (ax2_c * 5)) + ax3_c);
        ((float*)fused_constant_23_global_global_let)[cse_var_1] = ((float*)fused_constant_23_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_49_var[412416]));
  for (int32_t c_outer_c = 0; c_outer_c < 179; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_49_var[636528]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 100) + ax3_c_1)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 8)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[((((c_outer_c * 576) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 288) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 288) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 288) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            int32_t cse_var_3 = (j_c_outer * 2);
            int32_t cse_var_2 = (((c_outer_c * 288) + cse_var_3) + j_c_inner);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 100) + cse_var_3) + j_c_inner) + dj)] * ((float*)fused_constant_23_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            int32_t cse_var_5 = (j_c_outer * 2);
            int32_t cse_var_4 = ((((c_outer_c * 288) + cse_var_5) + j_c_inner_1) + 96);
            ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_5) + j_c_inner_1) + dj) + 200)] * ((float*)fused_constant_23_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            int32_t cse_var_7 = (j_c_outer * 2);
            int32_t cse_var_6 = ((((c_outer_c * 288) + cse_var_7) + j_c_inner_2) + 192);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 100) + cse_var_7) + j_c_inner_2) + dj) + 400)] * ((float*)fused_constant_23_global_global_let)[(((c_outer_c * 25) + (di * 5)) + dj)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 179; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_8 = (((ax1 * 288) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_8] = (((((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_24(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_58_var[2146560]));
  void* data_vec_let = (&(global_workspace_59_var[668752]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 179; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 17184) + (w * 537)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
        void* conv_let = (&(global_workspace_59_var[874960]));
        for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 2)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 4)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 179; ++ci_1) {
          for (int32_t vc = 0; vc < 2; ++vc) {
            int32_t cse_var_4 = (vc + 4);
            int32_t cse_var_3 = (vc + 2);
            int32_t cse_var_2 = (((ax1_outer * 358) + (ci_1 * 2)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 17184) + (ax3_outer * 537)) + (ci_1 * 3));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * p1[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * p1[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * p1[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
          int32_t cse_var_5 = ((ax1_outer * 2) + ax1_inner);
          float __1 = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_5]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax1_inner * 288)) + (ax2_outer * 96)) + (ax3_outer * 3))] = (((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 2; ++ax1_inner_1) {
          int32_t cse_var_7 = (ax1_inner_1 + 2);
          int32_t cse_var_6 = ((ax1_outer * 2) + ax1_inner_1);
          float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 576) + (ax1_inner_1 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 2; ++ax1_inner_2) {
          int32_t cse_var_9 = (ax1_inner_2 + 4);
          int32_t cse_var_8 = ((ax1_outer * 2) + ax1_inner_2);
          float __5 = (((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_8]) + 3.000000e+00f;
          float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 576) + (ax1_inner_2 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2)] = (((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_8]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_25(float* p0, float* T_divide, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_60_var[2145120]));
  void* fused_constant_27_let = (&(global_const_workspace_60_var[1867424]));
  void* fused_constant_27_global_global_let = (&(global_workspace_61_var[412416]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 179; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 50);
          ((float*)fused_constant_27_global_global_let)[(((cse_var_1 + (ax2_c * 10)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_27_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_61_var[925072]));
  for (int32_t c_outer_c = 0; c_outer_c < 179; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_61_var[448224]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 200) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 5)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 576) + (ax1_inner_c * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (j_c_outer * 4)) + (j_c_inner_init * 2)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (j_c_outer * 4)) + (j_c_inner_init_1 * 2)) + c_inner_c_init_1) + 192)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 576) + (j_c_outer * 4)) + (j_c_inner_init_2 * 2)) + c_inner_c_init_2) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 4);
              int32_t cse_var_4 = (j_c_inner * 2);
              int32_t cse_var_3 = (dj * 2);
              int32_t cse_var_2 = ((((c_outer_c * 576) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 200) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 4);
              int32_t cse_var_8 = (j_c_inner_1 * 2);
              int32_t cse_var_7 = (dj * 2);
              int32_t cse_var_6 = (((((c_outer_c * 576) + cse_var_9) + cse_var_8) + c_inner_c_1) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 200) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 200)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 4);
              int32_t cse_var_12 = (j_c_inner_2 * 2);
              int32_t cse_var_11 = (dj * 2);
              int32_t cse_var_10 = (((((c_outer_c * 576) + cse_var_13) + cse_var_12) + c_inner_c_2) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 200) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 400)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_11) + c_inner_c_2)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 358; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_14 = (((((ax1 >> 1) * 576) + (ax2 * 192)) + (ax3 * 2)) + (ax1 & 1));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_27_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 288) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_27_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_26(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_70_var[2142240]));
  void* data_vec_let = (&(global_workspace_71_var[925072]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 358; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 34368) + (w * 1074)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 179; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
        void* conv_let = (&(global_workspace_71_var[1337488]));
        for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 2)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 4)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 358; ++ci_1) {
          for (int32_t vc = 0; vc < 2; ++vc) {
            int32_t cse_var_4 = (vc + 4);
            int32_t cse_var_3 = (vc + 2);
            int32_t cse_var_2 = (((ax1_outer * 716) + (ci_1 * 2)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 34368) + (ax3_outer * 1074)) + (ci_1 * 3));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * p1[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * p1[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * p1[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
          int32_t cse_var_5 = ((ax1_outer * 2) + ax1_inner);
          float __1 = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_5]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 576) + (ax1_inner * 288)) + (ax2_outer * 96)) + (ax3_outer * 3))] = (((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 2; ++ax1_inner_1) {
          int32_t cse_var_7 = (ax1_inner_1 + 2);
          int32_t cse_var_6 = ((ax1_outer * 2) + ax1_inner_1);
          float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 576) + (ax1_inner_1 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 2; ++ax1_inner_2) {
          int32_t cse_var_9 = (ax1_inner_2 + 4);
          int32_t cse_var_8 = ((ax1_outer * 2) + ax1_inner_2);
          float __5 = (((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_8]) + 3.000000e+00f;
          float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 576) + (ax1_inner_2 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2)] = (((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_8]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_3(float* p0, float* T_divide, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_8_var[2163856]));
  void* fused_constant_3_let = (&(global_const_workspace_8_var[2150176]));
  void* fused_constant_3_global_global_let = (&(global_workspace_9_var[410208]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 11; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 18);
          ((float*)fused_constant_3_global_global_let)[(((cse_var_1 + (ax2_c * 6)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_3_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_9_var[202752]));
  for (int32_t c_outer_c = 0; c_outer_c < 11; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 6; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_9_var[405504]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 196) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 25)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[((((((c_outer_c * 4608) + (ax1_inner_c * 2304)) + (i_c_outer * 384)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 4608) + (i_c_outer * 768)) + (j_c_outer * 4)) + (j_c_inner_init * 2)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 4608) + (i_c_outer * 768)) + (j_c_outer * 4)) + (j_c_inner_init_1 * 2)) + c_inner_c_init_1) + 192)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 4608) + (i_c_outer * 768)) + (j_c_outer * 4)) + (j_c_inner_init_2 * 2)) + c_inner_c_init_2) + 384)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 4608) + (i_c_outer * 768)) + (j_c_outer * 4)) + (j_c_inner_init_3 * 2)) + c_inner_c_init_3) + 576)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 4);
                int32_t cse_var_5 = (j_c_inner * 2);
                int32_t cse_var_4 = (dj * 2);
                int32_t cse_var_3 = (((((c_outer_c * 4608) + (i_c_outer * 768)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 196) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 4);
                int32_t cse_var_9 = (j_c_inner_1 * 2);
                int32_t cse_var_8 = (dj * 2);
                int32_t cse_var_7 = ((((((c_outer_c * 4608) + (i_c_outer * 768)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 192);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 196) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 196)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 4);
                int32_t cse_var_13 = (j_c_inner_2 * 2);
                int32_t cse_var_12 = (dj * 2);
                int32_t cse_var_11 = ((((((c_outer_c * 4608) + (i_c_outer * 768)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 384);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 196) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 392)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 4);
                int32_t cse_var_17 = (j_c_inner_3 * 2);
                int32_t cse_var_16 = (dj * 2);
                int32_t cse_var_15 = ((((((c_outer_c * 4608) + (i_c_outer * 768)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 576);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 196) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 588)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 22; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 24; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 1) * 4608) + (ax2 * 192)) + (ax3 * 2)) + (ax1 & 1));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_3_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 2304) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_3_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_4(float* p0, float* T_divide, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_10_var[2163504]));
  void* fused_constant_4_let = (&(global_const_workspace_10_var[2128768]));
  void* data_vec_let = (&(global_workspace_11_var[405504]));
  for (int32_t h = 0; h < 24; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 22; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 2112) + (w * 132)) + (ci * 6)) + vw)] = p0[((((ci * 2304) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 24; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_11_var[608256]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 22; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 2112) + (ax3_outer * 132)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_4_let)[(((ax1_outer * 88) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_2]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 9216) + (ax1_inner * 2304)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_5(float* p0, float* T_divide, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_12_var[2163328]));
  void* fused_constant_5_let = (&(global_const_workspace_12_var[2140656]));
  void* fused_constant_5_global_global_let = (&(global_workspace_13_var[820416]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 11; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_5_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_5_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_13_var[405504]));
  for (int32_t c_outer_c = 0; c_outer_c < 11; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 6; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_13_var[811008]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 392) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 25)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[((((((c_outer_c * 9216) + (ax1_inner_c * 2304)) + (i_c_outer * 384)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 9216) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 9216) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 9216) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 9216) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 1152)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 9216) + (i_c_outer * 1536)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 392) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 9216) + (i_c_outer * 1536)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 384);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 392)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 9216) + (i_c_outer * 1536)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 768);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 784)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 9216) + (i_c_outer * 1536)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 1152);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 1176)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 44; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 24; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 9216) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_5_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 2304) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_5_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_6(float* p0, float* T_divide, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_14_var[2163152]));
  void* fused_constant_6_let = (&(global_const_workspace_14_var[2121024]));
  void* data_vec_let = (&(global_workspace_15_var[405504]));
  for (int32_t h = 0; h < 24; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 44; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 4224) + (w * 264)) + (ci * 6)) + vw)] = p0[((((ci * 2304) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 24; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_15_var[811008]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 44; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 4224) + (ax3_outer * 264)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_6_let)[(((ax1_outer * 176) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_2]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 9216) + (ax1_inner * 2304)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_7(float* p0, float* T_divide, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_16_var[2162976]));
  void* fused_constant_7_let = (&(global_const_workspace_16_var[2139072]));
  void* fused_constant_7_global_global_let = (&(global_workspace_17_var[622368]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 11; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_7_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_7_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_17_var[405504]));
  for (int32_t c_outer_c = 0; c_outer_c < 11; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 3; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_17_var[608256]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 392) + (ax3_c_1 * 4)) + ax1_inner_c)] = ((((1 <= ((i_c_outer * 8) + ax2_c_1)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[((((((c_outer_c * 9216) + (ax1_inner_c * 2304)) + (i_c_outer * 768)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 4608) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 4608) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 4608) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 4608) + (i_c_outer * 1536)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 1152)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_5 = (j_c_outer * 8);
                int32_t cse_var_4 = (j_c_inner * 4);
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 4608) + (i_c_outer * 1536)) + cse_var_5) + cse_var_4) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 392) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_9 = (j_c_outer * 8);
                int32_t cse_var_8 = (j_c_inner_1 * 4);
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 4608) + (i_c_outer * 1536)) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 784)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_13 = (j_c_outer * 8);
                int32_t cse_var_12 = (j_c_inner_2 * 4);
                int32_t cse_var_11 = (dj * 4);
                int32_t cse_var_10 = ((((((c_outer_c * 4608) + (i_c_outer * 1536)) + cse_var_13) + cse_var_12) + c_inner_c_2) + 768);
                ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 1568)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_17 = (j_c_outer * 8);
                int32_t cse_var_16 = (j_c_inner_3 * 4);
                int32_t cse_var_15 = (dj * 4);
                int32_t cse_var_14 = ((((((c_outer_c * 4608) + (i_c_outer * 1536)) + cse_var_17) + cse_var_16) + c_inner_c_3) + 1152);
                ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 2352)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 44; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_18 = (((((ax1 >> 2) * 4608) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_7_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 1152) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_7_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_8(float* p0, float* T_divide, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_18_var[2161504]));
  void* fused_constant_8_let = (&(global_const_workspace_18_var[2105360]));
  void* data_vec_let = (&(global_workspace_19_var[410112]));
  for (int32_t h = 0; h < 12; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 44; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 4224) + (w * 264)) + (ci * 6)) + vw)] = p0[((((ci * 1152) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 89; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 12; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_19_var[612864]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          ((float*)conv_let)[vw_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 44; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 4224) + (ax3_outer * 264)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_8_let)[((ax1_outer * 44) + ci_1)]));
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_8_let)[ax1_outer]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 1152) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_8_let)[ax1_outer]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_9(float* p0, float* T_divide, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_20_var[2161136]));
  void* fused_constant_9_let = (&(global_const_workspace_20_var[2132640]));
  void* fused_constant_9_global_global_let = (&(global_workspace_21_var[820224]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 89; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        int32_t cse_var_1 = (((ax0_outer_c * 9) + (ax2_c * 3)) + ax3_c);
        ((float*)fused_constant_9_global_global_let)[cse_var_1] = ((float*)fused_constant_9_let)[cse_var_1];
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_21_var[410112]));
  for (int32_t c_outer_c = 0; c_outer_c < 89; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 3; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_21_var[823440]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
          ((float*)PaddedInput_global_global_let)[((ax2_c_1 * 98) + ax3_c_1)] = (((((1 <= cse_var_2) && (cse_var_2 < 13)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[(((((c_outer_c * 1152) + (i_c_outer * 384)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 1152) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init_1) + 96)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init_2) + 192)] = 0.000000e+00f;
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (i_c_outer * 384)) + (j_c_outer * 2)) + j_c_inner_init_3) + 288)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              int32_t cse_var_4 = (j_c_outer * 2);
              int32_t cse_var_3 = ((((c_outer_c * 1152) + (i_c_outer * 384)) + cse_var_4) + j_c_inner);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 98) + cse_var_4) + j_c_inner) + dj)] * ((float*)fused_constant_9_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              int32_t cse_var_6 = (j_c_outer * 2);
              int32_t cse_var_5 = (((((c_outer_c * 1152) + (i_c_outer * 384)) + cse_var_6) + j_c_inner_1) + 96);
              ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_6) + j_c_inner_1) + dj) + 98)] * ((float*)fused_constant_9_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              int32_t cse_var_8 = (j_c_outer * 2);
              int32_t cse_var_7 = (((((c_outer_c * 1152) + (i_c_outer * 384)) + cse_var_8) + j_c_inner_2) + 192);
              ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_8) + j_c_inner_2) + dj) + 196)] * ((float*)fused_constant_9_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              int32_t cse_var_10 = (j_c_outer * 2);
              int32_t cse_var_9 = (((((c_outer_c * 1152) + (i_c_outer * 384)) + cse_var_10) + j_c_inner_3) + 288);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[(((((di * 98) + cse_var_10) + j_c_inner_3) + dj) + 294)] * ((float*)fused_constant_9_global_global_let)[(((c_outer_c * 9) + (di * 3)) + dj)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 89; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_11 = (((ax1 * 1152) + (ax2 * 96)) + ax3);
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_9_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[cse_var_11] = (((((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_9_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_52_var[2163680]));
  void* fused_constant_24_let = (&(global_const_workspace_52_var[1966432]));
  void* data_vec_let = (&(global_workspace_53_var[206208]));
  for (int32_t ci = 0; ci < 179; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    void* conv_let = (&(global_workspace_53_var[207104]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 179; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_24_let)[(((ax1_outer * 716) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_24_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_conv2d_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_64_var[2161872]));
  void* fused_constant_28_let = (&(global_const_workspace_64_var[1676240]));
  void* data_vec_let = (&(global_workspace_65_var[0]));
  for (int32_t ci = 0; ci < 358; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 89; ++ax1_outer) {
    void* conv_let = (&(global_workspace_65_var[1808]));
    ((float*)conv_let)[0] = 0.000000e+00f;
    for (int32_t ci_1 = 0; ci_1 < 358; ++ci_1) {
      ((float*)conv_let)[0] = (((float*)conv_let)[0] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_28_let)[((ax1_outer * 358) + ci_1)]));
    }
    float __1 = ((float*)conv_let)[0] + ((float*)fused_nn_conv2d_constant_28_let)[ax1_outer];
    T_relu[ax1_outer] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_dense(float* p0, float* T_matmul_NT, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_constant_31_let = (&(global_const_workspace_76_var[768992]));
  for (int32_t i = 0; i < 48; ++i) {
    for (int32_t j = 0; j < 97; ++j) {
      T_matmul_NT[((i * 97) + j)] = 0.000000e+00f;
      for (int32_t k = 0; k < 358; ++k) {
        int32_t cse_var_1 = ((i * 97) + j);
        T_matmul_NT[cse_var_1] = (T_matmul_NT[cse_var_1] + (p0[((i * 358) + k)] * ((float*)fused_constant_31_let)[((j * 358) + k)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_global_avg_pool2d(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_51_var[206208]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 179; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 288) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 179; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 3.472222e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_global_avg_pool2d_1(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_63_var[0]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 358; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 288) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 358; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 3.472222e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_max_pool2d(float* p0, float* pool_max, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  for (int32_t ax1 = 0; ax1 < 358; ++ax1) {
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      pool_max[((ax1 * 48) + ax3)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
          int32_t cse_var_1 = ((ax1 * 48) + ax3);
          float __1 = pool_max[cse_var_1];
          float __2 = p0[((((ax1 * 288) + (rv0 * 96)) + (ax3 * 2)) + rv1)];
          pool_max[cse_var_1] = ((__1) > (__2) ? (__1) : (__2));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_nn_softmax(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 48; ++i0_i1_fused) {
    void* T_softmax_maxelem_let = (&(global_workspace_81_var[19024]));
    ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
    for (int32_t k = 0; k < 97; ++k) {
      float __1 = ((float*)T_softmax_maxelem_let)[0];
      float __2 = p0[((i0_i1_fused * 97) + k)];
      ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
    }
    void* T_softmax_exp_let = (&(global_workspace_81_var[18624]));
    for (int32_t i2 = 0; i2 < 97; ++i2) {
      ((float*)T_softmax_exp_let)[i2] = expf((p0[((i0_i1_fused * 97) + i2)] - ((float*)T_softmax_maxelem_let)[0]));
    }
    void* T_softmax_expsum_let = (&(global_workspace_81_var[19040]));
    ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
    for (int32_t k_1 = 0; k_1 < 97; ++k_1) {
      ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
    }
    for (int32_t i2_1 = 0; i2_1 < 97; ++i2_1) {
      T_softmax_norm[((i0_i1_fused * 97) + i2_1)] = (((float*)T_softmax_exp_let)[i2_1] / ((float*)T_softmax_expsum_let)[0]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_reshape_add(float* p0, float* T_add, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_reshape_constant_let = (&(global_const_workspace_78_var[2160736]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 48; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 25; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 4; ++ax2_inner) {
        if (((ax2_outer * 4) + ax2_inner) < 97) {
          int32_t cse_var_2 = (ax2_outer * 4);
          int32_t cse_var_1 = (((ax0_ax1_fused * 97) + cse_var_2) + ax2_inner);
          T_add[cse_var_1] = (p0[cse_var_1] + ((float*)fused_reshape_constant_let)[(cse_var_2 + ax2_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_squeeze_expand_dims_multiply_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_constant_26_let = (&(global_const_workspace_56_var[512656]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 32041; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 2; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 179);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 2) + ax4_inner)] = (((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_fused / 179) * 358) + (ax4_inner * 179)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_squeeze_expand_dims_multiply_layout_transform_1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_constant_30_let = (&(global_const_workspace_68_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64082; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 2; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 358);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 2) + ax4_inner)] = (((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_fused / 358) * 716) + (ax4_inner * 358)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition_fused_squeeze_transpose_reshape(float* p0, float* T_reshape, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  for (int32_t ax0 = 0; ax0 < 48; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 90; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        if (((ax1_outer * 2) + (ax1_inner >> 1)) < 179) {
          T_reshape[(((ax0 * 358) + (ax1_outer * 4)) + ax1_inner)] = p0[(((ax1_outer * 192) + (ax1_inner * 48)) + ax0)];
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_recognition___tvm_main__(float* x_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_26_let = (&(global_workspace_1_var[206928]));
  void* sid_29_let = (&(global_workspace_1_var[0]));
  void* sid_25_let = (&(global_workspace_1_var[206928]));
  void* sid_27_let = (&(global_workspace_1_var[206208]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[0]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[179712]));
  void* sid_28_let = (&(global_workspace_1_var[412416]));
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[101376]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[0]));
  void* sid_30_let = (&(global_workspace_1_var[512656]));
  void* sid_31_let = (&(global_workspace_1_var[1440]));
  void* sid_32_let = (&(global_workspace_1_var[1440]));
  void* sid_33_let = (&(global_workspace_1_var[925072]));
  void* sid_34_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[512656]));
  void* sid_36_let = (&(global_workspace_1_var[68736]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_38_let = (&(global_workspace_1_var[68736]));
  void* sid_39_let = (&(global_workspace_1_var[0]));
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide(x_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_1(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_2(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_3(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_4(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_5(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_6(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_7(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_8(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_9(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_10(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_11(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_12(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_13(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_14(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_15(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_16(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_17(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_18(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_19(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_20(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_21(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_22(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_23(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_global_avg_pool2d(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_nn_relu(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_squeeze_expand_dims_multiply_layout_transform(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_24(sid_24_let, sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_25(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_global_avg_pool2d_1(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_nn_relu_1(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_1(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_squeeze_expand_dims_multiply_layout_transform_1(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_conv2d_add_add_clip_multiply_divide_26(sid_30_let, sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_max_pool2d(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_squeeze_transpose_reshape(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_dense(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_reshape_add(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_recognition_fused_nn_softmax(sid_39_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

