/* @k10d reset_sram_flag_at_0x8005a15c @ 0x1051ba30
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes zero to the SDRAM location 0x8005a15c via a helper and returns 1.
 * summary:
 *   The function makes a single call to wait_flg_obj with the SDRAM address 0x8005a15c and
 *   a value of 0, then returns 1. The specific role of the memory location or the helper
 *   function is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_sram_flag_at_0x8005a15c(void)

{
  wait_flg_obj((void *)0x8005a15c/*SDRAM*/,0);
  return 1;
}
