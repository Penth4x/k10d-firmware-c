/* @k10d cls_105c23c4_delete @ 0x104ea76c
 * name: verified (structural evidence: stores vtable 0x105c23c4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c23c4 (vtable 0x105c23c4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c23c4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c23c4_delete(cls_105c23c4 *param_1,uint param_2)

{
  if (param_1 != (cls_105c23c4 *)0x0) {
    param_1->field_0x14 = (uint)(0x105c23c4);
    reset_vtable_and_free_if_owned_104df8f6((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
