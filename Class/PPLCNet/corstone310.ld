/*
 * Copyright (c) 2009-2022 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Corstone-310 is the next generation Corstone-300 where the CPU
 * has been upgraded to Cortex-M85.
 *
 * This is a simplified picture of the Corstone-310 memory system.
 * Please refer to the Corstone SSE-310 Technical Reference Manual for
 * further information.
 *
 * https://developer.arm.com/ip-products/subsystem/corstone/corstone-300
 *
 * +---------------+   +---------------+  +------+
 * | Ethos-U55     |   | Cortex-M85    +--+ ITCM |
 * |               |   |               |  +------+
 * |               |   |               |
 * |               |   |               |  +------+
 * |  M1      M0   |   |               +--+ DTCM |
 * +---+-------+---+   +-------+-------+  +------+
 *     |       |               |
 *     |   +---+---------------+-----+
 *     |   | AMBA AXI NIC-400-Lite   |
 *     |   +---+-----------------+---+
 *     |       |                 |
 * +---+-------+------------+ +--+-------+
 * | AMBA AXI NIC-400       | | SSE-300  |
 * +---+--------+--------+--+ | SRAM     |
 *     |        |        |    +----------+
 * +---+---+ +--+---+ +--+--+
 * | Flash | | BRAM | | DDR |
 * +-------+ +------+ +-----+
 *
 * +-----------------------+-------------+-------------+----+--------------------------------------+
 * |  Memory region name   | Base addr   |    Size     |IDAU|  MCC load address + remarks          |
 * +-----------------------+-------------+-------------+----+--------------------------------------+
 * | ITCM                  | 0x0000_0000 | 0x0000_8000 | NS | 32 kiB                               |
 * | ITCM                  | 0x1000_0000 | 0x0000_8000 | S  | Secure alias for NS ITCM             |
 * | FPGA Data SRAM; BRAM  | 0x0100_0000 | 0x0020_0000 | NS | 2 MiB                                |
 * | FPGA data SRAM; BRAM  | 0x1100_0000 | 0x0020_0000 | S  | Secure alias for NS BRAM             |
 * | DTCM                  | 0x2000_0000 | 0x0000_8000 | NS | 32 kiB                               |
 * | DTCM                  | 0x3000_0000 | 0x0000_8000 | S  | Secure alias for NS DTCM             |
 * | SSE-300 internal SRAM | 0x2100_0000 | 0x0040_0000 | NS | 2 banks of 2 MiB; 3 cycles latency   |
 * | SSE-300 internal SRAM | 0x3100_0000 | 0x0040_0000 | S  | Secure alias for NS internal SRAM    |
 * | DDR                   | 0x6000_0000 | 0x1000_0000 | NS | 256 MB bank                          |
 * | DDR                   | 0x7000_0000 | 0x1000_0000 | S  | Secure alias for NS DDR              |
 * +-----------------------+-------------+-------------+----+--------------------------------------+
 *
 *  Note: Ethos-U55 can access BRAM, internal SRAM and the DDR sections => activation buffers and
 *        the model should only be placed in those regions.
 *
 *  Note: Alias regions means that secure and non-secure addresses are mapped to the same physical
 *        memory banks.
 */

/* default value - '1', for DRAM */
/*#ifndef ETHOSU_MODEL*/
/*#define ETHOSU_MODEL  1*/
/*#endif*/

/* default value - '1', for DRAM */
/*#ifndef ETHOSU_ARENA*/
/*#define ETHOSU_ARENA  1*/
/*#endif*/

/*#ifndef STACK_SIZE*/
/*#define STACK_SIZE 0x8000*/
/*#endif*/

/*#ifndef HEAP_SIZE*/
/*#define HEAP_SIZE 0x10000*/
/*#endif*/

/*__STACK_SIZE = STACK_SIZE;*/
/*__HEAP_SIZE  = HEAP_SIZE;*/
__STACK_SIZE = 0x8000;
__HEAP_SIZE  = 0x10000;

MEMORY
{
  ITCM  (rx)  : ORIGIN = 0x10000000, LENGTH = 0x00008000
  BRAM  (rw)  : ORIGIN = 0x11000000, LENGTH = 0x00200000
  DTCM  (rw)  : ORIGIN = 0x30000000, LENGTH = 0x00008000
  SRAM  (rw)  : ORIGIN = 0x31000000, LENGTH = 0x00400000
  QSPI  (rw)  : ORIGIN = 0x38000000, LENGTH = 0x00800000
  DDR   (rwx) : ORIGIN = 0x70000000, LENGTH = 0x10000000
}

PHDRS
{
    rom_exec PT_LOAD;
    rom_dram PT_LOAD;
    null     PT_NULL;
}

/* Linker script to place sections and symbol values. Should be used together
 * with other linker script that defines memory regions ITCM and RAM.
 * It references following symbols, which must be defined in code:
 *   Reset_Handler : Entry of reset handler
 *
 * It defines following symbols, which code can use without definition:
 *   __exidx_start
 *   __exidx_end
 *   __copy_table_start__
 *   __copy_table_end__
 *   __zero_table_start__
 *   __zero_table_end__
 *   __etext
 *   __data_start__
 *   __preinit_array_start
 *   __preinit_array_end
 *   __init_array_start
 *   __init_array_end
 *   __fini_array_start
 *   __fini_array_end
 *   __data_end__
 *   __bss_start__
 *   __bss_end__
 *   __end__
 *   end
 *   __HeapLimit
 *   __StackLimit
 *   __StackTop
 *   __stack
 */

