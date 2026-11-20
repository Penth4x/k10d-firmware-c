/* @k10d dispatch_state_update_by_param @ 0x000f4872
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Branches on param_1 to compute a value and call state-update helpers, then passes the
 *   result to a final handler.
 * summary:
 *   The function selects a code path based on param_1 (0, 1, 2, or other). For param_1 0
 *   and 1, it calls clamp_value_and_set_flag with a global pointer and
 *   clamp_value_with_flags to retrieve a value. For param_1 2 and others, it sets the value
 *   to constants (0x1b, 0x1c, 0x28, 0x29) based on flags in DAT_0003c3ac and DAT_0003c028,
 *   and modifies DAT_0003c4b6. Finally, it calls select_status_code_by_flags with the
 *   computed value. The specific meaning of the values and flags is not determinable from
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_update_by_param(int param_1)

{
  uint32_t uVar1;
  
  if (param_1 == 0) {
    clamp_value_and_set_flag(DAT_0003c565);
    uVar1 = clamp_value_with_flags(__frv_reg_unset(4));
  }
  else if (param_1 == 1) {
    if (((DAT_0003c440 == '\b') && ((DAT_0003c4d0 & 0x20) != 0)) && ((DAT_0003c58b & 1) == 0)) {
      clamp_value_and_set_flag(DAT_0003c565);
    }
    else if (((DAT_0003c440 == '\a') && ((DAT_0003c4d0 & 0x20) != 0)) && ((DAT_0003c58b & 1) == 0))
    {
      clamp_value_and_set_flag(DAT_0003c565);
    }
    else {
      clamp_value_and_set_flag(DAT_0003c480);
    }
    uVar1 = clamp_value_with_flags(__frv_reg_unset(4));
  }
  else if (param_1 == 2) {
    if (DAT_0003c3ac == '\0') {
      uVar1 = 0x1b;
      if ((DAT_0003c028 & 2) == 0) {
        uVar1 = 0x1c;
        DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
      }
    }
    else if ((DAT_0003c028 & 2) == 0) {
      uVar1 = 0x29;
      DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
    }
    else {
      uVar1 = 0x28;
    }
  }
  else if (DAT_0003c3ac == '\0') {
    uVar1 = 0x1b;
  }
  else {
    uVar1 = 0x28;
  }
  uVar1 = select_status_code_by_flags(uVar1);
  return uVar1;
}
