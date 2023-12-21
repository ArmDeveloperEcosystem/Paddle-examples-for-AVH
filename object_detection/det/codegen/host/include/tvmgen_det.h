#ifndef TVMGEN_DET_H_
#define TVMGEN_DET_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor image size (in bytes) for TVM module "det" 
 */
#define TVMGEN_DET_IMAGE_SIZE 82323392
/*!
 * \brief Output tensor output1 size (in bytes) for TVM module "det" 
 */
#define TVMGEN_DET_OUTPUT1_SIZE 93930720
/*!
 * \brief Output tensor output0 size (in bytes) for TVM module "det" 
 */
#define TVMGEN_DET_OUTPUT0_SIZE 91639680
/*!
 * \brief Input tensor pointers for TVM module "det" 
 */
struct tvmgen_det_inputs {
  void* image;
};

/*!
 * \brief Output tensor pointers for TVM module "det" 
 */
struct tvmgen_det_outputs {
  void* output0;
  void* output1;
};

/*!
 * \brief entrypoint function for TVM module "det"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_det_run(
  struct tvmgen_det_inputs* inputs,
  struct tvmgen_det_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "det" 
 */
#define TVMGEN_DET_WORKSPACE_SIZE 7161600

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_DET_H_
