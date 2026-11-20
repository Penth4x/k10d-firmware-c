/* @k10d compute_signed_delta_pair @ 0x000ed19e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Computes a signed difference between two 16-bit values and stores the result and sign
 *   in adjacent globals.
 * summary:
 *   Calls FUN_000ed26e first. Then branches on bit 0 of DAT_0003c066. In one branch it
 *   stores DAT_0003c02d into DAT_0003c244 and computes DAT_0003c248 as (DAT_0003c240 -
 *   DAT_0003c02d) if non-negative, else 0. In the other branch it stores DAT_0003c02d into
 *   DAT_0003c246 and computes DAT_0003c24a as (DAT_0003c242 - DAT_0003c02d) if non-
 *   negative, else 0. The role of the DAT globals is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_signed_delta_pair(void)

{
  FUN_000ed26e();
  if ((DAT_0003c066 & 1) == 0) {
    DAT_0003c244 = DAT_0003c02d;
    DAT_0003c248 = '\0';
    if (DAT_0003c02d <= DAT_0003c240) {
      DAT_0003c248 = DAT_0003c240 - DAT_0003c02d;
    }
  }
  else {
    DAT_0003c246 = DAT_0003c02d;
    if (DAT_0003c242 < DAT_0003c02d) {
      DAT_0003c24a = '\0';
    }
    else {
      DAT_0003c24a = DAT_0003c242 - DAT_0003c02d;
    }
  }
  return;
}
