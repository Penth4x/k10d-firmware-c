/* @k10d cls_105639fc_delete @ 0x1039afac
 * name: verified (structural evidence: stores vtable 0x105639fc to *this; heap_free(this) under (param_2 & 1))
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105639fc (vtable 0x105639fc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105639fc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105639fc_delete(cls_105639fc *param_1,uint param_2)

{
  if (param_1 != (cls_105639fc *)0x0) {
    param_1->field_0x0 = (uint32_t)&DAT_105639fc/*ROM*/;
    param_1->field_0x4 = (uint32_t)&DAT_10563a6c/*ROM*/;
    param_1->field_0x8 = (uint32_t)&DAT_10563a94/*ROM*/;
    cls_10563dd8_delete((cls_10563dd8 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
