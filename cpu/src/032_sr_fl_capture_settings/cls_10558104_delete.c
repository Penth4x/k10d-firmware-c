/* @k10d cls_10558104_delete @ 0x10371830
 * name: verified (structural evidence: stores vtable 0x10558104 to *this; heap_free(this) under (param_2 & 1))
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10558104 (vtable 0x10558104): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10558104 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10558104_delete(cls_10558104 *param_1,uint param_2)

{
  if (param_1 != (cls_10558104 *)0x0) {
    param_1->field_0x0 = (uint)&DAT_10558104/*ROM*/;
    destroy_object_and_free_heap_1052cda2(&param_1->field_0x4a8,2);
    cls_105b9458_delete((cls_105b9458 *)&param_1->field_0x294,2);
    cls_105b9458_delete((cls_105b9458 *)&param_1->field_0x80,2);
    cls_10598538_delete((cls_10598538 *)&param_1->field_0x20,2);
    cls_10557c88_delete((cls_10557c88 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
