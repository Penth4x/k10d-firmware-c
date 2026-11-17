/* @k10d cls_10597714_delete @ 0x103e973a
 * name: verified (structural evidence: stores vtable 0x10597714 to *this; heap_free(this) under (param_2 & 1))
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10597714 (vtable 0x10597714): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10597714 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10597714_delete(int *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[4] = 0x10597714/*ROM*/;
    (*pcRam10597738)((int)sRam10597734 + (int)param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    reset_vtable_and_free_if_flagged_103c71c8(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
