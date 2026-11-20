/* @k10d cls_105b46cc_delete @ 0x10493f2e
 * name: verified (structural evidence: stores vtable 0x105b46cc to *this; heap_free(this) under (param_2 & 1))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b46cc (vtable 0x105b46cc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b46cc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b46cc_delete(cls_105b46cc *param_1,uint param_2)

{
  if (param_1 != (cls_105b46cc *)0x0) {
    *(uint32_t *)&param_1->field_0xc = (uint32_t)&DAT_105b46cc/*ROM*/;
    heap_free(param_1->field_0x10);
    cls_105b49ec_delete((cls_105b49ec *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
