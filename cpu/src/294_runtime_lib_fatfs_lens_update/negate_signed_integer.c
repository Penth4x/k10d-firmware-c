/* @k10d negate_signed_integer @ 0x10544964
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Computes the two's-complement negation of a signed 32-bit integer.
 * summary:
 *   Extracts the sign bit of param_1, computes the absolute value via (param_1 ^ sign) -
 *   sign, calls compute_log2_index on that magnitude, and then re-applies the original sign
 *   to the result. The code is a standard idiom for negating a signed value while
 *   delegating the magnitude transformation to a helper, likely used for signed arithmetic
 *   in the lens firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint negate_signed_integer(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)param_1 >> 0x1f;
  uVar2 = uVar1 << 0x1f;
  uVar1 = compute_log2_index((param_1 ^ uVar1) - uVar1);
  return uVar1 | uVar2;
}
