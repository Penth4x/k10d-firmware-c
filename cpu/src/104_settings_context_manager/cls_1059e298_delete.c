/* @k10d cls_1059e298_delete @ 0x10427386
 * name: verified (structural evidence: stores vtable 0x1059e298 to *this; heap_free(this) under (param_2 & 1))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e298 (vtable 0x1059e298): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e298 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e298_delete(cls_1059e298 *param_1,uint param_2)

{
  if (param_1 != (cls_1059e298 *)0x0) {
    param_1->field_0x1c = 0x1059e298/*ROM*/;
    cls_105a2bf8_delete(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
