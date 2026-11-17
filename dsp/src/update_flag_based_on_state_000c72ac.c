/* @k10d update_flag_based_on_state_000c72ac @ 0x000c72ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally clears or sets bit 3 of DAT_0003c4d4 based on bit 5 of DAT_0003c1eb.
 * summary:
 *   Checks bit 5 of DAT_0003c1eb. If clear, clears bit 3 of DAT_0003c4d4. If set and bit 3
 *   of DAT_0003c4d4 is clear, sets bit 3 of DAT_0003c4d4 and copies DAT_0003c440 to
 *   DAT_0003c443 and DAT_0003c565 to DAT_0003c494. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_based_on_state_000c72ac(void)

{
  if ((DAT_0003c1eb & 0x20) == 0) {
    DAT_0003c4d4 = DAT_0003c4d4 & 0xf7;
  }
  else if ((DAT_0003c4d4 & 8) == 0) {
    DAT_0003c4d4 = DAT_0003c4d4 | 8;
    DAT_0003c443 = DAT_0003c440;
    DAT_0003c494 = DAT_0003c565;
  }
  return;
}
