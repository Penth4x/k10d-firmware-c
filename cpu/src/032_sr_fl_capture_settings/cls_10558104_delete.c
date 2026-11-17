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

void cls_10558104_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_10558104/*ROM*/;
    destroy_object_and_free_heap_1052cda2(param_1 + 0x12a,2);
    cls_105b9458_delete(param_1 + 0xa5,2);
    cls_105b9458_delete(param_1 + 0x20,2);
    cls_10598538_delete(param_1 + 8,2);
    cls_10557c88_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
