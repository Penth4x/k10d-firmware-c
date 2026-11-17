/* @k10d clamp_offset_to_range @ 0x000c2864
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a clamped value from param_1 and a global offset, returning a result in [0,
 *   0x80].
 * summary:
 *   Optionally adjusts param_2 via compute_signed_offset_value_000c66f6 if bit 0 of
 *   DAT_0003c129 is set. Computes (0x40 - param_1 + _DAT_0003c562 - param_2), then clamps
 *   the result: if below 0x81 it becomes 0x80 - value, otherwise 0; finally caps at 0x80.
 *   Returns the clamped value in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int clamp_offset_to_range(int param_1,int param_2)

{
  if ((DAT_0003c129 & 1) != 0) {
    param_2 = compute_signed_offset_value_000c66f6(1);
  }
  param_2 = ((0x40 - param_1) + (uint)_DAT_0003c562) - param_2;
  if (param_2 < 0x81) {
    param_2 = 0x80 - param_2;
  }
  else {
    param_2 = 0;
  }
  if (0x80 < param_2) {
    param_2 = 0x80;
  }
  return param_2;
}
