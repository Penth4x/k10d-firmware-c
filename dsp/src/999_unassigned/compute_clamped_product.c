/* @k10d compute_clamped_product @ 0x000c0aca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns a scaled product of two inputs when several flag and range conditions are met,
 *   else zero.
 * summary:
 *   Checks that param_2 is in [0x20,0x34], bit 4 of DAT_0003c580 is clear, bit 3 of
 *   DAT_0003c127 is set, bit 3 of DAT_0003c126 is clear, and param_1 > 0x23f. If all hold,
 *   computes ((0x40 - param_2) * (param_1 - 0x1a0)) >> 8 and returns it; otherwise returns
 *   0. No callees are invoked and no memory is written.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_clamped_product(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((0x1f < param_2) && (param_2 < 0x35)) && ((DAT_0003c580 & 0x10) == 0)) &&
     ((((DAT_0003c127 & 8) != 0 && ((DAT_0003c126 & 8) == 0)) && (0x23f < param_1)))) {
    uVar1 = (0x40 - param_2) * (param_1 - 0x1a0) >> 8;
  }
  return uVar1;
}
