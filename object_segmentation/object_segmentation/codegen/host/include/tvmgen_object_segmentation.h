#ifndef TVMGEN_OBJECT_SEGMENTATION_H_
#define TVMGEN_OBJECT_SEGMENTATION_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor x size (in bytes) for TVM module "object_segmentation" 
 */
#define TVMGEN_OBJECT_SEGMENTATION_X_SIZE 85290752
/*!
 * \brief Output tensor output size (in bytes) for TVM module "object_segmentation" 
 */
#define TVMGEN_OBJECT_SEGMENTATION_OUTPUT_SIZE 79535664
/*!
 * \brief Input tensor pointers for TVM module "object_segmentation" 
 */
struct tvmgen_object_segmentation_inputs {
  void* x;
};

/*!
 * \brief Output tensor pointers for TVM module "object_segmentation" 
 */
struct tvmgen_object_segmentation_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "object_segmentation"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_object_segmentation_run(
  struct tvmgen_object_segmentation_inputs* inputs,
  struct tvmgen_object_segmentation_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "object_segmentation" 
 */
#define TVMGEN_OBJECT_SEGMENTATION_WORKSPACE_SIZE 2693096

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_OBJECT_SEGMENTATION_H_
