/* @k10d clear_flag_if_three_conditions_met @ 0x000e07e2
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Checks three bit flags in DAT_0003c127/128/132 and clears DAT_0003c132 while calling
 *   dispatch_event_if_enabled_000e155a if all are set.
 * summary:
 *   Tests bit 5 of DAT_0003c127, bit 7 of DAT_0003c128, and bit 3 of DAT_0003c132. If all
 *   three are set, it zeroes DAT_0003c132 and calls dispatch_event_if_enabled_000e155a with
 *   arguments 0x91, a pointer to DAT_0003c132, and 1. The role of the DAT globals and
 *   dispatch_event_if_enabled_000e155a is not determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_three_conditions_met(void)

{
  if ((((DAT_0003c127 & 0x20) != 0) && ((DAT_0003c128 & 0x80) != 0)) && ((DAT_0003c132 & 8) != 0)) {
    DAT_0003c132 = 0;
    dispatch_event_if_enabled_000e155a(0x91,(int)&DAT_0003c132,1);
  }
  return;
}
