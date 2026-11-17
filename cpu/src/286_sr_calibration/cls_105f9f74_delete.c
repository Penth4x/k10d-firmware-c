/* @k10d cls_105f9f74_delete @ 0x1052bd98
 * name: verified (structural evidence: stores vtable 0x105f9f74 to *this; heap_free(this) under (param_2 & 1))
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105f9f74 (vtable 0x105f9f74): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105f9f74 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105f9f74_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x2b18) = 0x105f9f74/*ROM*/;
    cls_105ba124_delete((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
