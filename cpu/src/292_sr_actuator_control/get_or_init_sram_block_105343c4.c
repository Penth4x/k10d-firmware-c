/* @k10d get_or_init_sram_block_105343c4 @ 0x105343c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a fixed SDRAM block, initializing it once on first call.
 * summary:
 *   Checks the flag at 0x8005b154; if zero, sets it to 1 and calls two unnamed initializers
 *   (alloc_sysparam_store_if_null and prepend_to_singly_linked_list) with SDRAM addresses.
 *   Always returns the constant pointer 0x8005b150. The callees' roles are unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_block_105343c4(void)

{
  if (_DAT_8005b154/*SDRAM*/ == 0) {
    _DAT_8005b154/*SDRAM*/ = 1;
    alloc_sysparam_store_if_null(0x8005b150/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800148f4/*SDRAM*/);
  }
  return 0x8005b150/*SDRAM*/;
}
