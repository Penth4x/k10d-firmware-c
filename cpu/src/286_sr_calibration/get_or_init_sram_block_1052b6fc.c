/* @k10d get_or_init_sram_block_1052b6fc @ 0x1052b6fc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a fixed SDRAM block, initializing it once via two unknown callees
 *   if a flag is unset.
 * summary:
 *   Checks the global flag at 0x8005a82c; if zero, sets it to 1 and calls
 *   allocate_and_init_object_1052ba8e with the block base 0x8005a820 and
 *   prepend_to_singly_linked_list with 0x80013640. Always returns the pointer 0x8005a820.
 *   The callees are unnamed, so the specific subsystem role of the block is not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_block_1052b6fc(void)

{
  if (_DAT_8005a82c/*SDRAM*/ == 0) {
    _DAT_8005a82c/*SDRAM*/ = 1;
    allocate_and_init_object_1052ba8e((void *)0x8005a820/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80013640/*SDRAM*/);
  }
  return 0x8005a820/*SDRAM*/;
}
