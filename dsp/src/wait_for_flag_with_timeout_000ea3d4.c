/* @k10d wait_for_flag_with_timeout_000ea3d4 @ 0x000ea3d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status flag with a 500-iteration timeout, calling helper functions each cycle.
 * summary:
 *   The function initializes a counter to 500 and enters a loop that checks bit 2 of
 *   DAT_0003c1e7. Each iteration decrements the counter, calls
 *   dispatch_state_machine_000ea43c, waits for bit 2 of DAT_0000004f to be set, clears that
 *   bit, and calls count_flag_10_to_25. If the counter reaches zero, it calls FUN_000ed66c,
 *   sets bit 2 of DAT_0003c1e7, and sets DAT_0003c1fe to 6. After the loop, it clears
 *   DAT_00000056, calls clear_bit_3_of_global_a, clears bit 4 of DAT_0003c1eb, and calls
 *   copy_and_send_two_values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_flag_with_timeout_000ea3d4(void)

{
  FUN_000ea36c();
  _DAT_0003c1f8 = 500;
  while ((DAT_0003c1e7 & 4) == 0) {
    _DAT_0003c1f8 = _DAT_0003c1f8 + -1;
    if (_DAT_0003c1f8 == 0) {
      FUN_000ed66c();
      DAT_0003c1e7 = DAT_0003c1e7 | 4;
      DAT_0003c1fe = 6;
    }
    dispatch_state_machine_000ea43c();
    do {
    } while ((DAT_0000004f & 4) == 0);
    DAT_0000004f = DAT_0000004f & 0xfb;
    count_flag_10_to_25();
  }
  DAT_00000056 = 0;
  clear_bit_3_of_global_a();
  DAT_0003c1eb = DAT_0003c1eb & 0xef;
  copy_and_send_two_values();
  return;
}
