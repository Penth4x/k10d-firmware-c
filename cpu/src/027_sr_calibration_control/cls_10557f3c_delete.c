/* @k10d cls_10557f3c_delete @ 0x1036eed2
 * name: verified (structural evidence: stores vtable 0x10557f3c to *this; heap_free(this) under (param_2 & 1))
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10557f3c (vtable 0x10557f3c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10557f3c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10557f3c_delete(cls_10557f3c *param_1,uint param_2)

{
  if (param_1 != (cls_10557f3c *)0x0) {
    param_1->field_0x0 = (uint32_t)&DAT_10557f3c/*ROM*/;
    param_1->field_0x24 = (uint32_t)&DAT_10557fb4/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0xbc,2);
    free_heap_if_flagged_1045c402(&param_1->field_0xa8,2);
    cls_10559760_delete((cls_10559760 *)&param_1->field_0x80,2);
    cls_10599780_delete((cls_10599780 *)&param_1->field_0x58,2);
    cls_10559e7c_delete((cls_10559e7c *)&param_1->field_0x30,2);
    cls_105a2c1c_delete(&param_1->field_0x14,0);
    cls_10557c88_delete((cls_10557c88 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
