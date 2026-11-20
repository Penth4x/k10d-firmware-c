/* @k10d cls_105b5d3c_delete @ 0x104a14fe
 * name: verified (structural evidence: stores vtable 0x105b5d3c to *this; heap_free(this) under (param_2 & 1))
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b5d3c (vtable 0x105b5d3c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b5d3c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5d3c_delete(cls_105b5d3c *param_1,uint param_2)

{
  if (param_1 != (cls_105b5d3c *)0x0) {
    param_1->field_0x1c = 0x105b5d3c/*ROM*/;
    lens_fw_update_teardown();
    cls_105b68e8_delete((cls_105b68e8 *)&param_1->field_0x24,2);
    cls_105b6358_delete((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
