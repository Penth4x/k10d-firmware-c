/* @k10d cls_10597dcc_delete @ 0x103fda8a
 * name: verified (structural evidence: stores vtable 0x10597dcc to *this; heap_free(this) under (param_2 & 1))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10597dcc (vtable 0x10597dcc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10597dcc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10597dcc_delete(int *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[4] = 0x10597dcc/*ROM*/;
    (*pcRam10597df0)((int)sRam10597dec + (int)param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    free_heap_if_flag_set_1045c56c((void *)((int)param_1 + 0x2a),2);
    reset_vtable_and_free_if_flagged_103c71c8(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
