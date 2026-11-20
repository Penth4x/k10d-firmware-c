/* @k10d cls_105c39a4_delete @ 0x104f3656
 * name: verified (structural evidence: stores vtable 0x105c39a4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c39a4 (vtable 0x105c39a4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c39a4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c39a4_delete(cls_105c39a4 *param_1,uint param_2)

{
  if (param_1 != (cls_105c39a4 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105c39a4/*ROM*/);
    param_1->field_0x4 = 0x105c39dc/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[4] = (uint32_t)((void *)0x105c39f4/*ROM*/);
    cls_105a2af8_delete(&param_1->field_0x38,2);
    cls_105a2b50_delete(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
