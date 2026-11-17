/* @k10d normalize_fixed_point_value @ 0x000f78fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Normalizes a 32-bit fixed-point value to a standard range based on its exponent field.
 * summary:
 *   Extracts the exponent from bits 12-30 of param_1 and adjusts the mantissa
 *   (param_1/param_2) to a normalized range. Returns 0 for underflow, clamps to 0x7fffffff
 *   or -0x80000000 for overflow, and otherwise returns the normalized signed value. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int normalize_fixed_point_value(uint param_1,uint param_2)

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
