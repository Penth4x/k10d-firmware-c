/* @k10d cls_105626c8_delete @ 0x10391af4
 * name: verified (structural evidence: stores vtable 0x105626c8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105626c8 (vtable 0x105626c8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105626c8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105626c8_delete(cls_105626c8 *param_1,uint param_2)

{
  if (param_1 != (cls_105626c8 *)0x0) {
    param_1->field_0x14 = 0x105626c8/*ROM*/;
    cls_105a2be0_delete(&param_1->field_0xc,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
