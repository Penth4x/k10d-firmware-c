/* @k10d cls_1059e288_delete @ 0x10427236
 * name: verified (structural evidence: stores vtable 0x1059e288 to *this; heap_free(this) under (param_2 & 1))
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e288 (vtable 0x1059e288): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e288 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e288_delete(cls_1059e288 *param_1,uint param_2)

{
  if (param_1 != (cls_1059e288 *)0x0) {
    param_1->field_0x14 = (uint32_t)&DAT_1059e288/*ROM*/;
    cls_105a2bf8_delete(&param_1->field_0x4,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
