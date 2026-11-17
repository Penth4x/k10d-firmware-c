/* @k10d iterate_range_and_call_virtual_1049463e @ 0x1049463e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a pointer range and invokes a virtual method on each element.
 * summary:
 *   The function reads a start pointer from offset 0x18 and an end pointer from offset 0x1c
 *   of the object in param_1. It loops through the array of pointers, dereferencing each to
 *   get an object, then calls a virtual function (slot 0xc4/4 = 49) on that object. The
 *   virtual call passes the object pointer adjusted by a this-adjustment value stored at
 *   offset 0xc0 of the vtable. No specific camera subsystem is identifiable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_range_and_call_virtual_1049463e(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (**(code **)(iVar2 + 0xc4))(*piVar1 + (int)*(short *)(iVar2 + 0xc0));
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x1c));
  }
  return;
}
