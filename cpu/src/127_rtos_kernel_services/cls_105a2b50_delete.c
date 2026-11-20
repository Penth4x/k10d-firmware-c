/* @k10d cls_105a2b50_delete @ 0x10459a78
 * name: verified (structural evidence: stores vtable 0x105a2b50 to *this; heap_free(this) under (param_2 & 1))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a2b50 (vtable 0x105a2b50): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a2b50 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2b50_delete(cls_105a2b50 *param_1,uint param_2)

{
  if (param_1 != (cls_105a2b50 *)0x0) {
    *(uint32_t *)&param_1->field_0x10 = (uint32_t)&DAT_105a2b50/*ROM*/;
    cls_105a2b30_delete(&param_1->field_0x14,2);
    cls_105a2c1c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
