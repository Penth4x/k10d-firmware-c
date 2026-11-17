/* @k10d normalize_fixed_point_value_105448ac @ 0x105448ac
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Clamps and normalizes a 32-bit fixed-point value to a signed 24-bit range.
 * summary:
 *   The function extracts the upper 18 bits of param_1, subtracts 0x3ff, and clamps the
 *   result to the range [-1, 31]. It then shifts param_1 and param_2 to align the
 *   fractional part, applies a sign extension based on the sign bit of param_1, and returns
 *   the normalized value. This is a standard fixed-point arithmetic helper used to scale or
 *   normalize sensor or lens data values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int normalize_fixed_point_value_105448ac(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = ((param_1 & 0x7fffffff) >> 0x14) - 0x3ff;
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = 0x1f - iVar1;
  if ((int)uVar2 < 0) {
    if (-1 < (int)param_1) {
      return 0x7fffffff;
    }
    return -0x80000000/*SDRAM*/;
  }
  return ((param_1 << 0xb | param_2 >> 0x15 | 0x80000000/*SDRAM*/) >> (uVar2 & 0x1f) ^ (int)param_1 >> 0x1f)
         - ((int)param_1 >> 0x1f);
}
