/* @k10d decrement_timer_and_dispatch_state @ 0x000ea49c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Decments a 16-bit counter and, when it reaches zero, calls a state-specific handler and
 *   advances a state machine.
 * summary:
 *   The function decrements the global _DAT_0003c1fc. If the result is zero, it branches on
 *   the value of DAT_0003c1fe (2, 4, or 5) to call one of three unverified functions
 *   (clear_bit1_of_dat_00000005, clear_bit_23_after_call, or FUN_000ed66c). It then updates
 *   DAT_0003c1fe to the next state value (3, 5, or 6) and, in the state 5 case, sets bit 2
 *   of DAT_0003c1e7. In the state 4 case, it reloads the counter from DAT_0003f3d0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void decrement_timer_and_dispatch_state(void)

{
  _DAT_0003c1fc = _DAT_0003c1fc - 1;
  if (_DAT_0003c1fc == 0) {
    if (DAT_0003c1fe == '\x02') {
      clear_bit1_of_dat_00000005();
      DAT_0003c1fe = '\x03';
    }
    else if (DAT_0003c1fe == '\x04') {
      clear_bit_23_after_call();
      _DAT_0003c1fc = (ushort)DAT_0003f3d0;
      DAT_0003c1fe = '\x05';
    }
    else if (DAT_0003c1fe == '\x05') {
      FUN_000ed66c();
      DAT_0003c1fe = '\x06';
      DAT_0003c1e7 = DAT_0003c1e7 | 4;
    }
  }
  return;
}
