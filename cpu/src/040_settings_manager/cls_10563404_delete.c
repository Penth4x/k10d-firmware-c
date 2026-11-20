/* @k10d cls_10563404_delete @ 0x103986fe
 * name: verified (structural evidence: stores vtable 0x10563404 to *this; heap_free(this) under (param_2 & 1))
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10563404 (vtable 0x10563404): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10563404 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10563404_delete(cls_10563404 *param_1,uint param_2)

{
  if (param_1 != (cls_10563404 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_10563404/*ROM*/;
    *(uint32_t *)&param_1->field_0x4 = (uint32_t)&DAT_10563474/*ROM*/;
    *(uint32_t *)&param_1->field_0x8 = (uint32_t)&DAT_1056349c/*ROM*/;
    cls_10563dd8_delete((cls_10563dd8 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
