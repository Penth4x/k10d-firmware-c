/* @k10d set_flag_if_threshold_met @ 0x000c0a1a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Sets bit 0 of DAT_0003c5a2 if param_2/4 meets a threshold, then sets bit 1 if bit 0 is
 *   set.
 * summary:
 *   Checks two conditions on DAT_0003c126 and DAT_0003c127 to select a threshold
 *   (DAT_000f9ddb or DAT_000f9ddb+DAT_000f9de3). If param_1 is 1 and param_2 shifted right
 *   by 2 is >= the threshold, sets bit 0 of DAT_0003c5a2. Then, if bit 0 is set, also sets
 *   bit 1 of DAT_0003c5a2. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_threshold_met(int param_1,uint param_2)

{
  if ((((DAT_0003c127 & 8) == 0) || ((DAT_0003c126 & 8) != 0)) && ((DAT_0003c126 & 2) == 0)) {
    if ((param_1 == 1) && ((uint)DAT_000f9ddb + (uint)DAT_000f9de3 <= param_2 >> 2)) {
      DAT_0003c5a2 = DAT_0003c5a2 | 1;
    }
  }
  else if ((param_1 == 1) && ((uint)DAT_000f9ddb <= param_2 >> 2)) {
    DAT_0003c5a2 = DAT_0003c5a2 | 1;
  }
  if ((DAT_0003c5a2 & 1) != 0) {
    DAT_0003c5a2 = DAT_0003c5a2 | 2;
  }
  return;
}
