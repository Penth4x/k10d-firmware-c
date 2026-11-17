/* @k10d dispatch_state_machine_000e8df4 @ 0x000e8df4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Routes execution to one of five handlers based on the value of global state variable
 *   _DAT_0003c21e.
 * summary:
 *   Checks the integer value of _DAT_0003c21e and calls a specific handler function for
 *   values 4 through 7. For value 8, it updates _DAT_0003c21e by calling
 *   check_and_run_two_routines with _DAT_0003c21a and 8 as arguments. The function acts as
 *   a simple switch statement dispatcher for a state machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000e8df4(void)

{
  if (_DAT_0003c21e == 4) {
    FUN_000ed6c8();
  }
  else if (_DAT_0003c21e == 5) {
    clear_bit_5_of_dat_00000005();
  }
  else if (_DAT_0003c21e == 6) {
    clear_bit3_of_dat_00000005();
  }
  else if (_DAT_0003c21e == 7) {
    FUN_000ed70a();
  }
  else if (_DAT_0003c21e == 8) {
    _DAT_0003c21e = check_and_run_two_routines(_DAT_0003c21a,8);
  }
  return;
}
