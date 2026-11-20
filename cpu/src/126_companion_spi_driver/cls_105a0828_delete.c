/* @k10d cls_105a0828_delete @ 0x1043d5b0
 * name: verified (structural evidence: stores vtable 0x105a0828 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a0828 (vtable 0x105a0828): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a0828 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a0828_delete(cls_105a0828 *param_1,uint param_2)

{
  if (param_1 != (cls_105a0828 *)0x0) {
    param_1->field_0x4 = 0x105a0828/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = (uint32_t)((void *)0x105a08b8/*ROM*/);
    cls_1059e330_delete((cls_1059e330 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
