/* @k10d dispatch_state_machine_000d52dc @ 0x000d52dc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple status flags to determine a state and calls a corresponding handler
 *   function.
 * summary:
 *   The function reads several global status variables (DAT_0003ce06, DAT_0003cbd4,
 *   DAT_0003cb80, DAT_0003cc95, DAT_0003cbef) to determine a control flow path. It calls
 *   adjust_byte_counter_by_mode and update_state_flags_and_values unconditionally in the
 *   main branch, then conditionally calls FUN_000d5358 or FUN_000d539c based on specific
 *   bit patterns in the status registers. It also modifies DAT_0003cb80 and DAT_0003cbd4 to
 *   update state flags. The return value indicates the selected state or action code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_state_machine_000d52dc(void)

{
  int iVar1;
  int iVar2;
  
  if (((DAT_0003ce06 & 8) == 0) && ((DAT_0003cbd4 & 0x80) != 0)) {
    iVar1 = FUN_000d5358();
  }
  else {
    adjust_byte_counter_by_mode();
    update_state_flags_and_values();
    iVar1 = 2;
    if (((DAT_0003cb80 & 0x40) == 0) && ((DAT_0003cb80 & 0x80) == 0)) {
      iVar1 = 4;
      if ((DAT_0003cb80 & 2) == 0) {
        iVar2 = (int)DAT_0003cc95;
        if (DAT_0003cc95 < '\0') {
          iVar2 = -iVar2;
        }
        if ((iVar2 < 3) && ((DAT_0003cbef & 0x20) == 0)) {
          if ((DAT_0003cb80 & 8) != 0) {
            iVar1 = FUN_000d5358();
          }
        }
        else if ((DAT_0003cbd4 & 0x40) != 0) {
          DAT_0003cb80 = DAT_0003cb80 | 0x40;
          iVar1 = 2;
        }
      }
      if (iVar1 == 4) {
        DAT_0003cbd4 = DAT_0003cbd4 & 0xfd | 1;
        iVar1 = FUN_000d539c();
      }
    }
  }
  return iVar1;
}
