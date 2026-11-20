/* @k10d cls_105a8e3c_delete @ 0x1046c636
 * name: verified (structural evidence: stores vtable 0x105a8e3c to *this; heap_free(this) under (param_2 & 1))
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a8e3c (vtable 0x105a8e3c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a8e3c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a8e3c_delete(cls_105a8e3c *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_105a8e3c *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105a8e3c/*ROM*/);
    piVar1 = (int *)param_1->field_0x4;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
