/* @k10d cls_105c2b94_delete @ 0x104ed1ae
 * name: verified (structural evidence: stores vtable 0x105c2b94 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c2b94 (vtable 0x105c2b94): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c2b94 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c2b94_delete(cls_105c2b94 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (cls_105c2b94 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105c2b94/*ROM*/);
    if (param_1->field_0x4 != 0) {
      iVar1 = *(int *)param_1->field_0x4;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x4 + (int)*(short *)(iVar1 + 8)),3);
    }
    if (param_1->field_0x8 != 0) {
      iVar1 = *(int *)param_1->field_0x8;
      (((vtbl_entry*)(iVar1))[1].fn)
                ((void *)((int)param_1->field_0x8 + (int)*(short *)(iVar1 + 8)),3);
    }
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
