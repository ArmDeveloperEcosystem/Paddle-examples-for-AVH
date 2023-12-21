# CMSIS Build CMakeLists generated on 2023-12-21T15:49:59

cmake_minimum_required(VERSION 3.22)

# Target options

set(TARGET object_detection)
set(CPU Cortex-M55)
set(PRJ_DIR "/home/ubuntu/Paddle-examples-for-AVH/object_detection")
set(OUT_DIR "/home/ubuntu/Paddle-examples-for-AVH/object_detection/out/object_detection/PicodetM55")
set(INT_DIR "/home/ubuntu/Paddle-examples-for-AVH/object_detection/tmp/object_detection/PicodetM55")
set(FPU DP_FPU)
set(DSP DSP)
set(TZ TZ)
set(SECURE TZ-disabled)
set(MVE FP_MVE)
set(OPTIMIZE none)
set(DEBUG on)
set(AS_FLAGS_GLOBAL "-masm=auto")
set(CC_FLAGS_GLOBAL "-std=c99 -mthumb -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -w")
set(CXX_FLAGS_GLOBAL "-xc++ -std=c++11 -mthumb -fno-rtti -funsigned-char -fshort-enums -fshort-wchar -ffunction-sections -w")
set(LD_FLAGS_GLOBAL "--map --load_addr_map_info --xref --callgraph --symbols --info sizes --info totals --info unused --info veneers --strict --summary_stderr --info summarysizes")
set(LD_SCRIPT "/home/ubuntu/Paddle-examples-for-AVH/object_detection/sct/VHT_Corstone_SSE-300.sct")

set(DEFINES
  _RTE_
  USE_PICODET
)

set(INC_PATHS
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/det/codegen/host/include"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/det/runtime/include"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/include"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/RTE/Device/SSE-300-MPS3"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/RTE/_PicodetM55"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Include"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/Core/Include"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Include"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/PrivateInclude"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/Driver/Include"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Board/Device_Definition"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Board/Platform"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Include"
)

