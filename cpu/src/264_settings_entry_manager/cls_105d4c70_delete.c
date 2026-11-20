/* @k10d cls_105d4c70_delete @ 0x10500086
 * name: verified (structural evidence: stores vtable 0x105d4c70 to *this; heap_free(this) under (param_2 & 1))
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d4c70 (vtable 0x105d4c70): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d4c70 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d4c70": ignoring multiple overlapping fields */

void cls_105d4c70_delete(cls_105d4c70 *param_1,uint param_2)

{
  if (param_1 != (cls_105d4c70 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105d4c70/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)(&DAT_105d4ca8/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[3] = (uint32_t)(&DAT_105d4cd0/*ROM*/);
    cls_1059e288_delete(&param_1->field_0x1c,2);
    cls_105a2a8c_delete(&((uint32_t *)&(param_1->field_0x4))[2],0);
    cls_1059e408_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
