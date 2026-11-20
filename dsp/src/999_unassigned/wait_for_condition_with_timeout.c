/* @k10d wait_for_condition_with_timeout @ 0x000ebcb4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status flag in a loop with a decrementing timeout, calling helper functions to
 *   manage state and wait.
 * summary:
 *   The function enters a while loop that continues as long as a counter (_DAT_0003c1e0) is
 *   non-zero and a specific bit in DAT_00000001 is clear. Inside the loop, it calls
 *   check_and_set_flag_if_conditions_met and checks if the result is not 1. It then
 *   decrements the counter and waits for a bit in DAT_000000cf to be set. During this wait,
 *   if certain conditions on DAT_0003c396, DAT_0003f3e1, and DAT_0000004f are met, it
 *   clears a bit in DAT_0000004f and calls update_status_flags_and_counters_000de274(1000).
 *   After the inner wait, it clears a bit in DAT_000000cf and calls dispatch_key_event.
 *   Finally, it calls handle_status_flag_transition and clears a bit in DAT_00000002.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_condition_with_timeout(void)

{
  int iVar1;
  
  while (((_DAT_0003c1e0 != 0 && ((DAT_00000001 & 4) == 0)) && (iVar1 = check_and_set_flag_if_conditions_met(), iVar1 != 1))
        ) {
    _DAT_0003c1e0 = _DAT_0003c1e0 + -1;
    while ((DAT_000000cf & 4) == 0) {
      if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
         ((DAT_0000004f & 4) != 0)) {
        DAT_0000004f = DAT_0000004f & 0xfb;
        update_status_flags_and_counters_000de274(1000);
      }
    }
    DAT_000000cf = DAT_000000cf & 0xfb;
    dispatch_key_event(0x70,(int)&DAT_0003c12d);
  }
  handle_status_flag_transition();
  DAT_00000002 = DAT_00000002 & 0xfd;
  return;
}
