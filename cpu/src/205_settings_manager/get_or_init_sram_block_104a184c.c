/* @k10d get_or_init_sram_block_104a184c @ 0x104a184c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a fixed SDRAM region, initializing it once on first call.
 * summary:
 *   Checks a global flag (iRam8004901c) to see if initialization has occurred. If not, sets
 *   the flag to 1, calls two unknown initialization functions with specific SDRAM addresses
 *   (0x80049018 and 0x8001059c), and then returns the address 0x80049018. This is a
 *   standard lazy-initialization pattern for a memory buffer or state structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_104a184c(void)

{
  if (iRam8004901c == 0) {
    iRam8004901c = 1;
    alloc_one_byte_if_null_104a18c8(0x80049018/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x8001059c/*SDRAM*/);
  }
  return 0x80049018/*SDRAM*/;
}
