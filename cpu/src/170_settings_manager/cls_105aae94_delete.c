/* @k10d cls_105aae94_delete @ 0x1047e13e
 * name: verified (structural evidence: stores vtable 0x105aae94 to *this; heap_free(this) under (param_2 & 1))
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aae94 (vtable 0x105aae94): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aae94 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aae94_delete(cls_105aae94 *param_1,uint param_2)

{
  if (param_1 != (cls_105aae94 *)0x0) {
    param_1->field_0xc = (uint8_t)&DAT_105aae94/*ROM*/;
    cls_105aaebc_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
