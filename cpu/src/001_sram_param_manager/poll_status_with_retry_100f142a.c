/* @k10d poll_status_with_retry_100f142a @ 0x100f142a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status source with a two-iteration retry loop, clearing flags and checking a
 *   condition before returning success or failure.
 * summary:
 *   The function first calls test_bit_16_of_status_word to check a precondition. If non-
 *   zero, it enters a loop (max 2 iterations) calling check_two_status_flags(0xd3a). On
 *   success, it calls store_value_at_dat_offset_100f1f2e(0x40) and
 *   store_value_at_dat_offset_8(0), then dispatch_event_with_retry(0xd3a, 0x10). It reads a
 *   value via call_helper_with_zero_arg_100f19a0, checks bits 12-15 and 20-23 are clear,
 *   and calls call_subroutine_twelve_times. If all checks pass, it returns 0 (success);
 *   otherwise it returns 0xffffffff (failure). Finally, it calls
 *   store_value_at_dat_offset_100f1f2e with a global pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t poll_status_with_retry_100f142a(void)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  char cVar4;
  bool bVar5;
  
  iVar1 = test_bit_16_of_status_word();
  uVar3 = 0xffffffff;
  if (iVar1 != 0) {
    cVar4 = '\x01';
    do {
      iVar1 = check_two_status_flags(0xd3a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_100f1f2e(0x40);
        store_value_at_dat_offset_8(0);
        dispatch_event_with_retry(0xd3a,0x10);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if (((uVar2 & 0xf3f0000) == 0) && (iVar1 = call_subroutine_twelve_times(), iVar1 != -1)) {
          uVar3 = 0;
        }
        break;
      }
      bVar5 = cVar4 != '\0';
      cVar4 = cVar4 + -1;
    } while (bVar5);
    store_value_at_dat_offset_100f1f2e(_DAT_800480c0/*SDRAM*/);
  }
  return uVar3;
}
