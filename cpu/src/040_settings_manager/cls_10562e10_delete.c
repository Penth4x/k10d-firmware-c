/* @k10d cls_10562e10_delete @ 0x10395b84
 * name: verified (structural evidence: stores vtable 0x10562e10 to *this; heap_free(this) under (param_2 & 1))
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10562e10 (vtable 0x10562e10): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10562e10 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10562e10_delete(cls_10562e10 *param_1,uint param_2)

{
  if (param_1 != (cls_10562e10 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_10562e10/*ROM*/;
    free_heap_if_flagged_1045c402(&param_1->field_0xbc,2);
    cls_105639fc_delete((cls_105639fc *)&param_1->field_0x8,2);
    cls_10562b98_delete((cls_10562b98 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
