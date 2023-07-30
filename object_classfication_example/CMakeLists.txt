cmake_minimum_required(VERSION 3.10)
project(object_classfication_example)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(ETHOSU_PATH $ENV{HOME}/opt/arm/ethosu)

set(THIRD_PARTIES "")
# libcmsis_startup.a
include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/cmsis.cmake)
list(APPEND THIRD_PARTIES ${CMSIS_LIBS})

# libethosu_uart_cmsdk_apb.a libcorstone.a
include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/core_platform.cmake)
list(APPEND THIRD_PARTIES ${CORE_PLATFORM_LIBS})

# tvm
include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/tvm.cmake)
list(APPEND THIRD_PARTIES ${TVM_LIBS})

# build demo
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/src/main.c.in ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c)
file(GLOB MAIN_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/main.c")
add_executable(demo ${MAIN_SOURCES} ${CORSTONE_SRCS})
list(APPEND THIRD_PARTIES m)
target_link_libraries(demo ${THIRD_PARTIES})
target_link_options(demo PRIVATE "-Wl,--no-whole-archive;-lm;-specs=nosys.specs;-static;-T;${CORSTONE_LD}")