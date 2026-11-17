/* @k10d cls_105950ac_delete @ 0x103c216e
 * name: verified (structural evidence: stores vtable 0x105950ac to *this; heap_free(this) under (param_2 & 1))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105950ac (vtable 0x105950ac): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105950ac to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105950ac_delete(int *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[4] = (int)&DAT_105950ac/*ROM*/;
    (*pcRam105950d0)((int)sRam105950cc + (int)param_1);
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
