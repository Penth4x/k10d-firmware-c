/* @k10d cls_10566478_delete @ 0x103b2ff0
 * name: verified (structural evidence: stores vtable 0x10566478 to *this; heap_free(this) under (param_2 & 1))
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10566478 (vtable 0x10566478): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10566478 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10566478_delete(cls_10566478 *param_1,uint param_2)

{
  if (param_1 != (cls_10566478 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105643d0/*ROM*/);
    cls_105b4254_delete((cls_105b4254 *)&param_1->field5_0x8,2);
    reset_vtable_and_free_if_flagged_104968f2(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
