/* @k10d cls_105b55fc_delete @ 0x10498bb8
 * name: verified (structural evidence: stores vtable 0x105b55fc to *this; heap_free(this) under (param_2 & 1))
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b55fc (vtable 0x105b55fc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b55fc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b55fc_delete(cls_105b55fc *param_1,uint param_2)

{
  if (param_1 != (cls_105b55fc *)0x0) {
    param_1->field_0x4 = 0x105b55fc/*ROM*/;
    cls_105d6dc8_delete((void *)&param_1->field_0x14,2);
    reset_vtable_and_free_if_flagged_104cee74(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
