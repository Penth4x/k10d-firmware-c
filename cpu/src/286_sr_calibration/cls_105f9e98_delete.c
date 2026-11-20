/* @k10d cls_105f9e98_delete @ 0x1052bb44
 * name: verified (structural evidence: stores vtable 0x105f9e98 to *this; heap_free(this) under (param_2 & 1))
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105f9e98 (vtable 0x105f9e98): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105f9e98 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105f9e98_delete(cls_105f9e98 *param_1,uint param_2)

{
  if (param_1 != (cls_105f9e98 *)0x0) {
    param_1->field_0x14 = (uint32_t)0x105f9e98/*ROM*/;
    reset_vtable_and_free_if_owned_104df8f6((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
