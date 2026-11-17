/* @k10d decrement_timer_and_advance_state @ 0x000ea69c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Decrements a 16-bit counter and, upon reaching zero, executes a state-specific action
 *   and transitions to the next state.
 * summary:
 *   The function decrements the global variable _DAT_0003c1fc. If the counter reaches zero,
 *   it checks the state variable DAT_0003c1fe. Depending on the state (2, 4, or 5), it
 *   calls one of three unknown functions (clear_bit2_of_dat_00000005,
 *   clear_bit_23_after_call, or FUN_000ed66c), updates the state variable to the next value
 *   (3, 5, or 6 respectively), and may reset the counter or set a flag bit in DAT_0003c1e7.
 *   This pattern is characteristic of a simple state machine or timer-driven sequence
 *   handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void decrement_timer_and_advance_state(void)

{
  _DAT_0003c1fc = _DAT_0003c1fc - 1;
  if (_DAT_0003c1fc == 0) {
    if (DAT_0003c1fe == '\x02') {
      clear_bit2_of_dat_00000005();
      DAT_0003c1fe = '\x03';
    }
    else if (DAT_0003c1fe == '\x04') {
      clear_bit_23_after_call();
      _DAT_0003c1fc = (ushort)DAT_0003f3d3;
      DAT_0003c1fe = '\x05';
    }
    else if (DAT_0003c1fe == '\x05') {
      FUN_000ed66c();
      DAT_0003c1e7 = DAT_0003c1e7 | 4;
      DAT_0003c1fe = '\x06';
    }
  }
  return;
}
