/* @k10d iterate_vtable_entries_1049373e @ 0x1049373e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates over a range of pointers and invokes a virtual method on each entry.
 * summary:
 *   The function reads a start pointer from offset 0x48 and an end pointer from offset 0x4c
 *   of the object passed in param_1. It loops through the array of pointers between these
 *   bounds, dereferencing each to get a vtable pointer, and calls the virtual function at
 *   offset 0xbc with a this-adjustment from offset 0xb8. No specific camera subsystem is
 *   identified from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_vtable_entries_1049373e(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (**(code **)(iVar2 + 0xbc))(*piVar1 + (int)*(short *)(iVar2 + 0xb8));
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x4c));
  }
  return;
}
