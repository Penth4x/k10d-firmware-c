/* @k10d dispatch_state_machine_000ea43c @ 0x000ea43c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Executes a state machine step based on the value of DAT_0003c1fe.
 * summary:
 *   The function calls FUN_000ea526 and then switches on the state variable DAT_0003c1fe.
 *   Depending on the state (0-5), it calls various subroutines (clear_bit1_of_dat_00000005,
 *   clear_bit_23_after_call, decrement_timer_and_dispatch_state,
 *   check_and_set_state_flag_000ea4fc) and updates the state variable or other data fields
 *   like DAT_0003c1fc. The specific roles of the callees and data fields are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000ea43c(void)

{
  FUN_000ea526();
  switch(DAT_0003c1fe) {
  case 0:
    clear_bit1_of_dat_00000005();
    DAT_0003c1fe = 1;
    break;
  case 1:
    if (DAT_0003c1f4 == '\x01') {
      clear_bit_23_after_call();
      _DAT_0003c1fc = (ushort)DAT_0003f3ce;
      DAT_0003c1fe = 2;
    }
    break;
  case 2:
    decrement_timer_and_dispatch_state();
    check_and_set_state_flag_000ea4fc();
    break;
  case 3:
    check_and_set_state_flag_000ea4fc();
    break;
  case 4:
    decrement_timer_and_dispatch_state();
    break;
  case 5:
    decrement_timer_and_dispatch_state();
  }
  return;
}
