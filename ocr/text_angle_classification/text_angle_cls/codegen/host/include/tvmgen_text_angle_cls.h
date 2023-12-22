#ifndef TVMGEN_TEXT_ANGLE_CLS_H_
#define TVMGEN_TEXT_ANGLE_CLS_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor x size (in bytes) for TVM module "text_angle_cls" 
 */
#define TVMGEN_TEXT_ANGLE_CLS_X_SIZE 55026592
/*!
 * \brief Output tensor output size (in bytes) for TVM module "text_angle_cls" 
 */
#define TVMGEN_TEXT_ANGLE_CLS_OUTPUT_SIZE 57186160
/*!
 * \brief Input tensor pointers for TVM module "text_angle_cls" 
 */
struct tvmgen_text_angle_cls_inputs {
  void* x;
};

/*!
 * \brief Output tensor pointers for TVM module "text_angle_cls" 
 */
struct tvmgen_text_angle_cls_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "text_angle_cls"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_text_angle_cls_run(
  struct tvmgen_text_angle_cls_inputs* inputs,
  struct tvmgen_text_angle_cls_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "text_angle_cls" 
 */
#define TVMGEN_TEXT_ANGLE_CLS_WORKSPACE_SIZE 381952

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_TEXT_ANGLE_CLS_H_
