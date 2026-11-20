/* @k10d iterate_over_counted_items @ 0x000f1c9e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Loops a counter from 0 to _DAT_0003c8c0-1, calling a fixed sequence of helper functions
 *   each iteration.
 * summary:
 *   Calls set_bit_1_and_5_in_three_flags once, then if _DAT_0003c8c0 is non-zero, iterates
 *   that many times. Each iteration calls FUN_000d5642(1), compute_position_deltas,
 *   step_toward_target_values (with first arg 0 on first iteration, 1 otherwise),
 *   clamp_and_flag_range_limits, and call_two_unnamed_helpers. Finally calls
 *   dispatch_three_subcalls(0,0,0). No MMIO or known subsystem registers are touched
 *   directly.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iterate_over_counted_items(void)

{
  ushort uVar1;
  
  set_bit_1_and_5_in_three_flags();
  uVar1 = 0;
  if (_DAT_0003c8c0 != 0) {
    do {
      FUN_000d5642(1);
      compute_position_deltas();
      if (uVar1 == 0) {
        step_toward_target_values(0,0,0,0);
      }
      else {
        step_toward_target_values(1,0,0,0);
      }
      clamp_and_flag_range_limits();
      call_two_unnamed_helpers();
      uVar1 = uVar1 + 1;
    } while (uVar1 < _DAT_0003c8c0);
  }
  dispatch_three_subcalls(0,0,0);
  return;
}
