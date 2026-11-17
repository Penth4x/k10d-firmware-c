/* @k10d iterate_virtual_handlers @ 0x1049432e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of objects, calling a virtual method on each until one returns
 *   non-zero.
 * summary:
 *   The function first checks if the object at param_1+4 matches param_2, returning param_1
 *   if so. Otherwise, it iterates through a range of pointers defined by fields at
 *   param_1+0x18 and param_1+0x1c. For each pointer, it performs a virtual call (slot 0x25)
 *   with param_2 as an argument. If the call returns non-zero, that value is returned;
 *   otherwise, it continues to the next item. Returns 0 if no handler matches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_virtual_handlers(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) == param_2) && (param_1 != 0)) {
    return param_1;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      iVar2 = (**(code **)(iVar2 + 0xcc))(*piVar1 + (int)*(short *)(iVar2 + 200),param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x1c));
  }
  return 0;
}
