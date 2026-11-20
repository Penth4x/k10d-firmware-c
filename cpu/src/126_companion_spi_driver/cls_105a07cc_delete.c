/* @k10d cls_105a07cc_delete @ 0x1043d2b4
 * name: verified (structural evidence: stores vtable 0x105a07cc to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a07cc (vtable 0x105a07cc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a07cc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a07cc_delete(cls_105a07cc *param_1,uint param_2)

{
  if (param_1 != (cls_105a07cc *)0x0) {
    param_1->field_0x4 = 0x105a07cc/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x105a07fc/*ROM*/;
    cls_1059e330_delete((cls_1059e330 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
