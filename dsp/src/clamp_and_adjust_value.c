/* @k10d clamp_and_adjust_value @ 0x000c3e42
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clamps a global value to a range, adds a constant, and passes the result to an unknown
 *   function.
 * summary:
 *   The function reads DAT_0003c568, clamps it between 0x51 and 0x70 (defaulting to 0x50 if
 *   below 0x51), stores the result in DAT_0003c573, adds 0x1c to it, and then calls
 *   clamp_value_to_range_000d9ac0 with the adjusted value and two other globals
 *   (DAT_0003c572, DAT_0003c577). The role of the globals and the callee is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_adjust_value(void)

{
  if (DAT_0003c568 < 0x70) {
    if (DAT_0003c568 < 0x51) {
      DAT_0003c573 = 0x50;
    }
    else {
      DAT_0003c573 = DAT_0003c568;
    }
  }
  else {
    DAT_0003c573 = 0x70;
  }
  DAT_0003c573 = DAT_0003c573 + 0x1c;
  DAT_0003c573 = clamp_value_to_range_000d9ac0(DAT_0003c573,DAT_0003c572,DAT_0003c577);
  return;
}
