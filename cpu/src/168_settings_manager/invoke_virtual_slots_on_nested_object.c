/* @k10d invoke_virtual_slots_on_nested_object @ 0x1047c9d2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 4 on a nested object, then virtual slot 1 with argument 3 on the
 *   same object if non-null.
 * summary:
 *   The function dereferences the pointer at offset 4 of param_1 to obtain a nested object
 *   pointer. It first invokes virtual slot 4 (vtable offset 0x24) on that nested object,
 *   passing the this-adjusted pointer. It then re-reads the pointer at offset 4 and, if
 *   non-null, invokes virtual slot 1 (vtable offset 0xc) with argument 3. No camera-
 *   specific subsystem is identifiable from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slots_on_nested_object(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  return;
}
