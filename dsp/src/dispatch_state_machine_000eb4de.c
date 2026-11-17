/* @k10d dispatch_state_machine_000eb4de @ 0x000eb4de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Executes a state machine based on DAT_0003c1fe, calling different subroutines for each
 *   state.
 * summary:
 *   The function first calls update_two_byte_counter, then switches on the value of
 *   DAT_0003c1fe. Depending on the state (0-5) and conditions involving DAT_0003f3de and
 *   DAT_0003c1ea, it calls various other functions (clear_bit2_of_dat_00000005,
 *   set_flag_bits_and_copy_globals, increment_and_check_counter, clear_bit_23_after_call,
 *   decrement_state_timer, dispatch_on_state_flag_000eb62e) and updates state variables
 *   like DAT_0003c1fe and DAT_0003c1ed. The specific roles of these callees and data
 *   variables are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000eb4de(void)

{
  update_two_byte_counter();
  switch(DAT_0003c1fe) {
  case 0:
    if ((DAT_0003f3de == '\0') || ((DAT_0003c1ea & 0x20) != 0)) {
      clear_bit2_of_dat_00000005();
    }
    else {
      set_flag_bits_and_copy_globals();
      _DAT_0003c1fc = 0;
    }
    DAT_0003c1fe = 1;
    break;
  case 1:
    if ((DAT_0003f3de != '\0') && ((DAT_0003c1ea & 0x20) == 0)) {
      increment_and_check_counter();
    }
    if (DAT_0003c1f4 == '\x01') {
      clear_bit_23_after_call();
      _DAT_0003c1fc = (ushort)DAT_0003f3c0;
      DAT_0003c1fe = 2;
      DAT_0003c1ed = DAT_0003c1ed | 2;
    }
    break;
  case 2:
    decrement_state_timer();
    dispatch_on_state_flag_000eb62e();
    break;
  case 3:
    dispatch_on_state_flag_000eb62e();
    break;
  case 4:
    decrement_state_timer();
    break;
  case 5:
    decrement_state_timer();
  }
  return;
}
