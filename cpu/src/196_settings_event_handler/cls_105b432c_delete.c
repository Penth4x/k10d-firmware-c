/* @k10d cls_105b432c_delete @ 0x10492dd6
 * name: verified (structural evidence: stores vtable 0x105b432c to *this; heap_free(this) under (param_2 & 1))
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b432c (vtable 0x105b432c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b432c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b432c_delete(cls_105b432c *param_1,uint param_2)

{
  if (param_1 != (cls_105b432c *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b432c/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[4] = (uint32_t)((void *)0x105b435c/*ROM*/);
    cls_105a2bf8_delete(&param_1->field_0x34,2);
    cls_105a2bf8_delete(&param_1->field_0x2c,2);
    cls_105a2be0_delete(&param_1->field_0x24,2);
    cls_105a2b50_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
