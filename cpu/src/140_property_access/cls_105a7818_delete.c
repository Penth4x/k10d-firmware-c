/* @k10d cls_105a7818_delete @ 0x10463eb4
 * name: verified (structural evidence: stores vtable 0x105a7818 to *this; heap_free(this) under (param_2 & 1))
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a7818 (vtable 0x105a7818): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a7818 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a7818_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105a7818/*ROM*/;
    param_1[1] = 0x105a78a8/*ROM*/;
    cls_105a2be0_delete(param_1 + 0x14,2);
    cls_105a7bf0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
