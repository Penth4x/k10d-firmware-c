/* @k10d run_state_machine_loop @ 0x000cee34
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Executes a do-while state machine driven by the global variable DAT_0003ce10 until it
 *   reaches zero.
 * summary:
 *   The function reads the current state from DAT_0003ce10, clears it, and dispatches to
 *   one of several sub-functions based on the state value (0xd through 0x12). Each branch
 *   updates the state variable to the next value, creating a loop that continues until the
 *   state becomes 0. The final value of DAT_0003ce10 is returned. No verified callee names
 *   are available to determine the specific subsystem or purpose of the states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t run_state_machine_loop(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0003ce10;
  do {
    DAT_0003ce10 = 0;
    switch(uVar2) {
    case 0xd:
      FUN_000d184e();
    case 0xc:
      uVar2 = process_status_flags_and_dispatch();
      break;
    case 0xe:
      zero_fill_two_byte_array(0x5d8,(uint16_t *)0x3d000);
      uVar2 = 0xc;
      break;
    case 0x10:
      initialize_state_variables_000cef92();
    case 0xf:
      uVar2 = 1;
      if (((DAT_0003ce06 & 1) != 0) && (iVar1 = toggle_bit2_of_dat_ce09(), iVar1 == 0)) {
        uVar2 = poll_event_and_dispatch_000ceff6();
      }
      break;
    case 0x11:
      uVar2 = FUN_000d0458();
      break;
    case 0x12:
      uVar2 = 0;
      break;
    default:
      uVar2 = update_status_flags_and_dispatch_000ceeac();
    }
  } while (uVar2 != 0);
  return DAT_0003ce10;
}
