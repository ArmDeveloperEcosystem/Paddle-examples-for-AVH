// tvm target: c -keys=arm_cpu,cpu -mcpu=cortex-m55
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_concatenate(float* p0, float* p1, float* concatenate_ext, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  for (int32_t j = 0; j < 38400; ++j) {
    concatenate_ext[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 38400; ++j_1) {
    concatenate_ext[(j_1 + 38400)] = p1[j_1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_concatenate_1(float* p0, float* p1, float* concatenate_ext, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
  for (int32_t j = 0; j < 9600; ++j) {
    concatenate_ext[j] = p0[j];
  }
  for (int32_t j_1 = 0; j_1 < 9600; ++j_1) {
    concatenate_ext[(j_1 + 9600)] = p1[j_1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_image_resize2d_concatenate(float* p0, float* p1, float* concatenate_ext, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* resize_let = (&(global_workspace_77_var[1075200]));
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 38400; ++i0_i1_fused_i2_fused_i3_fused) {
    ((float*)resize_let)[i0_i1_fused_i2_fused_i3_fused] = p0[((((i0_i1_fused_i2_fused_i3_fused / 400) * 100) + ((((i0_i1_fused_i2_fused_i3_fused % 400) / 20) / 2) * 10)) + ((i0_i1_fused_i2_fused_i3_fused % 20) / 2))];
  }
  for (int32_t j = 0; j < 38400; ++j) {
    concatenate_ext[j] = ((float*)resize_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 38400; ++j_1) {
    concatenate_ext[(j_1 + 38400)] = p1[j_1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_image_resize2d_concatenate_1(float* p0, float* p1, float* concatenate_ext, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* resize_let = (&(global_workspace_89_var[1843200]));
  for (int32_t i0_i1_fused_i2_fused_i3_fused = 0; i0_i1_fused_i2_fused_i3_fused < 153600; ++i0_i1_fused_i2_fused_i3_fused) {
    ((float*)resize_let)[i0_i1_fused_i2_fused_i3_fused] = p0[((((i0_i1_fused_i2_fused_i3_fused / 1600) * 400) + ((((i0_i1_fused_i2_fused_i3_fused % 1600) / 40) / 2) * 20)) + ((i0_i1_fused_i2_fused_i3_fused % 40) / 2))];
  }
  for (int32_t j = 0; j < 153600; ++j) {
    concatenate_ext[j] = ((float*)resize_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 153600; ++j_1) {
    concatenate_ext[(j_1 + 153600)] = p1[j_1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add(float* p0, float* T_add, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_nn_conv2d_constant_48_let = (&(global_const_workspace_114_var[4731856]));
  void* fused_constant_48_let = (&(global_const_workspace_114_var[4483696]));
  void* data_vec_let = (&(global_workspace_115_var[0]));
  for (int32_t h = 0; h < 20; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 7680) + (w * 384)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 80)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 20; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_115_var[819200]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7680) + (ax3_outer * 384)) + cse_var_2) + vw_1)] * ((float*)fused_constant_48_let)[(((ax1_outer * 384) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 7680) + (ax3_outer * 384)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_48_let)[(((ax1_outer * 384) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 80)) + (ax3_outer * 2)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_48_let)[((ax1_outer * 4) + ax1_inner)]);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            T_add[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 80)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_48_let)[((ax1_outer * 4) + ax1_inner_1)]);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_1(float* p0, float* T_add, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  void* fused_nn_conv2d_constant_61_let = (&(global_const_workspace_152_var[4731728]));
  void* fused_constant_62_let = (&(global_const_workspace_152_var[4471408]));
  void* data_vec_let = (&(global_workspace_153_var[0]));
  for (int32_t h = 0; h < 10; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 3840) + (w * 384)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 40)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 10; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_153_var[204800]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3840) + (ax3_outer * 384)) + cse_var_2) + vw_1)] * ((float*)fused_constant_62_let)[(((ax1_outer * 384) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 3840) + (ax3_outer * 384)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_62_let)[(((ax1_outer * 384) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 40)) + (ax3_outer * 2)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_61_let)[((ax1_outer * 4) + ax1_inner)]);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            T_add[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 40)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_61_let)[((ax1_outer * 4) + ax1_inner_1)]);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_2(float* p0, float* T_add, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  void* fused_nn_conv2d_constant_74_let = (&(global_const_workspace_190_var[4731600]));
  void* fused_constant_76_let = (&(global_const_workspace_190_var[4459120]));
  void* data_vec_let = (&(global_workspace_191_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 1920) + (w * 384)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 20)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_191_var[51200]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1920) + (ax3_outer * 384)) + cse_var_2) + vw_1)] * ((float*)fused_constant_76_let)[(((ax1_outer * 384) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 1920) + (ax3_outer * 384)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_76_let)[(((ax1_outer * 384) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            T_add[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 20)) + (ax3_outer * 2)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_74_let)[((ax1_outer * 4) + ax1_inner)]);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            T_add[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 20)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_74_let)[((ax1_outer * 4) + ax1_inner_1)]);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_3(float* p0, float* T_add, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var) {
  void* fused_nn_conv2d_constant_85_let = (&(global_const_workspace_222_var[4731472]));
  void* fused_constant_88_let = (&(global_const_workspace_222_var[4446832]));
  void* data_vec_let = (&(global_workspace_223_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vw = 0; vw < 5; ++vw) {
        ((float*)data_vec_let)[(((h * 480) + (ci * 5)) + vw)] = p0[(((ci * 25) + (h * 5)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      void* conv_let = (&(global_workspace_223_var[12800]));
      for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
        for (int32_t vc_init = 0; vc_init < 16; ++vc_init) {
          ((float*)conv_let)[((vw_init * 16) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
          for (int32_t vc = 0; vc < 16; ++vc) {
            int32_t cse_var_1 = ((vw_1 * 16) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 480) + (ci_1 * 5)) + vw_1)] * ((float*)fused_constant_88_let)[(((ax1_outer * 1536) + (ci_1 * 16)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
          T_add[((((ax1_outer * 400) + (ax1_inner * 25)) + (ax2_outer * 5)) + ax3_inner)] = (((float*)conv_let)[((ax3_inner * 16) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_85_let)[((ax1_outer * 16) + ax1_inner)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip(float* p0, float* compute, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_54_var[4701776]));
  void* fused_constant_25_let = (&(global_const_workspace_54_var[3909120]));
  void* data_vec_let = (&(global_workspace_55_var[614400]));
  for (int32_t ci = 0; ci < 48; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 48; ++i1_outer) {
    void* conv_let = (&(global_workspace_55_var[614592]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_25_let)[(((i1_outer * 192) + (ci_1 * 4)) + vc)]));
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_1(float* p0, float* compute, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_nn_conv2d_constant_29_let = (&(global_const_workspace_66_var[4685552]));
  void* fused_constant_29_let = (&(global_const_workspace_66_var[1622016]));
  void* data_vec_let = (&(global_workspace_67_var[614400]));
  for (int32_t ci = 0; ci < 96; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t i1_outer = 0; i1_outer < 96; ++i1_outer) {
    void* conv_let = (&(global_workspace_67_var[614784]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_29_let)[(((i1_outer * 384) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t i1_inner = 0; i1_inner < 4; ++i1_inner) {
      int32_t cse_var_1 = ((i1_outer * 4) + i1_inner);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide(float* p0, float* T_divide, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_2_var[4732240]));
  void* fused_constant_let = (&(global_const_workspace_2_var[4682288]));
  void* data_vec_let = (&(global_workspace_3_var[0]));
  for (int32_t h = 0; h < 160; ++h) {
    for (int32_t w = 0; w < 32; ++w) {
      for (int32_t ci = 0; ci < 3; ++ci) {
        for (int32_t vh = 0; vh < 3; ++vh) {
          for (int32_t vw = 0; vw < 11; ++vw) {
            int32_t cse_var_1 = (w * 10);
            ((float*)data_vec_let)[(((((h * 3168) + (w * 99)) + (ci * 33)) + (vh * 11)) + vw)] = (((1 <= ((h * 2) + vh)) && (1 <= (cse_var_1 + vw))) ? p0[((((((ci * 102400) + (h * 640)) + (vh * 320)) + cse_var_1) + vw) - 321)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 160; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 32; ++ax3_outer) {
        void* conv_let = (&(global_workspace_3_var[3665920]));
        for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 3; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
            for (int32_t vc = 0; vc < 4; ++vc) {
              int32_t cse_var_2 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_1 * 2))] * ((float*)fused_constant_let)[(((ax1_outer * 108) + (ci_1 * 36)) + vc)]));
            }
          }
          for (int32_t vw_2 = 0; vw_2 < 5; ++vw_2) {
            for (int32_t vc_1 = 0; vc_1 < 4; ++vc_1) {
              int32_t cse_var_3 = ((vw_2 * 4) + vc_1);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_2 * 2)) + 1)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_1) + 4)]));
            }
          }
          for (int32_t vw_3 = 0; vw_3 < 5; ++vw_3) {
            for (int32_t vc_2 = 0; vc_2 < 4; ++vc_2) {
              int32_t cse_var_4 = ((vw_3 * 4) + vc_2);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_3 * 2)) + 2)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_2) + 8)]));
            }
          }
          for (int32_t vw_4 = 0; vw_4 < 5; ++vw_4) {
            for (int32_t vc_3 = 0; vc_3 < 4; ++vc_3) {
              int32_t cse_var_5 = ((vw_4 * 4) + vc_3);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_4 * 2)) + 11)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_3) + 12)]));
            }
          }
          for (int32_t vw_5 = 0; vw_5 < 5; ++vw_5) {
            for (int32_t vc_4 = 0; vc_4 < 4; ++vc_4) {
              int32_t cse_var_6 = ((vw_5 * 4) + vc_4);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_5 * 2)) + 12)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_4) + 16)]));
            }
          }
          for (int32_t vw_6 = 0; vw_6 < 5; ++vw_6) {
            for (int32_t vc_5 = 0; vc_5 < 4; ++vc_5) {
              int32_t cse_var_7 = ((vw_6 * 4) + vc_5);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_6 * 2)) + 13)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_5) + 20)]));
            }
          }
          for (int32_t vw_7 = 0; vw_7 < 5; ++vw_7) {
            for (int32_t vc_6 = 0; vc_6 < 4; ++vc_6) {
              int32_t cse_var_8 = ((vw_7 * 4) + vc_6);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_7 * 2)) + 22)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_6) + 24)]));
            }
          }
          for (int32_t vw_8 = 0; vw_8 < 5; ++vw_8) {
            for (int32_t vc_7 = 0; vc_7 < 4; ++vc_7) {
              int32_t cse_var_9 = ((vw_8 * 4) + vc_7);
              ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_8 * 2)) + 23)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_7) + 28)]));
            }
          }
          for (int32_t vw_9 = 0; vw_9 < 5; ++vw_9) {
            for (int32_t vc_8 = 0; vc_8 < 4; ++vc_8) {
              int32_t cse_var_10 = ((vw_9 * 4) + vc_8);
              ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 3168) + (ax3_outer * 99)) + (ci_1 * 33)) + (vw_9 * 2)) + 24)] * ((float*)fused_constant_let)[((((ax1_outer * 108) + (ci_1 * 36)) + vc_8) + 32)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_12 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_let)[cse_var_11]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 102400) + (ax1_inner * 25600)) + (ax2_outer * 160)) + (ax3_outer * 5)) + ax3_inner)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_let)[cse_var_11]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_1(float* p0, float* T_divide, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_4_var[4732176]));
  void* fused_constant_1_let = (&(global_const_workspace_4_var[4711760]));
  void* fused_constant_1_global_global_let = (&(global_workspace_5_var[1653952]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 4; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_1_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_1_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_5_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 4; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 40; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_5_var[1638400]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 162; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 648) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 161)) && (1 <= ax3_c_1)) && (ax3_c_1 < 161)) ? p0[((((((c_outer_c * 102400) + (ax1_inner_c * 25600)) + (i_c_outer * 640)) + (ax2_c_1 * 160)) + ax3_c_1) - 161)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 80; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 102400) + (i_c_outer * 2560)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 102400) + (i_c_outer * 2560)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 640)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 102400) + (i_c_outer * 2560)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 1280)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 102400) + (i_c_outer * 2560)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 1920)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 102400) + (i_c_outer * 2560)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 648) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 102400) + (i_c_outer * 2560)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 640);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 648) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 648)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 102400) + (i_c_outer * 2560)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 1280);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 648) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 1296)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 102400) + (i_c_outer * 2560)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 1920);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 648) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 1944)] * ((float*)fused_constant_1_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 160; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 160; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 102400) + (ax2 * 640)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_1_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 25600) + (ax2 * 160)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_1_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_10(float* p0, float* T_divide, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_22_var[4728848]));
  void* fused_constant_10_let = (&(global_const_workspace_22_var[3982848]));
  void* data_vec_let = (&(global_workspace_23_var[614400]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 30720) + (w * 1536)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_23_var[1228800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_2) + 2)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_3) + 4)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_4) + 6)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_5) + 8)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_6) + 10)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_7) + 12)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_8) + 14)] * ((float*)fused_constant_10_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_10_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_11(float* p0, float* T_divide, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_24_var[4728464]));
  void* fused_constant_11_let = (&(global_const_workspace_24_var[4675376]));
  void* fused_constant_11_global_global_let = (&(global_workspace_25_var[773904]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_11_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_11_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_25_var[614400]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_25_var[768000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 41; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 164) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ((i_c_outer * 8) + ax2_c_1)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 6400) + (ax1_inner_c * 1600)) + (i_c_outer * 320)) + (ax2_c_1 * 40)) + ax3_c_1) - 41)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 164) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 164) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 328)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 164) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 656)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 164) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 984)] * ((float*)fused_constant_11_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_11_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_11_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_12(float* p0, float* T_divide, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_26_var[4710992]));
  void* fused_constant_12_let = (&(global_const_workspace_26_var[3022848]));
  void* data_vec_let = (&(global_workspace_27_var[921600]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 9600) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_27_var[1075200]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_12_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_12_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_12_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_12_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_12_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_12_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_13(float* p0, float* T_divide, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_28_var[4710224]));
  void* fused_constant_13_let = (&(global_const_workspace_28_var[4392192]));
  void* fused_constant_13_global_global_let = (&(global_workspace_29_var[1228800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_13_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_13_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_29_var[921600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_29_var[1248000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_13_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_13_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_14(float* p0, float* T_divide, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_30_var[4709456]));
  void* fused_constant_14_let = (&(global_const_workspace_30_var[2506752]));
  void* data_vec_let = (&(global_workspace_31_var[921600]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_31_var[1228800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_14_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_14_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_14_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_14_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_14_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_14_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_15(float* p0, float* T_divide, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_32_var[4708688]));
  void* fused_constant_15_let = (&(global_const_workspace_32_var[4372992]));
  void* fused_constant_15_global_global_let = (&(global_workspace_33_var[1228800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_15_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_15_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_33_var[921600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_33_var[1248000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_15_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_15_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_15_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_16(float* p0, float* T_divide, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_34_var[4707920]));
  void* fused_constant_16_let = (&(global_const_workspace_34_var[2359296]));
  void* data_vec_let = (&(global_workspace_35_var[921600]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_35_var[1228800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_16_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_16_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_16_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_16_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_16_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_16_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_17(float* p0, float* T_divide, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_36_var[4707152]));
  void* fused_constant_17_let = (&(global_const_workspace_36_var[4353792]));
  void* fused_constant_17_global_global_let = (&(global_workspace_37_var[1228800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_17_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_17_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_37_var[921600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_37_var[1248000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_17_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_17_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_17_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_18(float* p0, float* T_divide, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_38_var[4706384]));
  void* fused_constant_18_let = (&(global_const_workspace_38_var[2211840]));
  void* data_vec_let = (&(global_workspace_39_var[921600]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_39_var[1228800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_18_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_18_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_18_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_18_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_18_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_18_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_19(float* p0, float* T_divide, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_40_var[4705616]));
  void* fused_constant_19_let = (&(global_const_workspace_40_var[4334592]));
  void* fused_constant_19_global_global_let = (&(global_workspace_41_var[1228800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_19_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_19_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_41_var[921600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_41_var[1248000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_19_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_19_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_19_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_2(float* p0, float* T_divide, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_6_var[4732080]));
  void* fused_constant_2_let = (&(global_const_workspace_6_var[4690160]));
  void* data_vec_let = (&(global_workspace_7_var[2457600]));
  for (int32_t h = 0; h < 160; ++h) {
    for (int32_t w = 0; w < 80; ++w) {
      for (int32_t ci = 0; ci < 16; ++ci) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          ((float*)data_vec_let)[((((h * 2560) + (w * 32)) + (ci * 2)) + vw)] = p0[((((ci * 25600) + (h * 160)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 3; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 160; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 80; ++ax3_outer) {
        void* conv_let = (&(global_workspace_7_var[4096000]));
        for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
            ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 16; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
            for (int32_t vc = 0; vc < 8; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 8) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 2560) + (ax3_outer * 32)) + (ci_1 * 2)) + vw_1)] * ((float*)fused_constant_2_let)[(((ax1_outer * 128) + (ci_1 * 8)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_2_let)[cse_var_2]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 204800) + (ax1_inner * 25600)) + (ax2_outer * 160)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_2_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_20(float* p0, float* T_divide, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_42_var[4704848]));
  void* fused_constant_20_let = (&(global_const_workspace_42_var[2064384]));
  void* data_vec_let = (&(global_workspace_43_var[921600]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_43_var[1228800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_20_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_20_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_20_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_20_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_20_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_20_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_21(float* p0, float* T_divide, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_44_var[4704080]));
  void* fused_constant_21_let = (&(global_const_workspace_44_var[4315392]));
  void* fused_constant_21_global_global_let = (&(global_workspace_45_var[1228800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_21_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_21_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_45_var[921600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_45_var[1248000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_21_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_21_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_21_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_22(float* p0, float* T_divide, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_46_var[4703312]));
  void* fused_constant_22_let = (&(global_const_workspace_46_var[1916928]));
  void* data_vec_let = (&(global_workspace_47_var[614400]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_47_var[921600]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_22_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_22_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_22_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_22_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_22_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_22_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_23(float* p0, float* T_divide, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_48_var[4702544]));
  void* fused_constant_23_let = (&(global_const_workspace_48_var[4296192]));
  void* fused_constant_23_global_global_let = (&(global_workspace_49_var[691200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_23_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_23_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_49_var[614400]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_49_var[710400]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 23; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 23; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 92) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 22)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[(((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 40)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 80)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 120)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 200)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 240)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 360)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 92) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_5 = (dj * 4);
              int32_t cse_var_4 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 184)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_5) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 80);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 368)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_9 = (dj * 4);
              int32_t cse_var_8 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 120);
              ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 552)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_9) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_4 * 4)) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_4 * 8)) + cse_var_11) + c_inner_c_4) + 736)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_5 * 4)) + c_inner_c_5) + 200);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_5 * 8)) + cse_var_13) + c_inner_c_5) + 920)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_13) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_6 * 4)) + c_inner_c_6) + 240);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_6 * 8)) + cse_var_15) + c_inner_c_6) + 1104)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_17 = (dj * 4);
              int32_t cse_var_16 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_7 * 4)) + c_inner_c_7) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_16] = (((float*)DepthwiseConv2d_global_let)[cse_var_16] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_7 * 8)) + cse_var_17) + c_inner_c_7) + 1288)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_17) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_8 * 4)) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_8 * 8)) + cse_var_19) + c_inner_c_8) + 1472)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_21 = (dj * 4);
              int32_t cse_var_20 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_9 * 4)) + c_inner_c_9) + 360);
              ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_9 * 8)) + cse_var_21) + c_inner_c_9) + 1656)] * ((float*)fused_constant_23_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_21) + c_inner_c_9)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        int32_t cse_var_22 = (((((ax1 >> 2) * 400) + (ax2 * 40)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 100) + (ax2 * 10)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_23_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_24(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_58_var[4688624]));
  void* data_vec_let = (&(global_workspace_59_var[1062912]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 5; ++vw) {
            ((float*)data_vec_let)[(((((h * 3840) + (w * 1920)) + (ci * 10)) + (vh * 5)) + vw)] = p0[(((((ci * 100) + (h * 20)) + (vh * 10)) + (w * 5)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 96; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_59_var[1139712]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 5; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 20)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3840) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * p1[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 5; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 20);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 3840) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 5)] * p1[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_4 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_3 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_3]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 20)) + (ax3_outer * 5)) + ax3_inner)] = (((((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_3]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 5; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_5 = (((ax3_inner_1 * 4) + ax1_inner_1) + 20);
            float __3 = (((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_6]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 20)) + (ax3_outer * 5)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_26_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_25(float* p0, float* T_divide, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  void* fused_nn_conv2d_constant_27_let = (&(global_const_workspace_60_var[4687088]));
  void* fused_constant_27_let = (&(global_const_workspace_60_var[3096576]));
  void* fused_constant_27_global_global_let = (&(global_workspace_61_var[768000]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 96; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_27_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_27_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_61_var[614400]));
  for (int32_t c_outer_c = 0; c_outer_c < 96; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_61_var[806400]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 14; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 14; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 56) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 12)) && (2 <= ax3_c_1)) && (ax3_c_1 < 12)) ? p0[(((((c_outer_c * 400) + (ax1_inner_c * 100)) + (ax2_c_1 * 10)) + ax3_c_1) - 22)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_1) + 4)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_2) + 40)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_3) + 44)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_4) + 80)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_5) + 84)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_6) + 120)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_7) + 124)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_8) + 160)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_9) + 164)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_10) + 200)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_11) + 204)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_12) + 240)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_13) + 244)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_14 = 0; c_inner_c_init_14 < 4; ++c_inner_c_init_14) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_14) + 280)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_15 = 0; c_inner_c_init_15 < 4; ++c_inner_c_init_15) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_15) + 284)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_16 = 0; c_inner_c_init_16 < 4; ++c_inner_c_init_16) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_16) + 320)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_17 = 0; c_inner_c_init_17 < 4; ++c_inner_c_init_17) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_17) + 324)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_18 = 0; c_inner_c_init_18 < 4; ++c_inner_c_init_18) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_18) + 360)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_19 = 0; c_inner_c_init_19 < 4; ++c_inner_c_init_19) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + c_inner_c_init_19) + 364)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
            int32_t cse_var_4 = (j_c_outer * 8);
            int32_t cse_var_3 = (dj * 4);
            int32_t cse_var_2 = (((c_outer_c * 400) + cse_var_4) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 56) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
            int32_t cse_var_7 = (j_c_outer * 8);
            int32_t cse_var_6 = (dj * 4);
            int32_t cse_var_5 = ((((c_outer_c * 400) + cse_var_7) + c_inner_c_1) + 4);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_7) + cse_var_6) + c_inner_c_1) + 4)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
            int32_t cse_var_10 = (j_c_outer * 8);
            int32_t cse_var_9 = (dj * 4);
            int32_t cse_var_8 = ((((c_outer_c * 400) + cse_var_10) + c_inner_c_2) + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_10) + cse_var_9) + c_inner_c_2) + 56)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_9) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
            int32_t cse_var_13 = (j_c_outer * 8);
            int32_t cse_var_12 = (dj * 4);
            int32_t cse_var_11 = ((((c_outer_c * 400) + cse_var_13) + c_inner_c_3) + 44);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_13) + cse_var_12) + c_inner_c_3) + 60)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
            int32_t cse_var_16 = (j_c_outer * 8);
            int32_t cse_var_15 = (dj * 4);
            int32_t cse_var_14 = ((((c_outer_c * 400) + cse_var_16) + c_inner_c_4) + 80);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_16) + cse_var_15) + c_inner_c_4) + 112)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_4)]));
          }
          for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
            int32_t cse_var_19 = (j_c_outer * 8);
            int32_t cse_var_18 = (dj * 4);
            int32_t cse_var_17 = ((((c_outer_c * 400) + cse_var_19) + c_inner_c_5) + 84);
            ((float*)DepthwiseConv2d_global_let)[cse_var_17] = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_19) + cse_var_18) + c_inner_c_5) + 116)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_18) + c_inner_c_5)]));
          }
          for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
            int32_t cse_var_22 = (j_c_outer * 8);
            int32_t cse_var_21 = (dj * 4);
            int32_t cse_var_20 = ((((c_outer_c * 400) + cse_var_22) + c_inner_c_6) + 120);
            ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_22) + cse_var_21) + c_inner_c_6) + 168)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_21) + c_inner_c_6)]));
          }
          for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
            int32_t cse_var_25 = (j_c_outer * 8);
            int32_t cse_var_24 = (dj * 4);
            int32_t cse_var_23 = ((((c_outer_c * 400) + cse_var_25) + c_inner_c_7) + 124);
            ((float*)DepthwiseConv2d_global_let)[cse_var_23] = (((float*)DepthwiseConv2d_global_let)[cse_var_23] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_25) + cse_var_24) + c_inner_c_7) + 172)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_24) + c_inner_c_7)]));
          }
          for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
            int32_t cse_var_28 = (j_c_outer * 8);
            int32_t cse_var_27 = (dj * 4);
            int32_t cse_var_26 = ((((c_outer_c * 400) + cse_var_28) + c_inner_c_8) + 160);
            ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_28) + cse_var_27) + c_inner_c_8) + 224)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_8)]));
          }
          for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
            int32_t cse_var_31 = (j_c_outer * 8);
            int32_t cse_var_30 = (dj * 4);
            int32_t cse_var_29 = ((((c_outer_c * 400) + cse_var_31) + c_inner_c_9) + 164);
            ((float*)DepthwiseConv2d_global_let)[cse_var_29] = (((float*)DepthwiseConv2d_global_let)[cse_var_29] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_31) + cse_var_30) + c_inner_c_9) + 228)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_30) + c_inner_c_9)]));
          }
          for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
            int32_t cse_var_34 = (j_c_outer * 8);
            int32_t cse_var_33 = (dj * 4);
            int32_t cse_var_32 = ((((c_outer_c * 400) + cse_var_34) + c_inner_c_10) + 200);
            ((float*)DepthwiseConv2d_global_let)[cse_var_32] = (((float*)DepthwiseConv2d_global_let)[cse_var_32] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_34) + cse_var_33) + c_inner_c_10) + 280)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_33) + c_inner_c_10)]));
          }
          for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
            int32_t cse_var_37 = (j_c_outer * 8);
            int32_t cse_var_36 = (dj * 4);
            int32_t cse_var_35 = ((((c_outer_c * 400) + cse_var_37) + c_inner_c_11) + 204);
            ((float*)DepthwiseConv2d_global_let)[cse_var_35] = (((float*)DepthwiseConv2d_global_let)[cse_var_35] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_37) + cse_var_36) + c_inner_c_11) + 284)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_36) + c_inner_c_11)]));
          }
          for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
            int32_t cse_var_40 = (j_c_outer * 8);
            int32_t cse_var_39 = (dj * 4);
            int32_t cse_var_38 = ((((c_outer_c * 400) + cse_var_40) + c_inner_c_12) + 240);
            ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_40) + cse_var_39) + c_inner_c_12) + 336)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_12)]));
          }
          for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
            int32_t cse_var_43 = (j_c_outer * 8);
            int32_t cse_var_42 = (dj * 4);
            int32_t cse_var_41 = ((((c_outer_c * 400) + cse_var_43) + c_inner_c_13) + 244);
            ((float*)DepthwiseConv2d_global_let)[cse_var_41] = (((float*)DepthwiseConv2d_global_let)[cse_var_41] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_43) + cse_var_42) + c_inner_c_13) + 340)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_42) + c_inner_c_13)]));
          }
          for (int32_t c_inner_c_14 = 0; c_inner_c_14 < 4; ++c_inner_c_14) {
            int32_t cse_var_46 = (j_c_outer * 8);
            int32_t cse_var_45 = (dj * 4);
            int32_t cse_var_44 = ((((c_outer_c * 400) + cse_var_46) + c_inner_c_14) + 280);
            ((float*)DepthwiseConv2d_global_let)[cse_var_44] = (((float*)DepthwiseConv2d_global_let)[cse_var_44] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_46) + cse_var_45) + c_inner_c_14) + 392)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_45) + c_inner_c_14)]));
          }
          for (int32_t c_inner_c_15 = 0; c_inner_c_15 < 4; ++c_inner_c_15) {
            int32_t cse_var_49 = (j_c_outer * 8);
            int32_t cse_var_48 = (dj * 4);
            int32_t cse_var_47 = ((((c_outer_c * 400) + cse_var_49) + c_inner_c_15) + 284);
            ((float*)DepthwiseConv2d_global_let)[cse_var_47] = (((float*)DepthwiseConv2d_global_let)[cse_var_47] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_49) + cse_var_48) + c_inner_c_15) + 396)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_48) + c_inner_c_15)]));
          }
          for (int32_t c_inner_c_16 = 0; c_inner_c_16 < 4; ++c_inner_c_16) {
            int32_t cse_var_52 = (j_c_outer * 8);
            int32_t cse_var_51 = (dj * 4);
            int32_t cse_var_50 = ((((c_outer_c * 400) + cse_var_52) + c_inner_c_16) + 320);
            ((float*)DepthwiseConv2d_global_let)[cse_var_50] = (((float*)DepthwiseConv2d_global_let)[cse_var_50] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_52) + cse_var_51) + c_inner_c_16) + 448)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_51) + c_inner_c_16)]));
          }
          for (int32_t c_inner_c_17 = 0; c_inner_c_17 < 4; ++c_inner_c_17) {
            int32_t cse_var_55 = (j_c_outer * 8);
            int32_t cse_var_54 = (dj * 4);
            int32_t cse_var_53 = ((((c_outer_c * 400) + cse_var_55) + c_inner_c_17) + 324);
            ((float*)DepthwiseConv2d_global_let)[cse_var_53] = (((float*)DepthwiseConv2d_global_let)[cse_var_53] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_55) + cse_var_54) + c_inner_c_17) + 452)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_54) + c_inner_c_17)]));
          }
          for (int32_t c_inner_c_18 = 0; c_inner_c_18 < 4; ++c_inner_c_18) {
            int32_t cse_var_58 = (j_c_outer * 8);
            int32_t cse_var_57 = (dj * 4);
            int32_t cse_var_56 = ((((c_outer_c * 400) + cse_var_58) + c_inner_c_18) + 360);
            ((float*)DepthwiseConv2d_global_let)[cse_var_56] = (((float*)DepthwiseConv2d_global_let)[cse_var_56] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_58) + cse_var_57) + c_inner_c_18) + 504)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_57) + c_inner_c_18)]));
          }
          for (int32_t c_inner_c_19 = 0; c_inner_c_19 < 4; ++c_inner_c_19) {
            int32_t cse_var_61 = (j_c_outer * 8);
            int32_t cse_var_60 = (dj * 4);
            int32_t cse_var_59 = ((((c_outer_c * 400) + cse_var_61) + c_inner_c_19) + 364);
            ((float*)DepthwiseConv2d_global_let)[cse_var_59] = (((float*)DepthwiseConv2d_global_let)[cse_var_59] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_61) + cse_var_60) + c_inner_c_19) + 508)] * ((float*)fused_constant_27_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_60) + c_inner_c_19)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 384; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        int32_t cse_var_62 = (((((ax1 >> 2) * 400) + (ax2 * 40)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_62] + ((float*)fused_nn_conv2d_constant_27_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 100) + (ax2 * 10)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_62] + ((float*)fused_nn_conv2d_constant_27_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_26(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_nn_conv2d_constant_30_let = (&(global_const_workspace_70_var[4684016]));
  void* data_vec_let = (&(global_workspace_71_var[1665024]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 2; ++w) {
      for (int32_t ci = 0; ci < 384; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 5; ++vw) {
            ((float*)data_vec_let)[(((((h * 7680) + (w * 3840)) + (ci * 10)) + (vh * 5)) + vw)] = p0[(((((ci * 100) + (h * 20)) + (vh * 10)) + (w * 5)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 96; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
        void* conv_let = (&(global_workspace_71_var[1818624]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 5; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 20)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 384; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7680) + (ax3_outer * 3840)) + (ci_1 * 10)) + vw_1)] * p1[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 5; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 20);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 7680) + (ax3_outer * 3840)) + (ci_1 * 10)) + vw_2) + 5)] * p1[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_4 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_3 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_3]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 20)) + (ax3_outer * 5)) + ax3_inner)] = (((((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_3]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 5; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_5 = (((ax3_inner_1 * 4) + ax1_inner_1) + 20);
            float __3 = (((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_6]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 20)) + (ax3_outer * 5)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_5] + ((float*)fused_nn_conv2d_constant_30_let)[cse_var_6]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_27(float* p0, float* T_divide, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_nn_conv2d_constant_31_let = (&(global_const_workspace_72_var[4727696]));
  void* fused_constant_31_let = (&(global_const_workspace_72_var[1474560]));
  void* data_vec_let = (&(global_workspace_73_var[614400]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 384; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 3840)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 50)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_73_var[768000]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 384; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 3840)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_31_let)[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 3840)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_31_let)[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 3840)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_31_let)[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 3840)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_31_let)[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 3840)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_31_let)[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_2 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_2) + 20)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_3 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_3) + 30)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_4 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_4) + 40)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_31_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_28(float* p0, float* T_divide, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_nn_conv2d_constant_32_let = (&(global_const_workspace_74_var[4727312]));
  void* fused_constant_32_let = (&(global_const_workspace_74_var[2949120]));
  void* data_vec_let = (&(global_workspace_75_var[614400]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_75_var[1075200]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_32_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_32_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_32_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_32_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_32_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_32_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_29(float* p0, float* T_divide, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_nn_conv2d_constant_33_let = (&(global_const_workspace_78_var[4701008]));
  void* fused_constant_33_let = (&(global_const_workspace_78_var[4276992]));
  void* fused_constant_33_global_global_let = (&(global_workspace_79_var[1228800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_33_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_33_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_79_var[921600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_79_var[1248000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_33_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_33_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_3(float* p0, float* T_divide, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_8_var[4731984]));
  void* fused_constant_3_let = (&(global_const_workspace_8_var[4691696]));
  void* fused_constant_3_global_global_let = (&(global_workspace_9_var[3095184]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 6; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_3_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_3_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_9_var[2457600]));
  for (int32_t c_outer_c = 0; c_outer_c < 6; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 20; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_9_var[3072000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 161; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 644) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ((i_c_outer * 8) + ax2_c_1)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 102400) + (ax1_inner_c * 25600)) + (i_c_outer * 1280)) + (ax2_c_1 * 160)) + ax3_c_1) - 161)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 40; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 320)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 640)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 960)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 644) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 320);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 644) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 1288)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 640);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 644) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 2576)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 960);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 644) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 3864)] * ((float*)fused_constant_3_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 24; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 80; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 80; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 25600) + (ax2 * 320)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_3_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 6400) + (ax2 * 80)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_3_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_30(float* p0, float* T_divide, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_nn_conv2d_constant_34_let = (&(global_const_workspace_80_var[4700240]));
  void* fused_constant_34_let = (&(global_const_workspace_80_var[1327104]));
  void* data_vec_let = (&(global_workspace_81_var[921600]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_81_var[1228800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_34_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_34_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_34_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_34_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_34_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_34_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_31(float* p0, float* T_divide, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_nn_conv2d_constant_35_let = (&(global_const_workspace_82_var[4699472]));
  void* fused_constant_35_let = (&(global_const_workspace_82_var[4257792]));
  void* fused_constant_35_global_global_let = (&(global_workspace_83_var[1228800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_35_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_35_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_83_var[921600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_83_var[1248000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_35_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_35_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_35_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_35_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_35_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_35_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_32(float* p0, float* T_divide, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_nn_conv2d_constant_36_let = (&(global_const_workspace_84_var[4726928]));
  void* fused_constant_36_let = (&(global_const_workspace_84_var[2875392]));
  void* data_vec_let = (&(global_workspace_85_var[614400]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_85_var[921600]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_36_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_36_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_36_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_36_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_36_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_36_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_33(float* p0, float* T_divide, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_nn_conv2d_constant_37_let = (&(global_const_workspace_86_var[4726544]));
  void* fused_constant_37_let = (&(global_const_workspace_86_var[3872256]));
  void* data_vec_let = (&(global_workspace_87_var[614400]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 30720) + (w * 1536)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_87_var[0]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_2) + 2)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_3) + 4)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_4) + 6)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_5) + 8)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_6) + 10)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_7) + 12)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_8) + 14)] * ((float*)fused_constant_37_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_37_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_34(float* p0, float* T_divide, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_nn_conv2d_constant_38_let = (&(global_const_workspace_90_var[4698704]));
  void* fused_constant_38_let = (&(global_const_workspace_90_var[4238592]));
  void* fused_constant_38_global_global_let = (&(global_workspace_91_var[2457600]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_38_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_38_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_91_var[1228800]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 10; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_91_var[2476800]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 44; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 176) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 21)) && (2 <= ax3_c_1)) && (ax3_c_1 < 42)) ? p0[((((((c_outer_c * 6400) + (ax1_inner_c * 1600)) + (i_c_outer * 160)) + (ax2_c_1 * 40)) + ax3_c_1) - 82)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_1) + 4)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_2) + 8)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_3) + 12)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_5) + 164)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_6) + 168)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_7) + 172)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_9) + 324)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_10) + 328)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_11) + 332)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_12) + 480)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_13) + 484)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_14 = 0; c_inner_c_init_14 < 4; ++c_inner_c_init_14) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_14) + 488)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_15 = 0; c_inner_c_init_15 < 4; ++c_inner_c_init_15) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_15) + 492)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 16);
              int32_t cse_var_4 = (dj * 4);
              int32_t cse_var_3 = ((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_5) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 176) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
            }
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_8 = (j_c_outer * 16);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_8) + c_inner_c_1) + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_8) + cse_var_7) + c_inner_c_1) + 4)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_11 = (j_c_outer * 16);
              int32_t cse_var_10 = (dj * 4);
              int32_t cse_var_9 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_11) + c_inner_c_2) + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_11) + cse_var_10) + c_inner_c_2) + 8)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_10) + c_inner_c_2)]));
            }
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_14 = (j_c_outer * 16);
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_14) + c_inner_c_3) + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_14) + cse_var_13) + c_inner_c_3) + 12)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_13) + c_inner_c_3)]));
            }
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_17 = (j_c_outer * 16);
              int32_t cse_var_16 = (dj * 4);
              int32_t cse_var_15 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_17) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_17) + cse_var_16) + c_inner_c_4) + 176)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_4)]));
            }
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_20 = (j_c_outer * 16);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_20) + c_inner_c_5) + 164);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_20) + cse_var_19) + c_inner_c_5) + 180)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_5)]));
            }
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_23 = (j_c_outer * 16);
              int32_t cse_var_22 = (dj * 4);
              int32_t cse_var_21 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_23) + c_inner_c_6) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_23) + cse_var_22) + c_inner_c_6) + 184)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_22) + c_inner_c_6)]));
            }
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_26 = (j_c_outer * 16);
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_26) + c_inner_c_7) + 172);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_26) + cse_var_25) + c_inner_c_7) + 188)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_25) + c_inner_c_7)]));
            }
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_29 = (j_c_outer * 16);
              int32_t cse_var_28 = (dj * 4);
              int32_t cse_var_27 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_29) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_29) + cse_var_28) + c_inner_c_8) + 352)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_28) + c_inner_c_8)]));
            }
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_32 = (j_c_outer * 16);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_32) + c_inner_c_9) + 324);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_32) + cse_var_31) + c_inner_c_9) + 356)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_9)]));
            }
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_35 = (j_c_outer * 16);
              int32_t cse_var_34 = (dj * 4);
              int32_t cse_var_33 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_35) + c_inner_c_10) + 328);
              ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_35) + cse_var_34) + c_inner_c_10) + 360)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_34) + c_inner_c_10)]));
            }
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_38 = (j_c_outer * 16);
              int32_t cse_var_37 = (dj * 4);
              int32_t cse_var_36 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_38) + c_inner_c_11) + 332);
              ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_38) + cse_var_37) + c_inner_c_11) + 364)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_37) + c_inner_c_11)]));
            }
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_41 = (j_c_outer * 16);
              int32_t cse_var_40 = (dj * 4);
              int32_t cse_var_39 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_41) + c_inner_c_12) + 480);
              ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_41) + cse_var_40) + c_inner_c_12) + 528)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_40) + c_inner_c_12)]));
            }
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_44 = (j_c_outer * 16);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_44) + c_inner_c_13) + 484);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_44) + cse_var_43) + c_inner_c_13) + 532)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_13)]));
            }
            for (int32_t c_inner_c_14 = 0; c_inner_c_14 < 4; ++c_inner_c_14) {
              int32_t cse_var_47 = (j_c_outer * 16);
              int32_t cse_var_46 = (dj * 4);
              int32_t cse_var_45 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_47) + c_inner_c_14) + 488);
              ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_47) + cse_var_46) + c_inner_c_14) + 536)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_46) + c_inner_c_14)]));
            }
            for (int32_t c_inner_c_15 = 0; c_inner_c_15 < 4; ++c_inner_c_15) {
              int32_t cse_var_50 = (j_c_outer * 16);
              int32_t cse_var_49 = (dj * 4);
              int32_t cse_var_48 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_50) + c_inner_c_15) + 492);
              ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_50) + cse_var_49) + c_inner_c_15) + 540)] * ((float*)fused_constant_38_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_49) + c_inner_c_15)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 40; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
        int32_t cse_var_51 = (((((ax1 >> 2) * 6400) + (ax2 * 160)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_38_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 1600) + (ax2 * 40)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_38_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_35(float* p0, float* T_divide, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_nn_conv2d_constant_39_let = (&(global_const_workspace_92_var[4697936]));
  void* fused_constant_39_let = (&(global_const_workspace_92_var[1179648]));
  void* data_vec_let = (&(global_workspace_93_var[1228800]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 61440) + (w * 3072)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_93_var[2457600]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_2) + 2)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_3) + 4)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_4) + 6)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_5) + 8)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_6) + 10)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_7) + 12)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_8) + 14)] * ((float*)fused_constant_39_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_39_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_36(float* p0, float* T_divide, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_nn_conv2d_constant_40_let = (&(global_const_workspace_94_var[4697168]));
  void* fused_constant_40_let = (&(global_const_workspace_94_var[4219392]));
  void* fused_constant_40_global_global_let = (&(global_workspace_95_var[2457600]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_40_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_40_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_95_var[1228800]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 10; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_95_var[2476800]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 44; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 176) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 21)) && (2 <= ax3_c_1)) && (ax3_c_1 < 42)) ? p0[((((((c_outer_c * 6400) + (ax1_inner_c * 1600)) + (i_c_outer * 160)) + (ax2_c_1 * 40)) + ax3_c_1) - 82)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_1) + 4)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_2) + 8)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_3) + 12)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_5) + 164)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_6) + 168)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_7) + 172)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_9) + 324)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_10) + 328)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_11) + 332)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_12) + 480)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_13) + 484)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_14 = 0; c_inner_c_init_14 < 4; ++c_inner_c_init_14) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_14) + 488)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_15 = 0; c_inner_c_init_15 < 4; ++c_inner_c_init_15) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_15) + 492)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 16);
              int32_t cse_var_4 = (dj * 4);
              int32_t cse_var_3 = ((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_5) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 176) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
            }
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_8 = (j_c_outer * 16);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_8) + c_inner_c_1) + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_8) + cse_var_7) + c_inner_c_1) + 4)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_11 = (j_c_outer * 16);
              int32_t cse_var_10 = (dj * 4);
              int32_t cse_var_9 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_11) + c_inner_c_2) + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_11) + cse_var_10) + c_inner_c_2) + 8)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_10) + c_inner_c_2)]));
            }
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_14 = (j_c_outer * 16);
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_14) + c_inner_c_3) + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_14) + cse_var_13) + c_inner_c_3) + 12)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_13) + c_inner_c_3)]));
            }
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_17 = (j_c_outer * 16);
              int32_t cse_var_16 = (dj * 4);
              int32_t cse_var_15 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_17) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_17) + cse_var_16) + c_inner_c_4) + 176)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_4)]));
            }
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_20 = (j_c_outer * 16);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_20) + c_inner_c_5) + 164);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_20) + cse_var_19) + c_inner_c_5) + 180)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_5)]));
            }
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_23 = (j_c_outer * 16);
              int32_t cse_var_22 = (dj * 4);
              int32_t cse_var_21 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_23) + c_inner_c_6) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_23) + cse_var_22) + c_inner_c_6) + 184)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_22) + c_inner_c_6)]));
            }
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_26 = (j_c_outer * 16);
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_26) + c_inner_c_7) + 172);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_26) + cse_var_25) + c_inner_c_7) + 188)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_25) + c_inner_c_7)]));
            }
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_29 = (j_c_outer * 16);
              int32_t cse_var_28 = (dj * 4);
              int32_t cse_var_27 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_29) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_29) + cse_var_28) + c_inner_c_8) + 352)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_28) + c_inner_c_8)]));
            }
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_32 = (j_c_outer * 16);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_32) + c_inner_c_9) + 324);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_32) + cse_var_31) + c_inner_c_9) + 356)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_9)]));
            }
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_35 = (j_c_outer * 16);
              int32_t cse_var_34 = (dj * 4);
              int32_t cse_var_33 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_35) + c_inner_c_10) + 328);
              ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_35) + cse_var_34) + c_inner_c_10) + 360)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_34) + c_inner_c_10)]));
            }
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_38 = (j_c_outer * 16);
              int32_t cse_var_37 = (dj * 4);
              int32_t cse_var_36 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_38) + c_inner_c_11) + 332);
              ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_38) + cse_var_37) + c_inner_c_11) + 364)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_37) + c_inner_c_11)]));
            }
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_41 = (j_c_outer * 16);
              int32_t cse_var_40 = (dj * 4);
              int32_t cse_var_39 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_41) + c_inner_c_12) + 480);
              ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_41) + cse_var_40) + c_inner_c_12) + 528)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_40) + c_inner_c_12)]));
            }
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_44 = (j_c_outer * 16);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_44) + c_inner_c_13) + 484);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_44) + cse_var_43) + c_inner_c_13) + 532)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_13)]));
            }
            for (int32_t c_inner_c_14 = 0; c_inner_c_14 < 4; ++c_inner_c_14) {
              int32_t cse_var_47 = (j_c_outer * 16);
              int32_t cse_var_46 = (dj * 4);
              int32_t cse_var_45 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_47) + c_inner_c_14) + 488);
              ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_47) + cse_var_46) + c_inner_c_14) + 536)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_46) + c_inner_c_14)]));
            }
            for (int32_t c_inner_c_15 = 0; c_inner_c_15 < 4; ++c_inner_c_15) {
              int32_t cse_var_50 = (j_c_outer * 16);
              int32_t cse_var_49 = (dj * 4);
              int32_t cse_var_48 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_50) + c_inner_c_15) + 492);
              ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_50) + cse_var_49) + c_inner_c_15) + 540)] * ((float*)fused_constant_40_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_49) + c_inner_c_15)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 40; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
        int32_t cse_var_51 = (((((ax1 >> 2) * 6400) + (ax2 * 160)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_40_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 1600) + (ax2 * 40)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_40_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_37(float* p0, float* T_divide, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_nn_conv2d_constant_41_let = (&(global_const_workspace_96_var[4726160]));
  void* fused_constant_41_let = (&(global_const_workspace_96_var[2801664]));
  void* data_vec_let = (&(global_workspace_97_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 61440) + (w * 3072)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_97_var[1843200]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_2) + 2)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_3) + 4)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_4) + 6)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_5) + 8)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_6) + 10)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_7) + 12)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 61440) + (ax3_outer * 3072)) + (ci_1 * 16)) + vw_8) + 14)] * ((float*)fused_constant_41_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_41_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_38(float* p0, float* T_divide, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_nn_conv2d_constant_42_let = (&(global_const_workspace_98_var[4725776]));
  void* fused_constant_42_let = (&(global_const_workspace_98_var[4639984]));
  void* fused_constant_42_global_global_let = (&(global_workspace_99_var[614400]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_42_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_42_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_99_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 10; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_99_var[624000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 44; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 176) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 21)) && (2 <= ax3_c_1)) && (ax3_c_1 < 42)) ? p0[((((((c_outer_c * 6400) + (ax1_inner_c * 1600)) + (i_c_outer * 160)) + (ax2_c_1 * 40)) + ax3_c_1) - 82)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_1) + 4)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_2) + 8)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_3) + 12)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_5) + 164)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_6) + 168)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_7) + 172)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_9) + 324)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_10) + 328)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_11) + 332)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_12) + 480)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_13) + 484)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_14 = 0; c_inner_c_init_14 < 4; ++c_inner_c_init_14) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_14) + 488)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_15 = 0; c_inner_c_init_15 < 4; ++c_inner_c_init_15) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_15) + 492)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 16);
              int32_t cse_var_4 = (dj * 4);
              int32_t cse_var_3 = ((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_5) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 176) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
            }
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_8 = (j_c_outer * 16);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_8) + c_inner_c_1) + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_8) + cse_var_7) + c_inner_c_1) + 4)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_11 = (j_c_outer * 16);
              int32_t cse_var_10 = (dj * 4);
              int32_t cse_var_9 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_11) + c_inner_c_2) + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_11) + cse_var_10) + c_inner_c_2) + 8)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_10) + c_inner_c_2)]));
            }
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_14 = (j_c_outer * 16);
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_14) + c_inner_c_3) + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_14) + cse_var_13) + c_inner_c_3) + 12)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_13) + c_inner_c_3)]));
            }
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_17 = (j_c_outer * 16);
              int32_t cse_var_16 = (dj * 4);
              int32_t cse_var_15 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_17) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_17) + cse_var_16) + c_inner_c_4) + 176)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_4)]));
            }
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_20 = (j_c_outer * 16);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_20) + c_inner_c_5) + 164);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_20) + cse_var_19) + c_inner_c_5) + 180)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_5)]));
            }
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_23 = (j_c_outer * 16);
              int32_t cse_var_22 = (dj * 4);
              int32_t cse_var_21 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_23) + c_inner_c_6) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_23) + cse_var_22) + c_inner_c_6) + 184)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_22) + c_inner_c_6)]));
            }
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_26 = (j_c_outer * 16);
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_26) + c_inner_c_7) + 172);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_26) + cse_var_25) + c_inner_c_7) + 188)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_25) + c_inner_c_7)]));
            }
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_29 = (j_c_outer * 16);
              int32_t cse_var_28 = (dj * 4);
              int32_t cse_var_27 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_29) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_29) + cse_var_28) + c_inner_c_8) + 352)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_28) + c_inner_c_8)]));
            }
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_32 = (j_c_outer * 16);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_32) + c_inner_c_9) + 324);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_32) + cse_var_31) + c_inner_c_9) + 356)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_9)]));
            }
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_35 = (j_c_outer * 16);
              int32_t cse_var_34 = (dj * 4);
              int32_t cse_var_33 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_35) + c_inner_c_10) + 328);
              ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_35) + cse_var_34) + c_inner_c_10) + 360)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_34) + c_inner_c_10)]));
            }
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_38 = (j_c_outer * 16);
              int32_t cse_var_37 = (dj * 4);
              int32_t cse_var_36 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_38) + c_inner_c_11) + 332);
              ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_38) + cse_var_37) + c_inner_c_11) + 364)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_37) + c_inner_c_11)]));
            }
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_41 = (j_c_outer * 16);
              int32_t cse_var_40 = (dj * 4);
              int32_t cse_var_39 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_41) + c_inner_c_12) + 480);
              ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_41) + cse_var_40) + c_inner_c_12) + 528)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_40) + c_inner_c_12)]));
            }
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_44 = (j_c_outer * 16);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_44) + c_inner_c_13) + 484);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_44) + cse_var_43) + c_inner_c_13) + 532)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_13)]));
            }
            for (int32_t c_inner_c_14 = 0; c_inner_c_14 < 4; ++c_inner_c_14) {
              int32_t cse_var_47 = (j_c_outer * 16);
              int32_t cse_var_46 = (dj * 4);
              int32_t cse_var_45 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_47) + c_inner_c_14) + 488);
              ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_47) + cse_var_46) + c_inner_c_14) + 536)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_46) + c_inner_c_14)]));
            }
            for (int32_t c_inner_c_15 = 0; c_inner_c_15 < 4; ++c_inner_c_15) {
              int32_t cse_var_50 = (j_c_outer * 16);
              int32_t cse_var_49 = (dj * 4);
              int32_t cse_var_48 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_50) + c_inner_c_15) + 492);
              ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_50) + cse_var_49) + c_inner_c_15) + 540)] * ((float*)fused_constant_42_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_49) + c_inner_c_15)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 40; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
        int32_t cse_var_51 = (((((ax1 >> 2) * 6400) + (ax2 * 160)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_42_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 1600) + (ax2 * 40)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_42_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_39(float* p0, float* T_divide, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_nn_conv2d_constant_43_let = (&(global_const_workspace_100_var[4725392]));
  void* fused_constant_43_let = (&(global_const_workspace_100_var[3835392]));
  void* data_vec_let = (&(global_workspace_101_var[614400]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 30720) + (w * 1536)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_101_var[1843200]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_2) + 2)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_3) + 4)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_4) + 6)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_5) + 8)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_6) + 10)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_7) + 12)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_8) + 14)] * ((float*)fused_constant_43_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_43_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_4(float* p0, float* T_divide, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_10_var[4731088]));
  void* fused_constant_4_let = (&(global_const_workspace_10_var[4667312]));
  void* data_vec_let = (&(global_workspace_11_var[1228800]));
  for (int32_t h = 0; h < 80; ++h) {
    for (int32_t w = 0; w < 40; ++w) {
      for (int32_t ci = 0; ci < 24; ++ci) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          ((float*)data_vec_let)[((((h * 1920) + (w * 48)) + (ci * 2)) + vw)] = p0[((((ci * 6400) + (h * 80)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 6; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 80; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 40; ++ax3_outer) {
        void* conv_let = (&(global_workspace_11_var[1843200]));
        for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
            ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 24; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
            for (int32_t vc = 0; vc < 8; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 8) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1920) + (ax3_outer * 48)) + (ci_1 * 2)) + vw_1)] * ((float*)fused_constant_4_let)[(((ax1_outer * 192) + (ci_1 * 8)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_2]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 51200) + (ax1_inner * 6400)) + (ax2_outer * 80)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_4_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_40(float* p0, float* T_divide, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_nn_conv2d_constant_44_let = (&(global_const_workspace_102_var[4725008]));
  void* fused_constant_44_let = (&(global_const_workspace_102_var[4630384]));
  void* fused_constant_44_global_global_let = (&(global_workspace_103_var[1843200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_44_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_44_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_103_var[614400]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 10; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_103_var[1852800]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 44; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 176) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 21)) && (2 <= ax3_c_1)) && (ax3_c_1 < 42)) ? p0[((((((c_outer_c * 6400) + (ax1_inner_c * 1600)) + (i_c_outer * 160)) + (ax2_c_1 * 40)) + ax3_c_1) - 82)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_1) + 4)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_2) + 8)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_3) + 12)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_5) + 164)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_6) + 168)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_7) + 172)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_9) + 324)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_10) + 328)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_11) + 332)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_12) + 480)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_13) + 484)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_14 = 0; c_inner_c_init_14 < 4; ++c_inner_c_init_14) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_14) + 488)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_15 = 0; c_inner_c_init_15 < 4; ++c_inner_c_init_15) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_15) + 492)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 16);
              int32_t cse_var_4 = (dj * 4);
              int32_t cse_var_3 = ((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_5) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 176) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
            }
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_8 = (j_c_outer * 16);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_8) + c_inner_c_1) + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_8) + cse_var_7) + c_inner_c_1) + 4)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_11 = (j_c_outer * 16);
              int32_t cse_var_10 = (dj * 4);
              int32_t cse_var_9 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_11) + c_inner_c_2) + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_11) + cse_var_10) + c_inner_c_2) + 8)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_10) + c_inner_c_2)]));
            }
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_14 = (j_c_outer * 16);
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_14) + c_inner_c_3) + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_14) + cse_var_13) + c_inner_c_3) + 12)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_13) + c_inner_c_3)]));
            }
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_17 = (j_c_outer * 16);
              int32_t cse_var_16 = (dj * 4);
              int32_t cse_var_15 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_17) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_17) + cse_var_16) + c_inner_c_4) + 176)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_4)]));
            }
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_20 = (j_c_outer * 16);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_20) + c_inner_c_5) + 164);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_20) + cse_var_19) + c_inner_c_5) + 180)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_5)]));
            }
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_23 = (j_c_outer * 16);
              int32_t cse_var_22 = (dj * 4);
              int32_t cse_var_21 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_23) + c_inner_c_6) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_23) + cse_var_22) + c_inner_c_6) + 184)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_22) + c_inner_c_6)]));
            }
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_26 = (j_c_outer * 16);
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_26) + c_inner_c_7) + 172);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_26) + cse_var_25) + c_inner_c_7) + 188)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_25) + c_inner_c_7)]));
            }
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_29 = (j_c_outer * 16);
              int32_t cse_var_28 = (dj * 4);
              int32_t cse_var_27 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_29) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_29) + cse_var_28) + c_inner_c_8) + 352)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_28) + c_inner_c_8)]));
            }
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_32 = (j_c_outer * 16);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_32) + c_inner_c_9) + 324);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_32) + cse_var_31) + c_inner_c_9) + 356)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_9)]));
            }
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_35 = (j_c_outer * 16);
              int32_t cse_var_34 = (dj * 4);
              int32_t cse_var_33 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_35) + c_inner_c_10) + 328);
              ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_35) + cse_var_34) + c_inner_c_10) + 360)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_34) + c_inner_c_10)]));
            }
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_38 = (j_c_outer * 16);
              int32_t cse_var_37 = (dj * 4);
              int32_t cse_var_36 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_38) + c_inner_c_11) + 332);
              ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_38) + cse_var_37) + c_inner_c_11) + 364)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_37) + c_inner_c_11)]));
            }
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_41 = (j_c_outer * 16);
              int32_t cse_var_40 = (dj * 4);
              int32_t cse_var_39 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_41) + c_inner_c_12) + 480);
              ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_41) + cse_var_40) + c_inner_c_12) + 528)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_40) + c_inner_c_12)]));
            }
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_44 = (j_c_outer * 16);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_44) + c_inner_c_13) + 484);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_44) + cse_var_43) + c_inner_c_13) + 532)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_43) + c_inner_c_13)]));
            }
            for (int32_t c_inner_c_14 = 0; c_inner_c_14 < 4; ++c_inner_c_14) {
              int32_t cse_var_47 = (j_c_outer * 16);
              int32_t cse_var_46 = (dj * 4);
              int32_t cse_var_45 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_47) + c_inner_c_14) + 488);
              ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_47) + cse_var_46) + c_inner_c_14) + 536)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_46) + c_inner_c_14)]));
            }
            for (int32_t c_inner_c_15 = 0; c_inner_c_15 < 4; ++c_inner_c_15) {
              int32_t cse_var_50 = (j_c_outer * 16);
              int32_t cse_var_49 = (dj * 4);
              int32_t cse_var_48 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_50) + c_inner_c_15) + 492);
              ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (((float*)PaddedInput_global_global_let)[(((((di * 176) + cse_var_50) + cse_var_49) + c_inner_c_15) + 540)] * ((float*)fused_constant_44_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_49) + c_inner_c_15)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 40; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
        int32_t cse_var_51 = (((((ax1 >> 2) * 6400) + (ax2 * 160)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_44_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 1600) + (ax2 * 40)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_44_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_41(float* p0, float* T_divide, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_nn_conv2d_constant_45_let = (&(global_const_workspace_104_var[4724624]));
  void* fused_constant_45_let = (&(global_const_workspace_104_var[3798528]));
  void* data_vec_let = (&(global_workspace_105_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 30720) + (w * 1536)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_105_var[614400]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_2) + 2)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_3) + 4)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_4) + 6)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_5) + 8)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_6) + 10)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_7) + 12)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_8) + 14)] * ((float*)fused_constant_45_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_45_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_42(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_nn_conv2d_constant_47_let = (&(global_const_workspace_112_var[4723856]));
  void* data_vec_let = (&(global_workspace_113_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 30720) + (w * 1536)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_113_var[651264]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_1)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_2) + 2)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_3) + 4)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_4) + 6)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_5) + 8)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_6) + 10)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_7) + 12)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 30720) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_8) + 14)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_47_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_43(float* p0, float* T_divide, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_nn_conv2d_constant_49_let = (&(global_const_workspace_122_var[4723472]));
  void* fused_constant_50_let = (&(global_const_workspace_122_var[4620784]));
  void* fused_constant_50_global_global_let = (&(global_workspace_123_var[153600]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_50_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_50_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_123_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_123_var[163200]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 11; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 43; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 172) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 21)) && (2 <= ax3_c_1)) && (ax3_c_1 < 42)) ? p0[((((((c_outer_c * 6400) + (ax1_inner_c * 1600)) + (i_c_outer * 320)) + (ax2_c_1 * 40)) + ax3_c_1) - 82)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 172) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_50_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_6 = (dj * 4);
                int32_t cse_var_5 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[((((((di * 172) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_6) + c_inner_c_1) + 344)] * ((float*)fused_constant_50_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_6) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 172) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_8) + c_inner_c_2) + 688)] * ((float*)fused_constant_50_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_10 = (dj * 4);
                int32_t cse_var_9 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[((((((di * 172) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_10) + c_inner_c_3) + 1032)] * ((float*)fused_constant_50_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_10) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_11 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_49_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_49_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_44(float* p0, float* T_divide, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  void* fused_nn_conv2d_constant_50_let = (&(global_const_workspace_124_var[4723088]));
  void* fused_constant_51_let = (&(global_const_workspace_124_var[3687936]));
  void* data_vec_let = (&(global_workspace_125_var[0]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 9600) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_125_var[153600]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_51_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_51_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_51_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_51_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_51_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_50_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_45(float* p0, float* T_divide, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_nn_conv2d_constant_51_let = (&(global_const_workspace_128_var[4696400]));
  void* fused_constant_52_let = (&(global_const_workspace_128_var[4200192]));
  void* fused_constant_52_global_global_let = (&(global_workspace_129_var[614400]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_52_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_52_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_129_var[307200]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_129_var[633600]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_52_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_52_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_52_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_52_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_51_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_51_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_46(float* p0, float* T_divide, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_nn_conv2d_constant_52_let = (&(global_const_workspace_130_var[4695632]));
  void* fused_constant_53_let = (&(global_const_workspace_130_var[1032192]));
  void* data_vec_let = (&(global_workspace_131_var[307200]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_131_var[614400]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_53_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_53_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_53_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_53_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_53_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_52_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_47(float* p0, float* T_divide, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_nn_conv2d_constant_53_let = (&(global_const_workspace_132_var[4694864]));
  void* fused_constant_54_let = (&(global_const_workspace_132_var[4180992]));
  void* fused_constant_54_global_global_let = (&(global_workspace_133_var[614400]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_54_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_54_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_133_var[307200]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_133_var[633600]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_54_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_54_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_54_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_54_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_53_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_53_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_48(float* p0, float* T_divide, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* fused_nn_conv2d_constant_54_let = (&(global_const_workspace_134_var[4722704]));
  void* fused_constant_55_let = (&(global_const_workspace_134_var[2727936]));
  void* data_vec_let = (&(global_workspace_135_var[0]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 19200) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_135_var[460800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_55_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_55_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_55_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_55_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 19200) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_55_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_54_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_49(float* p0, float* T_divide, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_nn_conv2d_constant_55_let = (&(global_const_workspace_136_var[4722320]));
  void* fused_constant_56_let = (&(global_const_workspace_136_var[4611184]));
  void* fused_constant_56_global_global_let = (&(global_workspace_137_var[153600]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_56_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_56_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_137_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_137_var[163200]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_56_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_56_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_56_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_56_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_55_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_55_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_5(float* p0, float* T_divide, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_12_var[4730896]));
  void* fused_constant_5_let = (&(global_const_workspace_12_var[4680560]));
  void* fused_constant_5_global_global_let = (&(global_workspace_13_var[2465472]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 12; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_5_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_5_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_13_var[1228800]));
  for (int32_t c_outer_c = 0; c_outer_c < 12; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 20; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_13_var[2457600]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 82; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 328) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 81)) && (1 <= ax3_c_1)) && (ax3_c_1 < 81)) ? p0[((((((c_outer_c * 25600) + (ax1_inner_c * 6400)) + (i_c_outer * 320)) + (ax2_c_1 * 80)) + ax3_c_1) - 81)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 40; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 320)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 640)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 25600) + (i_c_outer * 1280)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 960)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 25600) + (i_c_outer * 1280)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 328) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 25600) + (i_c_outer * 1280)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 320);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 328) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 328)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 25600) + (i_c_outer * 1280)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 640);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 328) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 656)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 25600) + (i_c_outer * 1280)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 960);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 328) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 984)] * ((float*)fused_constant_5_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 48; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 80; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 80; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 25600) + (ax2 * 320)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_5_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 6400) + (ax2 * 80)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_5_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_50(float* p0, float* T_divide, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_nn_conv2d_constant_56_let = (&(global_const_workspace_138_var[4721936]));
  void* fused_constant_57_let = (&(global_const_workspace_138_var[3651072]));
  void* data_vec_let = (&(global_workspace_139_var[153600]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 9600) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_139_var[460800]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_57_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_57_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_57_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_57_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_57_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_56_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_51(float* p0, float* T_divide, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_nn_conv2d_constant_57_let = (&(global_const_workspace_140_var[4721552]));
  void* fused_constant_58_let = (&(global_const_workspace_140_var[4601584]));
  void* fused_constant_58_global_global_let = (&(global_workspace_141_var[460800]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_58_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_58_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_141_var[153600]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 5; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_141_var[470400]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 8; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 24; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 2) + (ax2_c_1 >> 1));
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 96) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[((((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (i_c_outer * 80)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 80)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 1600) + (i_c_outer * 320)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 240)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 5; ++di) {
          for (int32_t dj = 0; dj < 5; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_6 = (j_c_outer * 8);
                int32_t cse_var_5 = (j_c_inner * 4);
                int32_t cse_var_4 = (dj * 4);
                int32_t cse_var_3 = (((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_6) + cse_var_5) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[(((((di * 96) + cse_var_6) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_58_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_4) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_10 = (j_c_outer * 8);
                int32_t cse_var_9 = (j_c_inner_1 * 4);
                int32_t cse_var_8 = (dj * 4);
                int32_t cse_var_7 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_10) + cse_var_9) + c_inner_c_1) + 80);
                ((float*)DepthwiseConv2d_global_let)[cse_var_7] = (((float*)DepthwiseConv2d_global_let)[cse_var_7] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_10) + cse_var_9) + cse_var_8) + c_inner_c_1) + 96)] * ((float*)fused_constant_58_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_8) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_14 = (j_c_outer * 8);
                int32_t cse_var_13 = (j_c_inner_2 * 4);
                int32_t cse_var_12 = (dj * 4);
                int32_t cse_var_11 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_14) + cse_var_13) + c_inner_c_2) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_14) + cse_var_13) + cse_var_12) + c_inner_c_2) + 192)] * ((float*)fused_constant_58_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_12) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_18 = (j_c_outer * 8);
                int32_t cse_var_17 = (j_c_inner_3 * 4);
                int32_t cse_var_16 = (dj * 4);
                int32_t cse_var_15 = ((((((c_outer_c * 1600) + (i_c_outer * 320)) + cse_var_18) + cse_var_17) + c_inner_c_3) + 240);
                ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[((((((di * 96) + cse_var_18) + cse_var_17) + cse_var_16) + c_inner_c_3) + 288)] * ((float*)fused_constant_58_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_16) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 20; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
        int32_t cse_var_19 = (((((ax1 >> 2) * 1600) + (ax2 * 80)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_57_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 400) + (ax2 * 20)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_57_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_52(float* p0, float* T_divide, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* fused_nn_conv2d_constant_58_let = (&(global_const_workspace_142_var[4721168]));
  void* fused_constant_59_let = (&(global_const_workspace_142_var[3614208]));
  void* data_vec_let = (&(global_workspace_143_var[0]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 9600) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_143_var[153600]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_59_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_59_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_59_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_59_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_59_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_58_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_53(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* fused_nn_conv2d_constant_60_let = (&(global_const_workspace_150_var[4720400]));
  void* data_vec_let = (&(global_workspace_151_var[0]));
  for (int32_t h = 0; h < 4; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 9600) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 400) + (h * 100)) + (vh * 20)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_151_var[190464]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 1600) + (ax1_inner * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_2) + 40)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_3) + 60)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 1600) + (ax1_inner_4 * 400)) + (ax2_outer * 100)) + (ax3_outer * 2)) + ax3_inner_4) + 80)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_60_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_54(float* p0, float* T_divide, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  void* fused_nn_conv2d_constant_62_let = (&(global_const_workspace_160_var[4720016]));
  void* fused_constant_64_let = (&(global_const_workspace_160_var[4591984]));
  void* fused_constant_64_global_global_let = (&(global_workspace_161_var[38400]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_64_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_64_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_161_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_161_var[48000]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 23; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 23; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 92) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 22)) && (2 <= ax3_c_1)) && (ax3_c_1 < 22)) ? p0[(((((c_outer_c * 1600) + (ax1_inner_c * 400)) + (ax2_c_1 * 20)) + ax3_c_1) - 42)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 40)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 80)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 120)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 200)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 240)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 360)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 92) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_5 = (dj * 4);
              int32_t cse_var_4 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 184)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_5) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 80);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 368)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_9 = (dj * 4);
              int32_t cse_var_8 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 120);
              ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 552)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_9) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_4 * 4)) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_4 * 8)) + cse_var_11) + c_inner_c_4) + 736)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_5 * 4)) + c_inner_c_5) + 200);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_5 * 8)) + cse_var_13) + c_inner_c_5) + 920)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_13) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_6 * 4)) + c_inner_c_6) + 240);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_6 * 8)) + cse_var_15) + c_inner_c_6) + 1104)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_17 = (dj * 4);
              int32_t cse_var_16 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_7 * 4)) + c_inner_c_7) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_16] = (((float*)DepthwiseConv2d_global_let)[cse_var_16] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_7 * 8)) + cse_var_17) + c_inner_c_7) + 1288)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_17) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_8 * 4)) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_8 * 8)) + cse_var_19) + c_inner_c_8) + 1472)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_21 = (dj * 4);
              int32_t cse_var_20 = (((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_9 * 4)) + c_inner_c_9) + 360);
              ((float*)DepthwiseConv2d_global_let)[cse_var_20] = (((float*)DepthwiseConv2d_global_let)[cse_var_20] + (((float*)PaddedInput_global_global_let)[((((((di * 92) + (j_c_outer * 16)) + (j_c_inner_9 * 8)) + cse_var_21) + c_inner_c_9) + 1656)] * ((float*)fused_constant_64_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_21) + c_inner_c_9)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        int32_t cse_var_22 = (((((ax1 >> 2) * 400) + (ax2 * 40)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_62_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 100) + (ax2 * 10)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_62_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_55(float* p0, float* T_divide, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  void* fused_nn_conv2d_constant_63_let = (&(global_const_workspace_162_var[4719632]));
  void* fused_constant_65_let = (&(global_const_workspace_162_var[3503616]));
  void* data_vec_let = (&(global_workspace_163_var[0]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 4800) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 50)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_163_var[38400]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_65_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_65_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_65_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_65_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_65_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_2 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_2) + 20)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_3 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_3) + 30)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_4 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_4) + 40)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_63_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_56(float* p0, float* T_divide, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  void* fused_nn_conv2d_constant_64_let = (&(global_const_workspace_166_var[4694096]));
  void* fused_constant_66_let = (&(global_const_workspace_166_var[4161792]));
  void* fused_constant_66_global_global_let = (&(global_workspace_167_var[153600]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_66_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_66_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_167_var[76800]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_167_var[172800]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 14; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 14; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 56) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 12)) && (2 <= ax3_c_1)) && (ax3_c_1 < 12)) ? p0[(((((c_outer_c * 400) + (ax1_inner_c * 100)) + (ax2_c_1 * 10)) + ax3_c_1) - 22)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 40)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 80)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 120)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 200)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 240)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 360)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 400) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 400) + cse_var_9) + cse_var_8) + c_inner_c_1) + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 56)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 400) + cse_var_13) + cse_var_12) + c_inner_c_2) + 80);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 112)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 400) + cse_var_17) + cse_var_16) + c_inner_c_3) + 120);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 168)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 400) + cse_var_21) + cse_var_20) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 224)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 400) + cse_var_25) + cse_var_24) + c_inner_c_5) + 200);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 280)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 400) + cse_var_29) + cse_var_28) + c_inner_c_6) + 240);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 336)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 400) + cse_var_33) + cse_var_32) + c_inner_c_7) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 392)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 400) + cse_var_37) + cse_var_36) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 448)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 400) + cse_var_41) + cse_var_40) + c_inner_c_9) + 360);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 504)] * ((float*)fused_constant_66_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        int32_t cse_var_42 = (((((ax1 >> 2) * 400) + (ax2 * 40)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_64_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 100) + (ax2 * 10)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_64_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_57(float* p0, float* T_divide, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  void* fused_nn_conv2d_constant_65_let = (&(global_const_workspace_168_var[4693328]));
  void* fused_constant_67_let = (&(global_const_workspace_168_var[884736]));
  void* data_vec_let = (&(global_workspace_169_var[76800]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 9600) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 50)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_169_var[153600]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_67_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_67_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_67_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_67_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_67_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_2 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_2) + 20)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_3 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_3) + 30)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_4 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_4) + 40)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_65_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_58(float* p0, float* T_divide, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
  void* fused_nn_conv2d_constant_66_let = (&(global_const_workspace_170_var[4692560]));
  void* fused_constant_68_let = (&(global_const_workspace_170_var[4142592]));
  void* fused_constant_68_global_global_let = (&(global_workspace_171_var[153600]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_68_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_68_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_171_var[76800]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_171_var[172800]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 14; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 14; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 56) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 12)) && (2 <= ax3_c_1)) && (ax3_c_1 < 12)) ? p0[(((((c_outer_c * 400) + (ax1_inner_c * 100)) + (ax2_c_1 * 10)) + ax3_c_1) - 22)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 40)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 80)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 120)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 200)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 240)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 360)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 400) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 400) + cse_var_9) + cse_var_8) + c_inner_c_1) + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 56)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 400) + cse_var_13) + cse_var_12) + c_inner_c_2) + 80);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 112)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 400) + cse_var_17) + cse_var_16) + c_inner_c_3) + 120);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 168)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 400) + cse_var_21) + cse_var_20) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 224)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 400) + cse_var_25) + cse_var_24) + c_inner_c_5) + 200);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 280)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 400) + cse_var_29) + cse_var_28) + c_inner_c_6) + 240);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 336)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 400) + cse_var_33) + cse_var_32) + c_inner_c_7) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 392)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 400) + cse_var_37) + cse_var_36) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 448)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 400) + cse_var_41) + cse_var_40) + c_inner_c_9) + 360);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 504)] * ((float*)fused_constant_68_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 192; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        int32_t cse_var_42 = (((((ax1 >> 2) * 400) + (ax2 * 40)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_66_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 100) + (ax2 * 10)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_66_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_59(float* p0, float* T_divide, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  void* fused_nn_conv2d_constant_67_let = (&(global_const_workspace_172_var[4719248]));
  void* fused_constant_69_let = (&(global_const_workspace_172_var[2654208]));
  void* data_vec_let = (&(global_workspace_173_var[0]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 192; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 9600) + (w * 1920)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 50)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_173_var[115200]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_69_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_69_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_69_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_69_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 9600) + (ax3_outer * 1920)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_69_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_2 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_2) + 20)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_3 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_3) + 30)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_4 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_4) + 40)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_67_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_6(float* p0, float* T_divide, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_14_var[4730704]));
  void* fused_constant_6_let = (&(global_const_workspace_14_var[4649584]));
  void* data_vec_let = (&(global_workspace_15_var[1228800]));
  for (int32_t h = 0; h < 80; ++h) {
    for (int32_t w = 0; w < 40; ++w) {
      for (int32_t ci = 0; ci < 48; ++ci) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          ((float*)data_vec_let)[((((h * 3840) + (w * 96)) + (ci * 2)) + vw)] = p0[((((ci * 6400) + (h * 80)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 6; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 80; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 40; ++ax3_outer) {
        void* conv_let = (&(global_workspace_15_var[2457600]));
        for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
          for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
            ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
          for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
            for (int32_t vc = 0; vc < 8; ++vc) {
              int32_t cse_var_1 = ((vw_1 * 8) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 3840) + (ax3_outer * 96)) + (ci_1 * 2)) + vw_1)] * ((float*)fused_constant_6_let)[(((ax1_outer * 384) + (ci_1 * 8)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
            int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
            int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_2]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 51200) + (ax1_inner * 6400)) + (ax2_outer * 80)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_6_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_60(float* p0, float* T_divide, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  void* fused_nn_conv2d_constant_68_let = (&(global_const_workspace_174_var[4718864]));
  void* fused_constant_70_let = (&(global_const_workspace_174_var[4582384]));
  void* fused_constant_70_global_global_let = (&(global_workspace_175_var[38400]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_70_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_70_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_175_var[0]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_175_var[48000]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 14; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 14; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 56) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 12)) && (2 <= ax3_c_1)) && (ax3_c_1 < 12)) ? p0[(((((c_outer_c * 400) + (ax1_inner_c * 100)) + (ax2_c_1 * 10)) + ax3_c_1) - 22)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 40)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 80)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 120)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 200)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 240)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 360)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 400) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 400) + cse_var_9) + cse_var_8) + c_inner_c_1) + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 56)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 400) + cse_var_13) + cse_var_12) + c_inner_c_2) + 80);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 112)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 400) + cse_var_17) + cse_var_16) + c_inner_c_3) + 120);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 168)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 400) + cse_var_21) + cse_var_20) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 224)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 400) + cse_var_25) + cse_var_24) + c_inner_c_5) + 200);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 280)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 400) + cse_var_29) + cse_var_28) + c_inner_c_6) + 240);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 336)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 400) + cse_var_33) + cse_var_32) + c_inner_c_7) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 392)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 400) + cse_var_37) + cse_var_36) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 448)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 400) + cse_var_41) + cse_var_40) + c_inner_c_9) + 360);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 504)] * ((float*)fused_constant_70_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        int32_t cse_var_42 = (((((ax1 >> 2) * 400) + (ax2 * 40)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_68_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 100) + (ax2 * 10)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_68_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_61(float* p0, float* T_divide, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  void* fused_nn_conv2d_constant_69_let = (&(global_const_workspace_176_var[4718480]));
  void* fused_constant_71_let = (&(global_const_workspace_176_var[3466752]));
  void* data_vec_let = (&(global_workspace_177_var[38400]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 4800) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 50)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_177_var[115200]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_71_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_71_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_71_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_71_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_71_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_2 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_2) + 20)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_3 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_3) + 30)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_4 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_4) + 40)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_69_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_62(float* p0, float* T_divide, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
  void* fused_nn_conv2d_constant_70_let = (&(global_const_workspace_178_var[4718096]));
  void* fused_constant_72_let = (&(global_const_workspace_178_var[4572784]));
  void* fused_constant_72_global_global_let = (&(global_workspace_179_var[115200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 100);
          ((float*)fused_constant_72_global_global_let)[(((cse_var_1 + (ax2_c * 20)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_72_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_179_var[38400]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_179_var[124800]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 14; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 14; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 56) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 12)) && (2 <= ax3_c_1)) && (ax3_c_1 < 12)) ? p0[(((((c_outer_c * 400) + (ax1_inner_c * 100)) + (ax2_c_1 * 10)) + ax3_c_1) - 22)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 40)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 80)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 120)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_4 = 0; j_c_inner_init_4 < 2; ++j_c_inner_init_4) {
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_4 * 4)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_5 = 0; j_c_inner_init_5 < 2; ++j_c_inner_init_5) {
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_5 * 4)) + c_inner_c_init_5) + 200)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_6 = 0; j_c_inner_init_6 < 2; ++j_c_inner_init_6) {
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_6 * 4)) + c_inner_c_init_6) + 240)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_7 = 0; j_c_inner_init_7 < 2; ++j_c_inner_init_7) {
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_7 * 4)) + c_inner_c_init_7) + 280)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_8 = 0; j_c_inner_init_8 < 2; ++j_c_inner_init_8) {
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_8 * 4)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
      }
      for (int32_t j_c_inner_init_9 = 0; j_c_inner_init_9 < 2; ++j_c_inner_init_9) {
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 400) + (j_c_outer * 8)) + (j_c_inner_init_9 * 4)) + c_inner_c_init_9) + 360)] = 0.000000e+00f;
        }
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 8);
              int32_t cse_var_4 = (j_c_inner * 4);
              int32_t cse_var_3 = (dj * 4);
              int32_t cse_var_2 = ((((c_outer_c * 400) + cse_var_5) + cse_var_4) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 56) + cse_var_5) + cse_var_4) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_3) + c_inner_c)]));
            }
          }
          for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_9 = (j_c_outer * 8);
              int32_t cse_var_8 = (j_c_inner_1 * 4);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 400) + cse_var_9) + cse_var_8) + c_inner_c_1) + 40);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_9) + cse_var_8) + cse_var_7) + c_inner_c_1) + 56)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_7) + c_inner_c_1)]));
            }
          }
          for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_13 = (j_c_outer * 8);
              int32_t cse_var_12 = (j_c_inner_2 * 4);
              int32_t cse_var_11 = (dj * 4);
              int32_t cse_var_10 = (((((c_outer_c * 400) + cse_var_13) + cse_var_12) + c_inner_c_2) + 80);
              ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_13) + cse_var_12) + cse_var_11) + c_inner_c_2) + 112)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_11) + c_inner_c_2)]));
            }
          }
          for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_17 = (j_c_outer * 8);
              int32_t cse_var_16 = (j_c_inner_3 * 4);
              int32_t cse_var_15 = (dj * 4);
              int32_t cse_var_14 = (((((c_outer_c * 400) + cse_var_17) + cse_var_16) + c_inner_c_3) + 120);
              ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_17) + cse_var_16) + cse_var_15) + c_inner_c_3) + 168)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_15) + c_inner_c_3)]));
            }
          }
          for (int32_t j_c_inner_4 = 0; j_c_inner_4 < 2; ++j_c_inner_4) {
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_21 = (j_c_outer * 8);
              int32_t cse_var_20 = (j_c_inner_4 * 4);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 400) + cse_var_21) + cse_var_20) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_21) + cse_var_20) + cse_var_19) + c_inner_c_4) + 224)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_19) + c_inner_c_4)]));
            }
          }
          for (int32_t j_c_inner_5 = 0; j_c_inner_5 < 2; ++j_c_inner_5) {
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_25 = (j_c_outer * 8);
              int32_t cse_var_24 = (j_c_inner_5 * 4);
              int32_t cse_var_23 = (dj * 4);
              int32_t cse_var_22 = (((((c_outer_c * 400) + cse_var_25) + cse_var_24) + c_inner_c_5) + 200);
              ((float*)DepthwiseConv2d_global_let)[cse_var_22] = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_25) + cse_var_24) + cse_var_23) + c_inner_c_5) + 280)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_23) + c_inner_c_5)]));
            }
          }
          for (int32_t j_c_inner_6 = 0; j_c_inner_6 < 2; ++j_c_inner_6) {
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_29 = (j_c_outer * 8);
              int32_t cse_var_28 = (j_c_inner_6 * 4);
              int32_t cse_var_27 = (dj * 4);
              int32_t cse_var_26 = (((((c_outer_c * 400) + cse_var_29) + cse_var_28) + c_inner_c_6) + 240);
              ((float*)DepthwiseConv2d_global_let)[cse_var_26] = (((float*)DepthwiseConv2d_global_let)[cse_var_26] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_29) + cse_var_28) + cse_var_27) + c_inner_c_6) + 336)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_27) + c_inner_c_6)]));
            }
          }
          for (int32_t j_c_inner_7 = 0; j_c_inner_7 < 2; ++j_c_inner_7) {
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_33 = (j_c_outer * 8);
              int32_t cse_var_32 = (j_c_inner_7 * 4);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 400) + cse_var_33) + cse_var_32) + c_inner_c_7) + 280);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_33) + cse_var_32) + cse_var_31) + c_inner_c_7) + 392)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_31) + c_inner_c_7)]));
            }
          }
          for (int32_t j_c_inner_8 = 0; j_c_inner_8 < 2; ++j_c_inner_8) {
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_37 = (j_c_outer * 8);
              int32_t cse_var_36 = (j_c_inner_8 * 4);
              int32_t cse_var_35 = (dj * 4);
              int32_t cse_var_34 = (((((c_outer_c * 400) + cse_var_37) + cse_var_36) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_34] = (((float*)DepthwiseConv2d_global_let)[cse_var_34] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_37) + cse_var_36) + cse_var_35) + c_inner_c_8) + 448)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_35) + c_inner_c_8)]));
            }
          }
          for (int32_t j_c_inner_9 = 0; j_c_inner_9 < 2; ++j_c_inner_9) {
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_41 = (j_c_outer * 8);
              int32_t cse_var_40 = (j_c_inner_9 * 4);
              int32_t cse_var_39 = (dj * 4);
              int32_t cse_var_38 = (((((c_outer_c * 400) + cse_var_41) + cse_var_40) + c_inner_c_9) + 360);
              ((float*)DepthwiseConv2d_global_let)[cse_var_38] = (((float*)DepthwiseConv2d_global_let)[cse_var_38] + (((float*)PaddedInput_global_global_let)[((((((di * 56) + cse_var_41) + cse_var_40) + cse_var_39) + c_inner_c_9) + 504)] * ((float*)fused_constant_72_global_global_let)[((((c_outer_c * 100) + (di * 20)) + cse_var_39) + c_inner_c_9)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
        int32_t cse_var_42 = (((((ax1 >> 2) * 400) + (ax2 * 40)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_70_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 100) + (ax2 * 10)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_42] + ((float*)fused_nn_conv2d_constant_70_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_63(float* p0, float* T_divide, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  void* fused_nn_conv2d_constant_71_let = (&(global_const_workspace_180_var[4717712]));
  void* fused_constant_73_let = (&(global_const_workspace_180_var[3429888]));
  void* data_vec_let = (&(global_workspace_181_var[0]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 4800) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 50)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_181_var[38400]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * ((float*)fused_constant_73_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * ((float*)fused_constant_73_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * ((float*)fused_constant_73_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * ((float*)fused_constant_73_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * ((float*)fused_constant_73_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_2 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_2) + 20)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_3 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_3) + 30)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_4 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_4) + 40)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_71_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_64(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  void* fused_nn_conv2d_constant_73_let = (&(global_const_workspace_188_var[4716944]));
  void* data_vec_let = (&(global_workspace_189_var[0]));
  for (int32_t h = 0; h < 2; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 5; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 4800) + (w * 960)) + (ci * 10)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 50)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 2; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_189_var[75264]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_1)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_2) + 2)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_3) + 4)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_4) + 6)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 4800) + (ax3_outer * 960)) + (ci_1 * 10)) + vw_5) + 8)] * p1[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_7 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_6 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_6]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 400) + (ax1_inner * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_7] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_6]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_8 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_9]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_8] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_9]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_11 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_10 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_11]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_2 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_2) + 20)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_11]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_13 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_12 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_13]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_3 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_3) + 30)] = (((((float*)conv_let)[cse_var_12] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_13]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_15 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_14 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_15]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 400) + (ax1_inner_4 * 100)) + (ax2_outer * 50)) + (ax3_outer * 2)) + ax3_inner_4) + 40)] = (((((float*)conv_let)[cse_var_14] + ((float*)fused_nn_conv2d_constant_73_let)[cse_var_15]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_65(float* p0, float* T_divide, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
  void* fused_nn_conv2d_constant_75_let = (&(global_const_workspace_198_var[4716560]));
  void* fused_constant_78_let = (&(global_const_workspace_198_var[4563184]));
  void* fused_constant_78_global_global_let = (&(global_workspace_199_var[0]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 50);
          ((float*)fused_constant_78_global_global_let)[(((cse_var_1 + (ax2_c * 10)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_78_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_199_var[9600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_199_var[19200]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 13; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 13; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 26) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 12)) && (2 <= ax3_c_1)) && (ax3_c_1 < 12)) ? p0[(((((c_outer_c * 200) + (ax1_inner_c * 100)) + (ax2_c_1 * 10)) + ax3_c_1) - 22)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_1) + 10)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_2) + 20)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_3) + 30)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_4) + 40)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_4 = (c_outer_c * 50);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = ((cse_var_4 + (j_c_outer * 2)) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 26) + (j_c_outer * 4)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_78_global_global_let)[(((cse_var_4 + (di * 10)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_7 = (c_outer_c * 50);
            int32_t cse_var_6 = (dj * 2);
            int32_t cse_var_5 = (((cse_var_7 + (j_c_outer * 2)) + c_inner_c_1) + 10);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_6) + c_inner_c_1) + 52)] * ((float*)fused_constant_78_global_global_let)[(((cse_var_7 + (di * 10)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_10 = (c_outer_c * 50);
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = (((cse_var_10 + (j_c_outer * 2)) + c_inner_c_2) + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_9) + c_inner_c_2) + 104)] * ((float*)fused_constant_78_global_global_let)[(((cse_var_10 + (di * 10)) + cse_var_9) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_13 = (c_outer_c * 50);
            int32_t cse_var_12 = (dj * 2);
            int32_t cse_var_11 = (((cse_var_13 + (j_c_outer * 2)) + c_inner_c_3) + 30);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_12) + c_inner_c_3) + 156)] * ((float*)fused_constant_78_global_global_let)[(((cse_var_13 + (di * 10)) + cse_var_12) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_16 = (c_outer_c * 50);
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = (((cse_var_16 + (j_c_outer * 2)) + c_inner_c_4) + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_15) + c_inner_c_4) + 208)] * ((float*)fused_constant_78_global_global_let)[(((cse_var_16 + (di * 10)) + cse_var_15) + c_inner_c_4)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
        int32_t cse_var_17 = (((((ax1 >> 1) * 50) + (ax2 * 10)) + (ax3 * 2)) + (ax1 & 1));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_75_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 25) + (ax2 * 5)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_75_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_66(float* p0, float* T_divide, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var) {
  void* fused_nn_conv2d_constant_76_let = (&(global_const_workspace_200_var[4716176]));
  void* fused_constant_79_let = (&(global_const_workspace_200_var[4553584]));
  void* fused_constant_79_global_global_let = (&(global_workspace_201_var[19200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 50);
          ((float*)fused_constant_79_global_global_let)[(((cse_var_1 + (ax2_c * 10)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_79_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_201_var[9600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_201_var[28800]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 13; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 13; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 26) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 12)) && (2 <= ax3_c_1)) && (ax3_c_1 < 12)) ? p0[(((((c_outer_c * 200) + (ax1_inner_c * 100)) + (ax2_c_1 * 10)) + ax3_c_1) - 22)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_1) + 10)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_2) + 20)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_3) + 30)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_4) + 40)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_4 = (c_outer_c * 50);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = ((cse_var_4 + (j_c_outer * 2)) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 26) + (j_c_outer * 4)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_79_global_global_let)[(((cse_var_4 + (di * 10)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_7 = (c_outer_c * 50);
            int32_t cse_var_6 = (dj * 2);
            int32_t cse_var_5 = (((cse_var_7 + (j_c_outer * 2)) + c_inner_c_1) + 10);
            ((float*)DepthwiseConv2d_global_let)[cse_var_5] = (((float*)DepthwiseConv2d_global_let)[cse_var_5] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_6) + c_inner_c_1) + 52)] * ((float*)fused_constant_79_global_global_let)[(((cse_var_7 + (di * 10)) + cse_var_6) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_10 = (c_outer_c * 50);
            int32_t cse_var_9 = (dj * 2);
            int32_t cse_var_8 = (((cse_var_10 + (j_c_outer * 2)) + c_inner_c_2) + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_9) + c_inner_c_2) + 104)] * ((float*)fused_constant_79_global_global_let)[(((cse_var_10 + (di * 10)) + cse_var_9) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_13 = (c_outer_c * 50);
            int32_t cse_var_12 = (dj * 2);
            int32_t cse_var_11 = (((cse_var_13 + (j_c_outer * 2)) + c_inner_c_3) + 30);
            ((float*)DepthwiseConv2d_global_let)[cse_var_11] = (((float*)DepthwiseConv2d_global_let)[cse_var_11] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_12) + c_inner_c_3) + 156)] * ((float*)fused_constant_79_global_global_let)[(((cse_var_13 + (di * 10)) + cse_var_12) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_16 = (c_outer_c * 50);
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = (((cse_var_16 + (j_c_outer * 2)) + c_inner_c_4) + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 26) + (j_c_outer * 4)) + cse_var_15) + c_inner_c_4) + 208)] * ((float*)fused_constant_79_global_global_let)[(((cse_var_16 + (di * 10)) + cse_var_15) + c_inner_c_4)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
        int32_t cse_var_17 = (((((ax1 >> 1) * 50) + (ax2 * 10)) + (ax3 * 2)) + (ax1 & 1));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_76_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 25) + (ax2 * 5)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_76_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_67(float* p0, float* T_divide, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var) {
  void* fused_nn_conv2d_constant_77_let = (&(global_const_workspace_202_var[4715792]));
  void* fused_constant_80_let = (&(global_const_workspace_202_var[3319296]));
  void* data_vec_let = (&(global_workspace_203_var[19200]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vw = 0; vw < 5; ++vw) {
        ((float*)data_vec_let)[(((h * 480) + (ci * 5)) + vw)] = p0[(((ci * 25) + (h * 5)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      void* conv_let = (&(global_workspace_203_var[28800]));
      for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vc = 0; vc < 8; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 480) + (ci_1 * 5)) + vw_1)] * ((float*)fused_constant_80_let)[(((ax1_outer * 768) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
          int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_77_let)[cse_var_2]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 200) + (ax1_inner * 25)) + (ax2_outer * 5)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_77_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_68(float* p0, float* T_divide, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var) {
  void* fused_nn_conv2d_constant_79_let = (&(global_const_workspace_206_var[4715024]));
  void* fused_constant_82_let = (&(global_const_workspace_206_var[4543984]));
  void* fused_constant_82_global_global_let = (&(global_workspace_207_var[19200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 50);
          ((float*)fused_constant_82_global_global_let)[(((cse_var_1 + (ax2_c * 10)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_82_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_207_var[9600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_207_var[28800]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 9; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 18) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 7)) && (2 <= ax3_c_1)) && (ax3_c_1 < 7)) ? p0[(((((c_outer_c * 50) + (ax1_inner_c * 25)) + (ax2_c_1 * 5)) + ax3_c_1) - 12)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_1) + 10)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_2) + 20)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_3) + 30)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_4) + 40)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_5 = (j_c_outer * 2);
            int32_t cse_var_4 = (c_outer_c * 50);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = ((cse_var_4 + cse_var_5) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 18) + cse_var_5) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_82_global_global_let)[(((cse_var_4 + (di * 10)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_9 = (j_c_outer * 2);
            int32_t cse_var_8 = (c_outer_c * 50);
            int32_t cse_var_7 = (dj * 2);
            int32_t cse_var_6 = (((cse_var_8 + cse_var_9) + c_inner_c_1) + 10);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_9) + cse_var_7) + c_inner_c_1) + 18)] * ((float*)fused_constant_82_global_global_let)[(((cse_var_8 + (di * 10)) + cse_var_7) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_13 = (j_c_outer * 2);
            int32_t cse_var_12 = (c_outer_c * 50);
            int32_t cse_var_11 = (dj * 2);
            int32_t cse_var_10 = (((cse_var_12 + cse_var_13) + c_inner_c_2) + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_13) + cse_var_11) + c_inner_c_2) + 36)] * ((float*)fused_constant_82_global_global_let)[(((cse_var_12 + (di * 10)) + cse_var_11) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_17 = (j_c_outer * 2);
            int32_t cse_var_16 = (c_outer_c * 50);
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = (((cse_var_16 + cse_var_17) + c_inner_c_3) + 30);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_17) + cse_var_15) + c_inner_c_3) + 54)] * ((float*)fused_constant_82_global_global_let)[(((cse_var_16 + (di * 10)) + cse_var_15) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_21 = (j_c_outer * 2);
            int32_t cse_var_20 = (c_outer_c * 50);
            int32_t cse_var_19 = (dj * 2);
            int32_t cse_var_18 = (((cse_var_20 + cse_var_21) + c_inner_c_4) + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_21) + cse_var_19) + c_inner_c_4) + 72)] * ((float*)fused_constant_82_global_global_let)[(((cse_var_20 + (di * 10)) + cse_var_19) + c_inner_c_4)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
        int32_t cse_var_22 = (((((ax1 >> 1) * 50) + (ax2 * 10)) + (ax3 * 2)) + (ax1 & 1));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_79_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 25) + (ax2 * 5)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_79_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_69(float* p0, float* T_divide, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var) {
  void* fused_nn_conv2d_constant_80_let = (&(global_const_workspace_208_var[4714256]));
  void* fused_constant_83_let = (&(global_const_workspace_208_var[3245568]));
  void* data_vec_let = (&(global_workspace_209_var[9600]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vw = 0; vw < 5; ++vw) {
        ((float*)data_vec_let)[(((h * 480) + (ci * 5)) + vw)] = p0[(((ci * 25) + (h * 5)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      void* conv_let = (&(global_workspace_209_var[19200]));
      for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vc = 0; vc < 8; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 480) + (ci_1 * 5)) + vw_1)] * ((float*)fused_constant_83_let)[(((ax1_outer * 768) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
          int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_80_let)[cse_var_2]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 200) + (ax1_inner * 25)) + (ax2_outer * 5)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_80_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_7(float* p0, float* T_divide, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_16_var[4730512]));
  void* fused_constant_7_let = (&(global_const_workspace_16_var[4678832]));
  void* fused_constant_7_global_global_let = (&(global_workspace_17_var[1547664]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 12; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_7_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_7_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_17_var[1228800]));
  for (int32_t c_outer_c = 0; c_outer_c < 12; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 10; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_17_var[1536000]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 81; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 324) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((1 <= ((i_c_outer * 8) + ax2_c_1)) && (1 <= ax3_c_1)) ? p0[((((((c_outer_c * 25600) + (ax1_inner_c * 6400)) + (i_c_outer * 640)) + (ax2_c_1 * 80)) + ax3_c_1) - 81)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 20; ++j_c_outer) {
        for (int32_t j_c_inner_init = 0; j_c_inner_init < 2; ++j_c_inner_init) {
          for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
            ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner_init * 4)) + c_inner_c_init)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_1 = 0; j_c_inner_init_1 < 2; ++j_c_inner_init_1) {
          for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner_init_1 * 4)) + c_inner_c_init_1) + 160)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_2 = 0; j_c_inner_init_2 < 2; ++j_c_inner_init_2) {
          for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner_init_2 * 4)) + c_inner_c_init_2) + 320)] = 0.000000e+00f;
          }
        }
        for (int32_t j_c_inner_init_3 = 0; j_c_inner_init_3 < 2; ++j_c_inner_init_3) {
          for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
            ((float*)DepthwiseConv2d_global_let)[((((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner_init_3 * 4)) + c_inner_c_init_3) + 480)] = 0.000000e+00f;
          }
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t j_c_inner = 0; j_c_inner < 2; ++j_c_inner) {
              for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
                int32_t cse_var_3 = (dj * 4);
                int32_t cse_var_2 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner * 4)) + c_inner_c);
                ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[(((((di * 324) + (j_c_outer * 16)) + (j_c_inner * 8)) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_3) + c_inner_c)]));
              }
            }
            for (int32_t j_c_inner_1 = 0; j_c_inner_1 < 2; ++j_c_inner_1) {
              for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
                int32_t cse_var_5 = (dj * 4);
                int32_t cse_var_4 = ((((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner_1 * 4)) + c_inner_c_1) + 160);
                ((float*)DepthwiseConv2d_global_let)[cse_var_4] = (((float*)DepthwiseConv2d_global_let)[cse_var_4] + (((float*)PaddedInput_global_global_let)[((((((di * 324) + (j_c_outer * 16)) + (j_c_inner_1 * 8)) + cse_var_5) + c_inner_c_1) + 648)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_5) + c_inner_c_1)]));
              }
            }
            for (int32_t j_c_inner_2 = 0; j_c_inner_2 < 2; ++j_c_inner_2) {
              for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
                int32_t cse_var_7 = (dj * 4);
                int32_t cse_var_6 = ((((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner_2 * 4)) + c_inner_c_2) + 320);
                ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[((((((di * 324) + (j_c_outer * 16)) + (j_c_inner_2 * 8)) + cse_var_7) + c_inner_c_2) + 1296)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_2)]));
              }
            }
            for (int32_t j_c_inner_3 = 0; j_c_inner_3 < 2; ++j_c_inner_3) {
              for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
                int32_t cse_var_9 = (dj * 4);
                int32_t cse_var_8 = ((((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 8)) + (j_c_inner_3 * 4)) + c_inner_c_3) + 480);
                ((float*)DepthwiseConv2d_global_let)[cse_var_8] = (((float*)DepthwiseConv2d_global_let)[cse_var_8] + (((float*)PaddedInput_global_global_let)[((((((di * 324) + (j_c_outer * 16)) + (j_c_inner_3 * 8)) + cse_var_9) + c_inner_c_3) + 1944)] * ((float*)fused_constant_7_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_9) + c_inner_c_3)]));
              }
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 48; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 40; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
        int32_t cse_var_10 = (((((ax1 >> 2) * 6400) + (ax2 * 160)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_7_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 1600) + (ax2 * 40)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_7_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_70(float* p0, float* T_divide, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var) {
  void* fused_nn_conv2d_constant_81_let = (&(global_const_workspace_210_var[4713872]));
  void* fused_constant_84_let = (&(global_const_workspace_210_var[4534384]));
  void* fused_constant_84_global_global_let = (&(global_workspace_211_var[19200]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 48; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 5; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 5; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 2; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 50);
          ((float*)fused_constant_84_global_global_let)[(((cse_var_1 + (ax2_c * 10)) + (ax3_c * 2)) + ax0_inner_c)] = ((float*)fused_constant_84_let)[(((cse_var_1 + (ax0_inner_c * 25)) + (ax2_c * 5)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_211_var[9600]));
  for (int32_t c_outer_c = 0; c_outer_c < 48; ++c_outer_c) {
    void* PaddedInput_global_global_let = (&(global_workspace_211_var[28800]));
    for (int32_t ax2_c_1 = 0; ax2_c_1 < 9; ++ax2_c_1) {
      for (int32_t ax3_c_1 = 0; ax3_c_1 < 9; ++ax3_c_1) {
        for (int32_t ax1_inner_c = 0; ax1_inner_c < 2; ++ax1_inner_c) {
          ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 18) + (ax3_c_1 * 2)) + ax1_inner_c)] = (((((2 <= ax2_c_1) && (ax2_c_1 < 7)) && (2 <= ax3_c_1)) && (ax3_c_1 < 7)) ? p0[(((((c_outer_c * 50) + (ax1_inner_c * 25)) + (ax2_c_1 * 5)) + ax3_c_1) - 12)] : 0.000000e+00f);
        }
      }
    }
    for (int32_t j_c_outer = 0; j_c_outer < 5; ++j_c_outer) {
      for (int32_t c_inner_c_init = 0; c_inner_c_init < 2; ++c_inner_c_init) {
        ((float*)DepthwiseConv2d_global_let)[(((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 2; ++c_inner_c_init_1) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_1) + 10)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 2; ++c_inner_c_init_2) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_2) + 20)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 2; ++c_inner_c_init_3) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_3) + 30)] = 0.000000e+00f;
      }
      for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 2; ++c_inner_c_init_4) {
        ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 50) + (j_c_outer * 2)) + c_inner_c_init_4) + 40)] = 0.000000e+00f;
      }
      for (int32_t di = 0; di < 5; ++di) {
        for (int32_t dj = 0; dj < 5; ++dj) {
          for (int32_t c_inner_c = 0; c_inner_c < 2; ++c_inner_c) {
            int32_t cse_var_5 = (j_c_outer * 2);
            int32_t cse_var_4 = (c_outer_c * 50);
            int32_t cse_var_3 = (dj * 2);
            int32_t cse_var_2 = ((cse_var_4 + cse_var_5) + c_inner_c);
            ((float*)DepthwiseConv2d_global_let)[cse_var_2] = (((float*)DepthwiseConv2d_global_let)[cse_var_2] + (((float*)PaddedInput_global_global_let)[((((di * 18) + cse_var_5) + cse_var_3) + c_inner_c)] * ((float*)fused_constant_84_global_global_let)[(((cse_var_4 + (di * 10)) + cse_var_3) + c_inner_c)]));
          }
          for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 2; ++c_inner_c_1) {
            int32_t cse_var_9 = (j_c_outer * 2);
            int32_t cse_var_8 = (c_outer_c * 50);
            int32_t cse_var_7 = (dj * 2);
            int32_t cse_var_6 = (((cse_var_8 + cse_var_9) + c_inner_c_1) + 10);
            ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_9) + cse_var_7) + c_inner_c_1) + 18)] * ((float*)fused_constant_84_global_global_let)[(((cse_var_8 + (di * 10)) + cse_var_7) + c_inner_c_1)]));
          }
          for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 2; ++c_inner_c_2) {
            int32_t cse_var_13 = (j_c_outer * 2);
            int32_t cse_var_12 = (c_outer_c * 50);
            int32_t cse_var_11 = (dj * 2);
            int32_t cse_var_10 = (((cse_var_12 + cse_var_13) + c_inner_c_2) + 20);
            ((float*)DepthwiseConv2d_global_let)[cse_var_10] = (((float*)DepthwiseConv2d_global_let)[cse_var_10] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_13) + cse_var_11) + c_inner_c_2) + 36)] * ((float*)fused_constant_84_global_global_let)[(((cse_var_12 + (di * 10)) + cse_var_11) + c_inner_c_2)]));
          }
          for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 2; ++c_inner_c_3) {
            int32_t cse_var_17 = (j_c_outer * 2);
            int32_t cse_var_16 = (c_outer_c * 50);
            int32_t cse_var_15 = (dj * 2);
            int32_t cse_var_14 = (((cse_var_16 + cse_var_17) + c_inner_c_3) + 30);
            ((float*)DepthwiseConv2d_global_let)[cse_var_14] = (((float*)DepthwiseConv2d_global_let)[cse_var_14] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_17) + cse_var_15) + c_inner_c_3) + 54)] * ((float*)fused_constant_84_global_global_let)[(((cse_var_16 + (di * 10)) + cse_var_15) + c_inner_c_3)]));
          }
          for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 2; ++c_inner_c_4) {
            int32_t cse_var_21 = (j_c_outer * 2);
            int32_t cse_var_20 = (c_outer_c * 50);
            int32_t cse_var_19 = (dj * 2);
            int32_t cse_var_18 = (((cse_var_20 + cse_var_21) + c_inner_c_4) + 40);
            ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[(((((di * 18) + cse_var_21) + cse_var_19) + c_inner_c_4) + 72)] * ((float*)fused_constant_84_global_global_let)[(((cse_var_20 + (di * 10)) + cse_var_19) + c_inner_c_4)]));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
        int32_t cse_var_22 = (((((ax1 >> 1) * 50) + (ax2 * 10)) + (ax3 * 2)) + (ax1 & 1));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_81_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 25) + (ax2 * 5)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_22] + ((float*)fused_nn_conv2d_constant_81_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_71(float* p0, float* T_divide, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var) {
  void* fused_nn_conv2d_constant_82_let = (&(global_const_workspace_212_var[4713488]));
  void* fused_constant_85_let = (&(global_const_workspace_212_var[3208704]));
  void* data_vec_let = (&(global_workspace_213_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vw = 0; vw < 5; ++vw) {
        ((float*)data_vec_let)[(((h * 480) + (ci * 5)) + vw)] = p0[(((ci * 25) + (h * 5)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      void* conv_let = (&(global_workspace_213_var[9600]));
      for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vc = 0; vc < 8; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 480) + (ci_1 * 5)) + vw_1)] * ((float*)fused_constant_85_let)[(((ax1_outer * 768) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
          int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_82_let)[cse_var_2]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 200) + (ax1_inner * 25)) + (ax2_outer * 5)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_82_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_72(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var) {
  void* fused_nn_conv2d_constant_84_let = (&(global_const_workspace_220_var[4712720]));
  void* data_vec_let = (&(global_workspace_221_var[36864]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vw = 0; vw < 5; ++vw) {
        ((float*)data_vec_let)[(((h * 480) + (ci * 5)) + vw)] = p0[(((ci * 25) + (h * 5)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      void* conv_let = (&(global_workspace_221_var[46464]));
      for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vc = 0; vc < 8; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 480) + (ci_1 * 5)) + vw_1)] * p1[(((ax1_outer * 768) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_3 = ((ax3_inner * 8) + ax1_inner);
          int32_t cse_var_2 = ((ax1_outer * 8) + ax1_inner);
          float __1 = (((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_84_let)[cse_var_2]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_divide[((((ax1_outer * 200) + (ax1_inner * 25)) + (ax2_outer * 5)) + ax3_inner)] = (((((float*)conv_let)[cse_var_3] + ((float*)fused_nn_conv2d_constant_84_let)[cse_var_2]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_73(float* p0, float* T_divide, uint8_t* global_const_workspace_232_var, uint8_t* global_workspace_233_var) {
  void* fused_nn_conv2d_constant_86_let = (&(global_const_workspace_232_var[4732544]));
  void* fused_constant_90_let = (&(global_const_workspace_232_var[4524784]));
  void* data_vec_let = (&(global_workspace_233_var[0]));
  for (int32_t h = 0; h < 20; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 6; ++vh) {
          for (int32_t vw = 0; vw < 6; ++vw) {
            int32_t cse_var_2 = ((vh >> 1) + h);
            int32_t cse_var_1 = ((vw >> 1) + w);
            ((float*)data_vec_let)[(((((h * 69120) + (w * 3456)) + (ci * 36)) + (vh * 6)) + vw)] = (((((1 <= cse_var_2) && (cse_var_2 < 21)) && (1 <= cse_var_1)) && (cse_var_1 < 21)) ? p0[((((((ci * 1600) + (h * 80)) + (vh * 40)) + (w * 2)) + vw) - 82)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 20; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
      void* conv_let = (&(global_workspace_233_var[5536000]));
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[vw_init] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(vw_init_1 + 2)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_1)] * ((float*)fused_constant_90_let)[(ci_1 * 25)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_3 = (vw_2 + 2);
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_2) + 6)] * ((float*)fused_constant_90_let)[(ci_1 * 25)]));
        }
        for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
          ((float*)conv_let)[vw_3] = (((float*)conv_let)[vw_3] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_3) + 1)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 1)]));
        }
        for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
          int32_t cse_var_4 = (vw_4 + 2);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_4) + 7)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 1)]));
        }
        for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
          ((float*)conv_let)[vw_5] = (((float*)conv_let)[vw_5] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_5) + 2)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 2)]));
        }
        for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
          int32_t cse_var_5 = (vw_6 + 2);
          ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_6) + 8)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 2)]));
        }
        for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
          ((float*)conv_let)[vw_7] = (((float*)conv_let)[vw_7] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_7) + 3)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 3)]));
        }
        for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
          int32_t cse_var_6 = (vw_8 + 2);
          ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_8) + 9)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 3)]));
        }
        for (int32_t vw_9 = 0; vw_9 < 2; ++vw_9) {
          ((float*)conv_let)[vw_9] = (((float*)conv_let)[vw_9] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_9) + 4)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 4)]));
        }
        for (int32_t vw_10 = 0; vw_10 < 2; ++vw_10) {
          int32_t cse_var_7 = (vw_10 + 2);
          ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_10) + 10)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 4)]));
        }
        for (int32_t vw_11 = 0; vw_11 < 2; ++vw_11) {
          ((float*)conv_let)[vw_11] = (((float*)conv_let)[vw_11] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_11) + 6)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 5)]));
        }
        for (int32_t vw_12 = 0; vw_12 < 2; ++vw_12) {
          int32_t cse_var_8 = (vw_12 + 2);
          ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_12) + 12)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 5)]));
        }
        for (int32_t vw_13 = 0; vw_13 < 2; ++vw_13) {
          ((float*)conv_let)[vw_13] = (((float*)conv_let)[vw_13] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_13) + 7)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 6)]));
        }
        for (int32_t vw_14 = 0; vw_14 < 2; ++vw_14) {
          int32_t cse_var_9 = (vw_14 + 2);
          ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_14) + 13)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 6)]));
        }
        for (int32_t vw_15 = 0; vw_15 < 2; ++vw_15) {
          ((float*)conv_let)[vw_15] = (((float*)conv_let)[vw_15] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_15) + 8)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 7)]));
        }
        for (int32_t vw_16 = 0; vw_16 < 2; ++vw_16) {
          int32_t cse_var_10 = (vw_16 + 2);
          ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_16) + 14)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 7)]));
        }
        for (int32_t vw_17 = 0; vw_17 < 2; ++vw_17) {
          ((float*)conv_let)[vw_17] = (((float*)conv_let)[vw_17] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_17) + 9)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 8)]));
        }
        for (int32_t vw_18 = 0; vw_18 < 2; ++vw_18) {
          int32_t cse_var_11 = (vw_18 + 2);
          ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_18) + 15)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 8)]));
        }
        for (int32_t vw_19 = 0; vw_19 < 2; ++vw_19) {
          ((float*)conv_let)[vw_19] = (((float*)conv_let)[vw_19] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_19) + 10)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 9)]));
        }
        for (int32_t vw_20 = 0; vw_20 < 2; ++vw_20) {
          int32_t cse_var_12 = (vw_20 + 2);
          ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_20) + 16)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 9)]));
        }
        for (int32_t vw_21 = 0; vw_21 < 2; ++vw_21) {
          ((float*)conv_let)[vw_21] = (((float*)conv_let)[vw_21] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_21) + 12)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 10)]));
        }
        for (int32_t vw_22 = 0; vw_22 < 2; ++vw_22) {
          int32_t cse_var_13 = (vw_22 + 2);
          ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_22) + 18)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 10)]));
        }
        for (int32_t vw_23 = 0; vw_23 < 2; ++vw_23) {
          ((float*)conv_let)[vw_23] = (((float*)conv_let)[vw_23] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_23) + 13)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 11)]));
        }
        for (int32_t vw_24 = 0; vw_24 < 2; ++vw_24) {
          int32_t cse_var_14 = (vw_24 + 2);
          ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_24) + 19)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 11)]));
        }
        for (int32_t vw_25 = 0; vw_25 < 2; ++vw_25) {
          ((float*)conv_let)[vw_25] = (((float*)conv_let)[vw_25] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_25) + 14)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 12)]));
        }
        for (int32_t vw_26 = 0; vw_26 < 2; ++vw_26) {
          int32_t cse_var_15 = (vw_26 + 2);
          ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_26) + 20)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 12)]));
        }
        for (int32_t vw_27 = 0; vw_27 < 2; ++vw_27) {
          ((float*)conv_let)[vw_27] = (((float*)conv_let)[vw_27] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_27) + 15)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 13)]));
        }
        for (int32_t vw_28 = 0; vw_28 < 2; ++vw_28) {
          int32_t cse_var_16 = (vw_28 + 2);
          ((float*)conv_let)[cse_var_16] = (((float*)conv_let)[cse_var_16] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_28) + 21)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 13)]));
        }
        for (int32_t vw_29 = 0; vw_29 < 2; ++vw_29) {
          ((float*)conv_let)[vw_29] = (((float*)conv_let)[vw_29] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_29) + 16)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 14)]));
        }
        for (int32_t vw_30 = 0; vw_30 < 2; ++vw_30) {
          int32_t cse_var_17 = (vw_30 + 2);
          ((float*)conv_let)[cse_var_17] = (((float*)conv_let)[cse_var_17] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_30) + 22)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 14)]));
        }
        for (int32_t vw_31 = 0; vw_31 < 2; ++vw_31) {
          ((float*)conv_let)[vw_31] = (((float*)conv_let)[vw_31] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_31) + 18)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 15)]));
        }
        for (int32_t vw_32 = 0; vw_32 < 2; ++vw_32) {
          int32_t cse_var_18 = (vw_32 + 2);
          ((float*)conv_let)[cse_var_18] = (((float*)conv_let)[cse_var_18] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_32) + 24)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 15)]));
        }
        for (int32_t vw_33 = 0; vw_33 < 2; ++vw_33) {
          ((float*)conv_let)[vw_33] = (((float*)conv_let)[vw_33] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_33) + 19)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 16)]));
        }
        for (int32_t vw_34 = 0; vw_34 < 2; ++vw_34) {
          int32_t cse_var_19 = (vw_34 + 2);
          ((float*)conv_let)[cse_var_19] = (((float*)conv_let)[cse_var_19] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_34) + 25)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 16)]));
        }
        for (int32_t vw_35 = 0; vw_35 < 2; ++vw_35) {
          ((float*)conv_let)[vw_35] = (((float*)conv_let)[vw_35] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_35) + 20)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 17)]));
        }
        for (int32_t vw_36 = 0; vw_36 < 2; ++vw_36) {
          int32_t cse_var_20 = (vw_36 + 2);
          ((float*)conv_let)[cse_var_20] = (((float*)conv_let)[cse_var_20] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_36) + 26)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 17)]));
        }
        for (int32_t vw_37 = 0; vw_37 < 2; ++vw_37) {
          ((float*)conv_let)[vw_37] = (((float*)conv_let)[vw_37] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_37) + 21)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 18)]));
        }
        for (int32_t vw_38 = 0; vw_38 < 2; ++vw_38) {
          int32_t cse_var_21 = (vw_38 + 2);
          ((float*)conv_let)[cse_var_21] = (((float*)conv_let)[cse_var_21] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_38) + 27)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 18)]));
        }
        for (int32_t vw_39 = 0; vw_39 < 2; ++vw_39) {
          ((float*)conv_let)[vw_39] = (((float*)conv_let)[vw_39] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_39) + 22)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 19)]));
        }
        for (int32_t vw_40 = 0; vw_40 < 2; ++vw_40) {
          int32_t cse_var_22 = (vw_40 + 2);
          ((float*)conv_let)[cse_var_22] = (((float*)conv_let)[cse_var_22] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_40) + 28)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 19)]));
        }
        for (int32_t vw_41 = 0; vw_41 < 2; ++vw_41) {
          ((float*)conv_let)[vw_41] = (((float*)conv_let)[vw_41] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_41) + 24)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 20)]));
        }
        for (int32_t vw_42 = 0; vw_42 < 2; ++vw_42) {
          int32_t cse_var_23 = (vw_42 + 2);
          ((float*)conv_let)[cse_var_23] = (((float*)conv_let)[cse_var_23] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_42) + 30)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 20)]));
        }
        for (int32_t vw_43 = 0; vw_43 < 2; ++vw_43) {
          ((float*)conv_let)[vw_43] = (((float*)conv_let)[vw_43] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_43) + 25)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 21)]));
        }
        for (int32_t vw_44 = 0; vw_44 < 2; ++vw_44) {
          int32_t cse_var_24 = (vw_44 + 2);
          ((float*)conv_let)[cse_var_24] = (((float*)conv_let)[cse_var_24] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_44) + 31)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 21)]));
        }
        for (int32_t vw_45 = 0; vw_45 < 2; ++vw_45) {
          ((float*)conv_let)[vw_45] = (((float*)conv_let)[vw_45] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_45) + 26)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 22)]));
        }
        for (int32_t vw_46 = 0; vw_46 < 2; ++vw_46) {
          int32_t cse_var_25 = (vw_46 + 2);
          ((float*)conv_let)[cse_var_25] = (((float*)conv_let)[cse_var_25] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_46) + 32)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 22)]));
        }
        for (int32_t vw_47 = 0; vw_47 < 2; ++vw_47) {
          ((float*)conv_let)[vw_47] = (((float*)conv_let)[vw_47] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_47) + 27)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 23)]));
        }
        for (int32_t vw_48 = 0; vw_48 < 2; ++vw_48) {
          int32_t cse_var_26 = (vw_48 + 2);
          ((float*)conv_let)[cse_var_26] = (((float*)conv_let)[cse_var_26] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_48) + 33)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 23)]));
        }
        for (int32_t vw_49 = 0; vw_49 < 2; ++vw_49) {
          ((float*)conv_let)[vw_49] = (((float*)conv_let)[vw_49] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_49) + 28)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 24)]));
        }
        for (int32_t vw_50 = 0; vw_50 < 2; ++vw_50) {
          int32_t cse_var_27 = (vw_50 + 2);
          ((float*)conv_let)[cse_var_27] = (((float*)conv_let)[cse_var_27] + (((float*)data_vec_let)[(((((ax2_outer * 69120) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_50) + 34)] * ((float*)fused_constant_90_let)[((ci_1 * 25) + 24)]));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_86_let)[0]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax2_outer * 80) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_86_let)[0]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        int32_t cse_var_28 = (ax3_inner_1 + 2);
        float __3 = (((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_86_let)[0]) + 3.000000e+00f;
        float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
        T_divide[((((ax2_outer * 80) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_86_let)[0]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_74(float* p0, float* T_divide, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var) {
  void* fused_nn_conv2d_constant_89_let = (&(global_const_workspace_238_var[4732512]));
  void* fused_constant_93_let = (&(global_const_workspace_238_var[4515184]));
  void* data_vec_let = (&(global_workspace_239_var[0]));
  for (int32_t h = 0; h < 10; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 6; ++vh) {
          for (int32_t vw = 0; vw < 6; ++vw) {
            int32_t cse_var_2 = ((vh >> 1) + h);
            int32_t cse_var_1 = ((vw >> 1) + w);
            ((float*)data_vec_let)[(((((h * 34560) + (w * 3456)) + (ci * 36)) + (vh * 6)) + vw)] = (((((1 <= cse_var_2) && (cse_var_2 < 11)) && (1 <= cse_var_1)) && (cse_var_1 < 11)) ? p0[((((((ci * 400) + (h * 40)) + (vh * 20)) + (w * 2)) + vw) - 42)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 10; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
      void* conv_let = (&(global_workspace_239_var[1896000]));
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[vw_init] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(vw_init_1 + 2)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_1)] * ((float*)fused_constant_93_let)[(ci_1 * 25)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_3 = (vw_2 + 2);
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_2) + 6)] * ((float*)fused_constant_93_let)[(ci_1 * 25)]));
        }
        for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
          ((float*)conv_let)[vw_3] = (((float*)conv_let)[vw_3] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_3) + 1)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 1)]));
        }
        for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
          int32_t cse_var_4 = (vw_4 + 2);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_4) + 7)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 1)]));
        }
        for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
          ((float*)conv_let)[vw_5] = (((float*)conv_let)[vw_5] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_5) + 2)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 2)]));
        }
        for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
          int32_t cse_var_5 = (vw_6 + 2);
          ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_6) + 8)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 2)]));
        }
        for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
          ((float*)conv_let)[vw_7] = (((float*)conv_let)[vw_7] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_7) + 3)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 3)]));
        }
        for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
          int32_t cse_var_6 = (vw_8 + 2);
          ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_8) + 9)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 3)]));
        }
        for (int32_t vw_9 = 0; vw_9 < 2; ++vw_9) {
          ((float*)conv_let)[vw_9] = (((float*)conv_let)[vw_9] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_9) + 4)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 4)]));
        }
        for (int32_t vw_10 = 0; vw_10 < 2; ++vw_10) {
          int32_t cse_var_7 = (vw_10 + 2);
          ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_10) + 10)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 4)]));
        }
        for (int32_t vw_11 = 0; vw_11 < 2; ++vw_11) {
          ((float*)conv_let)[vw_11] = (((float*)conv_let)[vw_11] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_11) + 6)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 5)]));
        }
        for (int32_t vw_12 = 0; vw_12 < 2; ++vw_12) {
          int32_t cse_var_8 = (vw_12 + 2);
          ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_12) + 12)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 5)]));
        }
        for (int32_t vw_13 = 0; vw_13 < 2; ++vw_13) {
          ((float*)conv_let)[vw_13] = (((float*)conv_let)[vw_13] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_13) + 7)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 6)]));
        }
        for (int32_t vw_14 = 0; vw_14 < 2; ++vw_14) {
          int32_t cse_var_9 = (vw_14 + 2);
          ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_14) + 13)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 6)]));
        }
        for (int32_t vw_15 = 0; vw_15 < 2; ++vw_15) {
          ((float*)conv_let)[vw_15] = (((float*)conv_let)[vw_15] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_15) + 8)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 7)]));
        }
        for (int32_t vw_16 = 0; vw_16 < 2; ++vw_16) {
          int32_t cse_var_10 = (vw_16 + 2);
          ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_16) + 14)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 7)]));
        }
        for (int32_t vw_17 = 0; vw_17 < 2; ++vw_17) {
          ((float*)conv_let)[vw_17] = (((float*)conv_let)[vw_17] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_17) + 9)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 8)]));
        }
        for (int32_t vw_18 = 0; vw_18 < 2; ++vw_18) {
          int32_t cse_var_11 = (vw_18 + 2);
          ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_18) + 15)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 8)]));
        }
        for (int32_t vw_19 = 0; vw_19 < 2; ++vw_19) {
          ((float*)conv_let)[vw_19] = (((float*)conv_let)[vw_19] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_19) + 10)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 9)]));
        }
        for (int32_t vw_20 = 0; vw_20 < 2; ++vw_20) {
          int32_t cse_var_12 = (vw_20 + 2);
          ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_20) + 16)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 9)]));
        }
        for (int32_t vw_21 = 0; vw_21 < 2; ++vw_21) {
          ((float*)conv_let)[vw_21] = (((float*)conv_let)[vw_21] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_21) + 12)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 10)]));
        }
        for (int32_t vw_22 = 0; vw_22 < 2; ++vw_22) {
          int32_t cse_var_13 = (vw_22 + 2);
          ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_22) + 18)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 10)]));
        }
        for (int32_t vw_23 = 0; vw_23 < 2; ++vw_23) {
          ((float*)conv_let)[vw_23] = (((float*)conv_let)[vw_23] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_23) + 13)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 11)]));
        }
        for (int32_t vw_24 = 0; vw_24 < 2; ++vw_24) {
          int32_t cse_var_14 = (vw_24 + 2);
          ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_24) + 19)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 11)]));
        }
        for (int32_t vw_25 = 0; vw_25 < 2; ++vw_25) {
          ((float*)conv_let)[vw_25] = (((float*)conv_let)[vw_25] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_25) + 14)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 12)]));
        }
        for (int32_t vw_26 = 0; vw_26 < 2; ++vw_26) {
          int32_t cse_var_15 = (vw_26 + 2);
          ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_26) + 20)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 12)]));
        }
        for (int32_t vw_27 = 0; vw_27 < 2; ++vw_27) {
          ((float*)conv_let)[vw_27] = (((float*)conv_let)[vw_27] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_27) + 15)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 13)]));
        }
        for (int32_t vw_28 = 0; vw_28 < 2; ++vw_28) {
          int32_t cse_var_16 = (vw_28 + 2);
          ((float*)conv_let)[cse_var_16] = (((float*)conv_let)[cse_var_16] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_28) + 21)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 13)]));
        }
        for (int32_t vw_29 = 0; vw_29 < 2; ++vw_29) {
          ((float*)conv_let)[vw_29] = (((float*)conv_let)[vw_29] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_29) + 16)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 14)]));
        }
        for (int32_t vw_30 = 0; vw_30 < 2; ++vw_30) {
          int32_t cse_var_17 = (vw_30 + 2);
          ((float*)conv_let)[cse_var_17] = (((float*)conv_let)[cse_var_17] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_30) + 22)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 14)]));
        }
        for (int32_t vw_31 = 0; vw_31 < 2; ++vw_31) {
          ((float*)conv_let)[vw_31] = (((float*)conv_let)[vw_31] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_31) + 18)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 15)]));
        }
        for (int32_t vw_32 = 0; vw_32 < 2; ++vw_32) {
          int32_t cse_var_18 = (vw_32 + 2);
          ((float*)conv_let)[cse_var_18] = (((float*)conv_let)[cse_var_18] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_32) + 24)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 15)]));
        }
        for (int32_t vw_33 = 0; vw_33 < 2; ++vw_33) {
          ((float*)conv_let)[vw_33] = (((float*)conv_let)[vw_33] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_33) + 19)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 16)]));
        }
        for (int32_t vw_34 = 0; vw_34 < 2; ++vw_34) {
          int32_t cse_var_19 = (vw_34 + 2);
          ((float*)conv_let)[cse_var_19] = (((float*)conv_let)[cse_var_19] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_34) + 25)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 16)]));
        }
        for (int32_t vw_35 = 0; vw_35 < 2; ++vw_35) {
          ((float*)conv_let)[vw_35] = (((float*)conv_let)[vw_35] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_35) + 20)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 17)]));
        }
        for (int32_t vw_36 = 0; vw_36 < 2; ++vw_36) {
          int32_t cse_var_20 = (vw_36 + 2);
          ((float*)conv_let)[cse_var_20] = (((float*)conv_let)[cse_var_20] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_36) + 26)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 17)]));
        }
        for (int32_t vw_37 = 0; vw_37 < 2; ++vw_37) {
          ((float*)conv_let)[vw_37] = (((float*)conv_let)[vw_37] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_37) + 21)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 18)]));
        }
        for (int32_t vw_38 = 0; vw_38 < 2; ++vw_38) {
          int32_t cse_var_21 = (vw_38 + 2);
          ((float*)conv_let)[cse_var_21] = (((float*)conv_let)[cse_var_21] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_38) + 27)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 18)]));
        }
        for (int32_t vw_39 = 0; vw_39 < 2; ++vw_39) {
          ((float*)conv_let)[vw_39] = (((float*)conv_let)[vw_39] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_39) + 22)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 19)]));
        }
        for (int32_t vw_40 = 0; vw_40 < 2; ++vw_40) {
          int32_t cse_var_22 = (vw_40 + 2);
          ((float*)conv_let)[cse_var_22] = (((float*)conv_let)[cse_var_22] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_40) + 28)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 19)]));
        }
        for (int32_t vw_41 = 0; vw_41 < 2; ++vw_41) {
          ((float*)conv_let)[vw_41] = (((float*)conv_let)[vw_41] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_41) + 24)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 20)]));
        }
        for (int32_t vw_42 = 0; vw_42 < 2; ++vw_42) {
          int32_t cse_var_23 = (vw_42 + 2);
          ((float*)conv_let)[cse_var_23] = (((float*)conv_let)[cse_var_23] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_42) + 30)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 20)]));
        }
        for (int32_t vw_43 = 0; vw_43 < 2; ++vw_43) {
          ((float*)conv_let)[vw_43] = (((float*)conv_let)[vw_43] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_43) + 25)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 21)]));
        }
        for (int32_t vw_44 = 0; vw_44 < 2; ++vw_44) {
          int32_t cse_var_24 = (vw_44 + 2);
          ((float*)conv_let)[cse_var_24] = (((float*)conv_let)[cse_var_24] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_44) + 31)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 21)]));
        }
        for (int32_t vw_45 = 0; vw_45 < 2; ++vw_45) {
          ((float*)conv_let)[vw_45] = (((float*)conv_let)[vw_45] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_45) + 26)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 22)]));
        }
        for (int32_t vw_46 = 0; vw_46 < 2; ++vw_46) {
          int32_t cse_var_25 = (vw_46 + 2);
          ((float*)conv_let)[cse_var_25] = (((float*)conv_let)[cse_var_25] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_46) + 32)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 22)]));
        }
        for (int32_t vw_47 = 0; vw_47 < 2; ++vw_47) {
          ((float*)conv_let)[vw_47] = (((float*)conv_let)[vw_47] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_47) + 27)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 23)]));
        }
        for (int32_t vw_48 = 0; vw_48 < 2; ++vw_48) {
          int32_t cse_var_26 = (vw_48 + 2);
          ((float*)conv_let)[cse_var_26] = (((float*)conv_let)[cse_var_26] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_48) + 33)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 23)]));
        }
        for (int32_t vw_49 = 0; vw_49 < 2; ++vw_49) {
          ((float*)conv_let)[vw_49] = (((float*)conv_let)[vw_49] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_49) + 28)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 24)]));
        }
        for (int32_t vw_50 = 0; vw_50 < 2; ++vw_50) {
          int32_t cse_var_27 = (vw_50 + 2);
          ((float*)conv_let)[cse_var_27] = (((float*)conv_let)[cse_var_27] + (((float*)data_vec_let)[(((((ax2_outer * 34560) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_50) + 34)] * ((float*)fused_constant_93_let)[((ci_1 * 25) + 24)]));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_89_let)[0]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax2_outer * 40) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_89_let)[0]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        int32_t cse_var_28 = (ax3_inner_1 + 2);
        float __3 = (((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_89_let)[0]) + 3.000000e+00f;
        float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
        T_divide[((((ax2_outer * 40) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_89_let)[0]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_75(float* p0, float* T_divide, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var) {
  void* fused_nn_conv2d_constant_92_let = (&(global_const_workspace_244_var[4732480]));
  void* fused_constant_96_let = (&(global_const_workspace_244_var[4505584]));
  void* data_vec_let = (&(global_workspace_245_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 6; ++vh) {
          for (int32_t vw = 0; vw < 6; ++vw) {
            int32_t cse_var_2 = ((vh >> 1) + h);
            int32_t cse_var_1 = ((vw >> 1) + w);
            ((float*)data_vec_let)[(((((h * 17280) + (w * 3456)) + (ci * 36)) + (vh * 6)) + vw)] = (((((1 <= cse_var_2) && (cse_var_2 < 6)) && (1 <= cse_var_1)) && (cse_var_1 < 6)) ? p0[((((((ci * 100) + (h * 20)) + (vh * 10)) + (w * 2)) + vw) - 22)] : 0.000000e+00f);
          }
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      void* conv_let = (&(global_workspace_245_var[346000]));
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[vw_init] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(vw_init_1 + 2)] = 0.000000e+00f;
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
          ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_1)] * ((float*)fused_constant_96_let)[(ci_1 * 25)]));
        }
        for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
          int32_t cse_var_3 = (vw_2 + 2);
          ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_2) + 6)] * ((float*)fused_constant_96_let)[(ci_1 * 25)]));
        }
        for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
          ((float*)conv_let)[vw_3] = (((float*)conv_let)[vw_3] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_3) + 1)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 1)]));
        }
        for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
          int32_t cse_var_4 = (vw_4 + 2);
          ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_4) + 7)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 1)]));
        }
        for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
          ((float*)conv_let)[vw_5] = (((float*)conv_let)[vw_5] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_5) + 2)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 2)]));
        }
        for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
          int32_t cse_var_5 = (vw_6 + 2);
          ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_6) + 8)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 2)]));
        }
        for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
          ((float*)conv_let)[vw_7] = (((float*)conv_let)[vw_7] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_7) + 3)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 3)]));
        }
        for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
          int32_t cse_var_6 = (vw_8 + 2);
          ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_8) + 9)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 3)]));
        }
        for (int32_t vw_9 = 0; vw_9 < 2; ++vw_9) {
          ((float*)conv_let)[vw_9] = (((float*)conv_let)[vw_9] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_9) + 4)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 4)]));
        }
        for (int32_t vw_10 = 0; vw_10 < 2; ++vw_10) {
          int32_t cse_var_7 = (vw_10 + 2);
          ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_10) + 10)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 4)]));
        }
        for (int32_t vw_11 = 0; vw_11 < 2; ++vw_11) {
          ((float*)conv_let)[vw_11] = (((float*)conv_let)[vw_11] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_11) + 6)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 5)]));
        }
        for (int32_t vw_12 = 0; vw_12 < 2; ++vw_12) {
          int32_t cse_var_8 = (vw_12 + 2);
          ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_12) + 12)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 5)]));
        }
        for (int32_t vw_13 = 0; vw_13 < 2; ++vw_13) {
          ((float*)conv_let)[vw_13] = (((float*)conv_let)[vw_13] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_13) + 7)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 6)]));
        }
        for (int32_t vw_14 = 0; vw_14 < 2; ++vw_14) {
          int32_t cse_var_9 = (vw_14 + 2);
          ((float*)conv_let)[cse_var_9] = (((float*)conv_let)[cse_var_9] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_14) + 13)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 6)]));
        }
        for (int32_t vw_15 = 0; vw_15 < 2; ++vw_15) {
          ((float*)conv_let)[vw_15] = (((float*)conv_let)[vw_15] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_15) + 8)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 7)]));
        }
        for (int32_t vw_16 = 0; vw_16 < 2; ++vw_16) {
          int32_t cse_var_10 = (vw_16 + 2);
          ((float*)conv_let)[cse_var_10] = (((float*)conv_let)[cse_var_10] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_16) + 14)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 7)]));
        }
        for (int32_t vw_17 = 0; vw_17 < 2; ++vw_17) {
          ((float*)conv_let)[vw_17] = (((float*)conv_let)[vw_17] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_17) + 9)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 8)]));
        }
        for (int32_t vw_18 = 0; vw_18 < 2; ++vw_18) {
          int32_t cse_var_11 = (vw_18 + 2);
          ((float*)conv_let)[cse_var_11] = (((float*)conv_let)[cse_var_11] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_18) + 15)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 8)]));
        }
        for (int32_t vw_19 = 0; vw_19 < 2; ++vw_19) {
          ((float*)conv_let)[vw_19] = (((float*)conv_let)[vw_19] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_19) + 10)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 9)]));
        }
        for (int32_t vw_20 = 0; vw_20 < 2; ++vw_20) {
          int32_t cse_var_12 = (vw_20 + 2);
          ((float*)conv_let)[cse_var_12] = (((float*)conv_let)[cse_var_12] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_20) + 16)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 9)]));
        }
        for (int32_t vw_21 = 0; vw_21 < 2; ++vw_21) {
          ((float*)conv_let)[vw_21] = (((float*)conv_let)[vw_21] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_21) + 12)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 10)]));
        }
        for (int32_t vw_22 = 0; vw_22 < 2; ++vw_22) {
          int32_t cse_var_13 = (vw_22 + 2);
          ((float*)conv_let)[cse_var_13] = (((float*)conv_let)[cse_var_13] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_22) + 18)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 10)]));
        }
        for (int32_t vw_23 = 0; vw_23 < 2; ++vw_23) {
          ((float*)conv_let)[vw_23] = (((float*)conv_let)[vw_23] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_23) + 13)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 11)]));
        }
        for (int32_t vw_24 = 0; vw_24 < 2; ++vw_24) {
          int32_t cse_var_14 = (vw_24 + 2);
          ((float*)conv_let)[cse_var_14] = (((float*)conv_let)[cse_var_14] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_24) + 19)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 11)]));
        }
        for (int32_t vw_25 = 0; vw_25 < 2; ++vw_25) {
          ((float*)conv_let)[vw_25] = (((float*)conv_let)[vw_25] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_25) + 14)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 12)]));
        }
        for (int32_t vw_26 = 0; vw_26 < 2; ++vw_26) {
          int32_t cse_var_15 = (vw_26 + 2);
          ((float*)conv_let)[cse_var_15] = (((float*)conv_let)[cse_var_15] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_26) + 20)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 12)]));
        }
        for (int32_t vw_27 = 0; vw_27 < 2; ++vw_27) {
          ((float*)conv_let)[vw_27] = (((float*)conv_let)[vw_27] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_27) + 15)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 13)]));
        }
        for (int32_t vw_28 = 0; vw_28 < 2; ++vw_28) {
          int32_t cse_var_16 = (vw_28 + 2);
          ((float*)conv_let)[cse_var_16] = (((float*)conv_let)[cse_var_16] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_28) + 21)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 13)]));
        }
        for (int32_t vw_29 = 0; vw_29 < 2; ++vw_29) {
          ((float*)conv_let)[vw_29] = (((float*)conv_let)[vw_29] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_29) + 16)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 14)]));
        }
        for (int32_t vw_30 = 0; vw_30 < 2; ++vw_30) {
          int32_t cse_var_17 = (vw_30 + 2);
          ((float*)conv_let)[cse_var_17] = (((float*)conv_let)[cse_var_17] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_30) + 22)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 14)]));
        }
        for (int32_t vw_31 = 0; vw_31 < 2; ++vw_31) {
          ((float*)conv_let)[vw_31] = (((float*)conv_let)[vw_31] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_31) + 18)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 15)]));
        }
        for (int32_t vw_32 = 0; vw_32 < 2; ++vw_32) {
          int32_t cse_var_18 = (vw_32 + 2);
          ((float*)conv_let)[cse_var_18] = (((float*)conv_let)[cse_var_18] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_32) + 24)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 15)]));
        }
        for (int32_t vw_33 = 0; vw_33 < 2; ++vw_33) {
          ((float*)conv_let)[vw_33] = (((float*)conv_let)[vw_33] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_33) + 19)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 16)]));
        }
        for (int32_t vw_34 = 0; vw_34 < 2; ++vw_34) {
          int32_t cse_var_19 = (vw_34 + 2);
          ((float*)conv_let)[cse_var_19] = (((float*)conv_let)[cse_var_19] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_34) + 25)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 16)]));
        }
        for (int32_t vw_35 = 0; vw_35 < 2; ++vw_35) {
          ((float*)conv_let)[vw_35] = (((float*)conv_let)[vw_35] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_35) + 20)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 17)]));
        }
        for (int32_t vw_36 = 0; vw_36 < 2; ++vw_36) {
          int32_t cse_var_20 = (vw_36 + 2);
          ((float*)conv_let)[cse_var_20] = (((float*)conv_let)[cse_var_20] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_36) + 26)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 17)]));
        }
        for (int32_t vw_37 = 0; vw_37 < 2; ++vw_37) {
          ((float*)conv_let)[vw_37] = (((float*)conv_let)[vw_37] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_37) + 21)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 18)]));
        }
        for (int32_t vw_38 = 0; vw_38 < 2; ++vw_38) {
          int32_t cse_var_21 = (vw_38 + 2);
          ((float*)conv_let)[cse_var_21] = (((float*)conv_let)[cse_var_21] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_38) + 27)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 18)]));
        }
        for (int32_t vw_39 = 0; vw_39 < 2; ++vw_39) {
          ((float*)conv_let)[vw_39] = (((float*)conv_let)[vw_39] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_39) + 22)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 19)]));
        }
        for (int32_t vw_40 = 0; vw_40 < 2; ++vw_40) {
          int32_t cse_var_22 = (vw_40 + 2);
          ((float*)conv_let)[cse_var_22] = (((float*)conv_let)[cse_var_22] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_40) + 28)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 19)]));
        }
        for (int32_t vw_41 = 0; vw_41 < 2; ++vw_41) {
          ((float*)conv_let)[vw_41] = (((float*)conv_let)[vw_41] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_41) + 24)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 20)]));
        }
        for (int32_t vw_42 = 0; vw_42 < 2; ++vw_42) {
          int32_t cse_var_23 = (vw_42 + 2);
          ((float*)conv_let)[cse_var_23] = (((float*)conv_let)[cse_var_23] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_42) + 30)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 20)]));
        }
        for (int32_t vw_43 = 0; vw_43 < 2; ++vw_43) {
          ((float*)conv_let)[vw_43] = (((float*)conv_let)[vw_43] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_43) + 25)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 21)]));
        }
        for (int32_t vw_44 = 0; vw_44 < 2; ++vw_44) {
          int32_t cse_var_24 = (vw_44 + 2);
          ((float*)conv_let)[cse_var_24] = (((float*)conv_let)[cse_var_24] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_44) + 31)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 21)]));
        }
        for (int32_t vw_45 = 0; vw_45 < 2; ++vw_45) {
          ((float*)conv_let)[vw_45] = (((float*)conv_let)[vw_45] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_45) + 26)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 22)]));
        }
        for (int32_t vw_46 = 0; vw_46 < 2; ++vw_46) {
          int32_t cse_var_25 = (vw_46 + 2);
          ((float*)conv_let)[cse_var_25] = (((float*)conv_let)[cse_var_25] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_46) + 32)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 22)]));
        }
        for (int32_t vw_47 = 0; vw_47 < 2; ++vw_47) {
          ((float*)conv_let)[vw_47] = (((float*)conv_let)[vw_47] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_47) + 27)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 23)]));
        }
        for (int32_t vw_48 = 0; vw_48 < 2; ++vw_48) {
          int32_t cse_var_26 = (vw_48 + 2);
          ((float*)conv_let)[cse_var_26] = (((float*)conv_let)[cse_var_26] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_48) + 33)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 23)]));
        }
        for (int32_t vw_49 = 0; vw_49 < 2; ++vw_49) {
          ((float*)conv_let)[vw_49] = (((float*)conv_let)[vw_49] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_49) + 28)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 24)]));
        }
        for (int32_t vw_50 = 0; vw_50 < 2; ++vw_50) {
          int32_t cse_var_27 = (vw_50 + 2);
          ((float*)conv_let)[cse_var_27] = (((float*)conv_let)[cse_var_27] + (((float*)data_vec_let)[(((((ax2_outer * 17280) + (ax3_outer * 3456)) + (ci_1 * 36)) + vw_50) + 34)] * ((float*)fused_constant_96_let)[((ci_1 * 25) + 24)]));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_92_let)[0]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax2_outer * 20) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_92_let)[0]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        int32_t cse_var_28 = (ax3_inner_1 + 2);
        float __3 = (((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_92_let)[0]) + 3.000000e+00f;
        float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
        T_divide[((((ax2_outer * 20) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (((((float*)conv_let)[cse_var_28] + ((float*)fused_nn_conv2d_constant_92_let)[0]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_76(float* p0, float* T_divide, uint8_t* global_const_workspace_250_var, uint8_t* global_workspace_251_var) {
  void* fused_nn_conv2d_constant_95_let = (&(global_const_workspace_250_var[4732448]));
  void* fused_constant_99_let = (&(global_const_workspace_250_var[4495984]));
  void* data_vec_let = (&(global_workspace_251_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vh = 0; vh < 5; ++vh) {
        for (int32_t vw = 0; vw < 9; ++vw) {
          int32_t cse_var_1 = (h + vh);
          ((float*)data_vec_let)[((((h * 4320) + (ci * 45)) + (vh * 9)) + vw)] = (((((2 <= cse_var_1) && (cse_var_1 < 7)) && (2 <= vw)) && (vw < 7)) ? p0[(((((ci * 25) + (h * 5)) + (vh * 5)) + vw) - 12)] : 0.000000e+00f);
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
    void* conv_let = (&(global_workspace_251_var[86512]));
    for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
      ((float*)conv_let)[vw_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
      for (int32_t kw = 0; kw < 5; ++kw) {
        for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
          ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((((ax2_outer * 4320) + (ci_1 * 45)) + vw_1) + kw)] * ((float*)fused_constant_99_let)[((ci_1 * 25) + kw)]));
        }
      }
      for (int32_t kw_1 = 0; kw_1 < 5; ++kw_1) {
        for (int32_t vw_2 = 0; vw_2 < 5; ++vw_2) {
          ((float*)conv_let)[vw_2] = (((float*)conv_let)[vw_2] + (((float*)data_vec_let)[(((((ax2_outer * 4320) + (ci_1 * 45)) + vw_2) + kw_1) + 9)] * ((float*)fused_constant_99_let)[(((ci_1 * 25) + kw_1) + 5)]));
        }
      }
      for (int32_t kw_2 = 0; kw_2 < 5; ++kw_2) {
        for (int32_t vw_3 = 0; vw_3 < 5; ++vw_3) {
          ((float*)conv_let)[vw_3] = (((float*)conv_let)[vw_3] + (((float*)data_vec_let)[(((((ax2_outer * 4320) + (ci_1 * 45)) + vw_3) + kw_2) + 18)] * ((float*)fused_constant_99_let)[(((ci_1 * 25) + kw_2) + 10)]));
        }
      }
      for (int32_t kw_3 = 0; kw_3 < 5; ++kw_3) {
        for (int32_t vw_4 = 0; vw_4 < 5; ++vw_4) {
          ((float*)conv_let)[vw_4] = (((float*)conv_let)[vw_4] + (((float*)data_vec_let)[(((((ax2_outer * 4320) + (ci_1 * 45)) + vw_4) + kw_3) + 27)] * ((float*)fused_constant_99_let)[(((ci_1 * 25) + kw_3) + 15)]));
        }
      }
      for (int32_t kw_4 = 0; kw_4 < 5; ++kw_4) {
        for (int32_t vw_5 = 0; vw_5 < 5; ++vw_5) {
          ((float*)conv_let)[vw_5] = (((float*)conv_let)[vw_5] + (((float*)data_vec_let)[(((((ax2_outer * 4320) + (ci_1 * 45)) + vw_5) + kw_4) + 36)] * ((float*)fused_constant_99_let)[(((ci_1 * 25) + kw_4) + 20)]));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
      float __1 = (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_95_let)[0]) + 3.000000e+00f;
      float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
      T_divide[((ax2_outer * 5) + ax3_inner)] = (((((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_95_let)[0]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_8(float* p0, float* T_divide, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_18_var[4714640]));
  void* fused_constant_8_let = (&(global_const_workspace_18_var[4411392]));
  void* data_vec_let = (&(global_workspace_19_var[614400]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t ci = 0; ci < 48; ++ci) {
        for (int32_t vh = 0; vh < 8; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 15360) + (w * 768)) + (ci * 16)) + (vh * 2)) + vw)] = p0[(((((ci * 1600) + (h * 320)) + (vh * 40)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
        void* conv_let = (&(global_workspace_19_var[921600]));
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
        }
        for (int32_t ci_1 = 0; ci_1 < 48; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_2) + 2)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 2; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_3) + 4)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 2; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 24);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_4) + 6)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_5 = 0; vw_5 < 2; ++vw_5) {
              int32_t cse_var_5 = (((vw_5 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_5] = (((float*)conv_let)[cse_var_5] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_5) + 8)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_6 = 0; vw_6 < 2; ++vw_6) {
              int32_t cse_var_6 = (((vw_6 * 4) + vc) + 40);
              ((float*)conv_let)[cse_var_6] = (((float*)conv_let)[cse_var_6] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_6) + 10)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_7 = 0; vw_7 < 2; ++vw_7) {
              int32_t cse_var_7 = (((vw_7 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_7] = (((float*)conv_let)[cse_var_7] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_7) + 12)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_8 = 0; vw_8 < 2; ++vw_8) {
              int32_t cse_var_8 = (((vw_8 * 4) + vc) + 56);
              ((float*)conv_let)[cse_var_8] = (((float*)conv_let)[cse_var_8] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 768)) + (ci_1 * 16)) + vw_8) + 14)] * ((float*)fused_constant_8_let)[(((ax1_outer * 192) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_10 = ((ax3_inner * 4) + ax1_inner);
            int32_t cse_var_9 = ((ax1_outer * 4) + ax1_inner);
            float __1 = (((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_9]) + 3.000000e+00f;
            float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
            T_divide[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner)] = (((((float*)conv_let)[cse_var_10] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_9]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_12 = ((ax1_outer * 4) + ax1_inner_1);
            int32_t cse_var_11 = (((ax3_inner_1 * 4) + ax1_inner_1) + 8);
            float __3 = (((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_12]) + 3.000000e+00f;
            float __4 = (__3) < (6.000000e+00f) ? (__3) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (((((float*)conv_let)[cse_var_11] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_12]) * ((__4) > (0.000000e+00f) ? (__4) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 2; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_14 = ((ax1_outer * 4) + ax1_inner_2);
            int32_t cse_var_13 = (((ax3_inner_2 * 4) + ax1_inner_2) + 16);
            float __5 = (((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_14]) + 3.000000e+00f;
            float __6 = (__5) < (6.000000e+00f) ? (__5) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_2) + 80)] = (((((float*)conv_let)[cse_var_13] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_14]) * ((__6) > (0.000000e+00f) ? (__6) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 2; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_16 = ((ax1_outer * 4) + ax1_inner_3);
            int32_t cse_var_15 = (((ax3_inner_3 * 4) + ax1_inner_3) + 24);
            float __7 = (((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_16]) + 3.000000e+00f;
            float __8 = (__7) < (6.000000e+00f) ? (__7) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_3) + 120)] = (((((float*)conv_let)[cse_var_15] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_16]) * ((__8) > (0.000000e+00f) ? (__8) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_4 = 0; ax3_inner_4 < 2; ++ax3_inner_4) {
          for (int32_t ax1_inner_4 = 0; ax1_inner_4 < 4; ++ax1_inner_4) {
            int32_t cse_var_18 = ((ax1_outer * 4) + ax1_inner_4);
            int32_t cse_var_17 = (((ax3_inner_4 * 4) + ax1_inner_4) + 32);
            float __9 = (((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_18]) + 3.000000e+00f;
            float __10 = (__9) < (6.000000e+00f) ? (__9) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_4 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_4) + 160)] = (((((float*)conv_let)[cse_var_17] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_18]) * ((__10) > (0.000000e+00f) ? (__10) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_5 = 0; ax3_inner_5 < 2; ++ax3_inner_5) {
          for (int32_t ax1_inner_5 = 0; ax1_inner_5 < 4; ++ax1_inner_5) {
            int32_t cse_var_20 = ((ax1_outer * 4) + ax1_inner_5);
            int32_t cse_var_19 = (((ax3_inner_5 * 4) + ax1_inner_5) + 40);
            float __11 = (((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_20]) + 3.000000e+00f;
            float __12 = (__11) < (6.000000e+00f) ? (__11) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_5 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_5) + 200)] = (((((float*)conv_let)[cse_var_19] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_20]) * ((__12) > (0.000000e+00f) ? (__12) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_6 = 0; ax3_inner_6 < 2; ++ax3_inner_6) {
          for (int32_t ax1_inner_6 = 0; ax1_inner_6 < 4; ++ax1_inner_6) {
            int32_t cse_var_22 = ((ax1_outer * 4) + ax1_inner_6);
            int32_t cse_var_21 = (((ax3_inner_6 * 4) + ax1_inner_6) + 48);
            float __13 = (((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_22]) + 3.000000e+00f;
            float __14 = (__13) < (6.000000e+00f) ? (__13) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_6 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_6) + 240)] = (((((float*)conv_let)[cse_var_21] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_22]) * ((__14) > (0.000000e+00f) ? (__14) : (0.000000e+00f))) * 1.666667e-01f);
          }
        }
        for (int32_t ax3_inner_7 = 0; ax3_inner_7 < 2; ++ax3_inner_7) {
          for (int32_t ax1_inner_7 = 0; ax1_inner_7 < 4; ++ax1_inner_7) {
            int32_t cse_var_24 = ((ax1_outer * 4) + ax1_inner_7);
            int32_t cse_var_23 = (((ax3_inner_7 * 4) + ax1_inner_7) + 56);
            float __15 = (((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_24]) + 3.000000e+00f;
            float __16 = (__15) < (6.000000e+00f) ? (__15) : (6.000000e+00f);
            T_divide[((((((ax1_outer * 6400) + (ax1_inner_7 * 1600)) + (ax2_outer * 320)) + (ax3_outer * 2)) + ax3_inner_7) + 280)] = (((((float*)conv_let)[cse_var_23] + ((float*)fused_nn_conv2d_constant_8_let)[cse_var_24]) * ((__16) > (0.000000e+00f) ? (__16) : (0.000000e+00f))) * 1.666667e-01f);
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_9(float* p0, float* T_divide, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_20_var[4712336]));
  void* fused_constant_9_let = (&(global_const_workspace_20_var[4671920]));
  void* fused_constant_9_global_global_let = (&(global_workspace_21_var[1232832]));
  for (int32_t ax0_outer_c = 0; ax0_outer_c < 24; ++ax0_outer_c) {
    for (int32_t ax2_c = 0; ax2_c < 3; ++ax2_c) {
      for (int32_t ax3_c = 0; ax3_c < 3; ++ax3_c) {
        for (int32_t ax0_inner_c = 0; ax0_inner_c < 4; ++ax0_inner_c) {
          int32_t cse_var_1 = (ax0_outer_c * 36);
          ((float*)fused_constant_9_global_global_let)[(((cse_var_1 + (ax2_c * 12)) + (ax3_c * 4)) + ax0_inner_c)] = ((float*)fused_constant_9_let)[(((cse_var_1 + (ax0_inner_c * 9)) + (ax2_c * 3)) + ax3_c)];
        }
      }
    }
  }
  void* DepthwiseConv2d_global_let = (&(global_workspace_21_var[614400]));
  for (int32_t c_outer_c = 0; c_outer_c < 24; ++c_outer_c) {
    for (int32_t i_c_outer = 0; i_c_outer < 10; ++i_c_outer) {
      void* PaddedInput_global_global_let = (&(global_workspace_21_var[1228800]));
      for (int32_t ax2_c_1 = 0; ax2_c_1 < 6; ++ax2_c_1) {
        for (int32_t ax3_c_1 = 0; ax3_c_1 < 42; ++ax3_c_1) {
          for (int32_t ax1_inner_c = 0; ax1_inner_c < 4; ++ax1_inner_c) {
            int32_t cse_var_2 = ((i_c_outer * 4) + ax2_c_1);
            ((float*)PaddedInput_global_global_let)[(((ax2_c_1 * 168) + (ax3_c_1 * 4)) + ax1_inner_c)] = (((((1 <= cse_var_2) && (cse_var_2 < 41)) && (1 <= ax3_c_1)) && (ax3_c_1 < 41)) ? p0[((((((c_outer_c * 6400) + (ax1_inner_c * 1600)) + (i_c_outer * 160)) + (ax2_c_1 * 40)) + ax3_c_1) - 41)] : 0.000000e+00f);
          }
        }
      }
      for (int32_t j_c_outer = 0; j_c_outer < 10; ++j_c_outer) {
        for (int32_t c_inner_c_init = 0; c_inner_c_init < 4; ++c_inner_c_init) {
          ((float*)DepthwiseConv2d_global_let)[((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_1 = 0; c_inner_c_init_1 < 4; ++c_inner_c_init_1) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_1) + 4)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_2 = 0; c_inner_c_init_2 < 4; ++c_inner_c_init_2) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_2) + 8)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_3 = 0; c_inner_c_init_3 < 4; ++c_inner_c_init_3) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_3) + 12)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_4 = 0; c_inner_c_init_4 < 4; ++c_inner_c_init_4) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_4) + 160)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_5 = 0; c_inner_c_init_5 < 4; ++c_inner_c_init_5) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_5) + 164)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_6 = 0; c_inner_c_init_6 < 4; ++c_inner_c_init_6) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_6) + 168)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_7 = 0; c_inner_c_init_7 < 4; ++c_inner_c_init_7) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_7) + 172)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_8 = 0; c_inner_c_init_8 < 4; ++c_inner_c_init_8) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_8) + 320)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_9 = 0; c_inner_c_init_9 < 4; ++c_inner_c_init_9) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_9) + 324)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_10 = 0; c_inner_c_init_10 < 4; ++c_inner_c_init_10) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_10) + 328)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_11 = 0; c_inner_c_init_11 < 4; ++c_inner_c_init_11) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_11) + 332)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_12 = 0; c_inner_c_init_12 < 4; ++c_inner_c_init_12) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_12) + 480)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_13 = 0; c_inner_c_init_13 < 4; ++c_inner_c_init_13) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_13) + 484)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_14 = 0; c_inner_c_init_14 < 4; ++c_inner_c_init_14) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_14) + 488)] = 0.000000e+00f;
        }
        for (int32_t c_inner_c_init_15 = 0; c_inner_c_init_15 < 4; ++c_inner_c_init_15) {
          ((float*)DepthwiseConv2d_global_let)[(((((c_outer_c * 6400) + (i_c_outer * 640)) + (j_c_outer * 16)) + c_inner_c_init_15) + 492)] = 0.000000e+00f;
        }
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            for (int32_t c_inner_c = 0; c_inner_c < 4; ++c_inner_c) {
              int32_t cse_var_5 = (j_c_outer * 16);
              int32_t cse_var_4 = (dj * 4);
              int32_t cse_var_3 = ((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_5) + c_inner_c);
              ((float*)DepthwiseConv2d_global_let)[cse_var_3] = (((float*)DepthwiseConv2d_global_let)[cse_var_3] + (((float*)PaddedInput_global_global_let)[((((di * 168) + cse_var_5) + cse_var_4) + c_inner_c)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_4) + c_inner_c)]));
            }
            for (int32_t c_inner_c_1 = 0; c_inner_c_1 < 4; ++c_inner_c_1) {
              int32_t cse_var_8 = (j_c_outer * 16);
              int32_t cse_var_7 = (dj * 4);
              int32_t cse_var_6 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_8) + c_inner_c_1) + 4);
              ((float*)DepthwiseConv2d_global_let)[cse_var_6] = (((float*)DepthwiseConv2d_global_let)[cse_var_6] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_8) + cse_var_7) + c_inner_c_1) + 4)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_7) + c_inner_c_1)]));
            }
            for (int32_t c_inner_c_2 = 0; c_inner_c_2 < 4; ++c_inner_c_2) {
              int32_t cse_var_11 = (j_c_outer * 16);
              int32_t cse_var_10 = (dj * 4);
              int32_t cse_var_9 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_11) + c_inner_c_2) + 8);
              ((float*)DepthwiseConv2d_global_let)[cse_var_9] = (((float*)DepthwiseConv2d_global_let)[cse_var_9] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_11) + cse_var_10) + c_inner_c_2) + 8)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_10) + c_inner_c_2)]));
            }
            for (int32_t c_inner_c_3 = 0; c_inner_c_3 < 4; ++c_inner_c_3) {
              int32_t cse_var_14 = (j_c_outer * 16);
              int32_t cse_var_13 = (dj * 4);
              int32_t cse_var_12 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_14) + c_inner_c_3) + 12);
              ((float*)DepthwiseConv2d_global_let)[cse_var_12] = (((float*)DepthwiseConv2d_global_let)[cse_var_12] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_14) + cse_var_13) + c_inner_c_3) + 12)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_13) + c_inner_c_3)]));
            }
            for (int32_t c_inner_c_4 = 0; c_inner_c_4 < 4; ++c_inner_c_4) {
              int32_t cse_var_17 = (j_c_outer * 16);
              int32_t cse_var_16 = (dj * 4);
              int32_t cse_var_15 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_17) + c_inner_c_4) + 160);
              ((float*)DepthwiseConv2d_global_let)[cse_var_15] = (((float*)DepthwiseConv2d_global_let)[cse_var_15] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_17) + cse_var_16) + c_inner_c_4) + 168)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_16) + c_inner_c_4)]));
            }
            for (int32_t c_inner_c_5 = 0; c_inner_c_5 < 4; ++c_inner_c_5) {
              int32_t cse_var_20 = (j_c_outer * 16);
              int32_t cse_var_19 = (dj * 4);
              int32_t cse_var_18 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_20) + c_inner_c_5) + 164);
              ((float*)DepthwiseConv2d_global_let)[cse_var_18] = (((float*)DepthwiseConv2d_global_let)[cse_var_18] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_20) + cse_var_19) + c_inner_c_5) + 172)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_19) + c_inner_c_5)]));
            }
            for (int32_t c_inner_c_6 = 0; c_inner_c_6 < 4; ++c_inner_c_6) {
              int32_t cse_var_23 = (j_c_outer * 16);
              int32_t cse_var_22 = (dj * 4);
              int32_t cse_var_21 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_23) + c_inner_c_6) + 168);
              ((float*)DepthwiseConv2d_global_let)[cse_var_21] = (((float*)DepthwiseConv2d_global_let)[cse_var_21] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_23) + cse_var_22) + c_inner_c_6) + 176)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_22) + c_inner_c_6)]));
            }
            for (int32_t c_inner_c_7 = 0; c_inner_c_7 < 4; ++c_inner_c_7) {
              int32_t cse_var_26 = (j_c_outer * 16);
              int32_t cse_var_25 = (dj * 4);
              int32_t cse_var_24 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_26) + c_inner_c_7) + 172);
              ((float*)DepthwiseConv2d_global_let)[cse_var_24] = (((float*)DepthwiseConv2d_global_let)[cse_var_24] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_26) + cse_var_25) + c_inner_c_7) + 180)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_25) + c_inner_c_7)]));
            }
            for (int32_t c_inner_c_8 = 0; c_inner_c_8 < 4; ++c_inner_c_8) {
              int32_t cse_var_29 = (j_c_outer * 16);
              int32_t cse_var_28 = (dj * 4);
              int32_t cse_var_27 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_29) + c_inner_c_8) + 320);
              ((float*)DepthwiseConv2d_global_let)[cse_var_27] = (((float*)DepthwiseConv2d_global_let)[cse_var_27] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_29) + cse_var_28) + c_inner_c_8) + 336)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_28) + c_inner_c_8)]));
            }
            for (int32_t c_inner_c_9 = 0; c_inner_c_9 < 4; ++c_inner_c_9) {
              int32_t cse_var_32 = (j_c_outer * 16);
              int32_t cse_var_31 = (dj * 4);
              int32_t cse_var_30 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_32) + c_inner_c_9) + 324);
              ((float*)DepthwiseConv2d_global_let)[cse_var_30] = (((float*)DepthwiseConv2d_global_let)[cse_var_30] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_32) + cse_var_31) + c_inner_c_9) + 340)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_31) + c_inner_c_9)]));
            }
            for (int32_t c_inner_c_10 = 0; c_inner_c_10 < 4; ++c_inner_c_10) {
              int32_t cse_var_35 = (j_c_outer * 16);
              int32_t cse_var_34 = (dj * 4);
              int32_t cse_var_33 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_35) + c_inner_c_10) + 328);
              ((float*)DepthwiseConv2d_global_let)[cse_var_33] = (((float*)DepthwiseConv2d_global_let)[cse_var_33] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_35) + cse_var_34) + c_inner_c_10) + 344)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_34) + c_inner_c_10)]));
            }
            for (int32_t c_inner_c_11 = 0; c_inner_c_11 < 4; ++c_inner_c_11) {
              int32_t cse_var_38 = (j_c_outer * 16);
              int32_t cse_var_37 = (dj * 4);
              int32_t cse_var_36 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_38) + c_inner_c_11) + 332);
              ((float*)DepthwiseConv2d_global_let)[cse_var_36] = (((float*)DepthwiseConv2d_global_let)[cse_var_36] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_38) + cse_var_37) + c_inner_c_11) + 348)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_37) + c_inner_c_11)]));
            }
            for (int32_t c_inner_c_12 = 0; c_inner_c_12 < 4; ++c_inner_c_12) {
              int32_t cse_var_41 = (j_c_outer * 16);
              int32_t cse_var_40 = (dj * 4);
              int32_t cse_var_39 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_41) + c_inner_c_12) + 480);
              ((float*)DepthwiseConv2d_global_let)[cse_var_39] = (((float*)DepthwiseConv2d_global_let)[cse_var_39] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_41) + cse_var_40) + c_inner_c_12) + 504)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_40) + c_inner_c_12)]));
            }
            for (int32_t c_inner_c_13 = 0; c_inner_c_13 < 4; ++c_inner_c_13) {
              int32_t cse_var_44 = (j_c_outer * 16);
              int32_t cse_var_43 = (dj * 4);
              int32_t cse_var_42 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_44) + c_inner_c_13) + 484);
              ((float*)DepthwiseConv2d_global_let)[cse_var_42] = (((float*)DepthwiseConv2d_global_let)[cse_var_42] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_44) + cse_var_43) + c_inner_c_13) + 508)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_43) + c_inner_c_13)]));
            }
            for (int32_t c_inner_c_14 = 0; c_inner_c_14 < 4; ++c_inner_c_14) {
              int32_t cse_var_47 = (j_c_outer * 16);
              int32_t cse_var_46 = (dj * 4);
              int32_t cse_var_45 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_47) + c_inner_c_14) + 488);
              ((float*)DepthwiseConv2d_global_let)[cse_var_45] = (((float*)DepthwiseConv2d_global_let)[cse_var_45] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_47) + cse_var_46) + c_inner_c_14) + 512)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_46) + c_inner_c_14)]));
            }
            for (int32_t c_inner_c_15 = 0; c_inner_c_15 < 4; ++c_inner_c_15) {
              int32_t cse_var_50 = (j_c_outer * 16);
              int32_t cse_var_49 = (dj * 4);
              int32_t cse_var_48 = (((((c_outer_c * 6400) + (i_c_outer * 640)) + cse_var_50) + c_inner_c_15) + 492);
              ((float*)DepthwiseConv2d_global_let)[cse_var_48] = (((float*)DepthwiseConv2d_global_let)[cse_var_48] + (((float*)PaddedInput_global_global_let)[(((((di * 168) + cse_var_50) + cse_var_49) + c_inner_c_15) + 516)] * ((float*)fused_constant_9_global_global_let)[((((c_outer_c * 36) + (di * 12)) + cse_var_49) + c_inner_c_15)]));
            }
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 40; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
        int32_t cse_var_51 = (((((ax1 >> 2) * 6400) + (ax2 * 160)) + (ax3 * 4)) + (ax1 & 3));
        float __1 = (((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_9_let)[ax1]) + 3.000000e+00f;
        float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
        T_divide[(((ax1 * 1600) + (ax2 * 40)) + ax3)] = (((((float*)DepthwiseConv2d_global_let)[cse_var_51] + ((float*)fused_nn_conv2d_constant_9_let)[ax1]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var) {
  void* fused_nn_conv2d_constant_78_let = (&(global_const_workspace_204_var[4715408]));
  void* fused_constant_81_let = (&(global_const_workspace_204_var[3282432]));
  void* data_vec_let = (&(global_workspace_205_var[19200]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vw = 0; vw < 5; ++vw) {
        ((float*)data_vec_let)[(((h * 480) + (ci * 5)) + vw)] = p0[(((ci * 25) + (h * 5)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      void* conv_let = (&(global_workspace_205_var[28800]));
      for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vc = 0; vc < 8; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 480) + (ci_1 * 5)) + vw_1)] * ((float*)fused_constant_81_let)[(((ax1_outer * 768) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_4 = ((ax3_inner * 8) + ax1_inner);
          int32_t cse_var_3 = ((ax1_outer * 8) + ax1_inner);
          int32_t cse_var_2 = ((((ax1_outer * 200) + (ax1_inner * 25)) + (ax2_outer * 5)) + ax3_inner);
          float __1 = (((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_78_let)[cse_var_3]) + 3.000000e+00f;
          float __2 = (__1) < (6.000000e+00f) ? (__1) : (6.000000e+00f);
          T_add[cse_var_2] = ((((((float*)conv_let)[cse_var_4] + ((float*)fused_nn_conv2d_constant_78_let)[cse_var_3]) * ((__2) > (0.000000e+00f) ? (__2) : (0.000000e+00f))) * 1.666667e-01f) + p1[cse_var_2]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_nn_relu(float* p0, float* T_relu, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_52_var[4731280]));
  void* fused_constant_24_let = (&(global_const_workspace_52_var[3945984]));
  void* data_vec_let = (&(global_workspace_53_var[614400]));
  for (int32_t ci = 0; ci < 192; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 12; ++ax1_outer) {
    void* conv_let = (&(global_workspace_53_var[615360]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 192; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_24_let)[(((ax1_outer * 768) + (ci_1 * 4)) + vc)]));
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_nn_relu_1(float* p0, float* T_relu, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_nn_conv2d_constant_28_let = (&(global_const_workspace_64_var[4728080]));
  void* fused_constant_28_let = (&(global_const_workspace_64_var[1769472]));
  void* data_vec_let = (&(global_workspace_65_var[614400]));
  for (int32_t ci = 0; ci < 384; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    void* conv_let = (&(global_workspace_65_var[616320]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 384; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_28_let)[(((ax1_outer * 1536) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      float __1 = ((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_28_let)[cse_var_1];
      T_relu[cse_var_1] = ((__1) > (0.000000e+00f) ? (__1) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_nn_conv2d_constant_46_let = (&(global_const_workspace_108_var[4724240]));
  void* fused_constant_46_let = (&(global_const_workspace_108_var[3761664]));
  void* data_vec_let = (&(global_workspace_109_var[384]));
  for (int32_t ci = 0; ci < 96; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    void* conv_let = (&(global_workspace_109_var[768]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_46_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      T_sigmoid[cse_var_1] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_46_let)[cse_var_1])))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_1(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* fused_nn_conv2d_constant_59_let = (&(global_const_workspace_146_var[4720784]));
  void* fused_constant_60_let = (&(global_const_workspace_146_var[3577344]));
  void* data_vec_let = (&(global_workspace_147_var[384]));
  for (int32_t ci = 0; ci < 96; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    void* conv_let = (&(global_workspace_147_var[768]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_60_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      T_sigmoid[cse_var_1] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_59_let)[cse_var_1])))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_2(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  void* fused_nn_conv2d_constant_72_let = (&(global_const_workspace_184_var[4717328]));
  void* fused_constant_74_let = (&(global_const_workspace_184_var[3393024]));
  void* data_vec_let = (&(global_workspace_185_var[384]));
  for (int32_t ci = 0; ci < 96; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    void* conv_let = (&(global_workspace_185_var[768]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_74_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      T_sigmoid[cse_var_1] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_72_let)[cse_var_1])))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_3(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var) {
  void* fused_nn_conv2d_constant_83_let = (&(global_const_workspace_216_var[4713104]));
  void* fused_constant_86_let = (&(global_const_workspace_216_var[3171840]));
  void* data_vec_let = (&(global_workspace_217_var[0]));
  for (int32_t ci = 0; ci < 96; ++ci) {
    ((float*)data_vec_let)[ci] = p0[ci];
  }
  for (int32_t ax1_outer = 0; ax1_outer < 24; ++ax1_outer) {
    void* conv_let = (&(global_workspace_217_var[384]));
    for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
      ((float*)conv_let)[vc_init] = 0.000000e+00f;
    }
    for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
      for (int32_t vc = 0; vc < 4; ++vc) {
        ((float*)conv_let)[vc] = (((float*)conv_let)[vc] + (((float*)data_vec_let)[ci_1] * ((float*)fused_constant_86_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
      }
    }
    for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 4) + ax1_inner);
      T_sigmoid[cse_var_1] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax1_inner] + ((float*)fused_nn_conv2d_constant_83_let)[cse_var_1])))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_4(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_234_var, uint8_t* global_workspace_235_var) {
  void* fused_nn_conv2d_constant_87_let = (&(global_const_workspace_234_var[4732528]));
  void* fused_constant_91_let = (&(global_const_workspace_234_var[4732592]));
  void* data_vec_let = (&(global_workspace_235_var[0]));
  for (int32_t h = 0; h < 20; ++h) {
    for (int32_t w = 0; w < 20; ++w) {
      for (int32_t vh = 0; vh < 2; ++vh) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          int32_t cse_var_1 = (h * 80);
          ((float*)data_vec_let)[(((cse_var_1 + (w * 4)) + (vh * 2)) + vw)] = p0[(((cse_var_1 + (vh * 40)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 20; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 20; ++ax3_outer) {
      void* conv_let = (&(global_workspace_235_var[6400]));
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[vw_init] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(vw_init_1 + 2)] = 0.000000e+00f;
      }
      for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
        ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[(((ax2_outer * 80) + (ax3_outer * 4)) + vw_1)] * ((float*)fused_constant_91_let)[0]));
      }
      for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
        int32_t cse_var_2 = (vw_2 + 2);
        ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 80) + (ax3_outer * 4)) + vw_2) + 2)] * ((float*)fused_constant_91_let)[0]));
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        T_sigmoid[(((ax2_outer * 80) + (ax3_outer * 2)) + ax3_inner)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_87_let)[0])))));
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        T_sigmoid[((((ax2_outer * 80) + (ax3_outer * 2)) + ax3_inner_1) + 40)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(ax3_inner_1 + 2)] + ((float*)fused_nn_conv2d_constant_87_let)[0])))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_5(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var) {
  void* fused_nn_conv2d_constant_90_let = (&(global_const_workspace_240_var[4732496]));
  void* fused_constant_94_let = (&(global_const_workspace_240_var[4732576]));
  void* data_vec_let = (&(global_workspace_241_var[0]));
  for (int32_t h = 0; h < 10; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t vh = 0; vh < 2; ++vh) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          int32_t cse_var_1 = (h * 40);
          ((float*)data_vec_let)[(((cse_var_1 + (w * 4)) + (vh * 2)) + vw)] = p0[(((cse_var_1 + (vh * 20)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 10; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
      void* conv_let = (&(global_workspace_241_var[1600]));
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[vw_init] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(vw_init_1 + 2)] = 0.000000e+00f;
      }
      for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
        ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[(((ax2_outer * 40) + (ax3_outer * 4)) + vw_1)] * ((float*)fused_constant_94_let)[0]));
      }
      for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
        int32_t cse_var_2 = (vw_2 + 2);
        ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 40) + (ax3_outer * 4)) + vw_2) + 2)] * ((float*)fused_constant_94_let)[0]));
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        T_sigmoid[(((ax2_outer * 40) + (ax3_outer * 2)) + ax3_inner)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_90_let)[0])))));
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        T_sigmoid[((((ax2_outer * 40) + (ax3_outer * 2)) + ax3_inner_1) + 20)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(ax3_inner_1 + 2)] + ((float*)fused_nn_conv2d_constant_90_let)[0])))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_6(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_246_var, uint8_t* global_workspace_247_var) {
  void* fused_nn_conv2d_constant_93_let = (&(global_const_workspace_246_var[4732464]));
  void* fused_constant_97_let = (&(global_const_workspace_246_var[4732560]));
  void* data_vec_let = (&(global_workspace_247_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t vh = 0; vh < 2; ++vh) {
        for (int32_t vw = 0; vw < 2; ++vw) {
          int32_t cse_var_1 = (h * 20);
          ((float*)data_vec_let)[(((cse_var_1 + (w * 4)) + (vh * 2)) + vw)] = p0[(((cse_var_1 + (vh * 10)) + (w * 2)) + vw)];
        }
      }
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
    for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
      void* conv_let = (&(global_workspace_247_var[400]));
      for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
        ((float*)conv_let)[vw_init] = 0.000000e+00f;
      }
      for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
        ((float*)conv_let)[(vw_init_1 + 2)] = 0.000000e+00f;
      }
      for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
        ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[(((ax2_outer * 20) + (ax3_outer * 4)) + vw_1)] * ((float*)fused_constant_97_let)[0]));
      }
      for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
        int32_t cse_var_2 = (vw_2 + 2);
        ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[((((ax2_outer * 20) + (ax3_outer * 4)) + vw_2) + 2)] * ((float*)fused_constant_97_let)[0]));
      }
      for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
        T_sigmoid[(((ax2_outer * 20) + (ax3_outer * 2)) + ax3_inner)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_93_let)[0])))));
      }
      for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
        T_sigmoid[((((ax2_outer * 20) + (ax3_outer * 2)) + ax3_inner_1) + 10)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(ax3_inner_1 + 2)] + ((float*)fused_nn_conv2d_constant_93_let)[0])))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_7(float* p0, float* T_sigmoid, uint8_t* global_const_workspace_252_var, uint8_t* global_workspace_253_var) {
  void* fused_nn_conv2d_constant_96_let = (&(global_const_workspace_252_var[4732432]));
  void* fused_constant_100_let = (&(global_const_workspace_252_var[4732608]));
  void* data_vec_let = (&(global_workspace_253_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t vw = 0; vw < 5; ++vw) {
      int32_t cse_var_1 = ((h * 5) + vw);
      ((float*)data_vec_let)[cse_var_1] = p0[cse_var_1];
    }
  }
  for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
    void* conv_let = (&(global_workspace_253_var[112]));
    for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
      ((float*)conv_let)[vw_init] = 0.000000e+00f;
    }
    for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
      ((float*)conv_let)[vw_1] = (((float*)conv_let)[vw_1] + (((float*)data_vec_let)[((ax2_outer * 5) + vw_1)] * ((float*)fused_constant_100_let)[0]));
    }
    for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
      T_sigmoid[((ax2_outer * 5) + ax3_inner)] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[ax3_inner] + ((float*)fused_nn_conv2d_constant_96_let)[0])))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt(float* p0, float* p1, float* T_sqrt, uint8_t* global_const_workspace_236_var, uint8_t* global_workspace_237_var) {
  void* fused_nn_conv2d_constant_88_let = (&(global_const_workspace_236_var[4730192]));
  void* fused_constant_92_let = (&(global_const_workspace_236_var[4081152]));
  void* data_vec_let = (&(global_workspace_237_var[0]));
  for (int32_t h = 0; h < 10; ++h) {
    for (int32_t w = 0; w < 10; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 4; ++vh) {
          for (int32_t vw = 0; vw < 4; ++vw) {
            ((float*)data_vec_let)[(((((h * 15360) + (w * 1536)) + (ci * 16)) + (vh * 4)) + vw)] = p0[(((((ci * 1600) + (h * 160)) + (vh * 40)) + (w * 4)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 20; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 10; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 10; ++ax3_outer) {
        void* conv_let = (&(global_workspace_237_var[620800]));
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
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 15360) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_92_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 4; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_2) + 4)] * ((float*)fused_constant_92_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 4; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_3) + 8)] * ((float*)fused_constant_92_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 4; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 15360) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_4) + 12)] * ((float*)fused_constant_92_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = (ax2_outer * 160);
            int32_t cse_var_5 = (ax3_outer * 4);
            T_sqrt[(((((ax1_outer * 6400) + (ax1_inner * 1600)) + cse_var_6) + cse_var_5) + ax3_inner)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_88_let)[((ax1_outer * 4) + ax1_inner)]))))) * p1[((cse_var_6 + cse_var_5) + ax3_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 4; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = (ax2_outer * 160);
            int32_t cse_var_7 = (ax3_outer * 4);
            T_sqrt[((((((ax1_outer * 6400) + (ax1_inner_1 * 1600)) + cse_var_8) + cse_var_7) + ax3_inner_1) + 40)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 16)] + ((float*)fused_nn_conv2d_constant_88_let)[((ax1_outer * 4) + ax1_inner_1)]))))) * p1[(((cse_var_8 + cse_var_7) + ax3_inner_1) + 40)]));
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 4; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_10 = (ax2_outer * 160);
            int32_t cse_var_9 = (ax3_outer * 4);
            T_sqrt[((((((ax1_outer * 6400) + (ax1_inner_2 * 1600)) + cse_var_10) + cse_var_9) + ax3_inner_2) + 80)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(((ax3_inner_2 * 4) + ax1_inner_2) + 32)] + ((float*)fused_nn_conv2d_constant_88_let)[((ax1_outer * 4) + ax1_inner_2)]))))) * p1[(((cse_var_10 + cse_var_9) + ax3_inner_2) + 80)]));
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 4; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_12 = (ax2_outer * 160);
            int32_t cse_var_11 = (ax3_outer * 4);
            T_sqrt[((((((ax1_outer * 6400) + (ax1_inner_3 * 1600)) + cse_var_12) + cse_var_11) + ax3_inner_3) + 120)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(((ax3_inner_3 * 4) + ax1_inner_3) + 48)] + ((float*)fused_nn_conv2d_constant_88_let)[((ax1_outer * 4) + ax1_inner_3)]))))) * p1[(((cse_var_12 + cse_var_11) + ax3_inner_3) + 120)]));
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt_1(float* p0, float* p1, float* T_sqrt, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var) {
  void* fused_nn_conv2d_constant_91_let = (&(global_const_workspace_242_var[4729872]));
  void* fused_constant_95_let = (&(global_const_workspace_242_var[4050432]));
  void* data_vec_let = (&(global_workspace_243_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 4; ++vh) {
          for (int32_t vw = 0; vw < 4; ++vw) {
            ((float*)data_vec_let)[(((((h * 7680) + (w * 1536)) + (ci * 16)) + (vh * 4)) + vw)] = p0[(((((ci * 400) + (h * 80)) + (vh * 20)) + (w * 4)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 20; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_243_var[155200]));
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
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 4; ++vw_1) {
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 7680) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_1)] * ((float*)fused_constant_95_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 4; ++vw_2) {
              int32_t cse_var_2 = (((vw_2 * 4) + vc) + 16);
              ((float*)conv_let)[cse_var_2] = (((float*)conv_let)[cse_var_2] + (((float*)data_vec_let)[(((((ax2_outer * 7680) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_2) + 4)] * ((float*)fused_constant_95_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_3 = 0; vw_3 < 4; ++vw_3) {
              int32_t cse_var_3 = (((vw_3 * 4) + vc) + 32);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 7680) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_3) + 8)] * ((float*)fused_constant_95_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
            for (int32_t vw_4 = 0; vw_4 < 4; ++vw_4) {
              int32_t cse_var_4 = (((vw_4 * 4) + vc) + 48);
              ((float*)conv_let)[cse_var_4] = (((float*)conv_let)[cse_var_4] + (((float*)data_vec_let)[(((((ax2_outer * 7680) + (ax3_outer * 1536)) + (ci_1 * 16)) + vw_4) + 12)] * ((float*)fused_constant_95_let)[(((ax1_outer * 384) + (ci_1 * 4)) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 4; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = (ax2_outer * 80);
            int32_t cse_var_5 = (ax3_outer * 4);
            T_sqrt[(((((ax1_outer * 1600) + (ax1_inner * 400)) + cse_var_6) + cse_var_5) + ax3_inner)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_91_let)[((ax1_outer * 4) + ax1_inner)]))))) * p1[((cse_var_6 + cse_var_5) + ax3_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 4; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = (ax2_outer * 80);
            int32_t cse_var_7 = (ax3_outer * 4);
            T_sqrt[((((((ax1_outer * 1600) + (ax1_inner_1 * 400)) + cse_var_8) + cse_var_7) + ax3_inner_1) + 20)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 16)] + ((float*)fused_nn_conv2d_constant_91_let)[((ax1_outer * 4) + ax1_inner_1)]))))) * p1[(((cse_var_8 + cse_var_7) + ax3_inner_1) + 20)]));
          }
        }
        for (int32_t ax3_inner_2 = 0; ax3_inner_2 < 4; ++ax3_inner_2) {
          for (int32_t ax1_inner_2 = 0; ax1_inner_2 < 4; ++ax1_inner_2) {
            int32_t cse_var_10 = (ax2_outer * 80);
            int32_t cse_var_9 = (ax3_outer * 4);
            T_sqrt[((((((ax1_outer * 1600) + (ax1_inner_2 * 400)) + cse_var_10) + cse_var_9) + ax3_inner_2) + 40)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(((ax3_inner_2 * 4) + ax1_inner_2) + 32)] + ((float*)fused_nn_conv2d_constant_91_let)[((ax1_outer * 4) + ax1_inner_2)]))))) * p1[(((cse_var_10 + cse_var_9) + ax3_inner_2) + 40)]));
          }
        }
        for (int32_t ax3_inner_3 = 0; ax3_inner_3 < 4; ++ax3_inner_3) {
          for (int32_t ax1_inner_3 = 0; ax1_inner_3 < 4; ++ax1_inner_3) {
            int32_t cse_var_12 = (ax2_outer * 80);
            int32_t cse_var_11 = (ax3_outer * 4);
            T_sqrt[((((((ax1_outer * 1600) + (ax1_inner_3 * 400)) + cse_var_12) + cse_var_11) + ax3_inner_3) + 60)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(((ax3_inner_3 * 4) + ax1_inner_3) + 48)] + ((float*)fused_nn_conv2d_constant_91_let)[((ax1_outer * 4) + ax1_inner_3)]))))) * p1[(((cse_var_12 + cse_var_11) + ax3_inner_3) + 60)]));
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt_2(float* p0, float* p1, float* T_sqrt, uint8_t* global_const_workspace_248_var, uint8_t* global_workspace_249_var) {
  void* fused_nn_conv2d_constant_94_let = (&(global_const_workspace_248_var[4729552]));
  void* fused_constant_98_let = (&(global_const_workspace_248_var[4019712]));
  void* data_vec_let = (&(global_workspace_249_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t w = 0; w < 5; ++w) {
      for (int32_t ci = 0; ci < 96; ++ci) {
        for (int32_t vh = 0; vh < 2; ++vh) {
          for (int32_t vw = 0; vw < 2; ++vw) {
            ((float*)data_vec_let)[(((((h * 1920) + (w * 384)) + (ci * 4)) + (vh * 2)) + vw)] = p0[(((((ci * 100) + (h * 20)) + (vh * 10)) + (w * 2)) + vw)];
          }
        }
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 20; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      for (int32_t ax3_outer = 0; ax3_outer < 5; ++ax3_outer) {
        void* conv_let = (&(global_workspace_249_var[38800]));
        for (int32_t vc_init = 0; vc_init < 4; ++vc_init) {
          for (int32_t vw_init = 0; vw_init < 2; ++vw_init) {
            ((float*)conv_let)[((vw_init * 4) + vc_init)] = 0.000000e+00f;
          }
          for (int32_t vw_init_1 = 0; vw_init_1 < 2; ++vw_init_1) {
            ((float*)conv_let)[(((vw_init_1 * 4) + vc_init) + 8)] = 0.000000e+00f;
          }
        }
        for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
          for (int32_t vc = 0; vc < 4; ++vc) {
            for (int32_t vw_1 = 0; vw_1 < 2; ++vw_1) {
              int32_t cse_var_2 = (ci_1 * 4);
              int32_t cse_var_1 = ((vw_1 * 4) + vc);
              ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[((((ax2_outer * 1920) + (ax3_outer * 384)) + cse_var_2) + vw_1)] * ((float*)fused_constant_98_let)[(((ax1_outer * 384) + cse_var_2) + vc)]));
            }
            for (int32_t vw_2 = 0; vw_2 < 2; ++vw_2) {
              int32_t cse_var_4 = (ci_1 * 4);
              int32_t cse_var_3 = (((vw_2 * 4) + vc) + 8);
              ((float*)conv_let)[cse_var_3] = (((float*)conv_let)[cse_var_3] + (((float*)data_vec_let)[(((((ax2_outer * 1920) + (ax3_outer * 384)) + cse_var_4) + vw_2) + 2)] * ((float*)fused_constant_98_let)[(((ax1_outer * 384) + cse_var_4) + vc)]));
            }
          }
        }
        for (int32_t ax3_inner = 0; ax3_inner < 2; ++ax3_inner) {
          for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
            int32_t cse_var_6 = (ax2_outer * 20);
            int32_t cse_var_5 = (ax3_outer * 2);
            T_sqrt[(((((ax1_outer * 400) + (ax1_inner * 100)) + cse_var_6) + cse_var_5) + ax3_inner)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[((ax3_inner * 4) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_94_let)[((ax1_outer * 4) + ax1_inner)]))))) * p1[((cse_var_6 + cse_var_5) + ax3_inner)]));
          }
        }
        for (int32_t ax3_inner_1 = 0; ax3_inner_1 < 2; ++ax3_inner_1) {
          for (int32_t ax1_inner_1 = 0; ax1_inner_1 < 4; ++ax1_inner_1) {
            int32_t cse_var_8 = (ax2_outer * 20);
            int32_t cse_var_7 = (ax3_outer * 2);
            T_sqrt[((((((ax1_outer * 400) + (ax1_inner_1 * 100)) + cse_var_8) + cse_var_7) + ax3_inner_1) + 10)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[(((ax3_inner_1 * 4) + ax1_inner_1) + 8)] + ((float*)fused_nn_conv2d_constant_94_let)[((ax1_outer * 4) + ax1_inner_1)]))))) * p1[(((cse_var_8 + cse_var_7) + ax3_inner_1) + 10)]));
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
TVM_DLL int32_t tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt_3(float* p0, float* p1, float* T_sqrt, uint8_t* global_const_workspace_254_var, uint8_t* global_workspace_255_var) {
  void* fused_nn_conv2d_constant_97_let = (&(global_const_workspace_254_var[4729232]));
  void* fused_constant_101_let = (&(global_const_workspace_254_var[4111872]));
  void* data_vec_let = (&(global_workspace_255_var[0]));
  for (int32_t h = 0; h < 5; ++h) {
    for (int32_t ci = 0; ci < 96; ++ci) {
      for (int32_t vw = 0; vw < 5; ++vw) {
        ((float*)data_vec_let)[(((h * 480) + (ci * 5)) + vw)] = p0[(((ci * 25) + (h * 5)) + vw)];
      }
    }
  }
  for (int32_t ax1_outer = 0; ax1_outer < 10; ++ax1_outer) {
    for (int32_t ax2_outer = 0; ax2_outer < 5; ++ax2_outer) {
      void* conv_let = (&(global_workspace_255_var[9600]));
      for (int32_t vc_init = 0; vc_init < 8; ++vc_init) {
        for (int32_t vw_init = 0; vw_init < 5; ++vw_init) {
          ((float*)conv_let)[((vw_init * 8) + vc_init)] = 0.000000e+00f;
        }
      }
      for (int32_t ci_1 = 0; ci_1 < 96; ++ci_1) {
        for (int32_t vc = 0; vc < 8; ++vc) {
          for (int32_t vw_1 = 0; vw_1 < 5; ++vw_1) {
            int32_t cse_var_1 = ((vw_1 * 8) + vc);
            ((float*)conv_let)[cse_var_1] = (((float*)conv_let)[cse_var_1] + (((float*)data_vec_let)[(((ax2_outer * 480) + (ci_1 * 5)) + vw_1)] * ((float*)fused_constant_101_let)[(((ax1_outer * 768) + (ci_1 * 8)) + vc)]));
          }
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 5; ++ax3_inner) {
        for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
          int32_t cse_var_2 = (ax2_outer * 5);
          T_sqrt[((((ax1_outer * 200) + (ax1_inner * 25)) + cse_var_2) + ax3_inner)] = sqrtf(((1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - (((float*)conv_let)[((ax3_inner * 8) + ax1_inner)] + ((float*)fused_nn_conv2d_constant_97_let)[((ax1_outer * 8) + ax1_inner)]))))) * p1[(cse_var_2 + ax3_inner)]));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_global_avg_pool2d(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_51_var[614400]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 192; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 10; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 10; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 100) + (rv0 * 10)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 192; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 1.000000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_global_avg_pool2d_1(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_63_var[614400]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 384; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 10; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 10; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 100) + (rv0 * 10)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 384; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 1.000000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_global_avg_pool2d_2(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_107_var[384]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 96; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 40; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 40; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 1600) + (rv0 * 40)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 96; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 6.250000e-04f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_global_avg_pool2d_3(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_145_var[384]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 96; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 20; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 20; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 400) + (rv0 * 20)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 96; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 2.500000e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_global_avg_pool2d_4(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_183_var[384]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 96; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 10; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 10; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 100) + (rv0 * 10)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 96; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 1.000000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_global_avg_pool2d_5(float* p0, float* adaptive_pool_avg, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var) {
  void* adaptive_pool_sum_let = (&(global_workspace_215_var[0]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 96; ++ax0_ax1_fused) {
    ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t rv0 = 0; rv0 < 5; ++rv0) {
      for (int32_t rv1 = 0; rv1 < 5; ++rv1) {
        ((float*)adaptive_pool_sum_let)[ax0_ax1_fused] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused] + p0[(((ax0_ax1_fused * 25) + (rv0 * 5)) + rv1)]);
      }
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 96; ++ax0_ax1_fused_1) {
    adaptive_pool_avg[ax0_ax1_fused_1] = (((float*)adaptive_pool_sum_let)[ax0_ax1_fused_1] * 4.000000e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_matmul(float* p0, float* T_matmul_NN, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_constant_49_let = (&(global_const_workspace_120_var[4732400]));
  for (int32_t i = 0; i < 6400; ++i) {
    T_matmul_NN[i] = 0.000000e+00f;
    for (int32_t k = 0; k < 8; ++k) {
      T_matmul_NN[i] = (T_matmul_NN[i] + (p0[((i * 8) + k)] * ((float*)fused_constant_49_let)[k]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_matmul_1(float* p0, float* T_matmul_NN, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  void* fused_constant_63_let = (&(global_const_workspace_158_var[4732368]));
  for (int32_t i = 0; i < 1600; ++i) {
    T_matmul_NN[i] = 0.000000e+00f;
    for (int32_t k = 0; k < 8; ++k) {
      T_matmul_NN[i] = (T_matmul_NN[i] + (p0[((i * 8) + k)] * ((float*)fused_constant_63_let)[k]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_matmul_2(float* p0, float* T_matmul_NN, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
  void* fused_constant_77_let = (&(global_const_workspace_196_var[4732336]));
  for (int32_t i = 0; i < 400; ++i) {
    T_matmul_NN[i] = 0.000000e+00f;
    for (int32_t k = 0; k < 8; ++k) {
      T_matmul_NN[i] = (T_matmul_NN[i] + (p0[((i * 8) + k)] * ((float*)fused_constant_77_let)[k]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_matmul_3(float* p0, float* T_matmul_NN, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var) {
  void* fused_constant_89_let = (&(global_const_workspace_228_var[4732304]));
  for (int32_t i = 0; i < 100; ++i) {
    T_matmul_NN[i] = 0.000000e+00f;
    for (int32_t k = 0; k < 8; ++k) {
      T_matmul_NN[i] = (T_matmul_NN[i] + (p0[((i * 8) + k)] * ((float*)fused_constant_89_let)[k]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_softmax(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  for (int32_t i0 = 0; i0 < 6400; ++i0) {
    void* T_softmax_maxelem_let = (&(global_workspace_119_var[409632]));
    ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
    for (int32_t k = 0; k < 8; ++k) {
      float __1 = ((float*)T_softmax_maxelem_let)[0];
      float __2 = p0[((i0 * 8) + k)];
      ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
    }
    void* T_softmax_exp_let = (&(global_workspace_119_var[409600]));
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      ((float*)T_softmax_exp_let)[i1] = expf((p0[((i0 * 8) + i1)] - ((float*)T_softmax_maxelem_let)[0]));
    }
    void* T_softmax_expsum_let = (&(global_workspace_119_var[409648]));
    ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
    for (int32_t k_1 = 0; k_1 < 8; ++k_1) {
      ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
    }
    for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
      T_softmax_norm[((i0 * 8) + i1_1)] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_softmax_1(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  for (int32_t i0 = 0; i0 < 1600; ++i0) {
    void* T_softmax_maxelem_let = (&(global_workspace_157_var[102432]));
    ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
    for (int32_t k = 0; k < 8; ++k) {
      float __1 = ((float*)T_softmax_maxelem_let)[0];
      float __2 = p0[((i0 * 8) + k)];
      ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
    }
    void* T_softmax_exp_let = (&(global_workspace_157_var[102400]));
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      ((float*)T_softmax_exp_let)[i1] = expf((p0[((i0 * 8) + i1)] - ((float*)T_softmax_maxelem_let)[0]));
    }
    void* T_softmax_expsum_let = (&(global_workspace_157_var[102448]));
    ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
    for (int32_t k_1 = 0; k_1 < 8; ++k_1) {
      ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
    }
    for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
      T_softmax_norm[((i0 * 8) + i1_1)] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_softmax_2(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
  for (int32_t i0 = 0; i0 < 400; ++i0) {
    void* T_softmax_maxelem_let = (&(global_workspace_195_var[25632]));
    ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
    for (int32_t k = 0; k < 8; ++k) {
      float __1 = ((float*)T_softmax_maxelem_let)[0];
      float __2 = p0[((i0 * 8) + k)];
      ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
    }
    void* T_softmax_exp_let = (&(global_workspace_195_var[25600]));
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      ((float*)T_softmax_exp_let)[i1] = expf((p0[((i0 * 8) + i1)] - ((float*)T_softmax_maxelem_let)[0]));
    }
    void* T_softmax_expsum_let = (&(global_workspace_195_var[25648]));
    ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
    for (int32_t k_1 = 0; k_1 < 8; ++k_1) {
      ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
    }
    for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
      T_softmax_norm[((i0 * 8) + i1_1)] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_nn_softmax_3(float* p0, float* T_softmax_norm, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var) {
  for (int32_t i0 = 0; i0 < 100; ++i0) {
    void* T_softmax_maxelem_let = (&(global_workspace_227_var[6432]));
    ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
    for (int32_t k = 0; k < 8; ++k) {
      float __1 = ((float*)T_softmax_maxelem_let)[0];
      float __2 = p0[((i0 * 8) + k)];
      ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
    }
    void* T_softmax_exp_let = (&(global_workspace_227_var[6400]));
    for (int32_t i1 = 0; i1 < 8; ++i1) {
      ((float*)T_softmax_exp_let)[i1] = expf((p0[((i0 * 8) + i1)] - ((float*)T_softmax_maxelem_let)[0]));
    }
    void* T_softmax_expsum_let = (&(global_workspace_227_var[6448]));
    ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
    for (int32_t k_1 = 0; k_1 < 8; ++k_1) {
      ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
    }
    for (int32_t i1_1 = 0; i1_1 < 8; ++i1_1) {
      T_softmax_norm[((i0 * 8) + i1_1)] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_reshape_reshape_reshape_reshape_concatenate(float* p0, float* p1, float* p2, float* p3, float* concatenate_ext, uint8_t* global_const_workspace_256_var, uint8_t* global_workspace_257_var) {
  void* T_reshape_let = (&(global_workspace_257_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 128000; ++ax0_ax1_fused_ax2_fused) {
    ((float*)T_reshape_let)[ax0_ax1_fused_ax2_fused] = p0[ax0_ax1_fused_ax2_fused];
  }
  void* T_reshape_let_1 = (&(global_workspace_257_var[640000]));
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 32000; ++ax0_ax1_fused_ax2_fused_1) {
    ((float*)T_reshape_let_1)[ax0_ax1_fused_ax2_fused_1] = p1[ax0_ax1_fused_ax2_fused_1];
  }
  void* T_reshape_let_2 = (&(global_workspace_257_var[512000]));
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 8000; ++ax0_ax1_fused_ax2_fused_2) {
    ((float*)T_reshape_let_2)[ax0_ax1_fused_ax2_fused_2] = p2[ax0_ax1_fused_ax2_fused_2];
  }
  void* T_reshape_let_3 = (&(global_workspace_257_var[544000]));
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 2000; ++ax0_ax1_fused_ax2_fused_3) {
    ((float*)T_reshape_let_3)[ax0_ax1_fused_ax2_fused_3] = p3[ax0_ax1_fused_ax2_fused_3];
  }
  for (int32_t inn = 0; inn < 80; ++inn) {
    for (int32_t j = 0; j < 1600; ++j) {
      concatenate_ext[((inn * 2125) + j)] = ((float*)T_reshape_let)[((inn * 1600) + j)];
    }
    for (int32_t j_1 = 0; j_1 < 400; ++j_1) {
      concatenate_ext[(((inn * 2125) + j_1) + 1600)] = ((float*)T_reshape_let_1)[((inn * 400) + j_1)];
    }
    for (int32_t j_2 = 0; j_2 < 100; ++j_2) {
      concatenate_ext[(((inn * 2125) + j_2) + 2000)] = ((float*)T_reshape_let_2)[((inn * 100) + j_2)];
    }
    for (int32_t j_3 = 0; j_3 < 25; ++j_3) {
      concatenate_ext[(((inn * 2125) + j_3) + 2100)] = ((float*)T_reshape_let_3)[((inn * 25) + j_3)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_constant_26_let = (&(global_const_workspace_56_var[589824]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 18432; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 192);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_26_let)[((((ax0_ax1_fused_ax2_fused / 192) * 768) + (ax4_inner * 192)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_1(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_constant_30_let = (&(global_const_workspace_68_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36864; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 384);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_30_let)[((((ax0_ax1_fused_ax2_fused / 384) * 1536) + (ax4_inner * 384)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_2(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_constant_47_let = (&(global_const_workspace_110_var[3724800]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2304; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 96);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_47_let)[((((ax0_ax1_fused_ax2_fused / 96) * 384) + (ax4_inner * 96)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_3(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_constant_61_let = (&(global_const_workspace_148_var[3540480]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2304; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 96);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_61_let)[((((ax0_ax1_fused_ax2_fused / 96) * 384) + (ax4_inner * 96)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_4(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  void* fused_constant_75_let = (&(global_const_workspace_186_var[3356160]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2304; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
      int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 96);
      T_layout_trans[((ax0_ax1_fused_ax2_fused * 4) + ax4_inner)] = (((float*)fused_constant_75_let)[((((ax0_ax1_fused_ax2_fused / 96) * 384) + (ax4_inner * 96)) + cse_var_1)] * p0[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_5(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var) {
  void* fused_constant_87_let = (&(global_const_workspace_218_var[3134976]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1152; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax4_outer = 0; ax4_outer < 2; ++ax4_outer) {
      for (int32_t ax4_inner = 0; ax4_inner < 4; ++ax4_inner) {
        int32_t cse_var_1 = (ax0_ax1_fused_ax2_fused % 96);
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 8) + (ax4_outer * 4)) + ax4_inner)] = (((float*)fused_constant_87_let)[(((((ax0_ax1_fused_ax2_fused / 96) * 768) + (ax4_outer * 384)) + (ax4_inner * 96)) + cse_var_1)] * p0[cse_var_1]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_squeeze_reshape_squeeze_reshape_squeeze_reshape_squeeze_reshape_concatenat_3778f7e529c91271_(float* p0, float* p1, float* p2, float* p3, float* T_multiply, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var) {
  void* fused_squeeze_reshape_squeeze_reshape_squeeze_reshape_squeeze_reshape_concatenate_split_multiply_add_add_concatenate_constant_let = (&(global_const_workspace_230_var[4658800]));
  void* fused_squeeze_reshape_squeeze_reshape_squeeze_reshape_squeeze_reshape_concatenate_split_multiply_constant_let = (&(global_const_workspace_230_var[4429824]));
  void* T_squeeze_let = (&(global_workspace_231_var[0]));
  for (int32_t ax0 = 0; ax0 < 6400; ++ax0) {
    ((float*)T_squeeze_let)[ax0] = p0[ax0];
  }
  void* T_reshape_let = (&(global_workspace_231_var[34000]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 6400; ++ax0_ax1_fused_ax2_fused) {
    ((float*)T_reshape_let)[ax0_ax1_fused_ax2_fused] = ((float*)T_squeeze_let)[ax0_ax1_fused_ax2_fused];
  }
  void* T_squeeze_let_1 = (&(global_workspace_231_var[0]));
  for (int32_t ax0_1 = 0; ax0_1 < 1600; ++ax0_1) {
    ((float*)T_squeeze_let_1)[ax0_1] = p1[ax0_1];
  }
  void* T_reshape_let_1 = (&(global_workspace_231_var[59600]));
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 1600; ++ax0_ax1_fused_ax2_fused_1) {
    ((float*)T_reshape_let_1)[ax0_ax1_fused_ax2_fused_1] = ((float*)T_squeeze_let_1)[ax0_ax1_fused_ax2_fused_1];
  }
  void* T_squeeze_let_2 = (&(global_workspace_231_var[0]));
  for (int32_t ax0_2 = 0; ax0_2 < 400; ++ax0_2) {
    ((float*)T_squeeze_let_2)[ax0_2] = p2[ax0_2];
  }
  void* T_reshape_let_2 = (&(global_workspace_231_var[66000]));
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 400; ++ax0_ax1_fused_ax2_fused_2) {
    ((float*)T_reshape_let_2)[ax0_ax1_fused_ax2_fused_2] = ((float*)T_squeeze_let_2)[ax0_ax1_fused_ax2_fused_2];
  }
  void* T_squeeze_let_3 = (&(global_workspace_231_var[0]));
  for (int32_t ax0_3 = 0; ax0_3 < 100; ++ax0_3) {
    ((float*)T_squeeze_let_3)[ax0_3] = p3[ax0_3];
  }
  void* T_reshape_let_3 = (&(global_workspace_231_var[67600]));
  for (int32_t ax0_ax1_fused_ax2_fused_3 = 0; ax0_ax1_fused_ax2_fused_3 < 100; ++ax0_ax1_fused_ax2_fused_3) {
    ((float*)T_reshape_let_3)[ax0_ax1_fused_ax2_fused_3] = ((float*)T_squeeze_let_3)[ax0_ax1_fused_ax2_fused_3];
  }
  void* concatenate_ext_let = (&(global_workspace_231_var[0]));
  for (int32_t j = 0; j < 6400; ++j) {
    ((float*)concatenate_ext_let)[j] = ((float*)T_reshape_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 1600; ++j_1) {
    ((float*)concatenate_ext_let)[(j_1 + 6400)] = ((float*)T_reshape_let_1)[j_1];
  }
  for (int32_t j_2 = 0; j_2 < 400; ++j_2) {
    ((float*)concatenate_ext_let)[(j_2 + 8000)] = ((float*)T_reshape_let_2)[j_2];
  }
  for (int32_t j_3 = 0; j_3 < 100; ++j_3) {
    ((float*)concatenate_ext_let)[(j_3 + 8400)] = ((float*)T_reshape_let_3)[j_3];
  }
  void* T_split_sections_let = (&(global_workspace_231_var[34000]));
  for (int32_t ax0_ax1_fused_ax2_fused_4 = 0; ax0_ax1_fused_ax2_fused_4 < 4250; ++ax0_ax1_fused_ax2_fused_4) {
    ((float*)T_split_sections_let)[ax0_ax1_fused_ax2_fused_4] = ((float*)concatenate_ext_let)[(((ax0_ax1_fused_ax2_fused_4 >> 1) * 4) + (ax0_ax1_fused_ax2_fused_4 & 1))];
  }
  void* T_multiply_let = (&(global_workspace_231_var[51008]));
  for (int32_t ax0_ax1_fused_ax2_fused_5 = 0; ax0_ax1_fused_ax2_fused_5 < 4250; ++ax0_ax1_fused_ax2_fused_5) {
    ((float*)T_multiply_let)[ax0_ax1_fused_ax2_fused_5] = (((float*)T_split_sections_let)[ax0_ax1_fused_ax2_fused_5] * -1.000000e+00f);
  }
  void* T_add_let = (&(global_workspace_231_var[34000]));
  for (int32_t ax0_ax1_fused_ax2_fused_6 = 0; ax0_ax1_fused_ax2_fused_6 < 4250; ++ax0_ax1_fused_ax2_fused_6) {
    ((float*)T_add_let)[ax0_ax1_fused_ax2_fused_6] = (((float*)T_multiply_let)[ax0_ax1_fused_ax2_fused_6] + ((float*)fused_squeeze_reshape_squeeze_reshape_squeeze_reshape_squeeze_reshape_concatenate_split_multiply_constant_let)[ax0_ax1_fused_ax2_fused_6]);
  }
  void* T_split_sections_let_1 = (&(global_workspace_231_var[51008]));
  for (int32_t ax0_ax1_fused_ax2_fused_7 = 0; ax0_ax1_fused_ax2_fused_7 < 4250; ++ax0_ax1_fused_ax2_fused_7) {
    ((float*)T_split_sections_let_1)[ax0_ax1_fused_ax2_fused_7] = ((float*)concatenate_ext_let)[((((ax0_ax1_fused_ax2_fused_7 >> 1) * 4) + (ax0_ax1_fused_ax2_fused_7 & 1)) + 2)];
  }
  void* T_add_let_1 = (&(global_workspace_231_var[68016]));
  for (int32_t ax0_ax1_fused_ax2_fused_8 = 0; ax0_ax1_fused_ax2_fused_8 < 4250; ++ax0_ax1_fused_ax2_fused_8) {
    ((float*)T_add_let_1)[ax0_ax1_fused_ax2_fused_8] = (((float*)T_split_sections_let_1)[ax0_ax1_fused_ax2_fused_8] + ((float*)fused_squeeze_reshape_squeeze_reshape_squeeze_reshape_squeeze_reshape_concatenate_split_multiply_constant_let)[ax0_ax1_fused_ax2_fused_8]);
  }
  void* concatenate_ext_let_1 = (&(global_workspace_231_var[0]));
  for (int32_t inn = 0; inn < 2125; ++inn) {
    for (int32_t j_4 = 0; j_4 < 2; ++j_4) {
      ((float*)concatenate_ext_let_1)[((inn * 4) + j_4)] = ((float*)T_add_let)[((inn * 2) + j_4)];
    }
    for (int32_t j_5 = 0; j_5 < 2; ++j_5) {
      ((float*)concatenate_ext_let_1)[(((inn * 4) + j_5) + 2)] = ((float*)T_add_let_1)[((inn * 2) + j_5)];
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_9 = 0; ax0_ax1_fused_ax2_fused_9 < 8500; ++ax0_ax1_fused_ax2_fused_9) {
    T_multiply[ax0_ax1_fused_ax2_fused_9] = (((float*)concatenate_ext_let_1)[ax0_ax1_fused_ax2_fused_9] * ((float*)fused_squeeze_reshape_squeeze_reshape_squeeze_reshape_squeeze_reshape_concatenate_split_multiply_add_add_concatenate_constant_let)[(ax0_ax1_fused_ax2_fused_9 >> 2)]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_transpose_reshape(float* p0, float* T_reshape, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  for (int32_t ax0 = 0; ax0 < 6400; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_1 = (((ax0 * 8) + (ax1_outer * 4)) + ax1_inner);
        T_reshape[cse_var_1] = p0[(((cse_var_1 & 31) * 1600) + (ax0 >> 2))];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_transpose_reshape_1(float* p0, float* T_reshape, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  for (int32_t ax0 = 0; ax0 < 1600; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_1 = (((ax0 * 8) + (ax1_outer * 4)) + ax1_inner);
        T_reshape[cse_var_1] = p0[(((cse_var_1 & 31) * 400) + (ax0 >> 2))];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_transpose_reshape_2(float* p0, float* T_reshape, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
  for (int32_t ax0 = 0; ax0 < 400; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_1 = (((ax0 * 8) + (ax1_outer * 4)) + ax1_inner);
        T_reshape[cse_var_1] = p0[(((cse_var_1 & 31) * 100) + (ax0 >> 2))];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det_fused_transpose_reshape_3(float* p0, float* T_reshape, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var) {
  for (int32_t ax0 = 0; ax0 < 100; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 4; ++ax1_inner) {
        int32_t cse_var_1 = (((ax0 * 8) + (ax1_outer * 4)) + ax1_inner);
        T_reshape[cse_var_1] = p0[(((cse_var_1 & 31) * 25) + (ax0 >> 2))];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_det___tvm_main__(float* image_buffer_var, float* output_buffer_var, float* output2_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_121_let = (&(global_workspace_1_var[512000]));
  void* sid_120_let = (&(global_workspace_1_var[153600]));
  void* sid_118_let = (&(global_workspace_1_var[1382400]));
  void* sid_124_let = (&(global_workspace_1_var[768000]));
  void* sid_114_let = (&(global_workspace_1_var[25600]));
  void* sid_119_let = (&(global_workspace_1_var[1894400]));
  void* sid_104_let = (&(global_workspace_1_var[0]));
  void* sid_116_let = (&(global_workspace_1_var[5529600]));
  void* sid_90_let = (&(global_workspace_1_var[7065600]));
  void* sid_38_let = (&(global_workspace_1_var[614400]));
  void* sid_83_let = (&(global_workspace_1_var[0]));
  void* sid_82_let = (&(global_workspace_1_var[0]));
  void* sid_111_let = (&(global_workspace_1_var[9600]));
  void* sid_110_let = (&(global_workspace_1_var[7152000]));
  void* sid_79_let = (&(global_workspace_1_var[230400]));
  void* sid_87_let = (&(global_workspace_1_var[115200]));
  void* sid_77_let = (&(global_workspace_1_var[51200]));
  void* sid_88_let = (&(global_workspace_1_var[0]));
  void* sid_75_let = (&(global_workspace_1_var[6912000]));
  void* sid_72_let = (&(global_workspace_1_var[0]));
  void* sid_70_let = (&(global_workspace_1_var[460800]));
  void* sid_69_let = (&(global_workspace_1_var[0]));
  void* sid_67_let = (&(global_workspace_1_var[307200]));
  void* sid_74_let = (&(global_workspace_1_var[153600]));
  void* sid_91_let = (&(global_workspace_1_var[0]));
  void* sid_28_let = (&(global_workspace_1_var[614400]));
  void* sid_113_let = (&(global_workspace_1_var[0]));
  void* sid_109_let = (&(global_workspace_1_var[0]));
  void* sid_59_let = (&(global_workspace_1_var[0]));
  void* sid_29_let = (&(global_workspace_1_var[909312]));
  void* sid_26_let = (&(global_workspace_1_var[615168]));
  void* sid_4_let = (&(global_workspace_1_var[0]));
  void* sid_76_let = (&(global_workspace_1_var[153600]));
  void* sid_123_let = (&(global_workspace_1_var[38400]));
  void* sid_78_let = (&(global_workspace_1_var[0]));
  void* sid_108_let = (&(global_workspace_1_var[36864]));
  void* sid_106_let = (&(global_workspace_1_var[7142400]));
  void* sid_19_let = (&(global_workspace_1_var[614400]));
  void* sid_2_let = (&(global_workspace_1_var[4096000]));
  void* sid_126_let = (&(global_workspace_1_var[9760]));
  void* sid_85_let = (&(global_workspace_1_var[153600]));
  void* sid_20_let = (&(global_workspace_1_var[614400]));
  void* sid_23_let = (&(global_workspace_1_var[1204224]));
  void* sid_107_let = (&(global_workspace_1_var[384]));
  void* sid_56_let = (&(global_workspace_1_var[6144000]));
  void* sid_84_let = (&(global_workspace_1_var[0]));
  void* sid_103_let = (&(global_workspace_1_var[0]));
  void* sid_80_let = (&(global_workspace_1_var[38400]));
  void* sid_15_let = (&(global_workspace_1_var[614400]));
  void* sid_98_let = (&(global_workspace_1_var[66000]));
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_16_let = (&(global_workspace_1_var[614400]));
  void* sid_22_let = (&(global_workspace_1_var[1228800]));
  void* sid_93_let = (&(global_workspace_1_var[38400]));
  void* sid_17_let = (&(global_workspace_1_var[614400]));
  void* sid_24_let = (&(global_workspace_1_var[909312]));
  void* sid_27_let = (&(global_workspace_1_var[986112]));
  void* sid_12_let = (&(global_workspace_1_var[768000]));
  void* sid_44_let = (&(global_workspace_1_var[0]));
  void* sid_102_let = (&(global_workspace_1_var[0]));
  void* sid_89_let = (&(global_workspace_1_var[115200]));
  void* sid_99_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_105_let = (&(global_workspace_1_var[19200]));
  void* sid_96_let = (&(global_workspace_1_var[12800]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_97_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_100_let = (&(global_workspace_1_var[28800]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[614400]));
  void* sid_55_let = (&(global_workspace_1_var[614400]));
  void* sid_31_let = (&(global_workspace_1_var[615936]));
  void* sid_95_let = (&(global_workspace_1_var[38400]));
  void* sid_53_let = (&(global_workspace_1_var[0]));
  void* sid_61_let = (&(global_workspace_1_var[153600]));
  void* sid_127_let = (&(global_workspace_1_var[800000]));
  void* sid_73_let = (&(global_workspace_1_var[0]));
  void* sid_71_let = (&(global_workspace_1_var[6758400]));
  void* sid_25_let = (&(global_workspace_1_var[615168]));
  void* sid_32_let = (&(global_workspace_1_var[615936]));
  void* sid_101_let = (&(global_workspace_1_var[9600]));
  void* sid_54_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[614400]));
  void* sid_33_let = (&(global_workspace_1_var[1665024]));
  void* sid_18_let = (&(global_workspace_1_var[614400]));
  void* sid_30_let = (&(global_workspace_1_var[1511424]));
  void* sid_122_let = (&(global_workspace_1_var[345600]));
  void* sid_13_let = (&(global_workspace_1_var[614400]));
  void* sid_34_let = (&(global_workspace_1_var[614400]));
  void* sid_92_let = (&(global_workspace_1_var[0]));
  void* sid_35_let = (&(global_workspace_1_var[1511424]));
  void* sid_125_let = (&(global_workspace_1_var[86400]));
  void* sid_36_let = (&(global_workspace_1_var[3840000]));
  void* sid_86_let = (&(global_workspace_1_var[76800]));
  void* sid_94_let = (&(global_workspace_1_var[7104000]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_117_let = (&(global_workspace_1_var[614400]));
  void* sid_37_let = (&(global_workspace_1_var[921600]));
  void* sid_39_let = (&(global_workspace_1_var[614400]));
  void* sid_40_let = (&(global_workspace_1_var[614400]));
  void* sid_41_let = (&(global_workspace_1_var[1228800]));
  void* sid_63_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[3686400]));
  void* sid_45_let = (&(global_workspace_1_var[0]));
  void* sid_43_let = (&(global_workspace_1_var[1228800]));
  void* sid_66_let = (&(global_workspace_1_var[614400]));
  void* sid_48_let = (&(global_workspace_1_var[1228800]));
  void* sid_112_let = (&(global_workspace_1_var[3200]));
  void* sid_81_let = (&(global_workspace_1_var[76800]));
  void* sid_46_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[2027520]));
  void* sid_47_let = (&(global_workspace_1_var[2457600]));
  void* sid_62_let = (&(global_workspace_1_var[307200]));
  void* sid_64_let = (&(global_workspace_1_var[0]));
  void* sid_49_let = (&(global_workspace_1_var[1843200]));
  void* sid_50_let = (&(global_workspace_1_var[0]));
  void* sid_65_let = (&(global_workspace_1_var[0]));
  void* sid_51_let = (&(global_workspace_1_var[1843200]));
  void* sid_52_let = (&(global_workspace_1_var[5529600]));
  void* sid_68_let = (&(global_workspace_1_var[460800]));
  void* sid_57_let = (&(global_workspace_1_var[614400]));
  void* sid_58_let = (&(global_workspace_1_var[204800]));
  void* sid_60_let = (&(global_workspace_1_var[921600]));
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide(image_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_1(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_2(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_3(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_4(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_5(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_6(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_7(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_8(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_9(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_10(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_11(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_12(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_13(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_14(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_15(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_16(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_17(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_18(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_19(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_20(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_21(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_22(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_23(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_global_avg_pool2d(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_nn_relu(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_24(sid_24_let, sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_25(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_global_avg_pool2d_1(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_nn_relu_1(sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_1(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_1(sid_33_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_26(sid_30_let, sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_27(sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_28(sid_23_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_image_resize2d_concatenate(sid_36_let, sid_37_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_29(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_30(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_31(sid_40_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_32(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_33(sid_11_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_image_resize2d_concatenate_1(sid_42_let, sid_43_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_34(sid_44_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_35(sid_45_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_36(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_37(sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_38(sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_39(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_40(sid_50_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_41(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_global_avg_pool2d_2(sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid(sid_53_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_2(sid_54_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_42(sid_52_let, sid_55_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add(sid_56_let, sid_57_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_transpose_reshape(sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_softmax(sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_matmul(sid_59_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_43(sid_48_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_44(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_concatenate(sid_62_let, sid_42_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_45(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_46(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_47(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_48(sid_66_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_49(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_50(sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_51(sid_69_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_52(sid_70_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_global_avg_pool2d_3(sid_71_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_1(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_3(sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_53(sid_71_let, sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_1(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_transpose_reshape_1(sid_76_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_softmax_1(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_matmul_1(sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_54(sid_67_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_55(sid_80_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_concatenate_1(sid_81_let, sid_36_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_56(sid_82_let, sid_83_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_57(sid_83_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_58(sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_59(sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_60(sid_86_let, sid_87_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_61(sid_87_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_62(sid_88_let, sid_89_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_63(sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_global_avg_pool2d_4(sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_2(sid_91_let, sid_92_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_4(sid_92_let, sid_93_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_64(sid_90_let, sid_93_let, sid_94_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_2(sid_94_let, sid_95_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_transpose_reshape_2(sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_softmax_2(sid_96_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_matmul_2(sid_97_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_65(sid_36_let, sid_99_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_66(sid_86_let, sid_100_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_67(sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_add(sid_99_let, sid_101_let, sid_102_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_68(sid_102_let, sid_103_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_69(sid_103_let, sid_104_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_70(sid_104_let, sid_105_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_71(sid_105_let, sid_106_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_global_avg_pool2d_5(sid_106_let, sid_107_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_3(sid_107_let, sid_108_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_squeeze_expand_dims_multiply_layout_transform_5(sid_108_let, sid_109_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_72(sid_106_let, sid_109_let, sid_110_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_3(sid_110_let, sid_111_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_transpose_reshape_3(sid_111_let, sid_112_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_softmax_3(sid_112_let, sid_113_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_matmul_3(sid_113_let, sid_114_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_squeeze_reshape_squeeze_reshape_squeeze_reshape_squeeze_reshape_concatenat_3778f7e529c91271_(sid_60_let, sid_79_let, sid_98_let, sid_114_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_73(sid_52_let, sid_116_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_4(sid_116_let, sid_117_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt(sid_56_let, sid_117_let, sid_118_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_74(sid_71_let, sid_119_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_5(sid_119_let, sid_120_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt_1(sid_75_let, sid_120_let, sid_121_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_75(sid_90_let, sid_122_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_6(sid_122_let, sid_123_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt_2(sid_94_let, sid_123_let, sid_124_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_add_clip_multiply_divide_76(sid_106_let, sid_125_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_7(sid_125_let, sid_126_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_nn_conv2d_add_sigmoid_multiply_sqrt_3(sid_110_let, sid_126_let, sid_127_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_det_fused_reshape_reshape_reshape_reshape_concatenate(sid_118_let, sid_121_let, sid_124_let, sid_127_let, output2_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

