/* @k10d release_two_object_slots_104ed0e4 @ 0x104ed0e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes virtual cleanup methods on two object pointers stored in a struct and nulls
 *   them out.
 * summary:
 *   The function checks offsets 4 and 8 of the input struct for non-null pointers. For
 *   each, it dereferences the pointer to get an object, then calls virtual slot 3 (vtable
 *   offset 0x24) and virtual slot 1 (vtable offset 0xc) with a this-adjustment and an
 *   argument of 3. Finally, it sets both struct fields to 0. This pattern is consistent
 *   with releasing or detaching two child objects or resources held by the parent struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_slots_104ed0e4(cls_105c2b94 *param_1)

{
  int iVar1;
  
  if (param_1->field_0x4 != 0) {
    iVar1 = *(int *)param_1->field_0x4;
    (((vtbl_entry*)(iVar1))[4].fn)
              ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[4].adj));
  }
  if (param_1->field_0x4 != 0) {
    iVar1 = *(int *)param_1->field_0x4;
    (((vtbl_entry*)(iVar1))[1].fn)
              ((void *)((int)param_1->field_0x4 + (int)*(short *)(iVar1 + 8)),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x8 != 0) {
    iVar1 = *(int *)param_1->field_0x8;
    (((vtbl_entry*)(iVar1))[4].fn)
              ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[4].adj));
  }
  if (param_1->field_0x8 != 0) {
    iVar1 = *(int *)param_1->field_0x8;
    (((vtbl_entry*)(iVar1))[1].fn)
              ((void *)((int)param_1->field_0x8 + (int)*(short *)(iVar1 + 8)),3);
  }
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  return;
}
