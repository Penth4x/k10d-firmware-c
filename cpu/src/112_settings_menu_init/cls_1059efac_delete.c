/* @k10d cls_1059efac_delete @ 0x1042f5a0
 * name: verified (structural evidence: stores vtable 0x1059efac to *this; heap_free(this) under (param_2 & 1))
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059efac (vtable 0x1059efac): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059efac to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059efac_delete(cls_1059efac *param_1,uint param_2)

{
  if (param_1 != (cls_1059efac *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x1059efac/*ROM*/);
    param_1->field_0x14 = 0x1059efdc/*ROM*/;
    param_1->field_0xc8 = 0x1059ef9c/*ROM*/;
    param_1->field_0xb4 = (uintptr_t)((void *)0x1059ef9c/*ROM*/);
    param_1->field_0xa0 = 0x1059ef9c/*ROM*/;
    param_1->field_0x7c = (uintptr_t)((void *)0x1059ef9c/*ROM*/);
    param_1->field_0x68 = 0x1059ef9c/*ROM*/;
    param_1->field_0x54 = 0x1059ef9c/*ROM*/;
    cls_105a2bf8_delete(&param_1->field_0x28,2);
    cls_105a2bf8_delete(&param_1->field_0x20,2);
    cls_105a2b50_delete((cls_105a2b50 *)&param_1->field_0x4,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