set(CC_SRC_FILES
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/RTE/Device/SSE-300-MPS3/startup_SSE300MPS3.c"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/RTE/Device/SSE-300-MPS3/system_SSE300MPS3.c"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/det/codegen/host/src/det_lib0.c"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/det/codegen/host/src/det_lib1.c"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/det/runtime/src/runtime/crt/common/crt_backend_api.c"
  "/home/ubuntu/Paddle-examples-for-AVH/object_detection/main.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ActivationFunctions/arm_nn_activation_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ActivationFunctions/arm_relu6_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ActivationFunctions/arm_relu_q15.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ActivationFunctions/arm_relu_q7.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/BasicMathFunctions/arm_elementwise_add_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/BasicMathFunctions/arm_elementwise_add_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/BasicMathFunctions/arm_elementwise_mul_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/BasicMathFunctions/arm_elementwise_mul_s16_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/BasicMathFunctions/arm_elementwise_mul_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConcatenationFunctions/arm_concatenation_s8_w.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConcatenationFunctions/arm_concatenation_s8_x.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConcatenationFunctions/arm_concatenation_s8_y.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConcatenationFunctions/arm_concatenation_s8_z.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_1_x_n_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_1x1_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_1x1_s8_fast.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_fast_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_get_buffer_sizes_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_get_buffer_sizes_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_wrapper_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_convolve_wrapper_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_3x3_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_fast_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_get_buffer_sizes_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_get_buffer_sizes_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_s8_opt.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_wrapper_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_depthwise_conv_wrapper_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_nn_depthwise_conv_s8_core.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_nn_mat_mult_kernel_s8_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ConvolutionFunctions/arm_nn_mat_mult_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/FullyConnectedFunctions/arm_fully_connected_get_buffer_sizes_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/FullyConnectedFunctions/arm_fully_connected_get_buffer_sizes_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/FullyConnectedFunctions/arm_fully_connected_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/FullyConnectedFunctions/arm_fully_connected_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/LSTMFunctions/arm_lstm_unidirectional_s8_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_padded_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_lstm_calculate_gate_s8_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_lstm_step_s8_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_lstm_update_cell_state_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_lstm_update_output_s8_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_mat_mul_core_1x_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_mat_mul_core_4x_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_mat_mul_kernel_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_mat_mult_nt_t_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_vec_mat_mul_result_acc_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_svdf_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_nntables.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/NNSupportFunctions/arm_q7_to_q15_with_offset.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/PoolingFunctions/arm_avgpool_get_buffer_sizes_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/PoolingFunctions/arm_avgpool_get_buffer_sizes_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/PoolingFunctions/arm_avgpool_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/PoolingFunctions/arm_avgpool_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/PoolingFunctions/arm_max_pool_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/PoolingFunctions/arm_max_pool_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/ReshapeFunctions/arm_reshape_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/SVDFunctions/arm_svdf_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/SVDFunctions/arm_svdf_state_s16_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/SoftmaxFunctions/arm_nn_softmax_common_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/SoftmaxFunctions/arm_softmax_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/SoftmaxFunctions/arm_softmax_s8.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/SoftmaxFunctions/arm_softmax_s8_s16.c"
  "/home/ubuntu/packs/ARM/CMSIS-NN/4.1.0/Source/SoftmaxFunctions/arm_softmax_u8.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/BasicMathFunctions/BasicMathFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/BasicMathFunctions/BasicMathFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/BayesFunctions/BayesFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/BayesFunctions/BayesFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/CommonTables/CommonTables.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/CommonTables/CommonTablesF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/ComplexMathFunctions/ComplexMathFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/ComplexMathFunctions/ComplexMathFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/ControllerFunctions/ControllerFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/DistanceFunctions/DistanceFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/DistanceFunctions/DistanceFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/FastMathFunctions/FastMathFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/FastMathFunctions/FastMathFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/FilteringFunctions/FilteringFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/FilteringFunctions/FilteringFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/InterpolationFunctions/InterpolationFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/InterpolationFunctions/InterpolationFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/MatrixFunctions/MatrixFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/MatrixFunctions/MatrixFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/QuaternionMathFunctions/QuaternionMathFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/SVMFunctions/SVMFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/SVMFunctions/SVMFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/StatisticsFunctions/StatisticsFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/StatisticsFunctions/StatisticsFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/SupportFunctions/SupportFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/SupportFunctions/SupportFunctionsF16.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/TransformFunctions/TransformFunctions.c"
  "/home/ubuntu/packs/ARM/CMSIS/5.9.0/CMSIS/DSP/Source/TransformFunctions/TransformFunctionsF16.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Board/Device_Definition/device_definition.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/CMSIS_Driver/Driver_USART.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Source/arm_mps3_io_drv.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Source/stdout_USART.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Source/syscounter_armv8-m_cntrl_drv.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Source/syscounter_armv8-m_read_drv.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Source/systimer_armv8-m_drv.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Source/systimer_armv8-m_timeout.c"
  "/home/ubuntu/packs/ARM/V2M_MPS3_SSE_300_BSP/1.4.0/Device/Source/uart_cmsdk_drv.c"
  "/home/ubuntu/packs/Keil/ARM_Compiler/1.7.2/Source/retarget_io.c"
)

# Toolchain config map

set(TOOLCHAIN_VERSION_MIN "6.18.0")
include ("/opt/ctools/etc/AC6.6.18.0.cmake")
include ("/opt/ctools/etc/CMSIS-Build-Utils.cmake")

# Setup project

project(${TARGET} LANGUAGES C)

cbuild_get_running_toolchain(TOOLCHAIN_ROOT TOOLCHAIN_VERSION C)

# Global Flags

cbuild_get_system_includes(CC_SYS_INC_PATHS_LIST CC_SYS_INC_PATHS)
set(CMAKE_C_FLAGS "${CC_CPU} ${CC_DEFINES} ${CC_SECURE} ${CC_OPTIONS_FLAGS} ${CC_FLAGS} ${CC_FLAGS_GLOBAL} ${CC_SYS_INC_PATHS}")
set(CMAKE_C_LINK_FLAGS "${LD_CPU} ${_LS}\"${LD_SCRIPT}\" ${LD_SECURE} ${LD_FLAGS_GLOBAL} ${LD_OPTIONS_FLAGS} ${LD_FLAGS}")

# Compilation Database

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_custom_target(database COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INT_DIR}/compile_commands.json" "${OUT_DIR}")

# Setup Target

add_executable(${TARGET} ${CC_SRC_FILES})
set_target_properties(${TARGET} PROPERTIES PREFIX "" SUFFIX ".axf" OUTPUT_NAME "object_detection")
set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUT_DIR} LINK_DEPENDS ${LD_SCRIPT})
target_include_directories(${TARGET} PUBLIC ${INC_PATHS})
