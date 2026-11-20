/* @k10d cls_105a1f0c_delete @ 0x1044d536
 * name: verified (structural evidence: stores vtable 0x105a1f0c to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a1f0c (vtable 0x105a1f0c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a1f0c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a1f0c_delete(cls_105a1f0c *param_1,uint param_2)

{
  if (param_1 != (cls_105a1f0c *)0x0) {
    param_1->field_0x4 = 0x105a1f0c/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x105a1f3c/*ROM*/;
    cls_1059e2e0_delete((cls_1059e2e0 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
