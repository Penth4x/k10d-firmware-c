/* @k10d get_or_init_sram_block_1052b652 @ 0x1052b652
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a SDRAM block, initializing it on first call via a flag.
 * summary:
 *   Checks the flag at 0x8005a81c; if zero, sets it to 1 and calls two initializers
 *   (alloc_one_byte_if_null_1052b6d0 with the block address and
 *   prepend_to_singly_linked_list with a different SDRAM address). Always returns the
 *   address 0x8005a818. This is a lazy-initialization accessor for a SDRAM region.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_1052b652(void)

{
  if (iRam8005a81c == 0) {
    iRam8005a81c = 1;
    alloc_one_byte_if_null_1052b6d0(0x8005a818/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001362c/*SDRAM*/);
  }
  return 0x8005a818/*SDRAM*/;
}
