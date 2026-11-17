/* @k10d check_counter_delta_and_set_flag @ 0x000c6834
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Compares a computed counter delta against a threshold and sets a bit in a status word
 *   if out of range.
 * summary:
 *   The function selects a value from either DAT_0003c565 or the return of
 *   compute_signed_offset_value_000c66f6(1) based on bit 0 of DAT_0003c129. It calculates a
 *   difference involving DAT_0003c562, DAT_0003c564, and the selected value. If the
 *   absolute difference exceeds 2, it sets specific bits (0x4, 0x8, or 0xc) in DAT_0003c580
 *   depending on the value of param_1 (0, 1, or other).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_counter_delta_and_set_flag(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_0003c129 & 1) == 0) {
    uVar1 = (uint)DAT_0003c565;
  }
  else {
    uVar1 = compute_signed_offset_value_000c66f6(1);
  }
  iVar2 = ((uint)_DAT_0003c562 - (uint)DAT_0003c564) - uVar1;
  if ((2 < iVar2) || (iVar2 < -2)) {
    if (param_1 == 0) {
      DAT_0003c580 = DAT_0003c580 | 0xc;
    }
    else if (param_1 == 1) {
      DAT_0003c580 = DAT_0003c580 | 4;
    }
    else {
      DAT_0003c580 = DAT_0003c580 | 8;
    }
  }
  return;
}
