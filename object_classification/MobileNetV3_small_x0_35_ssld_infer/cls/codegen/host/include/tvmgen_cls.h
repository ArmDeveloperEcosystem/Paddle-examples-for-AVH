#ifndef TVMGEN_CLS_H_
#define TVMGEN_CLS_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor x size (in bytes) for TVM module "cls" 
 */
#define TVMGEN_CLS_X_SIZE 70897632
/*!
 * \brief Output tensor output size (in bytes) for TVM module "cls" 
 */
#define TVMGEN_CLS_OUTPUT_SIZE 56824176
/*!
 * \brief Input tensor pointers for TVM module "cls" 
 */
struct tvmgen_cls_inputs {
  void* x;
};

/*!
 * \brief Output tensor pointers for TVM module "cls" 
 */
struct tvmgen_cls_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "cls"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_cls_run(
  struct tvmgen_cls_inputs* inputs,
  struct tvmgen_cls_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "cls" 
 */
#define TVMGEN_CLS_WORKSPACE_SIZE 83952

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_CLS_H_
