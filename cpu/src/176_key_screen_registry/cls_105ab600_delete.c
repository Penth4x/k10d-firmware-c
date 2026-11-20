/* @k10d cls_105ab600_delete @ 0x104821d2
 * name: verified (structural evidence: stores vtable 0x105ab600 to *this; heap_free(this) under (param_2 & 1))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ab600 (vtable 0x105ab600): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ab600 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab600_delete(cls_105ab600 *param_1,uint param_2)

{
  if (param_1 != (cls_105ab600 *)0x0) {
    param_1->field_0x4 = 0x105ab600/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x105ab678/*ROM*/;
    cls_105a1798_delete((cls_105a1798 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
