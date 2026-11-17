/* @k10d iterate_vtable_callers @ 0x10491bce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of objects and calls a virtual method on each, returning true if
 *   any call returns non-zero.
 * summary:
 *   The function reads a start pointer from offset 0xc and an end pointer from offset 0x10
 *   of the object in param_1. It loops through the array of pointers, dereferencing each to
 *   get an object, then calling a virtual function (slot at offset 0x2c) with the object
 *   (adjusted by a short at 0x28) and the two additional parameters. It accumulates a
 *   boolean result, returning true if any virtual call returned a non-zero value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool iterate_vtable_callers(int param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  bVar2 = false;
  if (piVar1 != *(int **)(param_1 + 0x10)) {
    do {
      iVar3 = *(int *)(*piVar1 + 8);
      iVar3 = (**(code **)(iVar3 + 0x2c))(*piVar1 + (int)*(short *)(iVar3 + 0x28),param_2,param_3);
      bVar2 = iVar3 != 0 || bVar2 != false;
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x10));
  }
  return bVar2;
}
