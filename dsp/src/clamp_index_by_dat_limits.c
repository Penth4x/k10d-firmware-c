/* @k10d clamp_index_by_dat_limits @ 0x000c0b0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clamps an input value against a base offset and a mode-dependent upper bound.
 * summary:
 *   The function checks if param_1 is less than DAT_000f9de6 * 4, returning 0 if true.
 *   Otherwise, it computes (param_1 - DAT_000f9de6 * 4) / 2 and clamps the result to a
 *   maximum of 0x20 if DAT_0003c57e is 1, or 0x18 otherwise. It returns the clamped value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_index_by_dat_limits(int param_1)

{
  int iVar1;
  
  if (param_1 < (int)((uint)DAT_000f9de6 * 4)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(param_1 + (uint)DAT_000f9de6 * -4) / 2;
    if (DAT_0003c57e == '\x01') {
      if (0x20 < iVar1) {
        iVar1 = 0x20;
      }
    }
    else if (0x18 < iVar1) {
      iVar1 = 0x18;
    }
  }
  return iVar1;
}
