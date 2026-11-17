/* @k10d iterate_three_object_groups @ 0x10483952
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Loops over 9 indices in steps of 3, fetching objects via module_array_getter and
 *   dispatching virtual calls based on a slot-2 result.
 * summary:
 *   The function iterates 9 times (3 groups of 3). For each index, it calls
 *   module_array_getter to retrieve an object pointer. If non-null, it invokes virtual slot
 *   2 (offset 0x1c) to get a status/flag. If the result is 0, it calls virtual slot 4
 *   (offset 0x34); otherwise, it calls virtual slot 5 (offset 0x3c). The specific subsystem
 *   (e.g., AE, AF, WB) is not determinable from the generic virtual dispatch pattern and
 *   the single unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_three_object_groups(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 9;
  do {
    piVar1 = (int *)module_array_getter(param_1,iVar3);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1);
      if (iVar2 == 0) {
        (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
      }
      else {
        (**(code **)(*piVar1 + 0x3c))((int)*(short *)(*piVar1 + 0x38) + (int)piVar1);
      }
    }
    piVar1 = (int *)module_array_getter(param_1,iVar3 + 1);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1);
      if (iVar2 == 0) {
        (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
      }
      else {
        (**(code **)(*piVar1 + 0x3c))((int)*(short *)(*piVar1 + 0x38) + (int)piVar1);
      }
    }
    piVar1 = (int *)module_array_getter(param_1,iVar3 + 2);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1);
      if (iVar2 == 0) {
        (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
      }
      else {
        (**(code **)(*piVar1 + 0x3c))((int)*(short *)(*piVar1 + 0x38) + (int)piVar1);
      }
    }
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 3;
  } while (-1 < iVar4);
  return;
}
