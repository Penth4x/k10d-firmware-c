/* @k10d cls_105d54e0_delete @ 0x1050b034
 * name: verified (structural evidence: stores vtable 0x105d54e0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d54e0 (vtable 0x105d54e0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d54e0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d54e0_delete(cls_105d54e0 *param_1,uint param_2)

{
  if (param_1 != (cls_105d54e0 *)0x0) {
    param_1->field_0x8 = (uintptr_t)((void *)0x105d54e0/*ROM*/);
    cls_105a2ab0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
