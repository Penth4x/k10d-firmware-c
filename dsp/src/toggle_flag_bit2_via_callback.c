/* @k10d toggle_flag_bit2_via_callback @ 0x000c7586
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Toggles bit 2 of DAT_0003c4d5 based on bit 0 of DAT_0003c035, invoking a callback if
 *   setting the bit.
 * summary:
 *   Checks bit 0 of DAT_0003c035. If clear, it sets bit 2 of DAT_0003c4d5 if not already
 *   set, and calls a function pointer from a table at PTR_LAB_000fa130 indexed by
 *   DAT_0003c49b with argument 1. If bit 0 of DAT_0003c035 is set, it clears bit 2 of
 *   DAT_0003c4d5. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_bit2_via_callback(void)

{
  if ((DAT_0003c035 & 1) == 0) {
    if ((DAT_0003c4d5 & 4) == 0) {
      DAT_0003c4d5 = DAT_0003c4d5 | 4;
      (*(code *)(&PTR_LAB_000fa130)[DAT_0003c49b])(1);
    }
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xfb;
  }
  return;
}
