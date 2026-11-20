/* @k10d cls_10595cb4_delete @ 0x103ce996
 * name: verified (structural evidence: stores vtable 0x10595cb4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10595cb4 (vtable 0x10595cb4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10595cb4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10595cb4_delete(cls_10595cb4 *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_10595cb4 *)0x0) {
    param_1->field_0x10 = (uintptr_t)((void *)0x10595cb4/*ROM*/);
    (*pcRam10595cd8)((int)&param_1->field_0x0 + (int)sRam10595cd4);
    piVar1 = (int *)((uintptr_t)(param_1->field_0x0));
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    reset_vtable_and_free_if_flagged_103c71c8(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
