/* @k10d dispatch_state_machine_000ea630 @ 0x000ea630
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Executes a state machine based on DAT_0003c1fe, calling different functions for each
 *   state.
 * summary:
 *   The function checks a flag in DAT_0003c1e7 and then switches on the value of
 *   DAT_0003c1fe. Depending on the state (0-5), it calls various subroutines
 *   (clear_bit2_of_dat_00000005, clear_bit_23_after_call,
 *   decrement_timer_and_advance_state, adjust_value_by_comparison) and updates the state
 *   variable. It also calls update_timer_state_flags_000efbec at the start of the switch
 *   block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000ea630(void)

{
  if ((DAT_0003c1e7 & 4) == 0) {
    update_timer_state_flags_000efbec();
    switch(DAT_0003c1fe) {
    case 0:
      clear_bit2_of_dat_00000005();
      DAT_0003c1fe = 1;
      break;
    case 1:
      if (DAT_0003c1f4 == '\x01') {
        clear_bit_23_after_call();
        _DAT_0003c1fc = (ushort)DAT_0003f3d1;
        DAT_0003c1fe = 2;
      }
      break;
    case 2:
      decrement_timer_and_advance_state();
      adjust_value_by_comparison();
      break;
    case 3:
      adjust_value_by_comparison();
      break;
    case 4:
      decrement_timer_and_advance_state();
      break;
    case 5:
      decrement_timer_and_advance_state();
    }
  }
  return;
}
