/* @k10d cls_10595818_delete @ 0x103c8fcc
 * name: verified (structural evidence: stores vtable 0x10595818 to *this; heap_free(this) under (param_2 & 1))
 * unit: 061_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10595818 (vtable 0x10595818): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10595818 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10595818_delete(cls_10595818 *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_10595818 *)0x0) {
    param_1->field_0x10 = (uintptr_t)(&DAT_10595818/*ROM*/);
    param_1->field_0x14 = (uintptr_t)(&DAT_105958a8/*ROM*/);
    (*pcRam1059583c)((int)&param_1->field_0x0 + (int)sRam10595838);
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
