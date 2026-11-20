/* @k10d cls_105b9674_delete @ 0x104ce768
 * name: verified (structural evidence: stores vtable 0x105b9674 to *this; heap_free(this) under (param_2 & 1))
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9674 (vtable 0x105b9674): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9674 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9674_delete(cls_105b9674 *param_1,uint param_2)

{
  if (param_1 != (cls_105b9674 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b9674/*ROM*/);
    param_1->field_0x4 = 0x105b96ac/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[4] = (uint32_t)((void *)0x105b96c4/*ROM*/);
    free_heap_if_flagged_10482f3c(&param_1->field_0x38,2);
    cls_105a2af8_delete(&param_1->field_0x24,2);
    cls_105a2b50_delete(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
