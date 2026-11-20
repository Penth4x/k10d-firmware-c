/* @k10d cls_105d71e4_delete @ 0x10520b8e
 * name: verified (structural evidence: stores vtable 0x105d71e4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d71e4 (vtable 0x105d71e4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d71e4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d71e4_delete(cls_105d71e4 *param_1,uint param_2)

{
  if (param_1 != (cls_105d71e4 *)0x0) {
    *(uint32_t *)&param_1->field_0x20 = (uint32_t)&DAT_105d71e4/*ROM*/;
    cls_105b3d34_delete((cls_105b3d34 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
