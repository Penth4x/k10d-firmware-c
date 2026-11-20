/* @k10d cls_10595788_delete @ 0x103c819e
 * name: verified (structural evidence: stores vtable 0x10595788 to *this; heap_free(this) under (param_2 & 1))
 * unit: 059_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10595788 (vtable 0x10595788): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10595788 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10595788_delete(cls_10595788 *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_10595788 *)0x0) {
    param_1->field_0x10 = (uintptr_t)(&DAT_10595788/*ROM*/);
    (*pcRam105957ac)((int)&param_1->field_0x0 + (int)sRam105957a8);
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
