/* @k10d cls_105d4190_delete @ 0x104f9212
 * name: verified (structural evidence: stores vtable 0x105d4190 to *this; heap_free(this) under (param_2 & 1))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d4190 (vtable 0x105d4190): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d4190 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d4190_delete(cls_105d4190 *param_1,uint param_2)

{
  if (param_1 != (cls_105d4190 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105d4190/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)((void *)0x105d41c0/*ROM*/);
    cls_105a2be0_delete(&param_1->field_0x118,2);
    cls_1059e430_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
