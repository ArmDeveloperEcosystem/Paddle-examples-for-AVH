#ifndef TVMGEN_TEXT_RECOGNITION_H_
#define TVMGEN_TEXT_RECOGNITION_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor x size (in bytes) for TVM module "text_recognition" 
 */
#define TVMGEN_TEXT_RECOGNITION_X_SIZE 68718784
/*!
 * \brief Output tensor output size (in bytes) for TVM module "text_recognition" 
 */
#define TVMGEN_TEXT_RECOGNITION_OUTPUT_SIZE 70052016
/*!
 * \brief Input tensor pointers for TVM module "text_recognition" 
 */
struct tvmgen_text_recognition_inputs {
  void* x;
};

/*!
 * \brief Output tensor pointers for TVM module "text_recognition" 
 */
struct tvmgen_text_recognition_outputs {
  void* output;
};

/*!
 * \brief entrypoint function for TVM module "text_recognition"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_text_recognition_run(
  struct tvmgen_text_recognition_inputs* inputs,
  struct tvmgen_text_recognition_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "text_recognition" 
 */
#define TVMGEN_TEXT_RECOGNITION_WORKSPACE_SIZE 1337512

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_TEXT_RECOGNITION_H_
