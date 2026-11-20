/* @k10d get_or_init_sram_block_104ad952 @ 0x104ad952
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a fixed SDRAM block, initializing it once on first call.
 * summary:
 *   Checks the global flag iRam800491c8; if zero, sets it to 1 and calls two unnamed
 *   initializers (alloc_one_byte_if_null_104ada3c with the block address and
 *   prepend_to_singly_linked_list with a different SDRAM address). Always returns the
 *   constant address 0x800491c4, which lies in the SDRAM region. The pattern is a lazy one-
 *   time initialization of a data structure located at 0x800491c4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_104ad952(void)

{
  if (iRam800491c8 == 0) {
    iRam800491c8 = 1;
    alloc_one_byte_if_null_104ada3c(0x800491c4/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x80010674/*SDRAM*/);
  }
  return 0x800491c4/*SDRAM*/;
}
