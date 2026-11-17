/* @k10d poll_status_word_twice @ 0x100f1556
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status word up to two times, processing the result if a valid response is
 *   received.
 * summary:
 *   Checks a condition via test_bit_16_of_status_word. If active, it loops up to twice
 *   calling check_two_status_flags with argument 0x333a. If a response is received, it
 *   calls helper functions store_value_at_dat_offset_100f1f2e, store_value_at_dat_offset_8,
 *   and dispatch_event_with_retry, then checks a status word from
 *   call_helper_with_zero_arg_100f19a0 for specific bits. It breaks on error or if
 *   DAT_800480cc equals 2. Finally, it calls store_value_at_dat_offset_100f1f2e with a
 *   value from DAT_800480c0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t poll_status_word_twice(void)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    sVar4 = 1;
    do {
      iVar1 = check_two_status_flags(0x333a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_100f1f2e(8);
        store_value_at_dat_offset_8(0);
        dispatch_event_with_retry(0x333a,0x10);
        uVar3 = call_helper_with_zero_arg_100f19a0();
        if (((uVar3 & 0xf3f0000) != 0) || (iVar1 = store_two_values_from_helper(), iVar1 == -1)) break;
        set_flag_from_state_bit();
        if (DAT_800480cc/*SDRAM*/ == '\x02') {
          uVar2 = 0;
          break;
        }
      }
      bVar5 = sVar4 != 0;
      sVar4 = sVar4 + -1;
    } while (bVar5);
    store_value_at_dat_offset_100f1f2e(_DAT_800480c0/*SDRAM*/);
  }
  return uVar2;
}
