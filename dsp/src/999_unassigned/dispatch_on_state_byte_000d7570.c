/* @k10d dispatch_on_state_byte_000d7570 @ 0x000d7570
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls a common preamble then branches on a state byte to invoke one of several handler
 *   functions.
 * summary:
 *   The function first calls call_subroutine_with_arg_9 unconditionally. It then reads the
 *   byte at DAT_0003c3ee and dispatches to different callees based on its value: 0 calls
 *   two functions, 1 calls one, 2 sets a bit in DAT_0003c00a and calls
 *   write_byte_to_ram_and_call_two_routines, 3 calls another, and values 10-21 call
 *   update_value_if_flags_set, set a bit in DAT_0003c023, and call forward_byte_with_flag
 *   with a value from a table. No verified names are available for the callees or the state
 *   variable, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_byte_000d7570(void)

{
  call_subroutine_with_arg_9();
  if (DAT_0003c3ee == 0) {
    update_bit7_from_dat_0003c00f();
    clear_three_status_bits();
  }
  else if (DAT_0003c3ee == 1) {
    update_nibble_via_callback();
  }
  else if (DAT_0003c3ee == 2) {
    DAT_0003c00a = DAT_0003c00a | 2;
    write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
  }
  else if (DAT_0003c3ee == 3) {
    clear_bit7_of_dat_00000006();
  }
  else if ((9 < DAT_0003c3ee) && (DAT_0003c3ee < 0x16)) {
    update_value_if_flags_set();
    DAT_0003c023 = DAT_0003c023 | 4;
    forward_byte_with_flag(*(ushort *)(&DAT_000fc5e0 + (DAT_0003c3ee - 10) * 2) & 0x7fff);
  }
  return;
}
