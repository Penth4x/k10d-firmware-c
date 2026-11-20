/* @k10d cls_105d6da0_delete @ 0x1051d83a
 * name: verified (structural evidence: stores vtable 0x105d6da0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6da0 (vtable 0x105d6da0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6da0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6da0_delete(cls_105d6da0 *param_1,uint param_2)

{
  if (param_1 != (cls_105d6da0 *)0x0) {
    param_1->field_0x0 = (uint32_t)0x105d6da0/*ROM*/;
    reset_vtable_and_free_if_flagged_10428264((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
