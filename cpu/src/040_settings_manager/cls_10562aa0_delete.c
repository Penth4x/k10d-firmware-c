/* @k10d cls_10562aa0_delete @ 0x10393f78
 * name: verified (structural evidence: stores vtable 0x10562aa0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10562aa0 (vtable 0x10562aa0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10562aa0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10562aa0_delete(cls_10562aa0 *param_1,uint param_2)

{
  if (param_1 != (cls_10562aa0 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_10562aa0/*ROM*/;
    cls_10563694_delete((cls_10563694 *)&param_1->field_0x8,2);
    cls_10562b98_delete((cls_10562b98 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
