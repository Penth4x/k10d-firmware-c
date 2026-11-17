/* @k10d poll_status_until_bit5_set @ 0x100f136c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status register via helper functions, returning success if bit 5 is set and
 *   specific high bits are clear.
 * summary:
 *   Checks a condition via test_bit_16_of_status_word. If true, it enters a loop (executed
 *   once) that calls check_two_status_flags with argument 0x371a. If that returns non-
 *   negative, it calls store_value_at_dat_offset_8 and dispatch_event_with_retry, then
 *   reads a status word via call_helper_with_zero_arg_100f19a0. It returns 0 if bit 5
 *   (0x20) is set and bits 28-31 and 12-15 (masked by 0xf3f0000) are clear; otherwise it
 *   returns -1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t poll_status_until_bit5_set(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    sVar3 = 1;
    do {
      iVar1 = check_two_status_flags(0x371a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(_DAT_80048098/*SDRAM*/);
        dispatch_event_with_retry(0x371a,0);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if (((uVar2 & 0xf3f0000) == 0) && ((uVar2 & 0x20) != 0)) {
          return 0;
        }
      }
      bVar4 = sVar3 != 0;
      sVar3 = sVar3 + -1;
    } while (bVar4);
  }
  return 0xffffffff;
}
