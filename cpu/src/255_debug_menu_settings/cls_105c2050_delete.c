/* @k10d cls_105c2050_delete @ 0x104ea236
 * name: verified (structural evidence: stores vtable 0x105c2050 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c2050 (vtable 0x105c2050): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c2050 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c2050_delete(cls_105c2050 *param_1,uint param_2)

{
  if (param_1 != (cls_105c2050 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105c2050/*ROM*/);
    param_1->field_0x4 = 0x105c2098/*ROM*/;
    param_1->field_0x8 = 0x105c20b0/*ROM*/;
    reset_vtable_and_free_if_owned_10428142(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_owned_104281c2(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
