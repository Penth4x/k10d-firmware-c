/* @k10d dispatch_state_machine_000cb842 @ 0x000cb842
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Loops through a state machine, calling a handler for each state until a handler returns
 *   zero.
 * summary:
 *   Reads a state index from DAT_0003ce10, clamping it to 1 if it is >= 13. It enters a do-
 *   while loop where a switch statement dispatches to one of five unknown handler functions
 *   based on the current state value. The loop continues until the called handler returns
 *   0, at which point the function exits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_machine_000cb842(void)

{
  uint uVar1;
  
  if (DAT_0003ce10 < 0xd) {
    uVar1 = (uint)DAT_0003ce10;
  }
  else {
    uVar1 = 1;
  }
  do {
    switch(uVar1) {
    case 1:
      uVar1 = dispatch_state_transition_000cb94e();
      break;
    case 2:
      uVar1 = FUN_000cdaa4();
      break;
    case 3:
      uVar1 = FUN_000cbb18();
      break;
    case 4:
    case 5:
    case 6:
    case 0xc:
      uVar1 = dispatch_state_machine_000cbc8e(__frv_reg_unset(4));
      break;
    default:
      uVar1 = dispatch_state_change_request(__frv_reg_unset(4));
    }
  } while (uVar1 != 0);
  return;
}
