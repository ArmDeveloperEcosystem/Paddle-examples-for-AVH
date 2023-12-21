// tvm target: c -keys=arm_cpu,cpu -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_16_var[6655088]));
  void* data_vec_let = (&(global_workspace_17_var[6272]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 224) + (w * 32)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 196) + (h * 28)) + (vh * 14)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_17_var[12800]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 224) + (ax3_outer * 32)) + cse_var_2) + vw_1)] * p1[(((ax1_outer * 32) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 224) + (ax3_outer * 32)) + cse_var_4) + vw_2) + 2)] * p1[(((ax1_outer * 32) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 784) + (ax1_inner * 196)) + (ax2_outer * 28)) + (ax3_outer * 2)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner)]);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            T_add[((((((ax1_outer * 784) + (ax1_inner_1 * 196)) + (ax2_outer * 28)) + (ax3_outer * 2)) + ax3_inner_1) + 14)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_5_let)[((ax1_outer * 4) + ax1_inner_1)]);
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_1(float* p0, float* T_add, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_22_var[6655056]));
  void* fused_constant_8_let = (&(global_const_workspace_22_var[6645824]));
  void* data_vec_let = (&(global_workspace_23_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 24; ++ci) {
        ((float*)data_vec_let)[(((h * 168) + (w * 24)) + ci)] = p0[(((ci * 49) + (h * 7)) + w)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_23_var[4704]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 24; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 168) + (ax3_outer * 24)) + ci_1)] * ((float*)fused_constant_8_let)[(((ax1_outer * 96) + (ci_1 * 4)) + vc)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          T_add[((((ax1_outer * 196) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_outer)] = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_8_let)[((ax1_outer * 4) + ax1_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_2(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_42_var[6654768]));
  void* data_vec_let = (&(global_workspace_43_var[4096]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 32; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 256) + (w * 128)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_43_var[0]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 256) + (ax3_outer * 128)) + cse_var_2) + vw_1)] * p1[(((ax1_outer * 128) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 256) + (ax3_outer * 128)) + cse_var_4) + vw_2) + 2)] * p1[(((ax1_outer * 128) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner)]);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            T_add[((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_16_let)[((ax1_outer * 4) + ax1_inner_1)]);
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_3(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_110_var[6653376]));
  void* data_vec_let = (&(global_workspace_111_var[14976]));
  for (int32_t ci = 0; ci < 104; ++ci) {
    for (int32_t vh = 0; vh < 2; ++vh) {
      for (int32_t vw = 0; vw < 2; ++vw) {
        int32_t cse_var_1 = (((ci * 4) + (vh * 2)) + vw);
        ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    void* conv_let = (&(global_workspace_111_var[13312]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t ci_1 = 0; ci_1 < 104; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          int32_t cse_var_3 = (ci_1 * 4);
          int32_t cse_var_2 = ((vw_1 * 4) + vc);
          ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(cse_var_3 + vw_1)] * p1[(((ax1_outer * 416) + cse_var_3) + vc)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_5 = (ci_1 * 4);
          int32_t cse_var_4 = (((vw_2 * 4) + vc) + 8);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((cse_var_5 + vw_2) + 2)] * p1[(((ax1_outer * 416) + cse_var_5) + vc)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        T_add[(((ax1_outer * 16) + (ax1_inner * 4)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_41_let)[((ax1_outer * 4) + ax1_inner)]);
      }
    }
    for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        T_add[((((ax1_outer * 16) + (ax1_inner_1 * 4)) + ax3_inner_1) + 2)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_41_let)[((ax1_outer * 4) + ax1_inner_1)]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_28_var[6655216]));
  void* fused_constant_11_let = (&(global_const_workspace_28_var[6637472]));
  void* data_vec_let = (&(global_workspace_29_var[0]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 32; ++ci) {
        ((float*)data_vec_let)[(((h * 224) + (w * 32)) + ci)] = p0[(((ci * 49) + (h * 7)) + w)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_29_var[7840]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 224) + (ax3_outer * 32)) + ci_1)] * ((float*)fused_constant_11_let)[(((ax1_outer * 128) + (ci_1 * 4)) + vc)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_1 = ((((ax1_outer * 196) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_outer);
          T_add[cse_var_1] = (p1[cse_var_1] + (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_11_let)[((ax1_outer * 4) + ax1_inner)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_1(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_56_var[6654704]));
  void* data_vec_let = (&(global_workspace_57_var[11264]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 88; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 704) + (w * 352)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_57_var[0]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 88; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 704) + (ax3_outer * 352)) + cse_var_2) + vw_1)] * p1[(((ax1_outer * 352) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 704) + (ax3_outer * 352)) + cse_var_4) + vw_2) + 2)] * p1[(((ax1_outer * 352) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_21_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4);
            T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_21_let)[((ax1_outer * 4) + ax1_inner_1)]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_2(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_68_var[6654640]));
  void* data_vec_let = (&(global_workspace_69_var[11264]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 88; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 704) + (w * 352)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_69_var[0]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 88; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 704) + (ax3_outer * 352)) + cse_var_2) + vw_1)] * p1[(((ax1_outer * 352) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 704) + (ax3_outer * 352)) + cse_var_4) + vw_2) + 2)] * p1[(((ax1_outer * 352) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4);
            T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_26_let)[((ax1_outer * 4) + ax1_inner_1)]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_3(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_82_var[6654576]));
  void* data_vec_let = (&(global_workspace_83_var[5120]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 40; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 320) + (w * 160)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_83_var[0]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 40; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 320) + (ax3_outer * 160)) + cse_var_2) + vw_1)] * p1[(((ax1_outer * 160) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 320) + (ax3_outer * 160)) + cse_var_4) + vw_2) + 2)] * p1[(((ax1_outer * 160) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4);
            T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_31_let)[((ax1_outer * 4) + ax1_inner_1)]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_4(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_96_var[6654512]));
  void* data_vec_let = (&(global_workspace_97_var[6144]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 48; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 384) + (w * 192)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_97_var[1024]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 384) + (ax3_outer * 192)) + cse_var_2) + vw_1)] * p1[(((ax1_outer * 192) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 384) + (ax3_outer * 192)) + cse_var_4) + vw_2) + 2)] * p1[(((ax1_outer * 192) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_5 = (((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner);
            T_add[cse_var_5] = (p2[cse_var_5] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_36_let)[((ax1_outer * 4) + ax1_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4);
            T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_36_let)[((ax1_outer * 4) + ax1_inner_1)]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_5(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_124_var[6653248]));
  void* data_vec_let = (&(global_workspace_125_var[28800]));
  for (int32_t ci = 0; ci < 200; ++ci) {
    for (int32_t vh = 0; vh < 2; ++vh) {
      for (int32_t vw = 0; vw < 2; ++vw) {
        int32_t cse_var_1 = (((ci * 4) + (vh * 2)) + vw);
        ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    void* conv_let = (&(global_workspace_125_var[25600]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t ci_1 = 0; ci_1 < 200; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          int32_t cse_var_3 = (ci_1 * 4);
          int32_t cse_var_2 = ((vw_1 * 4) + vc);
          ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(cse_var_3 + vw_1)] * p1[(((ax1_outer * 800) + cse_var_3) + vc)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_5 = (ci_1 * 4);
          int32_t cse_var_4 = (((vw_2 * 4) + vc) + 8);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((cse_var_5 + vw_2) + 2)] * p1[(((ax1_outer * 800) + cse_var_5) + vc)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_6 = (((ax1_outer * 16) + (ax1_inner * 4)) + ax3_inner);
        T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_46_let)[((ax1_outer * 4) + ax1_inner)]));
      }
    }
    for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_7 = ((((ax1_outer * 16) + (ax1_inner_1 * 4)) + ax3_inner_1) + 2);
        T_add[cse_var_7] = (p2[cse_var_7] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_46_let)[((ax1_outer * 4) + ax1_inner_1)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_6(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_nn_conv2d_constant_51_let = (&(global_const_workspace_136_var[6653120]));
  void* data_vec_let = (&(global_workspace_137_var[28800]));
  for (int32_t ci = 0; ci < 200; ++ci) {
    for (int32_t vh = 0; vh < 2; ++vh) {
      for (int32_t vw = 0; vw < 2; ++vw) {
        int32_t cse_var_1 = (((ci * 4) + (vh * 2)) + vw);
        ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    void* conv_let = (&(global_workspace_137_var[26112]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t ci_1 = 0; ci_1 < 200; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          int32_t cse_var_3 = (ci_1 * 4);
          int32_t cse_var_2 = ((vw_1 * 4) + vc);
          ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(cse_var_3 + vw_1)] * p1[(((ax1_outer * 800) + cse_var_3) + vc)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_5 = (ci_1 * 4);
          int32_t cse_var_4 = (((vw_2 * 4) + vc) + 8);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((cse_var_5 + vw_2) + 2)] * p1[(((ax1_outer * 800) + cse_var_5) + vc)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_6 = (((ax1_outer * 16) + (ax1_inner * 4)) + ax3_inner);
        T_add[cse_var_6] = (p2[cse_var_6] + (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_51_let)[((ax1_outer * 4) + ax1_inner)]));
      }
    }
    for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_7 = ((((ax1_outer * 16) + (ax1_inner_1 * 4)) + ax3_inner_1) + 2);
        T_add[cse_var_7] = (p2[cse_var_7] + (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_51_let)[((ax1_outer * 4) + ax1_inner_1)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip(float* p0, float* compute, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_12_var[6655120]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[6654832]));
  void* data_vec_let = (&(global_workspace_13_var[6320]));
  for (int32_t ci = 0; ci < 2; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 2; ++i1_outer) {
    void* conv_let = (&(global_workspace_13_var[6304]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_1(float* p0, float* compute, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_38_var[6653504]));
  void* fused_constant_15_let = (&(global_const_workspace_38_var[6634400]));
  void* data_vec_let = (&(global_workspace_39_var[2048]));
  for (int32_t ci = 0; ci < 8; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 8; ++i1_outer) {
    void* conv_let = (&(global_workspace_39_var[2080]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_2(float* p0, float* compute, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_52_var[6649664]));
  void* fused_constant_20_let = (&(global_const_workspace_52_var[6550432]));
  void* data_vec_let = (&(global_workspace_53_var[5632]));
  for (int32_t ci = 0; ci < 22; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 22; ++i1_outer) {
    void* conv_let = (&(global_workspace_53_var[5728]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_3(float* p0, float* compute, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_64_var[6648608]));
  void* fused_constant_25_let = (&(global_const_workspace_64_var[6534944]));
  void* data_vec_let = (&(global_workspace_65_var[5632]));
  for (int32_t ci = 0; ci < 22; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 22; ++i1_outer) {
    void* conv_let = (&(global_workspace_65_var[5728]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_4(float* p0, float* compute, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_78_var[6652512]));
  void* fused_constant_30_let = (&(global_const_workspace_78_var[6629024]));
  void* data_vec_let = (&(global_workspace_79_var[2560]));
  for (int32_t ci = 0; ci < 10; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 10; ++i1_outer) {
    void* conv_let = (&(global_workspace_79_var[2608]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_5(float* p0, float* compute, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_92_var[6651936]));
  void* fused_constant_35_let = (&(global_const_workspace_92_var[6622368]));
  void* data_vec_let = (&(global_workspace_93_var[3072]));
  for (int32_t ci = 0; ci < 12; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 12; ++i1_outer) {
    void* conv_let = (&(global_workspace_93_var[3120]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_6(float* p0, float* compute, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_106_var[6647360]));
  void* fused_constant_40_let = (&(global_const_workspace_106_var[6485312]));
  void* data_vec_let = (&(global_workspace_107_var[0]));
  for (int32_t ci = 0; ci < 26; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 26; ++i1_outer) {
    void* conv_let = (&(global_workspace_107_var[112]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_7(float* p0, float* compute, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_120_var[6643424]));
  void* fused_constant_45_let = (&(global_const_workspace_120_var[6224000]));
  void* data_vec_let = (&(global_workspace_121_var[0]));
  for (int32_t ci = 0; ci < 50; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 25; ++i1_outer) {
    void* conv_let = (&(global_workspace_121_var[208]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_8(float* p0, float* compute, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_nn_conv2d_constant_50_let = (&(global_const_workspace_132_var[6641024]));
  void* fused_constant_50_let = (&(global_const_workspace_132_var[6144000]));
  void* data_vec_let = (&(global_workspace_133_var[0]));
  for (int32_t ci = 0; ci < 50; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 25; ++i1_outer) {
    void* conv_let = (&(global_workspace_133_var[208]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide(float* p0, float* T_divide, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_2_var[6655280]));
  void* fused_constant_let = (&(global_const_workspace_2_var[6639360]));
  void* data_vec_let = (&(global_workspace_3_var[0]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 14; ++w) {
      for (int32_t ci = 0; ci < 3; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 5; ++vw) {
            int32_t cse_var_1 = (w * 4);
            ((float*)data_vec_let)[(((((h * 1050) + (w * 75)) + (ci * 25)) + (vh * 5)) + vw)] = (((1 <= ((h * 4) + vh)) && (1 <= (cse_var_1 + vw))) ? p0[((((((ci * 3136) + (h * 224)) + (vh * 56)) + cse_var_1) + vw) - 57)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
        void* conv_let = (&(global_workspace_3_var[83888]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 3; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_1 * 2))] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_2 * 2)) + 10)] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
          }
          for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_4 = ((vw_3 * 4) + vc_1);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_3 * 2)) + 1)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_5 = (((vw_4 * 4) + vc_1) + 8);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_4 * 2)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
          }
          for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_6 = ((vw_5 * 4) + vc_2);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_5 * 2)) + 2)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_7 = (((vw_6 * 4) + vc_2) + 8);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_6 * 2)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
          }
          for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_8 = ((vw_7 * 4) + vc_3);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_7 * 2)) + 5)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_9 = (((vw_8 * 4) + vc_3) + 8);
              ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_8 * 2)) + 15)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
          }
          for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
            for (int32_t vw_9 = 0; vw_9 < 2; ++vw_9) {
              int32_t cse_var_10 = ((vw_9 * 4) + vc_4);
              ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_9 * 2)) + 6)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
            for (int32_t vw_10 = 0; vw_10 < 2; ++vw_10) {
              int32_t cse_var_11 = (((vw_10 * 4) + vc_4) + 8);
              ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_10 * 2)) + 16)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
          }
          for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
            for (int32_t vw_11 = 0; vw_11 < 2; ++vw_11) {
              int32_t cse_var_12 = ((vw_11 * 4) + vc_5);
              ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_11 * 2)) + 7)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
            for (int32_t vw_12 = 0; vw_12 < 2; ++vw_12) {
              int32_t cse_var_13 = (((vw_12 * 4) + vc_5) + 8);
              ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_12 * 2)) + 17)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
          }
          for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
            for (int32_t vw_13 = 0; vw_13 < 2; ++vw_13) {
              int32_t cse_var_14 = ((vw_13 * 4) + vc_6);
              ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_13 * 2)) + 10)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
            for (int32_t vw_14 = 0; vw_14 < 2; ++vw_14) {
              int32_t cse_var_15 = (((vw_14 * 4) + vc_6) + 8);
              ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_14 * 2)) + 20)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
          }
          for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
            for (int32_t vw_15 = 0; vw_15 < 2; ++vw_15) {
              int32_t cse_var_16 = ((vw_15 * 4) + vc_7);
              ((float*)conv_let)[cse_var_16] = (((float*)conv_let)[cse_var_16] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_15 * 2)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
            for (int32_t vw_16 = 0; vw_16 < 2; ++vw_16) {
              int32_t cse_var_17 = (((vw_16 * 4) + vc_7) + 8);
              ((float*)conv_let)[cse_var_17] = (((float*)conv_let)[cse_var_17] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_16 * 2)) + 21)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
          }
          for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
            for (int32_t vw_17 = 0; vw_17 < 2; ++vw_17) {
              int32_t cse_var_18 = ((vw_17 * 4) + vc_8);
              ((float*)conv_let)[cse_var_18] = (((float*)conv_let)[cse_var_18] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_17 * 2)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
            for (int32_t vw_18 = 0; vw_18 < 2; ++vw_18) {
              int32_t cse_var_19 = (((vw_18 * 4) + vc_8) + 8);
              ((float*)conv_let)[cse_var_19] = (((float*)conv_let)[cse_var_19] + (((float*)data_vec_let)[(((((ax2_outer * 1050) + (ax3_outer * 75)) + (ci_1 * 25)) + (vw_18 * 2)) + 22)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_21 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_let)[cse_var_20]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_let)[cse_var_20]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_23 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_22 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_let)[cse_var_23]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner_1) + 28)] = (((((float*)conv_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_let)[cse_var_23]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_1(float* p0, float* T_divide, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_30_var[6653760]));
  void* fused_constant_12_let = (&(global_const_workspace_30_var[6636448]));
  void* data_vec_let = (&(global_workspace_31_var[7840]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        ((float*)data_vec_let)[(((h * 56) + (w * 8)) + ci)] = p0[(((ci * 49) + (h * 7)) + w)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_31_var[6272]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 56) + (ax3_outer * 8)) + ci_1)] * ((float*)fused_constant_12_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
          float __1 = (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_1]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 196) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_outer)] = (((((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_10(float* p0, float* T_divide, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_86_var[6652128]));
  void* fused_constant_33_let = (&(global_const_workspace_86_var[6595104]));
  void* fused_constant_33_global_global_let = (&(global_workspace_87_var[0]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_87_var[7872]));
  for (int32_t c_outer_c = 0; c_outer_c < 12; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_87_var[11968]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 8; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 32) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 6)) && (2 <= ax3_c_1)) && (ax3_c_1 < 6)) ? p0[(((((c_outer_c * 64) + (ax1_inner_c * 16)) + (ax2_c_1 * 4)) + ax3_c_1) - 10)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 2; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 32)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 48)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 64) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 32) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 64) + cse_var_9) + cse_var_8) + c_inner_c_1) + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 32)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 64) + cse_var_13) + cse_var_12) + c_inner_c_2) + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 64)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 64) + cse_var_17) + cse_var_16) + c_inner_c_3) + 48);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 96)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 48; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 4; ++ax3) {
        int32_t cse_var_18 = (((((ax1 >> 2) * 64) + (ax2 * 16)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 16) + (ax2 * 4)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_11(float* p0, float* T_divide, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_98_var[6648192]));
  void* fused_constant_37_let = (&(global_const_workspace_98_var[6565920]));
  void* data_vec_let = (&(global_workspace_99_var[1024]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 128) + (w * 64)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 26; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_99_var[0]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 128) + (ax3_outer * 64)) + cse_var_2) + vw_1)] * ((float*)fused_constant_37_let)[(((ax1_outer * 64) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 128) + (ax3_outer * 64)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_37_let)[(((ax1_outer * 64) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_5 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_5]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_7 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_8]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_8]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_12(float* p0, float* T_divide, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_100_var[6647776]));
  void* fused_constant_38_let = (&(global_const_workspace_100_var[6506944]));
  void* fused_constant_38_global_global_let = (&(global_workspace_101_var[0]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_101_var[17056]));
  for (int32_t c_outer_c = 0; c_outer_c < 26; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_101_var[18720]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 7; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 7; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 28) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 6)) && (2 <= ax3_c_1)) && (ax3_c_1 < 6)) ? p0[(((((c_outer_c * 64) + (ax1_inner_c * 16)) + (ax2_c_1 * 4)) + ax3_c_1) - 10)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 16) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
      }
    }
    for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 16) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t di = 0; di < 5; ++di) {
      for (int32_t dj = 0; dj < 5; ++dj) {
        for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
          for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
            int32_t cse_var_3 = (dj * 4);
            int32_t cse_var_2 = (((c_outer_c * 16) + (j_c_inner * 4)) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 28) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
          }
        }
        for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
            int32_t cse_var_5 = (dj * 4);
            int32_t cse_var_4 = ((((c_outer_c * 16) + (j_c_inner_1 * 4)) + c_inner_c_1) + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[(((((di * 28) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 56)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_5) + c_inner_c_1)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 104; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
        int32_t cse_var_6 = (((((ax1 >> 2) * 16) + (ax2 * 8)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_38_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 4) + (ax2 * 2)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_38_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_13(float* p0, float* T_divide, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_112_var[6645024]));
  void* fused_constant_42_let = (&(global_const_workspace_112_var[6406400]));
  void* data_vec_let = (&(global_workspace_113_var[0]));
  for (int32_t ci = 0; ci < 32; ++ci) {
    for (int32_t vh = 0; vh < 2; ++vh) {
      for (int32_t vw = 0; vw < 2; ++vw) {
        int32_t cse_var_1 = (((ci * 4) + (vh * 2)) + vw);
        ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 50; ++ax1_outer) {
    void* conv_let = (&(global_workspace_113_var[512]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          int32_t cse_var_3 = (ci_1 * 4);
          int32_t cse_var_2 = ((vw_1 * 4) + vc);
          ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(cse_var_3 + vw_1)] * ((float*)fused_constant_42_let)[(((ax1_outer * 128) + cse_var_3) + vc)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_5 = (ci_1 * 4);
          int32_t cse_var_4 = (((vw_2 * 4) + vc) + 8);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((cse_var_5 + vw_2) + 2)] * ((float*)fused_constant_42_let)[(((ax1_outer * 128) + cse_var_5) + vc)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
        int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
        float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_6]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1_outer * 16) + (ax1_inner * 4)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
    for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
        int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
        float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_9]) + 3.000000e+00f;
        float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
        T_divide[((((ax1_outer * 16) + (ax1_inner_1 * 4)) + ax3_inner_1) + 2)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_42_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_14(float* p0, float* T_divide, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_114_var[6644224]));
  void* fused_constant_43_let = (&(global_const_workspace_114_var[6452000]));
  void* fused_constant_43_global_global_let = (&(global_workspace_115_var[0]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_115_var[28800]));
  for (int32_t c_outer_c = 0; c_outer_c < 50; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_115_var[23200]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 6; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 24) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 4)) && (2 <= ax3_c_1)) && (ax3_c_1 < 4)) ? p0[(((((c_outer_c * 16) + (ax1_inner_c * 4)) + (ax2_c_1 * 2)) + ax3_c_1) - 6)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 16) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
      }
    }
    for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 16) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t di = 0; di < 5; ++di) {
      for (int32_t dj = 0; dj < 5; ++dj) {
        for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
          for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_inner * 4);
            int32_t cse_var_3 = (dj * 4);
            int32_t cse_var_2 = (((c_outer_c * 16) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 24) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_43_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
          }
        }
        for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_inner_1 * 4);
            int32_t cse_var_6 = (dj * 4);
            int32_t cse_var_5 = ((((c_outer_c * 16) + cse_var_7) + c_inner_c_1) + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 24) + cse_var_7) + cse_var_6) + c_inner_c_1) + 24)] * ((float*)fused_constant_43_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_6) + c_inner_c_1)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 200; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
        int32_t cse_var_8 = (((((ax1 >> 2) * 16) + (ax2 * 8)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_43_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 4) + (ax2 * 2)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_43_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_15(float* p0, float* T_divide, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_126_var[6642624]));
  void* fused_constant_47_let = (&(global_const_workspace_126_var[6355200]));
  void* data_vec_let = (&(global_workspace_127_var[0]));
  for (int32_t ci = 0; ci < 32; ++ci) {
    for (int32_t vh = 0; vh < 2; ++vh) {
      for (int32_t vw = 0; vw < 2; ++vw) {
        int32_t cse_var_1 = (((ci * 4) + (vh * 2)) + vw);
        ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 50; ++ax1_outer) {
    void* conv_let = (&(global_workspace_127_var[512]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          int32_t cse_var_3 = (ci_1 * 4);
          int32_t cse_var_2 = ((vw_1 * 4) + vc);
          ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(cse_var_3 + vw_1)] * ((float*)fused_constant_47_let)[(((ax1_outer * 128) + cse_var_3) + vc)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_5 = (ci_1 * 4);
          int32_t cse_var_4 = (((vw_2 * 4) + vc) + 8);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((cse_var_5 + vw_2) + 2)] * ((float*)fused_constant_47_let)[(((ax1_outer * 128) + cse_var_5) + vc)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
        int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
        float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_6]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1_outer * 16) + (ax1_inner * 4)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
    for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
        int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
        float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_9]) + 3.000000e+00f;
        float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
        T_divide[((((ax1_outer * 16) + (ax1_inner_1 * 4)) + ax3_inner_1) + 2)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_16(float* p0, float* T_divide, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_nn_conv2d_constant_48_let = (&(global_const_workspace_128_var[6641824]));
  void* fused_constant_48_let = (&(global_const_workspace_128_var[6432000]));
  void* fused_constant_48_global_global_let = (&(global_workspace_129_var[0]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_129_var[28800]));
  for (int32_t c_outer_c = 0; c_outer_c < 50; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_129_var[23200]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 6; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 24) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 4)) && (2 <= ax3_c_1)) && (ax3_c_1 < 4)) ? p0[(((((c_outer_c * 16) + (ax1_inner_c * 4)) + (ax2_c_1 * 2)) + ax3_c_1) - 6)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 16) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
      }
    }
    for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 16) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t di = 0; di < 5; ++di) {
      for (int32_t dj = 0; dj < 5; ++dj) {
        for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
          for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_inner * 4);
            int32_t cse_var_3 = (dj * 4);
            int32_t cse_var_2 = (((c_outer_c * 16) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 24) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_48_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
          }
        }
        for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_inner_1 * 4);
            int32_t cse_var_6 = (dj * 4);
            int32_t cse_var_5 = ((((c_outer_c * 16) + cse_var_7) + c_inner_c_1) + 8);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 24) + cse_var_7) + cse_var_6) + c_inner_c_1) + 24)] * ((float*)fused_constant_48_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_6) + c_inner_c_1)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 200; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 2; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 2; ++ax3) {
        int32_t cse_var_8 = (((((ax1 >> 2) * 16) + (ax2 * 8)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_48_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 4) + (ax2 * 2)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_48_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_17(float* p0, float* T_divide, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_conv2d_constant_52_let = (&(global_const_workspace_138_var[6640224]));
  void* fused_constant_52_let = (&(global_const_workspace_138_var[6304000]));
  void* data_vec_let = (&(global_workspace_139_var[3200]));
  for (int32_t ci = 0; ci < 32; ++ci) {
    for (int32_t vh = 0; vh < 2; ++vh) {
      for (int32_t vw = 0; vw < 2; ++vw) {
        int32_t cse_var_1 = (((ci * 4) + (vh * 2)) + vw);
        ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 50; ++ax1_outer) {
    void* conv_let = (&(global_workspace_139_var[3712]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
      }
    }
    for (int32_t ci_1 = 0; ci_1 < 32; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          int32_t cse_var_3 = (ci_1 * 4);
          int32_t cse_var_2 = ((vw_1 * 4) + vc);
          ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(cse_var_3 + vw_1)] * ((float*)fused_constant_52_let)[(((ax1_outer * 128) + cse_var_3) + vc)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_5 = (ci_1 * 4);
          int32_t cse_var_4 = (((vw_2 * 4) + vc) + 8);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((cse_var_5 + vw_2) + 2)] * ((float*)fused_constant_52_let)[(((ax1_outer * 128) + cse_var_5) + vc)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
        int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
        float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_6]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1_outer * 16) + (ax1_inner * 4)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
    for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
        int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
        float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_9]) + 3.000000e+00f;
        float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
        T_divide[((((ax1_outer * 16) + (ax1_inner_1 * 4)) + ax3_inner_1) + 2)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_2(float* p0, float* T_divide, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_32_var[6653632]));
  void* fused_constant_13_let = (&(global_const_workspace_32_var[6607904]));
  void* fused_constant_13_global_global_let = (&(global_workspace_33_var[6272]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_33_var[9472]));
  for (int32_t c_outer_c = 0; c_outer_c < 8; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_33_var[11520]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 11; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 11; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 44) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 9)) && (2 <= ax3_c_1)) && (ax3_c_1 < 9)) ? p0[(((((c_outer_c * 196) + (ax1_inner_c * 49)) + (ax2_c_1 * 7)) + ax3_c_1) - 16)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 2; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 32)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 48)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 44) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_5 = (dj * 4);
              int32_t cse_var_4 = (((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 44) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 88)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_5) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 44) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 176)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_9 = (dj * 4);
              int32_t cse_var_8 = (((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 48);
              ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 44) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 264)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_9) + c_inner_c_3)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 4; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 64) + (ax2 * 16)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 16) + (ax2 * 4)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_3(float* p0, float* T_divide, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_44_var[6650368]));
  void* fused_constant_17_let = (&(global_const_workspace_44_var[6589472]));
  void* data_vec_let = (&(global_workspace_45_var[0]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 128) + (w * 64)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 22; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_45_var[1024]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 128) + (ax3_outer * 64)) + cse_var_2) + vw_1)] * ((float*)fused_constant_17_let)[(((ax1_outer * 64) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 128) + (ax3_outer * 64)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_17_let)[(((ax1_outer * 64) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_5 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_5]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_7 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_8]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_17_let)[cse_var_8]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_4(float* p0, float* T_divide, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_46_var[6650016]));
  void* fused_constant_18_let = (&(global_const_workspace_46_var[6526144]));
  void* fused_constant_18_global_global_let = (&(global_workspace_47_var[0]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_47_var[14432]));
  for (int32_t c_outer_c = 0; c_outer_c < 22; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_47_var[20064]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 8; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 32) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 6)) && (2 <= ax3_c_1)) && (ax3_c_1 < 6)) ? p0[(((((c_outer_c * 64) + (ax1_inner_c * 16)) + (ax2_c_1 * 4)) + ax3_c_1) - 10)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 2; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 32)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 48)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 64) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 32) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 64) + cse_var_9) + cse_var_8) + c_inner_c_1) + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 32)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 64) + cse_var_13) + cse_var_12) + c_inner_c_2) + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 64)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 64) + cse_var_17) + cse_var_16) + c_inner_c_3) + 48);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 96)] * ((float*)fused_constant_18_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 88; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 4; ++ax3) {
        int32_t cse_var_18 = (((((ax1 >> 2) * 64) + (ax2 * 16)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_18_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 16) + (ax2 * 4)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_18_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_5(float* p0, float* T_divide, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_58_var[6649312]));
  void* fused_constant_22_let = (&(global_const_workspace_58_var[6578208]));
  void* data_vec_let = (&(global_workspace_59_var[0]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 128) + (w * 64)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 16) + (h * 8)) + (vh * 4)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 22; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_59_var[1024]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 128) + (ax3_outer * 64)) + cse_var_2) + vw_1)] * ((float*)fused_constant_22_let)[(((ax1_outer * 64) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 128) + (ax3_outer * 64)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_22_let)[(((ax1_outer * 64) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_5 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_5]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 64) + (ax1_inner * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_7 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_8]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax2_outer * 8)) + (ax3_outer * 2)) + ax3_inner_1) + 4)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_8]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_6(float* p0, float* T_divide, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_60_var[6648960]));
  void* fused_constant_23_let = (&(global_const_workspace_60_var[6517344]));
  void* fused_constant_23_global_global_let = (&(global_workspace_61_var[0]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_61_var[14432]));
  for (int32_t c_outer_c = 0; c_outer_c < 22; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_61_var[21088]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 8; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 32) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 6)) && (2 <= ax3_c_1)) && (ax3_c_1 < 6)) ? p0[(((((c_outer_c * 64) + (ax1_inner_c * 16)) + (ax2_c_1 * 4)) + ax3_c_1) - 10)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 2; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 32)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 48)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 64) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 32) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 64) + cse_var_9) + cse_var_8) + c_inner_c_1) + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 32)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 64) + cse_var_13) + cse_var_12) + c_inner_c_2) + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 64)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 64) + cse_var_17) + cse_var_16) + c_inner_c_3) + 48);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 96)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 88; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 4; ++ax3) {
        int32_t cse_var_18 = (((((ax1 >> 2) * 64) + (ax2 * 16)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 16) + (ax2 * 4)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_7(float* p0, float* T_divide, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_70_var[6652832]));
  void* fused_constant_27_let = (&(global_const_workspace_70_var[6619808]));
  void* data_vec_let = (&(global_workspace_71_var[0]));
  for (int32_t ci = 0; ci < 16; ++ci) {
    for (int32_t vh = 0; vh < 4; ++vh) {
      for (int32_t vw = 0; vw < 4; ++vw) {
        int32_t cse_var_1 = (((ci * 16) + (vh * 4)) + vw);
        ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 10; ++ax1_outer) {
    void* conv_let = (&(global_workspace_71_var[1024]));
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
      for (int32_t vw_init_3 = 0; vw_init_3 < 4; ++vw_init_3) {
        ((float*)conv_let)[(((vw_init_3 * 4) + vc_init) + 48)] = 0.000000e+00f;
      }
    }
    for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
          int32_t cse_var_2 = ((vw_1 * 4) + vc);
          ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((ci_1 * 16) + vw_1)] * ((float*)fused_constant_27_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 4; ++vw_2) {
          int32_t cse_var_3 = (((vw_2 * 4) + vc) + 16);
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((ci_1 * 16) + vw_2) + 4)] * ((float*)fused_constant_27_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
        }
        for (int32_t vw_3 = 0; vw_3 < 4; ++vw_3) {
          int32_t cse_var_4 = (((vw_3 * 4) + vc) + 32);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((ci_1 * 16) + vw_3) + 8)] * ((float*)fused_constant_27_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
        }
        for (int32_t vw_4 = 0; vw_4 < 4; ++vw_4) {
          int32_t cse_var_5 = (((vw_4 * 4) + vc) + 48);
          ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((ci_1 * 16) + vw_4) + 12)] * ((float*)fused_constant_27_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
        int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
        float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_6]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1_outer * 64) + (ax1_inner * 16)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
    for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 4; ++ax3_inner_1) {
      for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
        int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
        int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 16);
        float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_9]) + 3.000000e+00f;
        float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
        T_divide[((((ax1_outer * 64) + (ax1_inner_1 * 16)) + ax3_inner_1) + 4)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
    for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 4; ++ax3_inner_2) {
      for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
        int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
        int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 32);
        float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_11]) + 3.000000e+00f;
        float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
        T_divide[((((ax1_outer * 64) + (ax1_inner_2 * 16)) + ax3_inner_2) + 8)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
    for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 4; ++ax3_inner_3) {
      for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
        int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
        int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 48);
        float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_13]) + 3.000000e+00f;
        float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
        T_divide[((((ax1_outer * 64) + (ax1_inner_3 * 16)) + ax3_inner_3) + 12)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_27_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_8(float* p0, float* T_divide, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_72_var[6652672]));
  void* fused_constant_28_let = (&(global_const_workspace_72_var[6603904]));
  void* fused_constant_28_global_global_let = (&(global_workspace_73_var[0]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 10; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_28_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_28_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_73_var[6560]));
  for (int32_t c_outer_c = 0; c_outer_c < 10; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_73_var[9120]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 8; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 32) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 6)) && (2 <= ax3_c_1)) && (ax3_c_1 < 6)) ? p0[(((((c_outer_c * 64) + (ax1_inner_c * 16)) + (ax2_c_1 * 4)) + ax3_c_1) - 10)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 2; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 16)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 32)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 64) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 48)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 64) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 32) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_28_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 64) + cse_var_9) + cse_var_8) + c_inner_c_1) + 16);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 32)] * ((float*)fused_constant_28_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 64) + cse_var_13) + cse_var_12) + c_inner_c_2) + 32);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 64)] * ((float*)fused_constant_28_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 64) + cse_var_17) + cse_var_16) + c_inner_c_3) + 48);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 32) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 96)] * ((float*)fused_constant_28_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 40; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 4; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 4; ++ax3) {
        int32_t cse_var_18 = (((((ax1 >> 2) * 64) + (ax2 * 16)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_28_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 16) + (ax2 * 4)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_18] + ((float*)fused_nn_conv2d_constant_28_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_9(float* p0, float* T_divide, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_84_var[6652320]));
  void* fused_constant_32_let = (&(global_const_workspace_84_var[6614176]));
  void* data_vec_let = (&(global_workspace_85_var[0]));
  for (int32_t w = 0; w < 2; ++w) {
    for (int32_t ci = 0; ci < 16; ++ci) {
      for (int32_t vh = 0; vh < 4; ++vh) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          ((float*)data_vec_let)[((((w * 128) + (ci * 8)) + (vh * 2)) + vw)] = p0[((((ci * 16) + (vh * 4)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      void* conv_let = (&(global_workspace_85_var[1024]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
          ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
          ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
        }
        for (int32_t vw_init_2 = 0; vw_init_2 < 2; ++vw_init_2) {
          ((float*)conv_let)[(((vw_init_2 * 4) + vc_init) + 16)] = 0.000000e+00f;
        }
        for (int32_t vw_init_3 = 0; vw_init_3 < 2; ++vw_init_3) {
          ((float*)conv_let)[(((vw_init_3 * 4) + vc_init) + 24)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 4) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax3_outer * 128) + (ci_1 * 8)) + vw_1)] * ((float*)fused_constant_32_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
            int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax3_outer * 128) + (ci_1 * 8)) + vw_2) + 2)] * ((float*)fused_constant_32_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
            int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax3_outer * 128) + (ci_1 * 8)) + vw_3) + 4)] * ((float*)fused_constant_32_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
            int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax3_outer * 128) + (ci_1 * 8)) + vw_4) + 6)] * ((float*)fused_constant_32_let)[(((ax1_outer * 64) + (ci_1 * 4)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          int32_t cse_var_6 = ((ax3_inner * 4) + ax1_inner);
          int32_t cse_var_5 = ((ax1_outer * 4) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_5]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 64) + (ax1_inner * 16)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_6] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_5]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          int32_t cse_var_8 = ((ax1_outer * 4) + ax1_inner_1);
          int32_t cse_var_7 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
          float __3 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_8]) + 3.000000e+00f;
          float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 64) + (ax1_inner_1 * 16)) + (ax3_outer * 2)) + ax3_inner_1) + 4)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_8]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          int32_t cse_var_10 = ((ax1_outer * 4) + ax1_inner_2);
          int32_t cse_var_9 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
          float __5 = (((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_10]) + 3.000000e+00f;
          float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 64) + (ax1_inner_2 * 16)) + (ax3_outer * 2)) + ax3_inner_2) + 8)] = (((((float*)conv_let)[cse_var_9] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_10]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
      for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_3);
          int32_t cse_var_11 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
          float __7 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_12]) + 3.000000e+00f;
          float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
          T_divide[(((((ax1_outer * 64) + (ax1_inner_3 * 16)) + (ax3_outer * 2)) + ax3_inner_3) + 12)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_12]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_clip_multiply_divide_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* fused_constant_53_let = (&(global_const_workspace_142_var[5120000]));
  void* data_vec_let = (&(global_workspace_143_var[5120]));
  for (int32_t ci = 0; ci < 200; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 160; ++ax1_outer) {
    void* conv_let = (&(global_workspace_143_var[5920]));
    for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 200; ++ci_1) {
      for (int32_t vc = 0; vc < 8; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_53_let)[(((ax1_outer * 1600) + (ci_1 * 8)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
      float __1 = ((float*)conv_let)[ax1_inner] + 3.000000e+00f;
      float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
      T_multiply[((ax1_outer * 8) + ax1_inner)] = (((((float*)conv_let)[ax1_inner] * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f) * 8.000000e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_4_var[6655248]));
  void* fused_constant_1_let = (&(global_const_workspace_4_var[6651264]));
  void* data_vec_let = (&(global_workspace_5_var[25088]));
  for (int32_t h = 0; h < 14; ++h) {
    for (int32_t w = 0; w < 14; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 448) + (w * 32)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 784) + (h * 56)) + (vh * 28)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 14; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 14; ++ax3_outer) {
        void* conv_let = (&(global_workspace_5_var[50176]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 448) + (ax3_outer * 32)) + cse_var_2) + vw_1)] * ((float*)fused_constant_1_let)[(((ax1_outer * 32) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 448) + (ax3_outer * 32)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_1_let)[(((ax1_outer * 32) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            float __1 = ((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_1_let)[((ax1_outer * 4) + ax1_inner)];
            T_relu[(((((ax1_outer * 3136) + (ax1_inner * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            float __2 = ((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_1_let)[((ax1_outer * 4) + ax1_inner_1)];
            T_relu[((((((ax1_outer * 3136) + (ax1_inner_1 * 784)) + (ax2_outer * 56)) + (ax3_outer * 2)) + ax3_inner_1) + 28)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_6_var[6655152]));
  void* fused_constant_2_let = (&(global_const_workspace_6_var[6650720]));
  void* fused_constant_2_global_global_let = (&(global_workspace_7_var[44816]));
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
  void* DepthwiseConv2d_global_let = (&(global_workspace_7_var[38544]));
  for (int32_t c_outer_c = 0; c_outer_c < 2; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_7_var[25088]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 29; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 29; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 116) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ax2_c_1) && (1 <= ax3_c_1)) ? p0[(((((c_outer_c * 3136) + (ax1_inner_c * 784)) + (ax2_c_1 * 28)) + ax3_c_1) - 29)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 56)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 112)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 168)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 224)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 336)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 392)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 448)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 504)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_10 = 0; j_c_inner_init_10 < 2; ++j_c_inner_init_10) {
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_10 * 4)) + c_inner_c_init_10) + 560)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_11 = 0; j_c_inner_init_11 < 2; ++j_c_inner_init_11) {
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_11 * 4)) + c_inner_c_init_11) + 616)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_12 = 0; j_c_inner_init_12 < 2; ++j_c_inner_init_12) {
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_12 * 4)) + c_inner_c_init_12) + 672)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_13 = 0; j_c_inner_init_13 < 2; ++j_c_inner_init_13) {
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_init_13 * 4)) + c_inner_c_init_13) + 728)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 116) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_5 = (dj * 4);
              int32_t cse_var_4 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 56);
              ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 232)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 112);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 464)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_9 = (dj * 4);
              int32_t cse_var_8 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 696)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_4 * 4)) + c_inner_c_4) + 224);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_4 * 8)) + cse_var_11) + c_inner_c_4) + 928)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_11) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_5 * 4)) + c_inner_c_5) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_5 * 8)) + cse_var_13) + c_inner_c_5) + 1160)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_13) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_6 * 4)) + c_inner_c_6) + 336);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_6 * 8)) + cse_var_15) + c_inner_c_6) + 1392)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_15) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_17 = (dj * 4);
              int32_t cse_var_16 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_7 * 4)) + c_inner_c_7) + 392);
              ((float*)DepthwiseConv2d_global_let)[cse_var_16] = (((float*)DepthwiseConv2d_global_let)[cse_var_16] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_7 * 8)) + cse_var_17) + c_inner_c_7) + 1624)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_17) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_8 * 4)) + c_inner_c_8) + 448);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_8 * 8)) + cse_var_19) + c_inner_c_8) + 1856)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_21 = (dj * 4);
              int32_t cse_var_20 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_9 * 4)) + c_inner_c_9) + 504);
              ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_9 * 8)) + cse_var_21) + c_inner_c_9) + 2088)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_21) + c_inner_c_9)]));
            }
          }
          for (int32_t j_c_inner_10 = 0; j_c_inner_10 < 2; ++j_c_inner_10) {
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_10 * 4)) + c_inner_c_10) + 560);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_10 * 8)) + cse_var_23) + c_inner_c_10) + 2320)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_23) + c_inner_c_10)]));
            }
          }
          for (int32_t j_c_inner_11 = 0; j_c_inner_11 < 2; ++j_c_inner_11) {
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_11 * 4)) + c_inner_c_11) + 616);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_11 * 8)) + cse_var_25) + c_inner_c_11) + 2552)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_25) + c_inner_c_11)]));
            }
          }
          for (int32_t j_c_inner_12 = 0; j_c_inner_12 < 2; ++j_c_inner_12) {
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_12 * 4)) + c_inner_c_12) + 672);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_12 * 8)) + cse_var_27) + c_inner_c_12) + 2784)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_27) + c_inner_c_12)]));
            }
          }
          for (int32_t j_c_inner_13 = 0; j_c_inner_13 < 2; ++j_c_inner_13) {
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_29 = (dj * 4);
              int32_t cse_var_28 = (((((c_outer_c * 784) + (j_c_outer * 8)) + (j_c_inner_13 * 4)) + c_inner_c_13) + 728);
              ((float*)DepthwiseConv2d_global_let)[cse_var_28] = (((float*)DepthwiseConv2d_global_let)[cse_var_28] + (((float*)PaddedInput_global_global_let)[((((((di * 116) + (j_c_outer * 16)) + (j_c_inner_13 * 8)) + cse_var_29) + c_inner_c_13) + 3016)] * ((float*)fused_constant_2_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_29) + c_inner_c_13)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 8; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 14; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 14; ++ax3) {
        float __1 = ((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 2) * 784) + (ax2 * 56)) + (ax3 * 4)) + (ax1 & 3))] + ((float*)fused_nn_conv2d_constant_2_let)[ax1];
        T_relu[(((ax1 * 196) + (ax2 * 14)) + ax3)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_10(float* p0, float* T_relu, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_76_var[6655008]));
  void* fused_constant_29_let = (&(global_const_workspace_76_var[6630624]));
  void* data_vec_let = (&(global_workspace_77_var[2560]));
  for (int32_t ci = 0; ci < 40; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 5; ++ax1_outer) {
    void* conv_let = (&(global_workspace_77_var[2768]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_11(float* p0, float* T_relu, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_90_var[6654960]));
  void* fused_constant_34_let = (&(global_const_workspace_90_var[6624672]));
  void* data_vec_let = (&(global_workspace_91_var[3072]));
  for (int32_t ci = 0; ci < 48; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 3; ++ax1_outer) {
    void* conv_let = (&(global_workspace_91_var[3312]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_12(float* p0, float* T_relu, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_104_var[6654016]));
  void* fused_constant_39_let = (&(global_const_workspace_104_var[6496128]));
  void* data_vec_let = (&(global_workspace_105_var[0]));
  for (int32_t ci = 0; ci < 104; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 13; ++ax1_outer) {
    void* conv_let = (&(global_workspace_105_var[528]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_13(float* p0, float* T_relu, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_118_var[6651728]));
  void* fused_constant_44_let = (&(global_const_workspace_118_var[6264000]));
  void* data_vec_let = (&(global_workspace_119_var[0]));
  for (int32_t ci = 0; ci < 200; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 10; ++ax1_outer) {
    void* conv_let = (&(global_workspace_119_var[1008]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_14(float* p0, float* T_relu, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_conv2d_constant_49_let = (&(global_const_workspace_130_var[6651520]));
  void* fused_constant_49_let = (&(global_const_workspace_130_var[6184000]));
  void* data_vec_let = (&(global_workspace_131_var[0]));
  for (int32_t ci = 0; ci < 200; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 10; ++ax1_outer) {
    void* conv_let = (&(global_workspace_131_var[1008]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_2(float* p0, float* T_relu, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_10_var[6655312]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[6654896]));
  void* data_vec_let = (&(global_workspace_11_var[6304]));
  for (int32_t ci = 0; ci < 8; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  void* conv_let = (&(global_workspace_11_var[6288]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_3(float* p0, float* T_relu, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_18_var[6654224]));
  void* fused_constant_6_let = (&(global_const_workspace_18_var[6646592]));
  void* data_vec_let = (&(global_workspace_19_var[18816]));
  for (int32_t w = 0; w < 7; ++w) {
    for (int32_t ci = 0; ci < 8; ++ci) {
      for (int32_t vh = 0; vh < 14; ++vh) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          ((float*)data_vec_let)[((((w * 224) + (ci * 28)) + (vh * 2)) + vw)] = p0[((((ci * 196) + (vh * 14)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 6; ++ax1_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
      void* conv_let = (&(global_workspace_19_var[25088]));
      for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
          ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
        }
        for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
          ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
        }
        for (int32_t vw_init_2 = 0; vw_init_2 < 2; ++vw_init_2) {
          ((float*)conv_let)[(((vw_init_2 * 4) + vc_init) + 16)] = 0.000000e+00f;
        }
        for (int32_t vw_init_3 = 0; vw_init_3 < 2; ++vw_init_3) {
          ((float*)conv_let)[(((vw_init_3 * 4) + vc_init) + 24)] = 0.000000e+00f;
        }
        for (int32_t vw_init_4 = 0; vw_init_4 < 2; ++vw_init_4) {
          ((float*)conv_let)[(((vw_init_4 * 4) + vc_init) + 32)] = 0.000000e+00f;
        }
        for (int32_t vw_init_5 = 0; vw_init_5 < 2; ++vw_init_5) {
          ((float*)conv_let)[(((vw_init_5 * 4) + vc_init) + 40)] = 0.000000e+00f;
        }
        for (int32_t vw_init_6 = 0; vw_init_6 < 2; ++vw_init_6) {
          ((float*)conv_let)[(((vw_init_6 * 4) + vc_init) + 48)] = 0.000000e+00f;
        }
        for (int32_t vw_init_7 = 0; vw_init_7 < 2; ++vw_init_7) {
          ((float*)conv_let)[(((vw_init_7 * 4) + vc_init) + 56)] = 0.000000e+00f;
        }
        for (int32_t vw_init_8 = 0; vw_init_8 < 2; ++vw_init_8) {
          ((float*)conv_let)[(((vw_init_8 * 4) + vc_init) + 64)] = 0.000000e+00f;
        }
        for (int32_t vw_init_9 = 0; vw_init_9 < 2; ++vw_init_9) {
          ((float*)conv_let)[(((vw_init_9 * 4) + vc_init) + 72)] = 0.000000e+00f;
        }
        for (int32_t vw_init_10 = 0; vw_init_10 < 2; ++vw_init_10) {
          ((float*)conv_let)[(((vw_init_10 * 4) + vc_init) + 80)] = 0.000000e+00f;
        }
        for (int32_t vw_init_11 = 0; vw_init_11 < 2; ++vw_init_11) {
          ((float*)conv_let)[(((vw_init_11 * 4) + vc_init) + 88)] = 0.000000e+00f;
        }
        for (int32_t vw_init_12 = 0; vw_init_12 < 2; ++vw_init_12) {
          ((float*)conv_let)[(((vw_init_12 * 4) + vc_init) + 96)] = 0.000000e+00f;
        }
        for (int32_t vw_init_13 = 0; vw_init_13 < 2; ++vw_init_13) {
          ((float*)conv_let)[(((vw_init_13 * 4) + vc_init) + 104)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
        for (int32_t vc = 0; vc < 4; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 4) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax3_outer * 224) + (ci_1 * 28)) + vw_1)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
            int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
            ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_2) + 2)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
            int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
            ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_3) + 4)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
            int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
            ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_4) + 6)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
            int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
            ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_5) + 8)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
            int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
            ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_6) + 10)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
            int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
            ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_7) + 12)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
            int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
            ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_8) + 14)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_9 = 0; vw_9 < 2; ++vw_9) {
            int32_t cse_var_9 = (((vw_9 * 4) + vc) + 64);
            ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_9) + 16)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_10 = 0; vw_10 < 2; ++vw_10) {
            int32_t cse_var_10 = (((vw_10 * 4) + vc) + 72);
            ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_10) + 18)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_11 = 0; vw_11 < 2; ++vw_11) {
            int32_t cse_var_11 = (((vw_11 * 4) + vc) + 80);
            ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_11) + 20)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_12 = 0; vw_12 < 2; ++vw_12) {
            int32_t cse_var_12 = (((vw_12 * 4) + vc) + 88);
            ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_12) + 22)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_13 = 0; vw_13 < 2; ++vw_13) {
            int32_t cse_var_13 = (((vw_13 * 4) + vc) + 96);
            ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_13) + 24)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
          for (int32_t vw_14 = 0; vw_14 < 2; ++vw_14) {
            int32_t cse_var_14 = (((vw_14 * 4) + vc) + 104);
            ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[((((ax3_outer * 224) + (ci_1 * 28)) + vw_14) + 26)] * ((float*)fused_constant_6_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 784) + (ax1_inner * 196)) + (ax3_outer * 2)) + ax3_inner)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
          float __2 = ((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_1)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_1 * 196)) + (ax3_outer * 2)) + ax3_inner_1) + 14)] = ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
        for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
          float __3 = ((float*)conv_let)[(((ax3_inner_2 * 4) + ax1_inner_2) + 16)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_2)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_2 * 196)) + (ax3_outer * 2)) + ax3_inner_2) + 28)] = ((__3) > (0.000000e+00f) ? (__3) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
        for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
          float __4 = ((float*)conv_let)[(((ax3_inner_3 * 4) + ax1_inner_3) + 24)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_3)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_3 * 196)) + (ax3_outer * 2)) + ax3_inner_3) + 42)] = ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
        for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
          float __5 = ((float*)conv_let)[(((ax3_inner_4 * 4) + ax1_inner_4) + 32)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_4)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_4 * 196)) + (ax3_outer * 2)) + ax3_inner_4) + 56)] = ((__5) > (0.000000e+00f) ? (__5) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
        for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
          float __6 = ((float*)conv_let)[(((ax3_inner_5 * 4) + ax1_inner_5) + 40)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_5)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_5 * 196)) + (ax3_outer * 2)) + ax3_inner_5) + 70)] = ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
        for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
          float __7 = ((float*)conv_let)[(((ax3_inner_6 * 4) + ax1_inner_6) + 48)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_6)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_6 * 196)) + (ax3_outer * 2)) + ax3_inner_6) + 84)] = ((__7) > (0.000000e+00f) ? (__7) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
        for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
          float __8 = ((float*)conv_let)[(((ax3_inner_7 * 4) + ax1_inner_7) + 56)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_7)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_7 * 196)) + (ax3_outer * 2)) + ax3_inner_7) + 98)] = ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_8 = 0; ax3_inner_8 < 2; ++ax3_inner_8) {
        for (int32_t ax1_inner_8 = 0; ax1_inner_8 < 4; ++ax1_inner_8) {
          float __9 = ((float*)conv_let)[(((ax3_inner_8 * 4) + ax1_inner_8) + 64)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_8)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_8 * 196)) + (ax3_outer * 2)) + ax3_inner_8) + 112)] = ((__9) > (0.000000e+00f) ? (__9) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_9 = 0; ax3_inner_9 < 2; ++ax3_inner_9) {
        for (int32_t ax1_inner_9 = 0; ax1_inner_9 < 4; ++ax1_inner_9) {
          float __10 = ((float*)conv_let)[(((ax3_inner_9 * 4) + ax1_inner_9) + 72)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_9)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_9 * 196)) + (ax3_outer * 2)) + ax3_inner_9) + 126)] = ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_10 = 0; ax3_inner_10 < 2; ++ax3_inner_10) {
        for (int32_t ax1_inner_10 = 0; ax1_inner_10 < 4; ++ax1_inner_10) {
          float __11 = ((float*)conv_let)[(((ax3_inner_10 * 4) + ax1_inner_10) + 80)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_10)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_10 * 196)) + (ax3_outer * 2)) + ax3_inner_10) + 140)] = ((__11) > (0.000000e+00f) ? (__11) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_11 = 0; ax3_inner_11 < 2; ++ax3_inner_11) {
        for (int32_t ax1_inner_11 = 0; ax1_inner_11 < 4; ++ax1_inner_11) {
          float __12 = ((float*)conv_let)[(((ax3_inner_11 * 4) + ax1_inner_11) + 88)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_11)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_11 * 196)) + (ax3_outer * 2)) + ax3_inner_11) + 154)] = ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_12 = 0; ax3_inner_12 < 2; ++ax3_inner_12) {
        for (int32_t ax1_inner_12 = 0; ax1_inner_12 < 4; ++ax1_inner_12) {
          float __13 = ((float*)conv_let)[(((ax3_inner_12 * 4) + ax1_inner_12) + 96)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_12)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_12 * 196)) + (ax3_outer * 2)) + ax3_inner_12) + 168)] = ((__13) > (0.000000e+00f) ? (__13) : (0.000000e+00f));
        }
      }
      for (int32_t ax3_inner_13 = 0; ax3_inner_13 < 2; ++ax3_inner_13) {
        for (int32_t ax1_inner_13 = 0; ax1_inner_13 < 4; ++ax1_inner_13) {
          float __14 = ((float*)conv_let)[(((ax3_inner_13 * 4) + ax1_inner_13) + 104)] + ((float*)fused_nn_conv2d_constant_6_let)[((ax1_outer * 4) + ax1_inner_13)];
          T_relu[(((((ax1_outer * 784) + (ax1_inner_13 * 196)) + (ax3_outer * 2)) + ax3_inner_13) + 182)] = ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_4(float* p0, float* T_relu, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_20_var[6654128]));
  void* fused_constant_7_let = (&(global_const_workspace_20_var[6638496]));
  void* fused_constant_7_global_global_let = (&(global_workspace_21_var[25328]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 12; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 18);
          ((float*)fused_constant_7_global_global_let)[(((cse_var_1 + (ax2_c * 6)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_7_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_21_var[18816]));
  for (int32_t c_outer_c = 0; c_outer_c < 12; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_21_var[23520]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 15; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 15; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 30) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((1 <= ax2_c_1) && (1 <= ax3_c_1)) ? p0[(((((c_outer_c * 392) + (ax1_inner_c * 196)) + (ax2_c_1 * 14)) + ax3_c_1) - 15)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_1) + 14)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_2) + 28)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_3) + 42)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_4) + 56)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 2; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_5) + 70)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 2; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_6) + 84)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = (((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 30) + (j_c_outer * 4)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_5 = (dj * 2);
            int32_t cse_var_4 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_1) + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_5) + c_inner_c_1) + 60)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_5) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_7 = (dj * 2);
            int32_t cse_var_6 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_2) + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_7) + c_inner_c_2) + 120)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_7) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_3) + 42);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_9) + c_inner_c_3) + 180)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_9) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_11 = (dj * 2);
            int32_t cse_var_10 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_4) + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_11) + c_inner_c_4) + 240)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_11) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 2; ++c_inner_c_5) {
            int32_t cse_var_13 = (dj * 2);
            int32_t cse_var_12 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_5) + 70);
            ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_13) + c_inner_c_5) + 300)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_13) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 2; ++c_inner_c_6) {
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = ((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_6) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 30) + (j_c_outer * 4)) + cse_var_15) + c_inner_c_6) + 360)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_15) + c_inner_c_6)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 24; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        float __1 = ((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 1) * 98) + (ax2 * 14)) + (ax3 * 2)) + (ax1 & 1))] + ((float*)fused_nn_conv2d_constant_7_let)[ax1];
        T_relu[(((ax1 * 49) + (ax2 * 7)) + ax3)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_5(float* p0, float* T_relu, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_24_var[6652992]));
  void* fused_constant_9_let = (&(global_const_workspace_24_var[6633376]));
  void* data_vec_let = (&(global_workspace_25_var[6272]));
  for (int32_t h = 0; h < 7; ++h) {
    for (int32_t w = 0; w < 7; ++w) {
      for (int32_t ci = 0; ci < 8; ++ci) {
        ((float*)data_vec_let)[(((h * 56) + (w * 8)) + ci)] = p0[(((ci * 49) + (h * 7)) + w)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 7; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 7; ++ax3_outer) {
        void* conv_let = (&(global_workspace_25_var[7840]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          ((float*)conv_let)[vc_init] = 0.000000e+00f;
        }
        for (int32_t ci_1 = 0; ci_1 < 8; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[(((ax2_outer * 56) + (ax3_outer * 8)) + ci_1)] * ((float*)fused_constant_9_let)[(((ax1_outer * 32) + (ci_1 * 4)) + vc)]));
          }
        }
        for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
          float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_9_let)[((ax1_outer * 4) + ax1_inner)];
          T_relu[((((ax1_outer * 196) + (ax1_inner * 49)) + (ax2_outer * 7)) + ax3_outer)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_6(float* p0, float* T_relu, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_26_var[6653888]));
  void* fused_constant_10_let = (&(global_const_workspace_26_var[6632224]));
  void* fused_constant_10_global_global_let = (&(global_workspace_27_var[12544]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 16; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 18);
          ((float*)fused_constant_10_global_global_let)[(((cse_var_1 + (ax2_c * 6)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_10_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_27_var[6272]));
  for (int32_t c_outer_c = 0; c_outer_c < 16; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_27_var[13696]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 9; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 18) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((1 <= ax2_c_1) && (ax2_c_1 < 8)) && (1 <= ax3_c_1)) && (ax3_c_1 < 8)) ? p0[(((((c_outer_c * 98) + (ax1_inner_c * 49)) + (ax2_c_1 * 7)) + ax3_c_1) - 8)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 7; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_1) + 14)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_2) + 28)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_3) + 42)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_4) + 56)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 2; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_5) + 70)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 2; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 98) + (j_c_outer * 2)) + c_inner_c_init_6) + 84)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 3; ++di) {
        for (int32_t dj = 0; dj < 3; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_outer * 2);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = (((c_outer_c * 98) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 18) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_outer * 2);
            int32_t cse_var_6 = (dj * 2);
            int32_t cse_var_5 = ((((c_outer_c * 98) + cse_var_7) + c_inner_c_1) + 14);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_7) + cse_var_6) + c_inner_c_1) + 18)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_10 = (j_c_outer * 2);
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = ((((c_outer_c * 98) + cse_var_10) + c_inner_c_2) + 28);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_10) + cse_var_9) + c_inner_c_2) + 36)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_9) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_13 = (j_c_outer * 2);
            int32_t cse_var_12 = (dj * 2);
            int32_t cse_var_11 = ((((c_outer_c * 98) + cse_var_13) + c_inner_c_3) + 42);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_13) + cse_var_12) + c_inner_c_3) + 54)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_12) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_16 = (j_c_outer * 2);
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = ((((c_outer_c * 98) + cse_var_16) + c_inner_c_4) + 56);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_16) + cse_var_15) + c_inner_c_4) + 72)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_15) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 2; ++c_inner_c_5) {
            int32_t cse_var_19 = (j_c_outer * 2);
            int32_t cse_var_18 = (dj * 2);
            int32_t cse_var_17 = ((((c_outer_c * 98) + cse_var_19) + c_inner_c_5) + 70);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_19) + cse_var_18) + c_inner_c_5) + 90)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_18) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 2; ++c_inner_c_6) {
            int32_t cse_var_22 = (j_c_outer * 2);
            int32_t cse_var_21 = (dj * 2);
            int32_t cse_var_20 = ((((c_outer_c * 98) + cse_var_22) + c_inner_c_6) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_22) + cse_var_21) + c_inner_c_6) + 108)] * ((float*)fused_constant_10_global_global_let)[((((c_outer_c * 18) + (di * 6)) + cse_var_21) + c_inner_c_6)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 7; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 7; ++ax3) {
        float __1 = ((float*)DepthwiseConv2d_global_let)[(((((ax1 >> 1) * 98) + (ax2 * 14)) + (ax3 * 2)) + (ax1 & 1))] + ((float*)fused_nn_conv2d_constant_10_let)[ax1];
        T_relu[(((ax1 * 49) + (ax2 * 7)) + ax3)] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_7(float* p0, float* T_relu, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_36_var[6655184]));
  void* fused_constant_14_let = (&(global_const_workspace_36_var[6635424]));
  void* data_vec_let = (&(global_workspace_37_var[2048]));
  for (int32_t ci = 0; ci < 32; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    void* conv_let = (&(global_workspace_37_var[2208]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_8(float* p0, float* T_relu, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_50_var[6654416]));
  void* fused_constant_19_let = (&(global_const_workspace_50_var[6558176]));
  void* data_vec_let = (&(global_workspace_51_var[5632]));
  for (int32_t ci = 0; ci < 88; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    void* conv_let = (&(global_workspace_51_var[6080]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_conv2d_add_nn_relu_9(float* p0, float* T_relu, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_62_var[6654320]));
  void* fused_constant_24_let = (&(global_const_workspace_62_var[6542688]));
  void* data_vec_let = (&(global_workspace_63_var[5632]));
  for (int32_t ci = 0; ci < 88; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 11; ++ax1_outer) {
    void* conv_let = (&(global_workspace_63_var[6080]));
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
TVM_DLL int32_t tvmgen_cls_fused_nn_dense_add(float* p0, float* T_add, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* fused_nn_dense_constant_let = (&(global_const_workspace_144_var[6599904]));
  void* fused_constant_54_let = (&(global_const_workspace_144_var[0]));
  void* T_matmul_NT_let = (&(global_workspace_145_var[5120]));
  for (int32_t j = 0; j < 1000; ++j) {
    ((float*)T_matmul_NT_let)[j] = 0.000000e+00f;
    for (int32_t k = 0; k < 1280; ++k) {
      ((float*)T_matmul_NT_let)[j] = (((float*)T_matmul_NT_let)[j] + (p0[k] * ((float*)fused_constant_54_let)[((j * 1280) + k)]));
    }
  }
  for (int32_t ax1 = 0; ax1 < 1000; ++ax1) {
    T_add[ax1] = (((float*)T_matmul_NT_let)[ax1] + ((float*)fused_nn_dense_constant_let)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_9_var[6304]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 8; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 14; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 14; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 196) + (rv0 * 14)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 8; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 5.102041e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d_1(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_35_var[2048]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 4; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 4; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 16) + (rv0 * 4)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 32; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 6.250000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d_2(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_49_var[5632]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 88; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 4; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 4; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 16) + (rv0 * 4)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 88; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 6.250000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d_3(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_75_var[2560]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 40; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 4; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 4; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 16) + (rv0 * 4)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 40; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 6.250000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d_4(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_89_var[3072]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 48; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 4; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 4; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 16) + (rv0 * 4)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 48; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 6.250000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d_5(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_103_var[0]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 104; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 4) + (rv0 * 2)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 104; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 2.500000e-01f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d_6(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_117_var[0]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 200; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 4) + (rv0 * 2)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 200; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 2.500000e-01f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_global_avg_pool2d_7(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_141_var[3200]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 200; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 2; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 4) + (rv0 * 2)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 200; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 2.500000e-01f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_nn_softmax(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_147_var[8000]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 1000; ++k) {
    float __1 = ((float*)T_softmax_maxelem_let)[0];
    float __2 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
  }
  void* T_softmax_exp_let = (&(global_workspace_147_var[4000]));
  for (int32_t i1 = 0; i1 < 1000; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  void* T_softmax_expsum_let = (&(global_workspace_147_var[0]));
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 1000; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 1000; ++i1_1) {
    T_softmax_norm[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_constant_5_let = (&(global_const_workspace_14_var[6651008]));
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
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_constant_16_let = (&(global_const_workspace_40_var[6626976]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused & 31);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_16_let)[((((ax0_ax1_fused_ax2_fused >> 5) * 128) + (ax4_inner * 32)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_2(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_constant_21_let = (&(global_const_workspace_54_var[6583840]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 352; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 88);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_21_let)[((((ax0_ax1_fused_ax2_fused / 88) * 352) + (ax4_inner * 88)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_3(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_constant_26_let = (&(global_const_workspace_66_var[6572576]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 352; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 88);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_fused / 88) * 352) + (ax4_inner * 88)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_4(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_constant_31_let = (&(global_const_workspace_80_var[6617248]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 160; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 40);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_31_let)[((((ax0_ax1_fused_ax2_fused / 40) * 160) + (ax4_inner * 40)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_5(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_constant_36_let = (&(global_const_workspace_94_var[6611104]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 192; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 48);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_36_let)[((((ax0_ax1_fused_ax2_fused / 48) * 192) + (ax4_inner * 48)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_6(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_constant_41_let = (&(global_const_workspace_108_var[6472000]));
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
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_7(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_constant_46_let = (&(global_const_workspace_122_var[6380800]));
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
TVM_DLL int32_t tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_8(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* fused_constant_51_let = (&(global_const_workspace_134_var[6329600]));
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
TVM_DLL int32_t tvmgen_cls___tvm_main__(float* x_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_61_let = (&(global_workspace_1_var[28800]));
  void* sid_60_let = (&(global_workspace_1_var[800]));
  void* sid_62_let = (&(global_workspace_1_var[0]));
  void* sid_52_let = (&(global_workspace_1_var[416]));
  void* sid_51_let = (&(global_workspace_1_var[13312]));
  void* sid_48_let = (&(global_workspace_1_var[3072]));
  void* sid_47_let = (&(global_workspace_1_var[6144]));
  void* sid_45_let = (&(global_workspace_1_var[3264]));
  void* sid_39_let = (&(global_workspace_1_var[2720]));
  void* sid_54_let = (&(global_workspace_1_var[14976]));
  void* sid_43_let = (&(global_workspace_1_var[4800]));
  void* sid_38_let = (&(global_workspace_1_var[2720]));
  void* sid_42_let = (&(global_workspace_1_var[10944]));
  void* sid_63_let = (&(global_workspace_1_var[32000]));
  void* sid_40_let = (&(global_workspace_1_var[5120]));
  void* sid_56_let = (&(global_workspace_1_var[32512]));
  void* sid_34_let = (&(global_workspace_1_var[5632]));
  void* sid_55_let = (&(global_workspace_1_var[0]));
  void* sid_57_let = (&(global_workspace_1_var[20000]));
  void* sid_31_let = (&(global_workspace_1_var[5984]));
  void* sid_13_let = (&(global_workspace_1_var[12544]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[4704]));
  void* sid_6_let = (&(global_workspace_1_var[6272]));
  void* sid_14_let = (&(global_workspace_1_var[6272]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_41_let = (&(global_workspace_1_var[2560]));
  void* sid_53_let = (&(global_workspace_1_var[416]));
  void* sid_37_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[58800]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_36_let = (&(global_workspace_1_var[4000]));
  void* sid_7_let = (&(global_workspace_1_var[12544]));
  void* sid_32_let = (&(global_workspace_1_var[5984]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[2048]));
  void* sid_5_let = (&(global_workspace_1_var[6272]));
  void* sid_44_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[18816]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_27_let = (&(global_workspace_1_var[5632]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[2176]));
  void* sid_30_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[6272]));
  void* sid_18_let = (&(global_workspace_1_var[2176]));
  void* sid_33_let = (&(global_workspace_1_var[11264]));
  void* sid_19_let = (&(global_workspace_1_var[4096]));
  void* sid_67_let = (&(global_workspace_1_var[800]));
  void* sid_21_let = (&(global_workspace_1_var[21088]));
  void* sid_35_let = (&(global_workspace_1_var[16896]));
  void* sid_22_let = (&(global_workspace_1_var[8800]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_29_let = (&(global_workspace_1_var[8800]));
  void* sid_25_let = (&(global_workspace_1_var[5984]));
  void* sid_46_let = (&(global_workspace_1_var[3264]));
  void* sid_59_let = (&(global_workspace_1_var[800]));
  void* sid_24_let = (&(global_workspace_1_var[5984]));
  void* sid_58_let = (&(global_workspace_1_var[25600]));
  void* sid_50_let = (&(global_workspace_1_var[10400]));
  void* sid_28_let = (&(global_workspace_1_var[20064]));
  void* sid_26_let = (&(global_workspace_1_var[11264]));
  void* sid_64_let = (&(global_workspace_1_var[20000]));
  void* sid_65_let = (&(global_workspace_1_var[25600]));
  void* sid_66_let = (&(global_workspace_1_var[800]));
  void* sid_68_let = (&(global_workspace_1_var[28800]));
  void* sid_69_let = (&(global_workspace_1_var[0]));
  void* sid_70_let = (&(global_workspace_1_var[25600]));
  void* sid_71_let = (&(global_workspace_1_var[0]));
  void* sid_72_let = (&(global_workspace_1_var[0]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_74_let = (&(global_workspace_1_var[0]));
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide(x_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_1(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_2(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add(sid_3_let, sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_3(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_4(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_1(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_5(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_6(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add(sid_13_let, sid_11_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_1(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_2(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_1(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_7(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_1(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_1(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_2(sid_16_let, sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_3(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_4(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_2(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_8(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_2(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_2(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_1(sid_23_let, sid_27_let, sid_21_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_5(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_6(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_2(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_9(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_3(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_3(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_2(sid_30_let, sid_34_let, sid_28_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_7(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_8(sid_36_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_3(sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_10(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_4(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_4(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_3(sid_37_let, sid_41_let, sid_35_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_9(sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_10(sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_4(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_11(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_5(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_5(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_4(sid_44_let, sid_48_let, sid_42_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_11(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_12(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_5(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_12(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_6(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_6(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_3(sid_51_let, sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_13(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_14(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_6(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_13(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_7(sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_7(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_5(sid_58_let, sid_62_let, sid_56_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_15(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_16(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_6(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_nn_relu_14(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_8(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_squeeze_expand_dims_multiply_layout_transform_8(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_6(sid_65_let, sid_69_let, sid_63_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_add_clip_multiply_divide_17(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_global_avg_pool2d_7(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_conv2d_add_clip_multiply_divide_multiply(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_dense_add(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_cls_fused_nn_softmax(sid_74_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

