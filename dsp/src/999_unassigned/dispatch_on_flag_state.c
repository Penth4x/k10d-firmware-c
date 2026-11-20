/* @k10d dispatch_on_flag_state @ 0x000e8c40
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls an initialization routine then branches on a global flag to invoke a handler with
 *   argument 2 or 0.
 * summary:
 *   The function first calls poll_status_bit_sequence unconditionally. It then checks the
 *   global variable _DAT_0003c21e; if it equals 1, it calls
 *   write_two_bit_field_to_dat_0003c008 with argument 2, otherwise it calls
 *   write_two_bit_field_to_dat_0003c008 with argument 0. No other side effects or memory
 *   writes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_flag_state(void)

{
  poll_status_bit_sequence();
  if (_DAT_0003c21e == 1) {
    write_two_bit_field_to_dat_0003c008(2);
  }
  else {
    write_two_bit_field_to_dat_0003c008(0);
  }
  return;
}
