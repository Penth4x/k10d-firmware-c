/* @k10d cls_105a7640_delete @ 0x10462b80
 * name: verified (structural evidence: stores vtable 0x105a7640 to *this; heap_free(this) under (param_2 & 1))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a7640 (vtable 0x105a7640): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a7640 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a7640_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105a7640/*ROM*/;
    param_1[1] = 0x105a76d0/*ROM*/;
    cls_105a7bf0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
