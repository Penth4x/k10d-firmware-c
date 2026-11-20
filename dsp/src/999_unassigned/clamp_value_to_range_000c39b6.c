/* @k10d clamp_value_to_range_000c39b6 @ 0x000c39b6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps an input value to the range defined by two global bounds.
 * summary:
 *   The function takes a single uint parameter and compares it against two global
 *   variables, DAT_0003c576 and DAT_0003c573. It adjusts the parameter to the lower bound
 *   if it is too small, and to the upper bound if it is too large, then returns the clamped
 *   value. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_to_range_000c39b6(uint param_1)

{
  if ((int)param_1 < (int)(uint)DAT_0003c576) {
    param_1 = (uint)DAT_0003c576;
  }
  if ((int)(uint)DAT_0003c573 < (int)param_1) {
    param_1 = (uint)DAT_0003c573;
  }
  return param_1;
}
