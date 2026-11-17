/* @k10d iterate_vtable_call_on_range_1049380e @ 0x1049380e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates over a pointer array range and invokes a virtual method on each element.
 * summary:
 *   The function first calls an external routine at 0x10494608. It then reads two pointers
 *   from offsets 0x48 and 0x4c of the object in param_1. If they differ, it loops through
 *   the array of pointers, dereferencing each to get an object, reading a vtable pointer at
 *   offset 0xc, and calling the virtual function at vtable offset 0x9c. The call passes a
 *   this-adjusted pointer (based on a short at vtable offset 0x98) and param_2 as
 *   arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_vtable_call_on_range_1049380e(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)0x10494608/*ROM*/)();
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (**(code **)(iVar2 + 0x9c))(*piVar1 + (int)*(short *)(iVar2 + 0x98),param_2);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x4c));
  }
  return;
}
