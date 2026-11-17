/* @k10d encode_float32_to_fixed_point @ 0x1054484c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Converts a 32-bit IEEE 754 float and a mantissa field into a fixed-point
 *   representation.
 * summary:
 *   The function parses the sign, exponent, and mantissa of a 32-bit floating-point number
 *   (param_1) and combines it with a secondary value (param_2) to produce a fixed-point
 *   integer. It handles special cases like zero, subnormal numbers, and overflow by
 *   clamping the result to the maximum representable value (0x7f800000). The logic is
 *   consistent with a standard float-to-fixed-point conversion routine, likely used for
 *   scaling sensor data or lens parameters in the firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x10544878) */
/* WARNING: Removing unreachable block (ram,0x1054487e) */
/* WARNING: Removing unreachable block (ram,0x10544880) */

uint encode_float32_to_fixed_point(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 ^ param_1 & 0x7fffffff;
  if ((int)(param_1 << 1) >> 0x15 == -1) {
    if ((param_2 & 0x1fffffff) != 0) {
      uVar2 = uVar2 + 1;
    }
    return (param_1 & 0xfffffff) << 3 | param_2 >> 0x1d | uVar2;
  }
  uVar1 = (param_1 & 0x7fffffff) + 0xc8000000;
  if (-1 < (int)uVar1) {
    if ((int)uVar1 < 0xff00000) {
      if ((uVar1 & 0xff00000) == 0) {
        return uVar2;
      }
      uVar1 = uVar1 * 8 | param_2 >> 0x1d;
    }
    else {
      uVar1 = 0x7f800000;
    }
    return uVar1 | uVar2;
  }
  return uVar2;
}
