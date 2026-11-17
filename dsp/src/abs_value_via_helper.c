/* @k10d abs_value_via_helper @ 0x000f798e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes the absolute value of a signed 32-bit integer using a helper function.
 * summary:
 *   The function extracts the sign bit of param_1 and uses it to compute the absolute value
 *   via XOR and subtraction. It then calls compute_log2_index on the result and ORs the
 *   sign bit back into the return value. The callee compute_log2_index is not named, so its
 *   specific role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint abs_value_via_helper(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)param_1 >> 0x1f;
  uVar2 = uVar1 << 0x1f;
  uVar1 = compute_log2_index((param_1 ^ uVar1) - uVar1);
  return uVar1 | uVar2;
}
