/* @k10d run_timed_wait_loop @ 0x000ea58a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Executes a countdown loop that polls a status flag until a timeout or completion
 *   condition is met.
 * summary:
 *   Initializes a counter to 5000 and clears specific bits in DAT_00000002 and
 *   DAT_0003c1e7. It enters a do-while loop that decrements the counter, calls
 *   dispatch_state_machine_000ea630, and spins until bit 2 of DAT_0000004f is set. If the
 *   counter reaches zero, it sets bit 2 of DAT_0003c1e7 to break the loop. Finally, it
 *   calls FUN_000ed66c and copy_and_send_two_values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_timed_wait_loop(void)

{
  FUN_000ed7b6();
  busy_wait_on_mode_flag(100);
  _DAT_0003c1f8 = 5000;
  DAT_00000002 = DAT_00000002 & 0xfc;
  set_three_byte_flags_000ecda8();
  DAT_0003c1e7 = DAT_0003c1e7 & 0xfb | 10;
  DAT_0003c1f4 = 0;
  DAT_0003c1fe = 0;
  DAT_0003c1f5 = 4;
  _DAT_0003c1fa = 0;
  do {
    if (DAT_0003c1fe < 4) {
      _DAT_0003c1fa = _DAT_0003c1fa + 1;
    }
    _DAT_0003c1f8 = _DAT_0003c1f8 + -1;
    if (_DAT_0003c1f8 == 0) {
      FUN_000ed66c();
      DAT_0003c1e7 = DAT_0003c1e7 | 4;
    }
    dispatch_state_machine_000ea630();
    do {
    } while ((DAT_0000004f & 4) == 0);
    DAT_0000004f = DAT_0000004f & 0xfb;
  } while ((DAT_0003c1e7 & 4) == 0);
  FUN_000ed66c();
  copy_and_send_two_values();
  return;
}
