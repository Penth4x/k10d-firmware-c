/* @k10d clamp_value_and_set_flags_000c66c8 @ 0x000c66c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps a value between two bounds and sets bits 2 and 3 of a status word when clamping
 *   occurs.
 * summary:
 *   The function takes a value (param_1), a lower bound (param_2), and an upper bound
 *   (param_3). It first clears bits 2 and 3 of the global DAT_0003c58a. If the value is
 *   below the lower bound, it sets bit 2 and uses the lower bound as the result. If the
 *   result is above the upper bound, it sets bit 3 and uses the upper bound as the result.
 *   The final clamped value is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int clamp_value_and_set_flags_000c66c8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  DAT_0003c58a = DAT_0003c58a & 0xc0;
  iVar1 = (uint)_DAT_0003c562 - param_1;
  if ((int)((uint)_DAT_0003c562 - param_1) < param_2) {
    DAT_0003c58a = DAT_0003c58a | 4;
    iVar1 = param_2;
  }
  if (param_3 < iVar1) {
    DAT_0003c58a = DAT_0003c58a | 8;
    iVar1 = param_3;
  }
  return iVar1;
}
