/* @k10d process_state_machine @ 0x000ef9dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Executes a state machine based on the value in DAT_0003c1fe, calling different
 *   functions for each state.
 * summary:
 *   The function checks a flag in DAT_0003c1e7 and then switches on the state variable
 *   DAT_0003c1fe. Depending on the current state (0-5), it calls various subroutines and
 *   updates the state variable or other data fields like DAT_0003c1fc. The specific
 *   behavior of the subroutines is unknown as they are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_state_machine(void)

{
  if ((DAT_0003c1e7 & 4) == 0) {
    update_timer_state_flags_000efbec();
    switch(DAT_0003c1fe) {
    case 0:
      if ((DAT_0003f3de == '\0') || ((DAT_0003c1ea & 0x20) != 0)) {
        clear_bit2_of_dat_00000005();
      }
      else {
        FUN_000ed66c();
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
        _DAT_0003c1fc = (ushort)DAT_0003f3c3;
        DAT_0003c1fe = 2;
      }
      break;
    case 2:
      decrement_timer_and_update_state();
      dispatch_on_state_flag_000efbb2();
      break;
    case 3:
      if ((DAT_0003f3da != '\0') && (DAT_0003c1f4 != '\x03')) {
        increment_and_clear_flag();
      }
      dispatch_on_state_flag_000efbb2();
      break;
    case 4:
      decrement_timer_and_update_state();
      break;
    case 5:
      decrement_timer_and_update_state();
    }
  }
  return;
}
