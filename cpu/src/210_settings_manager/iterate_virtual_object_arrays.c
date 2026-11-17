/* @k10d iterate_virtual_object_arrays @ 0x104abdbc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over two arrays of object pointers, calling a virtual method on each and
 *   returning early if any call returns zero.
 * summary:
 *   The function reads two array pointers from offsets 0x20 and 0x24 of the input object.
 *   It first calls a virtual method (slot 3) on an object at offset 0x28. It then loops
 *   through the first array (2 elements) and the second array (3 elements), calling a
 *   virtual method (slot 5) on each element. If any of these virtual calls returns 0, the
 *   function returns 0; otherwise, it returns 1. The specific camera subsystem role is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_virtual_object_arrays(void *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x28) + 4);
  (**(code **)(iVar3 + 0x1c))(*(int *)((int)param_1 + 0x28) + (int)*(short *)(iVar3 + 0x18),0);
  uVar2 = 0;
  do {
    piVar1 = *(int **)(uVar2 * 4 + *(int *)((int)param_1 + 0x20));
    iVar3 = *piVar1;
    iVar3 = (**(code **)(iVar3 + 0x2c))((int)piVar1 + (int)*(short *)(iVar3 + 0x28));
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  uVar2 = 0;
  do {
    piVar1 = *(int **)(uVar2 * 4 + *(int *)((int)param_1 + 0x24));
    iVar3 = *piVar1;
    iVar3 = (**(code **)(iVar3 + 0x2c))((int)piVar1 + (int)*(short *)(iVar3 + 0x28));
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 3);
  return 1;
}
