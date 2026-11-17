/* @k10d retry_single_operation_with_status_check @ 0x100f12a8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Attempts a single operation with one retry, validating a status word before finalizing.
 * summary:
 *   Checks a precondition via test_bit_16_of_status_word. If true, enters a loop (max 2
 *   iterations) that calls check_two_status_flags(0x101a). On success, it calls
 *   store_value_at_dat_offset_8 and dispatch_event_with_retry, then reads a status word
 *   from call_helper_with_zero_arg_100f19a0. If bits 13-15 or 24-27 are set, it returns an
 *   error. Otherwise, it calls store_value_at_dat_offset_100f1f2e and returns success.
 *   Returns error if the initial check fails or the operation fails twice.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t retry_single_operation_with_status_check(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    sVar3 = 1;
    do {
      iVar1 = check_two_status_flags(0x101a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(_DAT_800480c0/*SDRAM*/);
        dispatch_event_with_retry(0x101a,0);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if ((uVar2 & 0x2f3f0000) != 0) {
          return 0xffffffff;
        }
        store_value_at_dat_offset_100f1f2e(_DAT_800480c0/*SDRAM*/);
        return 0;
      }
      bVar4 = sVar3 != 0;
      sVar3 = sVar3 + -1;
    } while (bVar4);
  }
  return 0xffffffff;
}
