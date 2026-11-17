/* @k10d dispatch_on_state_word @ 0x000e98b2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Switches on DAT_0003c219 and calls one of several handlers based on the value.
 * summary:
 *   Reads the 16-bit state word at DAT_0003c219 and branches on values 0x10-0x16. For 0x10
 *   it checks bit 4 of DAT_0003c003 to choose between reset_state_by_mode and
 *   update_state_flags_and_dispatch. For 0x13 it updates _DAT_0003c21e via
 *   check_and_run_two_routines. Other cases call single handlers. No MMIO or known
 *   subsystem registers are touched directly.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_state_word(void)

{
  switch(DAT_0003c219) {
  case 0x10:
    if ((DAT_0003c003 & 0x10) == 0) {
      reset_state_by_mode(0,0);
    }
    else {
      update_state_flags_and_dispatch();
    }
    break;
  case 0x11:
    call_four_initialization_routines_000e25aa();
    break;
  case 0x12:
    process_camera_state_flags_000c4a56();
    break;
  case 0x13:
    _DAT_0003c21e = check_and_run_two_routines(_DAT_0003c21a,_DAT_0003c21e);
    break;
  case 0x15:
    dispatch_state_machine_000e8c68();
    break;
  case 0x16:
    dispatch_on_state_value_000e8d7c();
  }
  return;
}
