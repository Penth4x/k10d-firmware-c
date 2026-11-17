/* @k10d set_flag_from_state_bits @ 0x000ec696
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally sets DAT_0003c564 to 0x80, 0xa4, or DAT_0003c1e6 based on bit tests of
 *   other globals, then calls FUN_000ecd00.
 * summary:
 *   The function checks a combination of bits in DAT_0003c214, DAT_0003c05d, and
 *   DAT_0003c1ea. If the condition is met, it sets DAT_0003c564 to 0x80 or 0xa4 depending
 *   on bit 5 of DAT_0003c1ed, or to the value of DAT_0003c1e6 if bit 6 of DAT_0003c1ed is
 *   set. It then unconditionally calls FUN_000ecd00 within the outer if-block. The roles of
 *   the DAT globals and the callee are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_state_bits(void)

{
  if ((((DAT_0003c214 & 1) != 0) || ((DAT_0003c05d & 0x10) != 0)) && ((DAT_0003c1ea & 2) == 0)) {
    if ((DAT_0003c1ed & 0x20) == 0) {
      DAT_0003c564 = 0x80;
    }
    else {
      DAT_0003c564 = 0xa4;
    }
    if ((DAT_0003c1ed & 0x40) != 0) {
      DAT_0003c564 = DAT_0003c1e6;
    }
    FUN_000ecd00();
  }
  return;
}
