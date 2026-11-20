/* @k10d cls_1059df50_delete @ 0x10426126
 * name: verified (structural evidence: stores vtable 0x1059df50 to *this; heap_free(this) under (param_2 & 1))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059df50 (vtable 0x1059df50): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059df50 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059df50_delete(cls_1059df50 *param_1,uint param_2)

{
  if (param_1 != (cls_1059df50 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x1059df50/*ROM*/);
    param_1->field_0x4 = 0x1059df88/*ROM*/;
    param_1->field_0x18 = 0x1059dfa0/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0x2c,2);
    cls_105a2b50_delete((cls_105a2b50 *)&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
