/* @k10d clamp_value_to_range_000c5594 @ 0x000c5594
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps a value stored at DAT_0003c481 to the range defined by DAT_0003c576 and
 *   DAT_0003c577.
 * summary:
 *   The function first computes the minimum of DAT_0003c481 and DAT_0003c577, storing the
 *   result in DAT_0003c480. It then ensures this value is not less than DAT_0003c576 by
 *   replacing it with DAT_0003c576 if it is. This effectively clamps the input value to the
 *   interval [DAT_0003c576, DAT_0003c577]. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_value_to_range_000c5594(void)

{
  if (DAT_0003c481 < DAT_0003c577) {
    DAT_0003c480 = DAT_0003c481;
  }
  else {
    DAT_0003c480 = DAT_0003c577;
  }
  if (DAT_0003c480 <= DAT_0003c576) {
    DAT_0003c480 = DAT_0003c576;
  }
  return;
}
