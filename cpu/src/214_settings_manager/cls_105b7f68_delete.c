/* @k10d cls_105b7f68_delete @ 0x104b32bc
 * name: verified (structural evidence: stores vtable 0x105b7f68 to *this; heap_free(this) under (param_2 & 1))
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7f68 (vtable 0x105b7f68): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7f68 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7f68_delete(cls_105b7f68 *param_1,uint param_2)

{
  if (param_1 != (cls_105b7f68 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b7f68/*ROM*/);
    param_1->field_0x14 = 0x105b8068/*ROM*/;
    param_1->field_0x18 = 0x105b8080/*ROM*/;
    param_1->field_0x1c = 0x105b8108/*ROM*/;
    cls_105b82fc_delete((cls_105b82fc *)&param_1->field_0x1c,0);
    cls_105b7500_delete(&param_1->field_0x18,0);
    cls_105a2c1c_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
