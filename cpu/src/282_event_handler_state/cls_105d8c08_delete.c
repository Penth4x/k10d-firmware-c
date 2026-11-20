/* @k10d cls_105d8c08_delete @ 0x10526366
 * name: verified (structural evidence: stores vtable 0x105d8c08 to *this; heap_free(this) under (param_2 & 1))
 * unit: 282_event_handler_state (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d8c08 (vtable 0x105d8c08): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d8c08 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d8c08_delete(cls_105d8c08 *param_1,uint param_2)

{
  if (param_1 != (cls_105d8c08 *)0x0) {
    param_1->field_0x0 = (uint)(uintptr_t)&DAT_105d8c08/*ROM*/;
    reset_vtable_and_free_if_flagged_10428264((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
