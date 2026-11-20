/* @k10d cls_105b7810_delete @ 0x104aefc4
 * name: verified (structural evidence: stores vtable 0x105b7810 to *this; heap_free(this) under (param_2 & 1))
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7810 (vtable 0x105b7810): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7810 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7810_delete(cls_105b7810 *param_1,uint param_2)

{
  if (param_1 != (cls_105b7810 *)0x0) {
    param_1->field_0x18 = 0x105b7810/*ROM*/;
    clear_struct_fields_104af000((int)param_1);
    heap_free_2((int)param_1->field_0x4);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
