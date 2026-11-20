/* @k10d cls_105959b0_delete @ 0x103cc9c0
 * name: verified (structural evidence: stores vtable 0x105959b0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105959b0 (vtable 0x105959b0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105959b0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105959b0_delete(cls_105959b0 *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_105959b0 *)0x0) {
    param_1->field_0x10 = (uintptr_t)(&DAT_105959b0/*ROM*/);
    param_1->field_0x14 = (uintptr_t)(&DAT_10595a40/*ROM*/);
    (*pcRam105959d4)((int)&param_1->field_0x0 + (int)sRam105959d0);
    piVar1 = (int *)((uintptr_t)(param_1->field_0x0));
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x14,0);
    reset_vtable_and_free_if_flagged_103c71c8(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
