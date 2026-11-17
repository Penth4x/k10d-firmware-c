/* @k10d check_and_acquire_resource @ 0x1049853c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Checks if a resource slot is active and attempts to acquire it via a helper function.
 * summary:
 *   The function takes a pointer to an array of integers (param_1) and an index (param_2).
 *   If the index is 0 or 1, it checks if the corresponding slot is non-zero and calls
 *   dispatch_event_via_virtual_call. If the index is 2, it iterates through the first two
 *   slots (0 and 4), checking if they are non-zero and calling
 *   dispatch_event_via_virtual_call for each. It returns 1 if the helper function succeeds
 *   (returns non-zero) for the active slots, or 0 otherwise. The specific nature of the
 *   resource and the helper function is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_acquire_resource(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((param_2 == 0) || (param_2 == 1)) {
    if ((*(int *)(param_1 + param_2 * 4) != 0) && (iVar2 = dispatch_event_via_virtual_call(__frv_reg_unset(4)), iVar2 != 0)) {
      uVar3 = 1;
    }
  }
  else if (param_2 == 2) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2) != 0) {
        iVar1 = dispatch_event_via_virtual_call(__frv_reg_unset(4));
        if (iVar1 == 0) {
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
