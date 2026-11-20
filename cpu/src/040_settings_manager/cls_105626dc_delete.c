/* @k10d cls_105626dc_delete @ 0x10391d60
 * name: verified (structural evidence: stores vtable 0x105626dc to *this; heap_free(this) under (param_2 & 1))
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105626dc (vtable 0x105626dc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105626dc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105626dc_delete(cls_105626dc *param_1,uint param_2)

{
  if (param_1 != (cls_105626dc *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_105626dc/*ROM*/;
    cls_10563114_delete((cls_10563114 *)&param_1->field_0x8,2);
    cls_10562b98_delete((cls_10562b98 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