ENTRY(Reset_Handler)

SECTIONS
{
  .text :
  {
    KEEP(*(.vectors))
    *crt* (.text*)
    *startup_ARMCM85.c.obj (.text*)
    *system_ARMCM85.c.obj (.text*)
    *target.cpp.obj (.text*)

    KEEP(*(.init))
    KEEP(*(.fini))

    /* .ctors */
    *crtbegin.o(.ctors)
    *crtbegin?.o(.ctors)
    *(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors)
    *(SORT(.ctors.*))
    *(.ctors)

    /* .dtors */
    *crtbegin.o(.dtors)
    *crtbegin?.o(.dtors)
    *(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors)
    *(SORT(.dtors.*))
    *(.dtors)

    *(.text*)

    KEEP(*(.eh_frame*))
  } > BRAM :rom_exec

  .data :
  {
    . = ALIGN(4);
    __data_start__ = .;

    *(vtable)
    *(.data)
    *(.data.*)
    *(.rodata*)

    . = ALIGN(4);
    __data_end__ = .;
  } > BRAM :rom_exec

  /*
   * SG veneers:
   * All SG veneers are placed in the special output section .gnu.sgstubs. Its start address
   * must be set, either with the command line option '--section-start' or in a linker script,
   * to indicate where to place these veneers in memory.
   */
/*
  .gnu.sgstubs :
  {
    . = ALIGN(32);
  } > BRAM :rom_exec
*/
  .ARM.extab :
  {
    *(.ARM.extab* .gnu.linkonce.armextab.*)
  } > BRAM :rom_exec

  .ARM.exidx :
  {
  __exidx_start = .;
    *(.ARM.exidx* .gnu.linkonce.armexidx.*)
  __exidx_end = .;
  } > BRAM :rom_exec

  .copy.table :
  {
    . = ALIGN(4);
    __copy_table_start__ = .;

    LONG (LOADADDR(.sram))
    LONG (ADDR(.sram))
    LONG (SIZEOF(.sram) / 4)

    __copy_table_end__ = .;
  } > BRAM :rom_exec

  .zero.table :
  {
    . = ALIGN(4);
    __zero_table_start__ = .;

    LONG (ADDR(.bss))
    LONG (SIZEOF(.bss) / 4)

    LONG (ADDR(.sram.bss))
    LONG (SIZEOF(.sram.bss) / 4)

    __zero_table_end__ = .;
  } > BRAM :rom_exec

  .sram : AT(__etext)
  {
/*#if (ETHOSU_MODEL == 0)*/
/*    . = ALIGN(16);*/
/*    *(network_model_sec)*/
/*#endif*/

    . = ALIGN(16);
    *(.sram.data)

    . = ALIGN(4);
    /* preinit data */
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP(*(.preinit_array))
    PROVIDE_HIDDEN (__preinit_array_end = .);

    . = ALIGN(4);
    /* init data */
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP(*(SORT(.init_array.*)))
    KEEP(*(.init_array))
    PROVIDE_HIDDEN (__init_array_end = .);

    . = ALIGN(4);
    /* finit data */
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP(*(SORT(.fini_array.*)))
    KEEP(*(.fini_array))
    PROVIDE_HIDDEN (__fini_array_end = .);

    KEEP(*(.jcr*))
  } > SRAM :rom_dram

  .sram.bss :
  {
/*#if (ETHOSU_ARENA == 0)*/
/*    . = ALIGN(16);*/
/*    *(.bss.tensor_arena)*/
/*#endif*/

    . = ALIGN(16);
    *(.bss.ethosu_scratch);
  } > SRAM :null

  .ddr :
  {
/*#if (ETHOSU_ARENA == 1)*/
    . = ALIGN(16);
    *(.bss.tensor_arena)
/*#endif*/

/*#if (ETHOSU_MODEL == 1)*/
    . = ALIGN(16);
    *(network_model_sec)
/*#endif*/

    . = ALIGN(4);
    *(input_data_sec)
    *(expected_output_data_sec)
    *(output_data_sec)

    *(ethosu_core_in_queue ethosu_core_out_queue)

    /* Place data for scatter loading here */
    __etext = .;
  } > DDR :rom_dram

  .bss :
  {
    . = ALIGN(4);
    __bss_start__ = .;

    *(.bss)
    *(.bss.*)
    *(COMMON)

    . = ALIGN(4);
    __bss_end__ = .;
  } > BRAM :null

  .heap (COPY) :
  {
    . = ALIGN(8);
    __end__ = .;
    PROVIDE(end = .);
    . = . + __HEAP_SIZE;
    . = ALIGN(8);
    __HeapLimit = .;
  } > BRAM :null

  .stack (ORIGIN(DTCM) + LENGTH(DTCM) - __STACK_SIZE) (COPY) :
  {
    . = ALIGN(8);
    __StackLimit = .;
    . = . + __STACK_SIZE;
    . = ALIGN(8);
    __StackTop = .;
  } > DTCM :null
  PROVIDE(__stack = __StackTop);

  /* Check if data + heap + stack exceeds DTCM limit */
  ASSERT(LENGTH(DTCM) >= __STACK_SIZE, "region DTCM overflowed with stack")
}
