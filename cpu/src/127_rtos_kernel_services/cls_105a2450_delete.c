/* @k10d cls_105a2450_delete @ 0x10452ab8
 * name: verified (structural evidence: stores vtable 0x105a2450 to *this; heap_free(this) under (param_2 & 1))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a2450 (vtable 0x105a2450): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a2450 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2450_delete(cls_105a2450 *param_1,uint param_2)

{
  if (param_1 != (cls_105a2450 *)0x0) {
    param_1->field_0x4 = 0x105a2450/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x105a2480/*ROM*/;
    cls_1059e2e0_delete((cls_1059e2e0 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
