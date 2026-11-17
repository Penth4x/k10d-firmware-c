/* @k10d check_flag_array_ready @ 0x1049849c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Checks if one or more flags in an array are non-zero and a status function returns 1.
 * summary:
 *   The function takes a pointer to an array of integers and an index or mode. For indices
 *   0 or 1, it checks if the corresponding array element is non-zero and calls
 *   wait_for_event_and_dispatch, returning 1 if both conditions are met. For index 2, it
 *   iterates through the first two elements (8 bytes total), requiring each non-zero
 *   element to be accompanied by a return value of 1 from wait_for_event_and_dispatch. It
 *   returns 1 if all checks pass, otherwise 0. The role of wait_for_event_and_dispatch is
 *   unknown, preventing a more specific camera-subsystem naming.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_array_ready(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0) || (param_2 == 1)) {
    if ((*(int *)(param_1 + param_2 * 4) != 0) && (iVar2 = wait_for_event_and_dispatch(__frv_reg_unset(4)), iVar2 == 1)) {
      uVar3 = 1;
    }
  }
  else if (param_2 == 2) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2) != 0) {
        iVar1 = wait_for_event_and_dispatch(__frv_reg_unset(4));
        if (iVar1 != 1) {
          return 0;
        }
        uVar3 = 1;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 8);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
