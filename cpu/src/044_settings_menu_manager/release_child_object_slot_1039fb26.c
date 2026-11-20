/* @k10d release_child_object_slot_1039fb26 @ 0x1039fb26
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 4 and 1 on the object pointer stored at offset 4, then nulls that
 *   pointer.
 * summary:
 *   The function reads a pointer from param_1+4. If non-null, it performs a virtual call to
 *   slot 4 (offset 0x24) with a this-adjustment, then a virtual call to slot 1 (offset 0xc)
 *   with argument 3. Finally, it sets the pointer at param_1+4 to 0. This pattern is
 *   consistent with releasing or detaching a child object held by the parent structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_child_object_slot_1039fb26(cls_105642d8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1);
  }
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1->field_0x4 = 0;
  return;
}
