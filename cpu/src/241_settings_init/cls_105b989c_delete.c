/* @k10d cls_105b989c_delete @ 0x104cf71a
 * name: verified (structural evidence: stores vtable 0x105b989c to *this; heap_free(this) under (param_2 & 1))
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b989c (vtable 0x105b989c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b989c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b989c_delete(cls_105b989c *param_1,uint param_2)

{
  if (param_1 != (cls_105b989c *)0x0) {
    param_1->field_0xc = (uint32_t)&DAT_105b989c/*ROM*/;
    cls_105b4bbc_delete((cls_105b4bbc *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
