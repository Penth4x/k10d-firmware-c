/* @k10d check_and_set_flag_bits @ 0x000e084c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks three specific bits in global variables and sets a flag if conditions are met.
 * summary:
 *   The function tests bit 5 of DAT_0003c127, bit 7 of DAT_0003c128, and bit 3 of
 *   DAT_0003c132. If the first two are set and the third is clear, it sets DAT_0003c132 to
 *   0xc and calls dispatch_event_if_enabled_000e155a with arguments 0x91, a pointer to
 *   DAT_0003c132, and 1. The role of the global variables and the callee is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_flag_bits(void)

{
  if ((((DAT_0003c127 & 0x20) != 0) && ((DAT_0003c128 & 0x80) != 0)) && ((DAT_0003c132 & 8) == 0)) {
    DAT_0003c132 = 0xc;
    dispatch_event_if_enabled_000e155a(0x91,(int)&DAT_0003c132,1);
  }
  return;
}
