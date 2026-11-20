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

void invoke_virtual_slots_on_nested_object(cls_105aa9dc *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1->field_0x4;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
