/* @k10d release_child_object_slot_1052c8cc @ 0x1052c8cc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 on the object pointer stored at offset 8 of the input, then
 *   nulls the pointer.
 * summary:
 *   The function reads a pointer from param_1 + 8. If non-null, it performs a virtual call
 *   to slot 3 (offset 0x1c) of that object, passing 0 as the argument. It then sets the
 *   pointer at param_1 + 8 to 0. This is a standard cleanup/release pattern for a member
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_child_object_slot_1052c8cc(cls_105fa6ac *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1,0);
    param_1->field_0x8 = 0;
  }
  return;
}
