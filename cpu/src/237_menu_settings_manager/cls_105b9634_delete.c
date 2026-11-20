/* @k10d cls_105b9634_delete @ 0x104ce43e
 * name: verified (structural evidence: stores vtable 0x105b9634 to *this; heap_free(this) under (param_2 & 1))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9634 (vtable 0x105b9634): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9634 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9634_delete(cls_105b9634 *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_105b9634 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105b9634/*ROM*/);
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
