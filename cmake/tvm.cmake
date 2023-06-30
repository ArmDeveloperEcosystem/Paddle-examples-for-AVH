set(TVM_PATH ${CMAKE_BINARY_DIR})
set(STANDALONE_CRT_PATH ${TVM_PATH}/runtime)

INCLUDE_DIRECTORIES(${TVM_PATH}/crt_config)
INCLUDE_DIRECTORIES(${TVM_PATH}/codegen/host/include)
INCLUDE_DIRECTORIES(${STANDALONE_CRT_PATH}/include)
INCLUDE_DIRECTORIES(${STANDALONE_CRT_PATH}/src/runtime/crt/include)

add_library(stack_allocator ${STANDALONE_CRT_PATH}/src/runtime/crt/memory/stack_allocator.c)
add_library(crt_backend_api ${STANDALONE_CRT_PATH}/src/runtime/crt/common/crt_backend_api.c)

file(GLOB CODEGEN_SRCS "${TVM_PATH}/codegen/host/src/*.c")
add_library(codegen ${CODEGEN_SRCS})
target_link_libraries(codegen cmsis_nn)

set(TVM_LIBS "")
list(APPEND TVM_LIBS stack_allocator crt_backend_api codegen)