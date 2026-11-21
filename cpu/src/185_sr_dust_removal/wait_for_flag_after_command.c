/* @k10d wait_for_flag_after_command @ 0x10489c8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Sends a command via a helper and polls a status byte until it becomes non-zero.
 * summary:
 *   The function clears a status byte at offset 0x31 in the object structure. It determines
 *   a command value (100 or 0) based on the value at offset 0x6c (param_1[0x1b]) and calls
 *   run_release_cycles_1046f9e4 with the object pointer, the command value, and 1. It then
 *   enters a loop calling check_kernel_call_success_10459fea(1) and re-checking the status
 *   byte at offset 0x31 until it is non-zero. Finally, it returns the original object
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * wait_for_flag_after_command(uint32_t *param_1)

{
  char cVar1;
  uint32_t uVar2;
  
  *(uint8_t *)((int)param_1 + 0x31) = 0;
  uVar2 = 100;
  if (param_1[0x1b] != 0) {
    uVar2 = 0;
  }
  run_release_cycles_1046f9e4((int)(*param_1),(uint8_t *)(uVar2),(int)(1),(uint8_t *)__frv_reg_unset(7));
  cVar1 = *(char *)((int)param_1 + 0x31);
  while (cVar1 == '\0') {
    check_kernel_call_success_10459fea();
    cVar1 = *(char *)((int)param_1 + 0x31);
  }
  return param_1;
}
