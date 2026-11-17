/* @k10d clamp_value_to_range_000d9ac0 @ 0x000d9ac0
 * name: model (proposed by the local model from the decompile, confidence 0.99)
 * purpose:
 *   Clamps param_1 to the inclusive range [param_2, param_3] and returns the result.
 * summary:
 *   The function first raises param_1 to param_2 if it is below the lower bound, then
 *   lowers it to param_3 if it exceeds the upper bound. It returns the clamped value in r4.
 *   No callees or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_value_to_range_000d9ac0(int param_1,int param_2,int param_3)

{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  if (param_3 < param_1) {
    param_1 = param_3;
  }
  return param_1;
}
