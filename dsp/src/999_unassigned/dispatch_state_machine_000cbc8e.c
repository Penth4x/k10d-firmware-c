/* @k10d dispatch_state_machine_000cbc8e @ 0x000cbc8e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Loops through a state machine, calling handlers based on the current state value until
 *   it reaches zero.
 * summary:
 *   The function implements a do-while loop that dispatches to various handler functions
 *   (check_and_set_flag_bit2_000cbd12, FUN_000cbd90, etc.) based on the value of param_1.
 *   It updates param_1 with the return value of the handler to determine the next state,
 *   continuing until the state becomes 0. It also performs specific side effects in certain
 *   states, such as setting bits in DAT_0003ce06 and storing values in DAT_0003ce10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_machine_000cbc8e(int param_1)

{
  uint32_t uVar1;
  
  do {
    switch(param_1) {
    case 4:
      FUN_000cd58c();
      reset_two_word_state();
      FUN_000d5642(DAT_0003f4a4 & 0xf0);
      DAT_0003ce06 = DAT_0003ce06 | 8;
    case 6:
      param_1 = FUN_000cbd90();
      break;
    default:
      param_1 = check_and_set_flag_bit2_000cbd12();
      break;
    case 7:
      param_1 = evaluate_state_flags_and_dispatch();
      break;
    case 9:
      uVar1 = 0;
      if (((DAT_0003ce06 & 2) != 0) && ((DAT_0003ce05 & 0x80) == 0)) {
        uVar1 = 1;
      }
      update_ce06_status_flags(uVar1);
    case 8:
      DAT_0003ce10 = (uint8_t)param_1;
      param_1 = 0;
      break;
    case 0xc:
      param_1 = dispatch_state_transition_000cbdd8();
    }
  } while (param_1 != 0);
  return 0;
}
