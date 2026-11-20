/* @k10d cls_105d5584_delete @ 0x1050d316
 * name: verified (structural evidence: stores vtable 0x105d5584 to *this; heap_free(this) under (param_2 & 1))
 * unit: 270_test_mode_screen (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d5584 (vtable 0x105d5584): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d5584 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d5584_delete(cls_105d5584 *param_1,uint param_2)

{
  if (param_1 != (cls_105d5584 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105d5584/*ROM*/);
    param_1->field_0x4 = (uintptr_t)(&DAT_105d55cc/*ROM*/);
    param_1->field_0x8 = (uintptr_t)(&DAT_105d55e4/*ROM*/);
    ((uint32_t *)&(param_1->field_0xc))[4] = (uint32_t)(&DAT_105d5604/*ROM*/);
    cls_105a2af8_delete(&param_1->field_0x68,2);
    cls_105a2be0_delete(&param_1->field_0x60,2);
    cls_105a2b50_delete(&param_1->field_0xc,0);
    reset_vtable_and_free_if_owned_10428142(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
