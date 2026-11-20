/* @k10d quantize_value_to_steps @ 0x000c351e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Maps a raw value from compute_signed_fixed_point_value into a discrete step index using
 *   threshold comparisons.
 * summary:
 *   Calls compute_signed_fixed_point_value to get a raw value, then compares it against a
 *   series of hex thresholds (0x69 to 0x141) to assign a negative or zero step value. It
 *   then applies a final arithmetic transformation involving the lower 3 bits of
 *   DAT_0003c10e to produce the return value. The specific meaning of the raw value and the
 *   final step index is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int quantize_value_to_steps(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0003c10e;
  iVar1 = compute_signed_fixed_point_value();
  if (iVar1 < 0x69) {
    iVar1 = -9;
  }
  else if (iVar1 < 0x71) {
    iVar1 = -8;
  }
  else if (iVar1 < 0x79) {
    iVar1 = -7;
  }
  else if (iVar1 < 0x81) {
    iVar1 = -6;
  }
  else if (iVar1 < 0x91) {
    iVar1 = -5;
  }
  else if (iVar1 < 0xa9) {
    iVar1 = -4;
  }
  else if (iVar1 < 0xc9) {
    iVar1 = -3;
  }
  else if (iVar1 < 0x109) {
    iVar1 = -2;
  }
  else if (iVar1 < 0x141) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
  }
  return ((int)(iVar1 - ((uVar2 & 7) - 2)) / 2 + -2) / 2;
}
