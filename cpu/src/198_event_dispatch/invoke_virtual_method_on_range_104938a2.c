/* @k10d invoke_virtual_method_on_range_104938a2 @ 0x104938a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates over a pointer range and calls a virtual method on each element.
 * summary:
 *   The function reads a start pointer from offset 0x48 and an end pointer from offset 0x4c
 *   of the object in param_1. It loops through the array of pointers, dereferencing each to
 *   get an object, then performs a virtual call using the vtable at offset 0x5c of that
 *   object's vtable. The this-pointer is adjusted by the short value at vtable offset 0x58.
 *   No specific camera subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_range_104938a2(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (**(code **)(iVar2 + 0x5c))(*piVar1 + (int)*(short *)(iVar2 + 0x58));
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x4c));
  }
  return;
}
