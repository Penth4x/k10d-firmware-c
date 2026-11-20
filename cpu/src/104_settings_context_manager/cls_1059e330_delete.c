/* @k10d cls_1059e330_delete @ 0x10427708
 * name: verified (structural evidence: stores vtable 0x1059e330 to *this; heap_free(this) under (param_2 & 1))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e330 (vtable 0x1059e330): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e330 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e330_delete(cls_1059e330 *param_1,uint param_2)

{
  if (param_1 != (cls_1059e330 *)0x0) {
    param_1->field_0x4 = 0x1059e330/*ROM*/;
    param_1->field_0x8 = 0x1059e358/*ROM*/;
    cls_1059e430_delete((cls_1059e430 *)&param_1->field_0x8,0);
    cls_1059e2b8_delete((int)(param_1),(uint)(0));
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
