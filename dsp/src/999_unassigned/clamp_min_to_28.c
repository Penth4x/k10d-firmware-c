/* @k10d clamp_min_to_28 @ 0x000c55c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes the minimum of two globals and clamps the result to a minimum of 0x1c.
 * summary:
 *   Reads DAT_0003c47e and DAT_0003c578, stores the smaller value into DAT_0003c47d, then
 *   forces DAT_0003c47d to 0x1c if it is below 0x1d. No callees are invoked and no other
 *   memory is touched. The role of the three globals is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_min_to_28(void)

{
  if (DAT_0003c47e < DAT_0003c578) {
    DAT_0003c47d = DAT_0003c47e;
  }
  else {
    DAT_0003c47d = DAT_0003c578;
  }
  if (DAT_0003c47d < 0x1d) {
    DAT_0003c47d = 0x1c;
  }
  return;
}
