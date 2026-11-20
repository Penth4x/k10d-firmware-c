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

void release_two_child_objects_1047a872(cls_105aa710 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1->field_0x8;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x4;
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[4].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj));
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  return;
}
