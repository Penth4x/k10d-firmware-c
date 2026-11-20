/* @k10d cls_105c2de4_delete @ 0x104ef0d6
 * name: verified (structural evidence: stores vtable 0x105c2de4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c2de4 (vtable 0x105c2de4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c2de4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c2de4_delete(cls_105c2de4 *param_1,uint param_2)

{
  if (param_1 != (cls_105c2de4 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105c2de4/*ROM*/);
    cls_105c2d24_delete(&param_1->field_0x10,2);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
