/* @k10d cls_105972a8_delete @ 0x103e787c
 * name: verified (structural evidence: stores vtable 0x105972a8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105972a8 (vtable 0x105972a8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105972a8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105972a8_delete(cls_105972a8 *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_105972a8 *)0x0) {
    param_1->field_0x10 = (uintptr_t)((void *)0x105972a8/*ROM*/);
    (*pcRam105972cc)((int)&param_1->field_0x0 + (int)sRam105972c8);
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
