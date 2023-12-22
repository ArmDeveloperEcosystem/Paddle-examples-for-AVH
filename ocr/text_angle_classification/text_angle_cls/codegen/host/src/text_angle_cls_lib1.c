// tvm target: c -keys=arm_cpu,cpu -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_16_var[508688]));
  void* data_vec_let = (&(global_workspace_17_var[36864]));
  for (int32_t h = 0; h < 12; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 768) + (w * 48)) + (ci * 6)) + vw)] = p0[((((ci * 1152) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 12; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_17_var[73984]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 768) + (ax3_outer * 48)) + (ci_1 * 6)) + vw_1)] * p1[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 4608) + (ax1_inner * 1152)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner)]);
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_1(float* p0, float* T_add, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_22_var[508656]));
  void* fused_constant_8_let = (&(global_const_workspace_22_var[499424]));
  void* data_vec_let = (&(global_workspace_23_var[0]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 24; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 2304) + (w * 144)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_23_var[55296]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 24; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 2304) + (ax3_outer * 144)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_8_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 2304) + (ax1_inner * 576)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner)]);
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_2(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_42_var[508368]));
  void* data_vec_let = (&(global_workspace_43_var[36864]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 32; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 3072) + (w * 96)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
      void* conv_let = (&(global_workspace_43_var[0]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        ((float*)conv_let)[vc_init] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          int32_t cse_var_4 = (vc + 32);
          int32_t cse_var_3 = (vc + 16);
          int32_t cse_var_2 = ((ci_1 * 16) + vc);
          int32_t cse_var_1 = (((ax2_outer * 3072) + (ax3_outer * 96)) + (ci_1 * 3));
          ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * p1[cse_var_2]));
        }
      }
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        T_add[(((ax1_inner * 288) + (ax2_outer * 96)) + (ax3_outer * 3))] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_16_let)[ax1_inner]);
      }
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
        T_add[((((ax1_inner_1 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1)] = (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_16_let)[ax1_inner_1]);
      }
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
        T_add[((((ax1_inner_2 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2)] = (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_16_let)[ax1_inner_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_3(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_110_var[506976]));
  void* data_vec_let = (&(global_workspace_111_var[79872]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 104; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 9984) + (w * 624)) + (ci * 6)) + vw)] = p0[((((ci * 192) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_111_var[0]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 104; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9984) + (ax3_outer * 624)) + (ci_1 * 6)) + vw_1)] * p1[(((ax1_outer * 416) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 768) + (ax1_inner * 192)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_41_let)[((ax1_outer * 4) + ax1_inner)]);
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_28_var[508816]));
  void* fused_constant_11_let = (&(global_const_workspace_28_var[491072]));
  void* data_vec_let = (&(global_workspace_29_var[0]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 32; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 3072) + (w * 192)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_29_var[92160]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3072) + (ax3_outer * 192)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_11_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 2304) + (ax1_inner * 576)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner);
            T_add[cse_var_2] = (p1[cse_var_2] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner)]));
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_1(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_56_var[508304]));
  void* data_vec_let = (&(global_workspace_57_var[101376]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 88; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 8448) + (w * 264)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
      void* conv_let = (&(global_workspace_57_var[0]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        ((float*)conv_let)[vc_init] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 88; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          int32_t cse_var_4 = (vc + 32);
          int32_t cse_var_3 = (vc + 16);
          int32_t cse_var_2 = ((ci_1 * 16) + vc);
          int32_t cse_var_1 = (((ax2_outer * 8448) + (ax3_outer * 264)) + (ci_1 * 3));
          ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * p1[cse_var_2]));
        }
      }
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        int32_t cse_var_5 = (((ax1_inner * 288) + (ax2_outer * 96)) + (ax3_outer * 3));
        T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_21_let)[ax1_inner]));
      }
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
        int32_t cse_var_6 = ((((ax1_inner_1 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1);
        T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_21_let)[ax1_inner_1]));
      }
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
        int32_t cse_var_7 = ((((ax1_inner_2 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2);
        T_add[cse_var_7] = (p2[cse_var_7] + (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_21_let)[ax1_inner_2]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_2(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_68_var[508240]));
  void* data_vec_let = (&(global_workspace_69_var[101376]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 88; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 8448) + (w * 264)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
      void* conv_let = (&(global_workspace_69_var[0]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        ((float*)conv_let)[vc_init] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 88; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          int32_t cse_var_4 = (vc + 32);
          int32_t cse_var_3 = (vc + 16);
          int32_t cse_var_2 = ((ci_1 * 16) + vc);
          int32_t cse_var_1 = (((ax2_outer * 8448) + (ax3_outer * 264)) + (ci_1 * 3));
          ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * p1[cse_var_2]));
        }
      }
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        int32_t cse_var_5 = (((ax1_inner * 288) + (ax2_outer * 96)) + (ax3_outer * 3));
        T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_26_let)[ax1_inner]));
      }
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
        int32_t cse_var_6 = ((((ax1_inner_1 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1);
        T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_26_let)[ax1_inner_1]));
      }
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
        int32_t cse_var_7 = ((((ax1_inner_2 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2);
        T_add[cse_var_7] = (p2[cse_var_7] + (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_26_let)[ax1_inner_2]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_3(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_82_var[508176]));
  void* data_vec_let = (&(global_workspace_83_var[46080]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 40; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 3840) + (w * 120)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
      void* conv_let = (&(global_workspace_83_var[0]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        ((float*)conv_let)[vc_init] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 40; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          int32_t cse_var_4 = (vc + 32);
          int32_t cse_var_3 = (vc + 16);
          int32_t cse_var_2 = ((ci_1 * 16) + vc);
          int32_t cse_var_1 = (((ax2_outer * 3840) + (ax3_outer * 120)) + (ci_1 * 3));
          ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * p1[cse_var_2]));
        }
      }
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        int32_t cse_var_5 = (((ax1_inner * 288) + (ax2_outer * 96)) + (ax3_outer * 3));
        T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_31_let)[ax1_inner]));
      }
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
        int32_t cse_var_6 = ((((ax1_inner_1 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1);
        T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_31_let)[ax1_inner_1]));
      }
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
        int32_t cse_var_7 = ((((ax1_inner_2 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2);
        T_add[cse_var_7] = (p2[cse_var_7] + (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_31_let)[ax1_inner_2]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_4(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_96_var[508112]));
  void* data_vec_let = (&(global_workspace_97_var[55296]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 48; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 4608) + (w * 144)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
      void* conv_let = (&(global_workspace_97_var[18432]));
      for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
        ((float*)conv_let)[vc_init] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 16)] = 0.000000e+00f;
        ((float*)conv_let)[(vc_init + 32)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
        for (int32_t vc = 0; vc < 16; ++vc) {
          int32_t cse_var_4 = (vc + 32);
          int32_t cse_var_3 = (vc + 16);
          int32_t cse_var_2 = ((ci_1 * 16) + vc);
          int32_t cse_var_1 = (((ax2_outer * 4608) + (ax3_outer * 144)) + (ci_1 * 3));
          ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * p1[cse_var_2]));
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * p1[cse_var_2]));
        }
      }
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        int32_t cse_var_5 = (((ax1_inner * 288) + (ax2_outer * 96)) + (ax3_outer * 3));
        T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_36_let)[ax1_inner]));
      }
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 16; ++ax1_inner_1) {
        int32_t cse_var_6 = ((((ax1_inner_1 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1);
        T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(ax1_inner_1 + 16)] + ((float*)fused_nn_conv2d_constant_36_let)[ax1_inner_1]));
      }
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 16; ++ax1_inner_2) {
        int32_t cse_var_7 = ((((ax1_inner_2 * 288) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2);
        T_add[cse_var_7] = (p2[cse_var_7] + (((float*)conv_let)[(ax1_inner_2 + 32)] + ((float*)fused_nn_conv2d_constant_36_let)[ax1_inner_2]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_5(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_124_var[506848]));
  void* data_vec_let = (&(global_workspace_125_var[153600]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 200; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 19200) + (w * 1200)) + (ci * 6)) + vw)] = p0[((((ci * 192) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_125_var[0]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 200; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1200)) + (ci_1 * 6)) + vw_1)] * p1[(((ax1_outer * 800) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 768) + (ax1_inner * 192)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner);
            T_add[cse_var_2] = (p2[cse_var_2] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_46_let)[((ax1_outer * 4) + ax1_inner)]));
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_6(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_nn_conv2d_constant_51_let = (&(global_const_workspace_136_var[506720]));
  void* data_vec_let = (&(global_workspace_137_var[153600]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 200; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 19200) + (w * 1200)) + (ci * 6)) + vw)] = p0[((((ci * 192) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_137_var[24576]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 200; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1200)) + (ci_1 * 6)) + vw_1)] * p1[(((ax1_outer * 800) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_2 = (((((ax1_outer * 768) + (ax1_inner * 192)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner);
            T_add[cse_var_2] = (p2[cse_var_2] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_51_let)[((ax1_outer * 4) + ax1_inner)]));
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip(float* p0, float* compute, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_12_var[508720]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[508432]));
  void* data_vec_let = (&(global_workspace_13_var[36912]));
  for (int32_t ci = 0; ci < 2; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 2; ++i1_outer) {
    void* conv_let = (&(global_workspace_13_var[36896]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 2; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_4_let)[(((i1_outer * 8) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_1(float* p0, float* compute, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_38_var[507104]));
  void* fused_constant_15_let = (&(global_const_workspace_38_var[488000]));
  void* data_vec_let = (&(global_workspace_39_var[37024]));
  for (int32_t ci = 0; ci < 8; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 8; ++i1_outer) {
    void* conv_let = (&(global_workspace_39_var[36992]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_15_let)[(((i1_outer * 32) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_15_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_2(float* p0, float* compute, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_52_var[503264]));
  void* fused_constant_20_let = (&(global_const_workspace_52_var[406432]));
  void* data_vec_let = (&(global_workspace_53_var[101824]));
  for (int32_t ci = 0; ci < 22; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 22; ++i1_outer) {
    void* conv_let = (&(global_workspace_53_var[101728]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 22; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_20_let)[(((i1_outer * 88) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_3(float* p0, float* compute, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_64_var[502208]));
  void* fused_constant_25_let = (&(global_const_workspace_64_var[390944]));
  void* data_vec_let = (&(global_workspace_65_var[101824]));
  for (int32_t ci = 0; ci < 22; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 22; ++i1_outer) {
    void* conv_let = (&(global_workspace_65_var[101728]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 22; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_25_let)[(((i1_outer * 88) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_25_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_4(float* p0, float* compute, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_78_var[506112]));
  void* fused_constant_30_let = (&(global_const_workspace_78_var[482624]));
  void* data_vec_let = (&(global_workspace_79_var[46288]));
  for (int32_t ci = 0; ci < 10; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 10; ++i1_outer) {
    void* conv_let = (&(global_workspace_79_var[46240]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 10; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_30_let)[(((i1_outer * 40) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_5(float* p0, float* compute, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_92_var[505536]));
  void* fused_constant_35_let = (&(global_const_workspace_92_var[474368]));
  void* data_vec_let = (&(global_workspace_93_var[55536]));
  for (int32_t ci = 0; ci < 12; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 12; ++i1_outer) {
    void* conv_let = (&(global_workspace_93_var[55488]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 12; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_35_let)[(((i1_outer * 48) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_35_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_6(float* p0, float* compute, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_106_var[500960]));
  void* fused_constant_40_let = (&(global_const_workspace_106_var[341312]));
  void* data_vec_let = (&(global_workspace_107_var[80400]));
  for (int32_t ci = 0; ci < 26; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 26; ++i1_outer) {
    void* conv_let = (&(global_workspace_107_var[80288]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 26; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_40_let)[(((i1_outer * 104) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_40_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_7(float* p0, float* compute, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_120_var[497024]));
  void* fused_constant_45_let = (&(global_const_workspace_120_var[80000]));
  void* data_vec_let = (&(global_workspace_121_var[154608]));
  for (int32_t ci = 0; ci < 50; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 25; ++i1_outer) {
    void* conv_let = (&(global_workspace_121_var[154400]));
    for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 50; ++ci_1) {
      for (int32_t vc = 0; vc < 8; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_45_let)[(((i1_outer * 400) + (ci_1 * 8)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 8; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 8) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_8(float* p0, float* compute, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_nn_conv2d_constant_50_let = (&(global_const_workspace_132_var[494624]));
  void* fused_constant_50_let = (&(global_const_workspace_132_var[0]));
  void* data_vec_let = (&(global_workspace_133_var[154608]));
  for (int32_t ci = 0; ci < 50; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 25; ++i1_outer) {
    void* conv_let = (&(global_workspace_133_var[154400]));
    for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 50; ++ci_1) {
      for (int32_t vc = 0; vc < 8; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_50_let)[(((i1_outer * 400) + (ci_1 * 8)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 8; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 8) + i1_inner);
      float __1 = (((float*)conv_let)[i1_inner] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_1]) + 5.000000e-01f;
      float __2 = (__1) < (1.000000e+00f) ? (__1) : (1.000000e+00f);
      compute[cse_var_1] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide(float* p0, float* T_divide, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_2_var[508880]));
  void* fused_constant_let = (&(global_const_workspace_2_var[492960]));
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
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 24; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_3_var[253440]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 3; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_2 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_1 * 2))] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
          }
          for (int32_t vw_2 = 0; vw_2 < 6; ++vw_2) {
            for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
              int32_t cse_var_3 = ((vw_2 * 4) + vc_1);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_2 * 2)) + 1)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
          }
          for (int32_t vw_3 = 0; vw_3 < 6; ++vw_3) {
            for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
              int32_t cse_var_4 = ((vw_3 * 4) + vc_2);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_3 * 2)) + 2)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
          }
          for (int32_t vw_4 = 0; vw_4 < 6; ++vw_4) {
            for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
              int32_t cse_var_5 = ((vw_4 * 4) + vc_3);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_4 * 2)) + 13)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
          }
          for (int32_t vw_5 = 0; vw_5 < 6; ++vw_5) {
            for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
              int32_t cse_var_6 = ((vw_5 * 4) + vc_4);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_5 * 2)) + 14)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
          }
          for (int32_t vw_6 = 0; vw_6 < 6; ++vw_6) {
            for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
              int32_t cse_var_7 = ((vw_6 * 4) + vc_5);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_6 * 2)) + 15)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
          }
          for (int32_t vw_7 = 0; vw_7 < 6; ++vw_7) {
            for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
              int32_t cse_var_8 = ((vw_7 * 4) + vc_6);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_7 * 2)) + 26)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
          }
          for (int32_t vw_8 = 0; vw_8 < 6; ++vw_8) {
            for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
              int32_t cse_var_9 = ((vw_8 * 4) + vc_7);
              ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_8 * 2)) + 27)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
          }
          for (int32_t vw_9 = 0; vw_9 < 6; ++vw_9) {
            for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
              int32_t cse_var_10 = ((vw_9 * 4) + vc_8);
              ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 1872) + (ax3_outer * 117)) + (ci_1 * 39)) + (vw_9 * 2)) + 28)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_12 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_let)[cse_var_11]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 9216) + (ax1_inner * 2304)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_let)[cse_var_11]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_1(float* p0, float* T_divide, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_30_var[507360]));
  void* fused_constant_12_let = (&(global_const_workspace_30_var[490048]));
  void* data_vec_let = (&(global_workspace_31_var[92160]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 768) + (w * 48)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_31_var[73728]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 768) + (ax3_outer * 48)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_12_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_2]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 2304) + (ax1_inner * 576)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_10(float* p0, float* T_divide, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_86_var[505728]));
  void* fused_constant_33_let = (&(global_const_workspace_86_var[451104]));
  void* fused_constant_33_global_global_let = (&(global_workspace_87_var[140224]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 12; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_33_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_33_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_87_var[55296]));
  for (int32_t c_outer_c = 0; c_outer_c < 12; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_87_var[129024]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 400) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 5)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 1152) + (ax1_inner_c * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 1152) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 400) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 1152) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 400)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 1152) + cse_var_13) + cse_var_12) + c_inner_c_2) + 768);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 800)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 48; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_14 = (((((ax1 >> 2) * 1152) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 288) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_11(float* p0, float* T_divide, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_98_var[501792]));
  void* fused_constant_37_let = (&(global_const_workspace_98_var[421920]));
  void* data_vec_let = (&(global_workspace_99_var[119808]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 1536) + (w * 48)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
        void* conv_let = (&(global_workspace_99_var[138240]));
        for (int32_t vc_init = 0; vc_init < 13; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 13)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 26)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vc = 0; vc < 13; ++vc) {
            int32_t cse_var_4 = (vc + 26);
            int32_t cse_var_3 = (vc + 13);
            int32_t cse_var_2 = (((ax1_outer * 208) + (ci_1 * 13)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 1536) + (ax3_outer * 48)) + (ci_1 * 3));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_37_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_37_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_37_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 13; ++ax1_inner) {
          int32_t cse_var_5 = ((ax1_outer * 13) + ax1_inner);
          float __1 = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_5]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 3744) + (ax1_inner * 288)) + (ax2_outer * 96)) + (ax3_outer * 3))] = (((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 13; ++ax1_inner_1) {
          int32_t cse_var_7 = (ax1_inner_1 + 13);
          int32_t cse_var_6 = ((ax1_outer * 13) + ax1_inner_1);
          float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 3744) + (ax1_inner_1 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 13; ++ax1_inner_2) {
          int32_t cse_var_9 = (ax1_inner_2 + 26);
          int32_t cse_var_8 = ((ax1_outer * 13) + ax1_inner_2);
          float __5 = (((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_8]) + 3.000000e+00f;
          float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 3744) + (ax1_inner_2 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2)] = (((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_8]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_12(float* p0, float* T_divide, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_100_var[501376]));
  void* fused_constant_38_let = (&(global_const_workspace_100_var[362944]));
  void* fused_constant_38_global_global_let = (&(global_workspace_101_var[210880]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 26; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_38_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_38_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_101_var[119808]));
  for (int32_t c_outer_c = 0; c_outer_c < 26; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_101_var[199680]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 400) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 5)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 1152) + (ax1_inner_c * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 768) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 768) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 768) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 400) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 768) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 800)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 104; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 768) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_38_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 192) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_38_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_13(float* p0, float* T_divide, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_112_var[498624]));
  void* fused_constant_42_let = (&(global_const_workspace_112_var[262400]));
  void* data_vec_let = (&(global_workspace_113_var[153600]));
  for (int32_t w = 0; w < 24; ++w) {
    for (int32_t ci = 0; ci < 32; ++ci) {
      for (int32_t vh = 0; vh < 2; ++vh) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((w * 256) + (ci * 8)) + (vh * 4)) + vw)] = p0[((((ci * 192) + (vh * 96)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 50; ++ax1_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 24; ++ax3_outer) {
      void* conv_let = (&(global_workspace_113_var[178176]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 4; ++vw_init) {
          ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 4; ++vw_init_1) {
          ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 4) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax3_outer * 256) + (ci_1 * 8)) + vw_1)] * ((float*)fused_constant_42_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_2 = 0; vw_2 < 4; ++vw_2) {
            int32_t cse_var_2 = (((vw_2 * 4) + vc) + 16);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax3_outer * 256) + (ci_1 * 8)) + vw_2) + 4)] * ((float*)fused_constant_42_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_4 = ((ax3_inner * 4) + ax1_inner);
          int32_t cse_var_3 = ((ax1_outer * 4) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_3]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 768) + (ax1_inner * 192)) + (ax3_outer * 4)) + ax3_inner)] = (((((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_3]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 4; ++ax3_inner_1) {
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner_1);
          int32_t cse_var_5 = (((ax3_inner_1 * 4) + ax1_inner_1) + 16);
          float __3 = (((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 768) + (ax1_inner_1 * 192)) + (ax3_outer * 4)) + ax3_inner_1) + 96)] = (((((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_14(float* p0, float* T_divide, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_114_var[497824]));
  void* fused_constant_43_let = (&(global_const_workspace_114_var[308000]));
  void* fused_constant_43_global_global_let = (&(global_workspace_115_var[307200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 50; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_43_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_43_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_115_var[153600]));
  for (int32_t c_outer_c = 0; c_outer_c < 50; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_115_var[327200]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 400) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 4)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 768) + (ax1_inner_c * 192)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 768) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 768) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 768) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 400) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_43_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 768) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 400)] * ((float*)fused_constant_43_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 200; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 768) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_43_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 192) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_43_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_15(float* p0, float* T_divide, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_126_var[496224]));
  void* fused_constant_47_let = (&(global_const_workspace_126_var[211200]));
  void* data_vec_let = (&(global_workspace_127_var[153600]));
  for (int32_t w = 0; w < 24; ++w) {
    for (int32_t ci = 0; ci < 32; ++ci) {
      for (int32_t vh = 0; vh < 2; ++vh) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((w * 256) + (ci * 8)) + (vh * 4)) + vw)] = p0[((((ci * 192) + (vh * 96)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 50; ++ax1_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 24; ++ax3_outer) {
      void* conv_let = (&(global_workspace_127_var[178176]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 4; ++vw_init) {
          ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 4; ++vw_init_1) {
          ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 4) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax3_outer * 256) + (ci_1 * 8)) + vw_1)] * ((float*)fused_constant_47_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_2 = 0; vw_2 < 4; ++vw_2) {
            int32_t cse_var_2 = (((vw_2 * 4) + vc) + 16);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax3_outer * 256) + (ci_1 * 8)) + vw_2) + 4)] * ((float*)fused_constant_47_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_4 = ((ax3_inner * 4) + ax1_inner);
          int32_t cse_var_3 = ((ax1_outer * 4) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_3]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 768) + (ax1_inner * 192)) + (ax3_outer * 4)) + ax3_inner)] = (((((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_3]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 4; ++ax3_inner_1) {
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner_1);
          int32_t cse_var_5 = (((ax3_inner_1 * 4) + ax1_inner_1) + 16);
          float __3 = (((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 768) + (ax1_inner_1 * 192)) + (ax3_outer * 4)) + ax3_inner_1) + 96)] = (((((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_16(float* p0, float* T_divide, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_nn_conv2d_constant_48_let = (&(global_const_workspace_128_var[495424]));
  void* fused_constant_48_let = (&(global_const_workspace_128_var[288000]));
  void* fused_constant_48_global_global_let = (&(global_workspace_129_var[307200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 50; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_48_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_48_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_129_var[153600]));
  for (int32_t c_outer_c = 0; c_outer_c < 50; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_129_var[357376]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 400) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 4)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 768) + (ax1_inner_c * 192)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 768) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 768) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 768) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 400) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_48_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 768) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 400)] * ((float*)fused_constant_48_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 200; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 768) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_48_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 192) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_48_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_17(float* p0, float* T_divide, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_conv2d_constant_52_let = (&(global_const_workspace_138_var[493824]));
  void* fused_constant_52_let = (&(global_const_workspace_138_var[160000]));
  void* data_vec_let = (&(global_workspace_139_var[153600]));
  for (int32_t w = 0; w < 24; ++w) {
    for (int32_t ci = 0; ci < 32; ++ci) {
      for (int32_t vh = 0; vh < 2; ++vh) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((w * 256) + (ci * 8)) + (vh * 4)) + vw)] = p0[((((ci * 192) + (vh * 96)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 50; ++ax1_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 24; ++ax3_outer) {
      void* conv_let = (&(global_workspace_139_var[178176]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 4; ++vw_init) {
          ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 4; ++vw_init_1) {
          ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 4) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax3_outer * 256) + (ci_1 * 8)) + vw_1)] * ((float*)fused_constant_52_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_2 = 0; vw_2 < 4; ++vw_2) {
            int32_t cse_var_2 = (((vw_2 * 4) + vc) + 16);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax3_outer * 256) + (ci_1 * 8)) + vw_2) + 4)] * ((float*)fused_constant_52_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_4 = ((ax3_inner * 4) + ax1_inner);
          int32_t cse_var_3 = ((ax1_outer * 4) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_3]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 768) + (ax1_inner * 192)) + (ax3_outer * 4)) + ax3_inner)] = (((((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_3]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 4; ++ax3_inner_1) {
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner_1);
          int32_t cse_var_5 = (((ax3_inner_1 * 4) + ax1_inner_1) + 16);
          float __3 = (((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 768) + (ax1_inner_1 * 192)) + (ax3_outer * 4)) + ax3_inner_1) + 96)] = (((((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_2(float* p0, float* T_divide, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_32_var[507232]));
  void* fused_constant_13_let = (&(global_const_workspace_32_var[459904]));
  void* fused_constant_13_global_global_let = (&(global_workspace_33_var[124992]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 8; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_13_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_13_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_33_var[73728]));
  for (int32_t c_outer_c = 0; c_outer_c < 8; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_33_var[110592]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 400) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 8)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 2304) + (ax1_inner_c * 576)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 1152) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 400) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 1152) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 800)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 1152) + cse_var_13) + cse_var_12) + c_inner_c_2) + 768);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 1600)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_14 = (((((ax1 >> 2) * 1152) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 288) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_3(float* p0, float* T_divide, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_44_var[503968]));
  void* fused_constant_17_let = (&(global_const_workspace_44_var[445472]));
  void* data_vec_let = (&(global_workspace_45_var[101376]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 1536) + (w * 48)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
        void* conv_let = (&(global_workspace_45_var[119808]));
        for (int32_t vc_init = 0; vc_init < 11; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 11)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 22)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vc = 0; vc < 11; ++vc) {
            int32_t cse_var_4 = (vc + 22);
            int32_t cse_var_3 = (vc + 11);
            int32_t cse_var_2 = (((ax1_outer * 176) + (ci_1 * 11)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 1536) + (ax3_outer * 48)) + (ci_1 * 3));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_17_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_17_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_17_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 11; ++ax1_inner) {
          int32_t cse_var_5 = ((ax1_outer * 11) + ax1_inner);
          float __1 = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_5]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 3168) + (ax1_inner * 288)) + (ax2_outer * 96)) + (ax3_outer * 3))] = (((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 11; ++ax1_inner_1) {
          int32_t cse_var_7 = (ax1_inner_1 + 11);
          int32_t cse_var_6 = ((ax1_outer * 11) + ax1_inner_1);
          float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 3168) + (ax1_inner_1 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 11; ++ax1_inner_2) {
          int32_t cse_var_9 = (ax1_inner_2 + 22);
          int32_t cse_var_8 = ((ax1_outer * 11) + ax1_inner_2);
          float __5 = (((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_8]) + 3.000000e+00f;
          float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 3168) + (ax1_inner_2 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2)] = (((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_8]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_4(float* p0, float* T_divide, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_46_var[503616]));
  void* fused_constant_18_let = (&(global_const_workspace_46_var[382144]));
  void* fused_constant_18_global_global_let = (&(global_workspace_47_var[232384]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 22; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_18_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_18_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_47_var[101376]));
  for (int32_t c_outer_c = 0; c_outer_c < 22; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_47_var[221184]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 400) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 5)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 1152) + (ax1_inner_c * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 1152) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 400) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 1152) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 400)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 1152) + cse_var_13) + cse_var_12) + c_inner_c_2) + 768);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 800)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 88; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_14 = (((((ax1 >> 2) * 1152) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_18_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 288) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_18_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_5(float* p0, float* T_divide, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_58_var[502912]));
  void* fused_constant_22_let = (&(global_const_workspace_58_var[434208]));
  void* data_vec_let = (&(global_workspace_59_var[101376]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vw = 0; vw < 3; ++vw) {
          ((float*)data_vec_let)[((((h * 1536) + (w * 48)) + (ci * 3)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 3)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
        void* conv_let = (&(global_workspace_59_var[119808]));
        for (int32_t vc_init = 0; vc_init < 11; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 11)] = 0.000000e+00f;
          ((float*)conv_let)[(vc_init + 22)] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vc = 0; vc < 11; ++vc) {
            int32_t cse_var_4 = (vc + 22);
            int32_t cse_var_3 = (vc + 11);
            int32_t cse_var_2 = (((ax1_outer * 176) + (ci_1 * 11)) + vc);
            int32_t cse_var_1 = (((ax2_outer * 1536) + (ax3_outer * 48)) + (ci_1 * 3));
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[cse_var_1] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(cse_var_1 + 1)] * ((float*)fused_constant_22_let)[cse_var_2]));
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(cse_var_1 + 2)] * ((float*)fused_constant_22_let)[cse_var_2]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 11; ++ax1_inner) {
          int32_t cse_var_5 = ((ax1_outer * 11) + ax1_inner);
          float __1 = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_5]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 3168) + (ax1_inner * 288)) + (ax2_outer * 96)) + (ax3_outer * 3))] = (((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 11; ++ax1_inner_1) {
          int32_t cse_var_7 = (ax1_inner_1 + 11);
          int32_t cse_var_6 = ((ax1_outer * 11) + ax1_inner_1);
          float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_6]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 3168) + (ax1_inner_1 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 1)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 11; ++ax1_inner_2) {
          int32_t cse_var_9 = (ax1_inner_2 + 22);
          int32_t cse_var_8 = ((ax1_outer * 11) + ax1_inner_2);
          float __5 = (((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_8]) + 3.000000e+00f;
          float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 3168) + (ax1_inner_2 * 288)) + (ax2_outer * 96)) + (ax3_outer * 3)) + 2)] = (((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_8]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_6(float* p0, float* T_divide, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_60_var[502560]));
  void* fused_constant_23_let = (&(global_const_workspace_60_var[373344]));
  void* fused_constant_23_global_global_let = (&(global_workspace_61_var[239616]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 22; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_23_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_23_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_61_var[101376]));
  for (int32_t c_outer_c = 0; c_outer_c < 22; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_61_var[202752]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 400) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 5)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 1152) + (ax1_inner_c * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1152) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 1152) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 400) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 1152) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 400)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 1152) + cse_var_13) + cse_var_12) + c_inner_c_2) + 768);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 400) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 800)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 88; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_14 = (((((ax1 >> 2) * 1152) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 288) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_7(float* p0, float* T_divide, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_70_var[506432]));
  void* fused_constant_27_let = (&(global_const_workspace_70_var[471808]));
  void* data_vec_let = (&(global_workspace_71_var[46080]));
  for (int32_t w = 0; w < 24; ++w) {
    for (int32_t ci = 0; ci < 16; ++ci) {
      for (int32_t vh = 0; vh < 3; ++vh) {
        for (int32_t vw = 0; vw < 4; ++vw) {
          ((float*)data_vec_let)[((((w * 192) + (ci * 12)) + (vh * 4)) + vw)] = p0[((((ci * 288) + (vh * 96)) + (w * 4)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 10; ++ax1_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 24; ++ax3_outer) {
      void* conv_let = (&(global_workspace_71_var[64512]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 4; ++vw_init) {
          ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 4; ++vw_init_1) {
          ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 16)] = 0.000000e+00f;
        }
        for (int32_t vw_init_2 = 0; vw_init_2 < 4; ++vw_init_2) {
          ((float*)conv_let)[(((vw_init_2 * 4) + vc_init) + 32)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 4) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax3_outer * 192) + (ci_1 * 12)) + vw_1)] * ((float*)fused_constant_27_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_2 = 0; vw_2 < 4; ++vw_2) {
            int32_t cse_var_2 = (((vw_2 * 4) + vc) + 16);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax3_outer * 192) + (ci_1 * 12)) + vw_2) + 4)] * ((float*)fused_constant_27_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_3 = 0; vw_3 < 4; ++vw_3) {
            int32_t cse_var_3 = (((vw_3 * 4) + vc) + 32);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax3_outer * 192) + (ci_1 * 12)) + vw_3) + 8)] * ((float*)fused_constant_27_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_5 = ((ax3_inner * 4) + ax1_inner);
          int32_t cse_var_4 = ((ax1_outer * 4) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_4]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 1152) + (ax1_inner * 288)) + (ax3_outer * 4)) + ax3_inner)] = (((((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_4]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 4; ++ax3_inner_1) {
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          int32_t cse_var_7 = ((ax1_outer * 4) + ax1_inner_1);
          int32_t cse_var_6 = (((ax3_inner_1 * 4) + ax1_inner_1) + 16);
          float __3 = (((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_7]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 1152) + (ax1_inner_1 * 288)) + (ax3_outer * 4)) + ax3_inner_1) + 96)] = (((((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_7]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 4; ++ax3_inner_2) {
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_2);
          int32_t cse_var_8 = (((ax3_inner_2 * 4) + ax1_inner_2) + 32);
          float __5 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_9]) + 3.000000e+00f;
          float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 1152) + (ax1_inner_2 * 288)) + (ax3_outer * 4)) + ax3_inner_2) + 192)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_9]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_8(float* p0, float* T_divide, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_72_var[506272]));
  void* fused_constant_28_let = (&(global_const_workspace_72_var[455904]));
  void* fused_constant_28_global_global_let = (&(global_workspace_73_var[97760]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 20; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 50);
          ((float*)fused_constant_28_global_global_let)[(((cse_var_1 + (ax2_c * 10)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_28_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_73_var[46080]));
  for (int32_t c_outer_c = 0; c_outer_c < 20; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_73_var[92160]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 100; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 200) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 5)) && (2 <= ax3_c_1)) && (ax3_c_1 < 98)) ? p0[(((((c_outer_c * 576) + (ax1_inner_c * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 194)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 96; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 576) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (j_c_outer * 2)) + c_inner_c_init_1) + 192)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 576) + (j_c_outer * 2)) + c_inner_c_init_2) + 384)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_outer * 2);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = (((c_outer_c * 576) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 200) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_28_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_outer * 2);
            int32_t cse_var_6 = (dj * 2);
            int32_t cse_var_5 = ((((c_outer_c * 576) + cse_var_7) + c_inner_c_1) + 192);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 200) + cse_var_7) + cse_var_6) + c_inner_c_1) + 200)] * ((float*)fused_constant_28_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_10 = (j_c_outer * 2);
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = ((((c_outer_c * 576) + cse_var_10) + c_inner_c_2) + 384);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 200) + cse_var_10) + cse_var_9) + c_inner_c_2) + 400)] * ((float*)fused_constant_28_global_global_let)[((((c_outer_c * 50) + (di * 10)) + cse_var_9) + c_inner_c_2)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 40; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        int32_t cse_var_11 = (((((ax1 >> 1) * 576) + (ax2 * 192)) + (ax3 * 2)) + (ax1 & 1));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_28_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 288) + (ax2 * 96)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_28_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_9(float* p0, float* T_divide, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_84_var[505920]));
  void* fused_constant_32_let = (&(global_const_workspace_84_var[466176]));
  void* data_vec_let = (&(global_workspace_85_var[55296]));
  for (int32_t h = 0; h < 3; ++h) {
    for (int32_t w = 0; w < 12; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vw = 0; vw < 8; ++vw) {
          ((float*)data_vec_let)[((((h * 1536) + (w * 128)) + (ci * 8)) + vw)] = p0[((((ci * 288) + (h * 96)) + (w * 8)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 6; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 3; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 12; ++ax3_outer) {
        void* conv_let = (&(global_workspace_85_var[73728]));
        for (int32_t vw_init = 0; vw_init < 8; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
            ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 8; ++vw_1) {
            for (int32_t vc = 0; vc < 8; ++vc) {
              int32_t cse_var_2 = (ci_1 * 8);
              int32_t cse_var_1 = ((vw_1 * 8) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1536) + (ax3_outer * 128)) + cse_var_2) + vw_1)] * ((float*)fused_constant_32_let)[(((ax1_outer * 128) + cse_var_2) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 8; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
            int32_t cse_var_4 = ((ax3_inner * 8) + ax1_inner);
            int32_t cse_var_3 = ((ax1_outer * 8) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_3]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 2304) + (ax1_inner * 288)) + (ax2_outer * 96)) + (ax3_outer * 8)) + ax3_inner)] = (((((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_3]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_4_var[508848]));
  void* fused_constant_1_let = (&(global_const_workspace_4_var[504864]));
  void* data_vec_let = (&(global_workspace_5_var[73728]));
  for (int32_t h = 0; h < 24; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 768) + (w * 48)) + (ci * 6)) + vw)] = p0[((((ci * 2304) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 24; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_5_var[147456]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 768) + (ax3_outer * 48)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_1_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            float __1 = ((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_1_let)[((ax1_outer * 4) + ax1_inner)];
            T_relu[(((((ax1_outer * 9216) + (ax1_inner * 2304)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_6_var[508752]));
  void* fused_constant_2_let = (&(global_const_workspace_6_var[504320]));
  void* fused_constant_2_global_global_let = (&(global_workspace_7_var[124704]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 2; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_2_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_2_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[73728]));
  for (int32_t c_outer_c = 0; c_outer_c < 2; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 3; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_7_var[110592]));
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
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 392) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_9 = (j_c_outer * 8);
                int32_t cse_var_8 = (j_c_inner_1 * 4);
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 4608) + (i_c_outer * 1536)) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 784)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_13 = (j_c_outer * 8);
                int32_t cse_var_12 = (j_c_inner_2 * 4);
                int32_t cse_var_11 = (dj * 4);
                int32_t cse_var_10 = ((((((c_outer_c * 4608) + (i_c_outer * 1536)) + cse_var_13) + cse_var_12) + c_inner_c_2) + 768);
                ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 1568)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_17 = (j_c_outer * 8);
                int32_t cse_var_16 = (j_c_inner_3 * 4);
                int32_t cse_var_15 = (dj * 4);
                int32_t cse_var_14 = ((((((c_outer_c * 4608) + (i_c_outer * 1536)) + cse_var_17) + cse_var_16) + c_inner_c_3) + 1152);
                ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 2352)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        float __1 = ((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 4608) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_2_let)[ax1];
        T_relu[(((ax1 * 1152) + (ax2 * 96)) + ax3)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_10(float* p0, float* T_relu, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_76_var[508608]));
  void* fused_constant_29_let = (&(global_const_workspace_76_var[484224]));
  void* data_vec_let = (&(global_workspace_77_var[46080]));
  for (int32_t ci = 0; ci < 40; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 5; ++ax1_outer) {
    void* conv_let = (&(global_workspace_77_var[46288]));
    for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 40; ++ci_1) {
      for (int32_t vc = 0; vc < 2; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_29_let)[(((ax1_outer * 80) + (ci_1 * 2)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 2) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_29_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_11(float* p0, float* T_relu, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_90_var[508560]));
  void* fused_constant_34_let = (&(global_const_workspace_90_var[476672]));
  void* data_vec_let = (&(global_workspace_91_var[55296]));
  for (int32_t ci = 0; ci < 48; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 3; ++ax1_outer) {
    void* conv_let = (&(global_workspace_91_var[55536]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_34_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_12(float* p0, float* T_relu, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_104_var[507616]));
  void* fused_constant_39_let = (&(global_const_workspace_104_var[352128]));
  void* data_vec_let = (&(global_workspace_105_var[79872]));
  for (int32_t ci = 0; ci < 104; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 13; ++ax1_outer) {
    void* conv_let = (&(global_workspace_105_var[80400]));
    for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 104; ++ci_1) {
      for (int32_t vc = 0; vc < 2; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_39_let)[(((ax1_outer * 208) + (ci_1 * 2)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 2) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_13(float* p0, float* T_relu, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_118_var[505328]));
  void* fused_constant_44_let = (&(global_const_workspace_118_var[120000]));
  void* data_vec_let = (&(global_workspace_119_var[153600]));
  for (int32_t ci = 0; ci < 200; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 10; ++ax1_outer) {
    void* conv_let = (&(global_workspace_119_var[154608]));
    for (int32_t vc_init = 0; vc_init < 5; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 200; ++ci_1) {
      for (int32_t vc = 0; vc < 5; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_44_let)[(((ax1_outer * 1000) + (ci_1 * 5)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 5; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 5) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_44_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_14(float* p0, float* T_relu, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_conv2d_constant_49_let = (&(global_const_workspace_130_var[505120]));
  void* fused_constant_49_let = (&(global_const_workspace_130_var[40000]));
  void* data_vec_let = (&(global_workspace_131_var[153600]));
  for (int32_t ci = 0; ci < 200; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 10; ++ax1_outer) {
    void* conv_let = (&(global_workspace_131_var[154608]));
    for (int32_t vc_init = 0; vc_init < 5; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 200; ++ci_1) {
      for (int32_t vc = 0; vc < 5; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_49_let)[(((ax1_outer * 1000) + (ci_1 * 5)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 5; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 5) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_49_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_2(float* p0, float* T_relu, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_10_var[508928]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[508496]));
  void* data_vec_let = (&(global_workspace_11_var[36896]));
  for (int32_t ci = 0; ci < 8; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  void* conv_let = (&(global_workspace_11_var[36880]));
  for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
    ((float*)conv_let)[vc_init] = 0.000000e+00f;
  }
  for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
    for (int32_t vc = 0; vc < 2; ++vc) {
      ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_3_let)[((ci_1 * 2) + vc)]));
    }
  }
  for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
    float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_3_let)[ax1_inner];
    T_relu[ax1_inner] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_3(float* p0, float* T_relu, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_18_var[507824]));
  void* fused_constant_6_let = (&(global_const_workspace_18_var[500192]));
  void* data_vec_let = (&(global_workspace_19_var[110592]));
  for (int32_t h = 0; h < 12; ++h) {
    for (int32_t w = 0; w < 48; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          ((float*)data_vec_let)[((((h * 768) + (w * 16)) + (ci * 2)) + vw)] = p0[((((ci * 1152) + (h * 96)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 3; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 12; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 48; ++ax3_outer) {
        void* conv_let = (&(global_workspace_19_var[147456]));
        for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
            ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
            for (int32_t vc = 0; vc < 8; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 8) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 768) + (ax3_outer * 16)) + (ci_1 * 2)) + vw_1)] * ((float*)fused_constant_6_let)[(((ax1_outer * 64) + (ci_1 * 8)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
            float __1 = ((float*)conv_let)[((ax3_inner * 8) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 8) + ax1_inner)];
            T_relu[(((((ax1_outer * 9216) + (ax1_inner * 1152)) + (ax2_outer * 96)) + (ax3_outer * 2)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_4(float* p0, float* T_relu, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_20_var[507728]));
  void* fused_constant_7_let = (&(global_const_workspace_20_var[492096]));
  void* fused_constant_7_global_global_let = (&(global_workspace_21_var[176864]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 6; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_7_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_7_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_21_var[110592]));
  for (int32_t c_outer_c = 0; c_outer_c < 6; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_21_var[165888]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 392) + (ax3_c_1 * 4)) + ax1_inner_c)] = ((((1 <= ((i_c_outer * 6) + ax2_c_1)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[((((((c_outer_c * 4608) + (ax1_inner_c * 1152)) + (i_c_outer * 576)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 2304) + (i_c_outer * 1152)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 2304) + (i_c_outer * 1152)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 2304) + (i_c_outer * 1152)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_5 = (j_c_outer * 8);
                int32_t cse_var_4 = (j_c_inner * 4);
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 2304) + (i_c_outer * 1152)) + cse_var_5) + cse_var_4) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 392) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_9 = (j_c_outer * 8);
                int32_t cse_var_8 = (j_c_inner_1 * 4);
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 2304) + (i_c_outer * 1152)) + cse_var_9) + cse_var_8) + c_inner_c_1) + 384);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 784)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_13 = (j_c_outer * 8);
                int32_t cse_var_12 = (j_c_inner_2 * 4);
                int32_t cse_var_11 = (dj * 4);
                int32_t cse_var_10 = ((((((c_outer_c * 2304) + (i_c_outer * 1152)) + cse_var_13) + cse_var_12) + c_inner_c_2) + 768);
                ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 1568)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 24; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        float __1 = ((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 2304) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_7_let)[ax1];
        T_relu[(((ax1 * 576) + (ax2 * 96)) + ax3)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_5(float* p0, float* T_relu, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_24_var[506592]));
  void* fused_constant_9_let = (&(global_const_workspace_24_var[486976]));
  void* data_vec_let = (&(global_workspace_25_var[73728]));
  for (int32_t h = 0; h < 6; ++h) {
    for (int32_t w = 0; w < 16; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        for (int32_t vw = 0; vw < 6; ++vw) {
          ((float*)data_vec_let)[((((h * 768) + (w * 48)) + (ci * 6)) + vw)] = p0[((((ci * 576) + (h * 96)) + (w * 6)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 6; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 16; ++ax3_outer) {
        void* conv_let = (&(global_workspace_25_var[92160]));
        for (int32_t vw_init = 0; vw_init < 6; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 6; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 768) + (ax3_outer * 48)) + (ci_1 * 6)) + vw_1)] * ((float*)fused_constant_9_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 6; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            float __1 = ((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner)];
            T_relu[(((((ax1_outer * 2304) + (ax1_inner * 576)) + (ax2_outer * 96)) + (ax3_outer * 6)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_6(float* p0, float* T_relu, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_26_var[507488]));
  void* fused_constant_10_let = (&(global_const_workspace_26_var[485824]));
  void* fused_constant_10_global_global_let = (&(global_workspace_27_var[155296]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 8; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_10_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_10_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_27_var[73728]));
  for (int32_t c_outer_c = 0; c_outer_c < 8; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 2; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_27_var[147456]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 5; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 98; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 3) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 392) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 7)) && (1 <= ax3_c_1)) && (ax3_c_1 < 97)) ? p0[((((((c_outer_c * 2304) + (ax1_inner_c * 576)) + (i_c_outer * 288)) + (ax2_c_1 * 96)) + ax3_c_1) - 97)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 48; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 2304) + (i_c_outer * 1152)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 2304) + (i_c_outer * 1152)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 384)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 2304) + (i_c_outer * 1152)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 768)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 2304) + (i_c_outer * 1152)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 392) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 2304) + (i_c_outer * 1152)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 384);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 392)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 2304) + (i_c_outer * 1152)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 768);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 392) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 784)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 96; ++ax3) {
        float __1 = ((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 2304) + (ax2 * 384)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_10_let)[ax1];
        T_relu[(((ax1 * 576) + (ax2 * 96)) + ax3)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_7(float* p0, float* T_relu, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_36_var[508784]));
  void* fused_constant_14_let = (&(global_const_workspace_36_var[489024]));
  void* data_vec_let = (&(global_workspace_37_var[36864]));
  for (int32_t ci = 0; ci < 32; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    void* conv_let = (&(global_workspace_37_var[37024]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_14_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_8(float* p0, float* T_relu, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_50_var[508016]));
  void* fused_constant_19_let = (&(global_const_workspace_50_var[414176]));
  void* data_vec_let = (&(global_workspace_51_var[101376]));
  for (int32_t ci = 0; ci < 88; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    void* conv_let = (&(global_workspace_51_var[101824]));
    for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 88; ++ci_1) {
      for (int32_t vc = 0; vc < 2; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_19_let)[(((ax1_outer * 176) + (ci_1 * 2)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 2) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_19_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_9(float* p0, float* T_relu, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_62_var[507920]));
  void* fused_constant_24_let = (&(global_const_workspace_62_var[398688]));
  void* data_vec_let = (&(global_workspace_63_var[101376]));
  for (int32_t ci = 0; ci < 88; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    void* conv_let = (&(global_workspace_63_var[101824]));
    for (int32_t vc_init = 0; vc_init < 2; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 88; ++ci_1) {
      for (int32_t vc = 0; vc < 2; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_24_let)[(((ax1_outer * 176) + (ci_1 * 2)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 2; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 2) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_24_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_dense_add(float* p0, float* T_add, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* fused_nn_dense_constant_let = (&(global_const_workspace_144_var[508912]));
  void* fused_constant_53_let = (&(global_const_workspace_144_var[481024]));
  void* T_matmul_NT_let = (&(global_workspace_145_var[800]));
  for (int32_t j = 0; j < 2; ++j) {
    ((float*)T_matmul_NT_let)[j] = 0.000000e+00f;
    for (int32_t k = 0; k < 200; ++k) {
      ((float*)T_matmul_NT_let)[j] = (((float*)T_matmul_NT_let)[j] + (p0[k] * ((float*)fused_constant_53_let)[((j * 200) + k)]));
    }
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    T_add[ax1] = (((float*)T_matmul_NT_let)[ax1] + ((float*)fused_nn_dense_constant_let)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_9_var[36896]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 12; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 1152) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 8; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 8.680556e-04f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_1(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_35_var[36864]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 288) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 32; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 3.472222e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_2(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_49_var[101376]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 88; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 288) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 88; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 3.472222e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_3(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_75_var[46080]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 40; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 288) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 40; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 3.472222e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_4(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_89_var[55296]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 48; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 3; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 288) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 48; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 3.472222e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_5(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_103_var[79872]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 104; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 192) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 104; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 5.208333e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_6(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_117_var[153600]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 200; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 96; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 192) + (rv0 * 96)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 200; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 5.208333e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_7(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_143_var[800]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 200; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv1 = 0; rv1 < 48; ++rv1) {
      ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[((ax0_ax1_fused * 48) + rv1)]);
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 200; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 2.083333e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_max_pool2d(float* p0, float* pool_max, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  for (int32_t ax1 = 0; ax1 < 200; ++ax1) {
    for (int32_t ax3 = 0; ax3 < 48; ++ax3) {
      pool_max[((ax1 * 48) + ax3)] = -3.402823e+38f;
      for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
        for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
          int32_t cse_var_1 = ((ax1 * 48) + ax3);
          float __1 = pool_max[cse_var_1];
          float __2 = p0[((((ax1 * 192) + (rv0 * 96)) + (ax3 * 2)) + rv1)];
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
TVM_DLL int32_t tvmgen_text_angle_cls_fused_nn_softmax(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_147_var[32]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 2; ++k) {
    float __1 = ((float*)T_softmax_maxelem_let)[0];
    float __2 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
  }
  void* T_softmax_exp_let = (&(global_workspace_147_var[16]));
  for (int32_t i1 = 0; i1 < 2; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  void* T_softmax_expsum_let = (&(global_workspace_147_var[0]));
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 2; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    T_softmax_norm[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_constant_5_let = (&(global_const_workspace_14_var[504608]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 16; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused & 7);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_5_let)[((((ax0_ax1_fused_ax2_fused >> 3) * 32) + (ax4_inner * 8)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_constant_16_let = (&(global_const_workspace_40_var[478976]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 32; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 16) + (ax4_outer * 4)) + ax4_inner)] = (((float*)fused_constant_16_let)[(((ax4_outer * 128) + (ax4_inner * 32)) + ax0_ax1_fused_ax2_fused)] * p0[ax0_ax1_fused_ax2_fused]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_2(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_constant_21_let = (&(global_const_workspace_54_var[439840]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 88; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 16) + (ax4_outer * 4)) + ax4_inner)] = (((float*)fused_constant_21_let)[(((ax4_outer * 352) + (ax4_inner * 88)) + ax0_ax1_fused_ax2_fused)] * p0[ax0_ax1_fused_ax2_fused]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_3(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_constant_26_let = (&(global_const_workspace_66_var[428576]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 88; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 16) + (ax4_outer * 4)) + ax4_inner)] = (((float*)fused_constant_26_let)[(((ax4_outer * 352) + (ax4_inner * 88)) + ax0_ax1_fused_ax2_fused)] * p0[ax0_ax1_fused_ax2_fused]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_4(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_constant_31_let = (&(global_const_workspace_80_var[469248]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 40; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 16) + (ax4_outer * 4)) + ax4_inner)] = (((float*)fused_constant_31_let)[(((ax4_outer * 160) + (ax4_inner * 40)) + ax0_ax1_fused_ax2_fused)] * p0[ax0_ax1_fused_ax2_fused]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_5(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_constant_36_let = (&(global_const_workspace_94_var[463104]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 48; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 16) + (ax4_outer * 4)) + ax4_inner)] = (((float*)fused_constant_36_let)[(((ax4_outer * 192) + (ax4_inner * 48)) + ax0_ax1_fused_ax2_fused)] * p0[ax0_ax1_fused_ax2_fused]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_6(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_constant_41_let = (&(global_const_workspace_108_var[328000]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 832; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 104);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_41_let)[((((ax0_ax1_fused_ax2_fused / 104) * 416) + (ax4_inner * 104)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_7(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_constant_46_let = (&(global_const_workspace_122_var[236800]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1600; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 200);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_46_let)[((((ax0_ax1_fused_ax2_fused / 200) * 800) + (ax4_inner * 200)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_8(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* fused_constant_51_let = (&(global_const_workspace_134_var[185600]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1600; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 200);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_51_let)[((((ax0_ax1_fused_ax2_fused / 200) * 800) + (ax4_inner * 200)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_text_angle_cls___tvm_main__(float* x_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_61_let = (&(global_workspace_1_var[153600]));
  void* sid_59_let = (&(global_workspace_1_var[154400]));
  void* sid_58_let = (&(global_workspace_1_var[0]));
  void* sid_60_let = (&(global_workspace_1_var[154400]));
  void* sid_45_let = (&(global_workspace_1_var[55488]));
  void* sid_43_let = (&(global_workspace_1_var[0]));
  void* sid_41_let = (&(global_workspace_1_var[92160]));
  void* sid_40_let = (&(global_workspace_1_var[46080]));
  void* sid_47_let = (&(global_workspace_1_var[55296]));
  void* sid_39_let = (&(global_workspace_1_var[46240]));
  void* sid_54_let = (&(global_workspace_1_var[79872]));
  void* sid_53_let = (&(global_workspace_1_var[80288]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_63_let = (&(global_workspace_1_var[332800]));
  void* sid_33_let = (&(global_workspace_1_var[101376]));
  void* sid_62_let = (&(global_workspace_1_var[307200]));
  void* sid_46_let = (&(global_workspace_1_var[55488]));
  void* sid_32_let = (&(global_workspace_1_var[101728]));
  void* sid_14_let = (&(global_workspace_1_var[73728]));
  void* sid_30_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[202752]));
  void* sid_13_let = (&(global_workspace_1_var[147456]));
  void* sid_57_let = (&(global_workspace_1_var[0]));
  void* sid_48_let = (&(global_workspace_1_var[129024]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[36864]));
  void* sid_68_let = (&(global_workspace_1_var[153600]));
  void* sid_7_let = (&(global_workspace_1_var[73728]));
  void* sid_10_let = (&(global_workspace_1_var[55296]));
  void* sid_1_let = (&(global_workspace_1_var[179712]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[36992]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_52_let = (&(global_workspace_1_var[80288]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[221184]));
  void* sid_56_let = (&(global_workspace_1_var[357376]));
  void* sid_5_let = (&(global_workspace_1_var[36864]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[36864]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_55_let = (&(global_workspace_1_var[159744]));
  void* sid_31_let = (&(global_workspace_1_var[101728]));
  void* sid_36_let = (&(global_workspace_1_var[0]));
  void* sid_19_let = (&(global_workspace_1_var[36864]));
  void* sid_38_let = (&(global_workspace_1_var[46240]));
  void* sid_44_let = (&(global_workspace_1_var[0]));
  void* sid_34_let = (&(global_workspace_1_var[239616]));
  void* sid_28_let = (&(global_workspace_1_var[221184]));
  void* sid_51_let = (&(global_workspace_1_var[0]));
  void* sid_50_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[202752]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[36992]));
  void* sid_20_let = (&(global_workspace_1_var[73728]));
  void* sid_24_let = (&(global_workspace_1_var[101728]));
  void* sid_29_let = (&(global_workspace_1_var[0]));
  void* sid_25_let = (&(global_workspace_1_var[101728]));
  void* sid_26_let = (&(global_workspace_1_var[101376]));
  void* sid_42_let = (&(global_workspace_1_var[110592]));
  void* sid_27_let = (&(global_workspace_1_var[239616]));
  void* sid_64_let = (&(global_workspace_1_var[0]));
  void* sid_65_let = (&(global_workspace_1_var[0]));
  void* sid_66_let = (&(global_workspace_1_var[154400]));
  void* sid_67_let = (&(global_workspace_1_var[154400]));
  void* sid_69_let = (&(global_workspace_1_var[307200]));
  void* sid_70_let = (&(global_workspace_1_var[0]));
  void* sid_71_let = (&(global_workspace_1_var[0]));
  void* sid_72_let = (&(global_workspace_1_var[153600]));
  void* sid_74_let = (&(global_workspace_1_var[0]));
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide(x_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_1(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_2(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add(sid_3_let, sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_3(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_4(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_1(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_5(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_6(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add(sid_13_let, sid_11_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_1(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_2(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_1(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_7(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_1(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_1(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_2(sid_16_let, sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_3(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_4(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_2(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_8(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_2(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_2(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_1(sid_23_let, sid_27_let, sid_21_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_5(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_6(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_2(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_9(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_3(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_3(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_2(sid_30_let, sid_34_let, sid_28_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_7(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_8(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_3(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_10(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_4(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_4(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_3(sid_37_let, sid_41_let, sid_35_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_9(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_10(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_4(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_11(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_5(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_5(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_4(sid_44_let, sid_48_let, sid_42_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_11(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_12(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_5(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_12(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_6(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_6(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_3(sid_51_let, sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_13(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_14(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_6(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_13(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_7(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_7(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_5(sid_58_let, sid_62_let, sid_56_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_15(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_16(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_6(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_nn_relu_14(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_8(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_squeeze_expand_dims_multiply_layout_transform_8(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_6(sid_65_let, sid_69_let, sid_63_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_conv2d_add_add_clip_multiply_divide_17(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_max_pool2d(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_global_avg_pool2d_7(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_dense_add(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_text_angle_cls_fused_nn_softmax(sid_74_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

