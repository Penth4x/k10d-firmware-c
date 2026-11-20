/* @k10d clamp_value_and_set_flags_000c6682 @ 0x000c6682
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps a value between two bounds and sets bits 0x40 and 0x80 in a status word when
 *   clamping occurs.
 * summary:
 *   The function takes a value (param_1), a lower bound (param_2), and an upper bound
 *   (param_3). It first clears all bits in DAT_0003c58a except bits 2 and 3 (mask 0xc). It
 *   then compares the value against the lower bound; if the value is below the lower bound,
 *   it sets bit 0x40 in DAT_0003c58a and uses the lower bound as the result. It then
 *   compares the result against the upper bound; if the result is above the upper bound, it
 *   sets bit 0x80 in DAT_0003c58a and uses the upper bound as the result. The function
 *   returns the clamped value. The role of DAT_0003c58a and DAT_0003c562 is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int clamp_value_and_set_flags_000c6682(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  DAT_0003c58a = DAT_0003c58a & 0xc;
  iVar1 = (uint)_DAT_0003c562 - param_1;
  if ((int)((uint)_DAT_0003c562 - param_1) < param_2) {
    DAT_0003c58a = DAT_0003c58a | 0x40;
    iVar1 = param_2;
  }
  if (param_3 < iVar1) {
    DAT_0003c58a = DAT_0003c58a | 0x80;
    iVar1 = param_3;
  }
  return iVar1;
}
