/* @k10d dispatch_mode_transition_000e8fc0 @ 0x000e8fc0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calls a sequence of initialization routines and branches on a mode index to invoke a
 *   specific handler.
 * summary:
 *   The function executes a fixed sequence of calls to poll_status_bit_sequence,
 *   process_state_flags_and_dispatch_000cb0c6, and others. It checks the value of
 *   _DAT_0003c21e (0-3) to call either clear_state_flags_and_set_bit or
 *   fill_four_bytes_with_pattern with an adjusted index. It finishes by setting bits 4 and
 *   5 of DAT_00000006 and calling write_byte_to_ram_and_call_two_routines with argument 9.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_transition_000e8fc0(void)

{
  poll_status_bit_sequence();
  process_state_flags_and_dispatch_000cb0c6();
  if (_DAT_0003c21e == 0) {
    clear_state_flags_and_set_bit();
  }
  if (_DAT_0003c21e == 1) {
    fill_four_bytes_with_pattern(0);
  }
  if (_DAT_0003c21e == 2) {
    fill_four_bytes_with_pattern(1);
  }
  if (_DAT_0003c21e == 3) {
    fill_four_bytes_with_pattern(2);
  }
  dispatch_mode_transition_000dfc72(1,0);
  call_subroutine_with_arg_9();
  DAT_00000006 = DAT_00000006 | 0x30;
  write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
  set_flag_and_write_two_bytes();
  return;
}
