/* @k10d adjust_scroll_offset @ 0x000c7c28
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Updates a scroll offset value based on a signed step parameter and current state flags.
 * summary:
 *   The function modifies the global variable DAT_0003c47e, which appears to hold a scroll
 *   or cursor position. It checks several state flags in DAT_0003c440, DAT_0003c58a, and
 *   DAT_0003c58b to determine if the adjustment is allowed. If allowed, it calculates a new
 *   offset by adding param_1 * 4 to a base value obtained from
 *   clamp_value_by_flags_000c7ea4 (for negative steps) or the current value (for positive
 *   steps), clamping the result to a minimum of 0x1c or a maximum defined by DAT_0003c578.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_scroll_offset(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)DAT_0003c47e;
  if (param_1 < 0) {
    if (((((DAT_0003c440 != '\x05') || ((DAT_0003c58a & 8) == 0)) || ((DAT_0003c58b & 1) != 0)) &&
        ((DAT_0003c440 != '\b' || (((DAT_0003c58a & 8) == 0 && ((DAT_0003c58a & 0x10) == 0)))))) &&
       ((DAT_0003c440 != '\a' || (((DAT_0003c58a & 8) == 0 && ((DAT_0003c58a & 0x10) == 0)))))) {
      uVar1 = clamp_value_by_flags_000c7ea4(__frv_reg_unset(4));
      uVar2 = uVar1 & 3;
      if (uVar2 == 1) {
        uVar1 = uVar1 - 1;
      }
      else if (uVar2 == 2) {
        uVar1 = uVar1 + 2;
      }
      else if (uVar2 == 3) {
        uVar1 = uVar1 + 1;
      }
      uVar1 = uVar1 + param_1 * 4;
      if (uVar1 < 0x1c) {
        uVar1 = 0x1c;
      }
    }
  }
  else if (((((DAT_0003c440 != '\x05') || ((DAT_0003c58a & 4) == 0)) || ((DAT_0003c58b & 1) != 0))
           && ((DAT_0003c440 != '\b' || (((DAT_0003c58a & 4) == 0 && ((DAT_0003c58a & 0x20) == 0))))
              )) && ((DAT_0003c440 != '\a' ||
                     (((DAT_0003c58a & 4) == 0 && ((DAT_0003c58a & 0x20) == 0)))))) {
    uVar1 = uVar1 + param_1 * 4;
    if (DAT_0003c578 <= uVar1) {
      uVar1 = (uint)DAT_0003c578;
    }
    uVar1 = clamp_value_by_flags_000c7e7e(uVar1);
  }
  DAT_0003c47e = (char)uVar1;
  return;
}
