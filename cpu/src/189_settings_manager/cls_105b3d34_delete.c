/* @k10d cls_105b3d34_delete @ 0x1048d126
 * name: verified (structural evidence: stores vtable 0x105b3d34 to *this; heap_free(this) under (param_2 & 1))
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b3d34 (vtable 0x105b3d34): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b3d34 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3d34_delete(cls_105b3d34 *param_1,uint param_2)

{
  uint16_t *puVar1;
  
  if (param_1 != (cls_105b3d34 *)0x0) {
    param_1->field_0x20 = (uintptr_t)(&DAT_105b3d34/*ROM*/);
    puVar1 = (uint16_t *)((uintptr_t)(param_1->field_0x30));
    if (puVar1 != (uint16_t *)0x0) {
      (((vtbl_entry*)(*(int *)(puVar1 + 0x10)))[1].fn)
                ((int)*(short *)(*(int *)(puVar1 + 0x10) + 8) + (int)puVar1,3);
    }
    reset_vtable_and_free_if_owned_1048c4e4((int)(param_1),(uint)(0));
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
