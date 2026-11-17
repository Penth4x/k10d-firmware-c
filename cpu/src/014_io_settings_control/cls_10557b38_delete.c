/* @k10d cls_10557b38_delete @ 0x1036945c
 * name: verified (structural evidence: stores vtable 0x10557b38 to *this; heap_free(this) under (param_2 & 1))
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10557b38 (vtable 0x10557b38): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10557b38 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10557b38_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_10557b38/*ROM*/;
    cls_105b9458_delete(param_1 + 0x26,2);
    destroy_five_member_objects(param_1 + 0xf,2);
    cls_10558fd4_delete(param_1 + 5,2);
    cls_10557c88_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
