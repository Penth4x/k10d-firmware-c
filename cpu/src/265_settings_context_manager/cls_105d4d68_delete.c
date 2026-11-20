/* @k10d cls_105d4d68_delete @ 0x10501ae2
 * name: verified (structural evidence: stores vtable 0x105d4d68 to *this; heap_free(this) under (param_2 & 1))
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d4d68 (vtable 0x105d4d68): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d4d68 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d4d68_delete(cls_105d4d68 *param_1,uint param_2)

{
  if (param_1 != (cls_105d4d68 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105d4d68/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)((void *)0x105d4d98/*ROM*/);
    cls_1059e408_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
