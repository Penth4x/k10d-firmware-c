/* @k10d cls_1059e128_delete @ 0x10426f42
 * name: verified (structural evidence: stores vtable 0x1059e128 to *this; heap_free(this) under (param_2 & 1))
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e128 (vtable 0x1059e128): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e128 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

void cls_1059e128_delete(cls_1059e128 *param_1,uint param_2)

{
  if (param_1 != (cls_1059e128 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_1059e128/*ROM*/);
    param_1->field_0x4 = (uintptr_t)(&DAT_1059e1c0/*ROM*/);
    param_1->field_0x18 = (uintptr_t)(&DAT_1059e1e0/*ROM*/);
    param_1->field_0x2c = (uintptr_t)(&DAT_1059e210/*ROM*/);
    param_1->field_0x30 = (uintptr_t)(&DAT_1059e228/*ROM*/);
    param_1->field_0x34 = (uintptr_t)(&DAT_1059e248/*ROM*/);
    reset_vtable_and_free_if_flagged_104968f2(&param_1->field_0x34,0);
    reset_vtable_and_free_if_owned_104281c2(&param_1->field_0x30,0);
    cls_105a2c1c_delete(&param_1->field_0x1c,0);
    cls_1059e3b0_delete((cls_1059e3b0 *)((uint8_t *)&param_1->field_0x4 + 0x4),0);
    reset_vtable_and_free_if_owned_10428142(&param_1->field_0x4,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
