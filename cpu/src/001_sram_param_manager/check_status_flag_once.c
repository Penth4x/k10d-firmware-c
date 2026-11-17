/* @k10d check_status_flag_once @ 0x100f11ea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status value from call_helper_with_zero_arg_100f19a0 for specific bits after a
 *   conditional initialization sequence.
 * summary:
 *   Calls test_bit_16_of_status_word to check a precondition. If non-zero, it executes a
 *   single iteration of a loop (sVar3=1) where it calls check_two_status_flags(0x71b), and
 *   if that returns non-negative, it calls store_value_at_dat_offset_8 and
 *   dispatch_event_with_retry before reading a value from
 *   call_helper_with_zero_arg_100f19a0. It returns 0 if the read value has none of the bits
 *   0xf3f0000 set, otherwise it returns -1. The specific subsystem is not identifiable from
 *   the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_status_flag_once(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    sVar3 = 1;
    do {
      iVar1 = check_two_status_flags(0x71b);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(_DAT_80048098/*SDRAM*/);
        dispatch_event_with_retry(0x71b,0);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if ((uVar2 & 0xf3f0000) == 0) {
          return 0;
        }
      }
      bVar4 = sVar3 != 0;
      sVar3 = sVar3 + -1;
    } while (bVar4);
  }
  return 0xffffffff;
}
