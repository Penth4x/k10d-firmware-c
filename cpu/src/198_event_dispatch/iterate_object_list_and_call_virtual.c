/* @k10d iterate_object_list_and_call_virtual @ 0x10493622
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of objects and calls a virtual method on each, OR-ing the
 *   boolean results.
 * summary:
 *   The function reads a start and end pointer from offsets 0x48 and 0x4c of the input
 *   structure. It loops through the array of object pointers, invoking a virtual function
 *   (slot 9) on each object's vtable. The return value is the logical OR of the initial
 *   value from any_item_predicate_true and the results of each virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint iterate_object_list_and_call_virtual(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = any_item_predicate_true(__frv_reg_unset(4));
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar3 = *(int *)(*piVar2 + 0xc);
      iVar3 = (**(code **)(iVar3 + 0x4c))(*piVar2 + (int)*(short *)(iVar3 + 0x48));
      uVar1 = (uint)(iVar3 != 0 || uVar1 != 0);
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x4c));
  }
  return uVar1;
}
