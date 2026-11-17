/* @k10d check_two_or_four_slots_ready @ 0x104984ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Checks up to four 32-bit slots in an array for non-zero values and calls a helper to
 *   test readiness.
 * summary:
 *   The function branches on param_2. If param_2 is 0 or 1, it checks the slot at param_1 +
 *   param_2*4; if non-zero, it calls wait_for_event_and_dispatch and returns 1 if that call
 *   returns 0. If param_2 is 2, it loops through two slots (offsets 0 and 4) in param_1,
 *   returning 1 immediately if a non-zero slot is found and wait_for_event_and_dispatch
 *   returns 0. Otherwise it returns 0. The role of wait_for_event_and_dispatch is unknown,
 *   but it appears to be a status or readiness check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_or_four_slots_ready(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0) || (param_2 == 1)) {
    if ((*(int *)(param_1 + param_2 * 4) != 0) && (iVar2 = wait_for_event_and_dispatch(__frv_reg_unset(4)), iVar2 == 0)) {
      uVar3 = 1;
    }
  }
  else if (param_2 == 2) {
    iVar2 = 0;
    do {
      if ((*(int *)(param_1 + iVar2) != 0) && (iVar1 = wait_for_event_and_dispatch(__frv_reg_unset(4)), iVar1 == 0)) {
        return 1;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 8);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
