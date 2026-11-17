/* @k10d adjust_buffer_pointer_and_flags @ 0x000c5f52
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a pointer and associated state variable based on a conditional offset
 *   calculation.
 * summary:
 *   The function copies a value from DAT_0003c47d to DAT_0003c564 and calls FUN_000c66b0.
 *   If DAT_0003c3c1 is 1, it checks flags in DAT_0003c410 and DAT_0003c581. If conditions
 *   are met, it calls compute_and_flag_delta, adds the result to DAT_0003c564, passes it to
 *   clamp_value_to_range_000d9ac0, and updates DAT_0003c565. It also clears bit 2 of
 *   DAT_0003c58a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_buffer_pointer_and_flags(void)

{
  uint32_t uVar1;
  int iVar2;
  
  DAT_0003c564 = DAT_0003c47d;
  uVar1 = FUN_000c66b0((uint)DAT_0003c47d);
  DAT_0003c565 = (uint8_t)uVar1;
  check_counter_delta_and_set_flag(1);
  if (DAT_0003c3c1 == '\x01') {
    if (((DAT_0003c410 & 0x40) == 0) || ((DAT_0003c581 & 0x10) != 0)) {
      iVar2 = compute_and_flag_delta(1);
      if (iVar2 != 0) {
        DAT_0003c58a = DAT_0003c58a & 0xf3;
        DAT_0003c564 = DAT_0003c564 + (char)iVar2;
        DAT_0003c564 = clamp_value_to_range_000d9ac0(DAT_0003c564,0x1c,0xa4);
        uVar1 = FUN_000c66b0((uint)DAT_0003c564);
        DAT_0003c565 = (uint8_t)uVar1;
        check_counter_delta_and_set_flag(1);
      }
    }
    else if (((DAT_0003c58a & 8) != 0) && (iVar2 = compute_and_flag_delta(1), iVar2 != 0)) {
      DAT_0003c58a = DAT_0003c58a & 0xf3;
      DAT_0003c564 = DAT_0003c564 + (char)iVar2;
      DAT_0003c564 = clamp_value_to_range_000d9ac0(DAT_0003c564,0x1c,0xa4);
      uVar1 = FUN_000c66b0((uint)DAT_0003c564);
      DAT_0003c565 = (uint8_t)uVar1;
      check_counter_delta_and_set_flag(1);
    }
  }
  return;
}
