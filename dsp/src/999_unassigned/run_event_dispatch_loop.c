/* @k10d run_event_dispatch_loop @ 0x000cb5de
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Sets a flag, calls initialization routines, then loops calling an event handler until a
 *   termination bit is set.
 * summary:
 *   The function sets bit 0 of DAT_0003c1ec and calls five unnamed initialization/setup
 *   functions. It then enters a do-while loop that calls FUN_000ccb24, checks a condition
 *   via poll_status_and_clear_flags, and conditionally calls one of two handlers
 *   (dispatch_state_transition_000cb9f0 or dispatch_state_machine_000cb842) based on bit 6
 *   of DAT_0003ce00. The loop continues while bit 0 of DAT_0003ce08 is clear, and finally
 *   calls set_two_globals_to_constants before returning. No verified callee names are
 *   available to confirm the specific subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void run_event_dispatch_loop(void)

{
  int iVar1;
  
  DAT_0003c1ec = DAT_0003c1ec | 1;
  rotate_and_average_four_values();
  rotate_and_average_three_values();
  FUN_000cb63e();
  process_state_transition_flags();
  compute_clamped_level_and_scaled_byte();
  do {
    FUN_000ccb24();
    iVar1 = poll_status_and_clear_flags(DAT_0003ce10);
    if (iVar1 == 0) {
      if ((DAT_0003ce00 & 0x40) == 0) {
        dispatch_state_transition_000cb9f0();
      }
      else {
        dispatch_state_machine_000cb842();
      }
      update_status_flags_000ce11e(0);
    }
  } while ((DAT_0003ce08 & 1) == 0);
  set_two_globals_to_constants();
  return;
}
