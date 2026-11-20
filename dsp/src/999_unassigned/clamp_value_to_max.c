/* @k10d clamp_value_to_max @ 0x000c3f20
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the input if it is less than or equal to a global limit, otherwise returns the
 *   limit.
 * summary:
 *   Compares param_1 against the global DAT_0003c571 using a signed comparison. If param_1
 *   exceeds the global value, it is replaced with the global value before being returned.
 *   No callees are invoked and no other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_to_max(uint param_1)

{
  if ((int)(uint)DAT_0003c571 < (int)param_1) {
    param_1 = (uint)DAT_0003c571;
  }
  return param_1;
}
