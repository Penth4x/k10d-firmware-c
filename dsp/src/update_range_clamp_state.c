/* @k10d update_range_clamp_state @ 0x000c3c5a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates state variables by clamping values within bounds and calling helper functions
 *   based on flag bits.
 * summary:
 *   The function branches on bits 1 and 2 of DAT_0003c4df. It performs comparisons between
 *   values stored in DAT_0003c576, DAT_0003c577, and DAT_0003c571, and calls
 *   clamp_value_and_set_flags_000c6682 with a constant 0x1c, suggesting a clamp or limit
 *   operation. It updates several state variables (DAT_0003c564, DAT_0003c565,
 *   DAT_0003c47d, DAT_0003c480) and calls update_byte_from_two_callees or
 *   update_state_pointer at the end of each branch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_range_clamp_state(void)

{
  uint uVar1;
  uint32_t uVar2;
  
  if ((DAT_0003c4df & 2) == 0) {
    if ((DAT_0003c4df & 4) == 0) {
      DAT_0003c564 = clamp_value_to_max(DAT_0003c47d);
      DAT_0003c565 = DAT_0003c480;
      if ((DAT_0003c576 < DAT_0003c480) && (DAT_0003c480 < DAT_0003c577)) {
        if ((DAT_0003c564 <= DAT_0003c571) || (0x1b < DAT_0003c564)) {
          uVar2 = FUN_000c66b0((uint)DAT_0003c564);
          DAT_0003c565 = (byte)uVar2;
          check_counter_delta_and_set_flags(1);
          update_byte_from_two_callees();
        }
      }
      else {
        uVar1 = call_callee_with_fixed_args((uint)DAT_0003c480);
        DAT_0003c564 = (char)uVar1;
        DAT_0003c564 = clamp_value_to_max(uVar1 & 0xff);
        check_counter_delta_and_set_flags(2);
        update_state_pointer();
      }
    }
    else {
      DAT_0003c564 = DAT_0003c571;
      if ((DAT_0003c127 & 8) != 0) {
        DAT_0003c564 = clamp_value_and_set_flags_000c6682(DAT_0003c565,0x1c,DAT_0003c571);
      }
      uVar2 = FUN_000c66b0((uint)DAT_0003c564);
      DAT_0003c480 = (byte)uVar2;
      DAT_0003c481 = DAT_0003c480;
      DAT_0003c565 = DAT_0003c480;
      update_state_pointer();
    }
  }
  else {
    if (((DAT_0003c004 & 2) == 0) || (_DAT_0003c57a == 0)) {
      uVar1 = FUN_000c66b0((uint)DAT_0003c564);
      DAT_0003c565 = (byte)uVar1;
      if (((uint)DAT_0003c577 <= (uVar1 & 0xff)) || ((uVar1 & 0xff) <= (uint)DAT_0003c576)) {
        DAT_0003c47d = clamp_value_and_set_flags_000c6682(uVar1 & 0xff,0x1c,DAT_0003c571);
        DAT_0003c47e = DAT_0003c47d;
        DAT_0003c564 = DAT_0003c47d;
      }
    }
    else {
      DAT_0003c565 = compute_and_check_range();
    }
    update_byte_from_two_callees();
  }
  return;
}
