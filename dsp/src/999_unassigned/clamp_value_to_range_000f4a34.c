/* @k10d clamp_value_to_range_000f4a34 @ 0x000f4a34
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps a computed value between 0 and 0x1a, setting a flag in DAT_0003c4d4 if the upper
 *   bound is hit.
 * summary:
 *   Calls divide_two_integers with param_1+1 and 4, subtracts 0x11 from the result. If the
 *   result exceeds 0x1a, it is clamped to 0x1a and bit 7 of DAT_0003c4d4 is set. If the
 *   result is negative, it is clamped to 0. Returns the clamped value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_value_to_range_000f4a34(int param_1)

{
  int iVar1;
  
  iVar1 = divide_two_integers(param_1 + 1,4);
  iVar1 = iVar1 + -0x11;
  if (0x1a < iVar1) {
    iVar1 = 0x1a;
    DAT_0003c4d4 = DAT_0003c4d4 | 0x80;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}
