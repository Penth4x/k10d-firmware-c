/* @k10d release_two_child_objects_1047a872 @ 0x1047a872
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 on two child objects, then virtual slot 1 with argument 3 on
 *   both if non-null.
 * summary:
 *   The function reads two object pointers from offsets 0x8 and 0x4 of the input structure.
 *   For each, it calls virtual slot 3 (vtable offset 0x24) with a this-adjusted pointer. It
 *   then re-reads both pointers and, if non-null, calls virtual slot 1 (vtable offset 0xc)
 *   with argument 3. This pattern is consistent with releasing or detaching two child
 *   components from a parent object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_child_objects_1047a872(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  return;
}
