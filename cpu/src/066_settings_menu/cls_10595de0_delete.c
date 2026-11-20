/* @k10d cls_10595de0_delete @ 0x103cfb68
 * name: verified (structural evidence: stores vtable 0x10595de0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 066_settings_menu (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10595de0 (vtable 0x10595de0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10595de0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10595de0_delete(cls_10595de0 *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_10595de0 *)0x0) {
    param_1->field_0x10 = (uintptr_t)((void *)0x10595de0/*ROM*/);
    (*pcRam10595e04)((int)&param_1->field_0x0 + (int)sRam10595e00);
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
