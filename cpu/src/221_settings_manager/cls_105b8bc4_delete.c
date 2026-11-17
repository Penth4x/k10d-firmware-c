/* @k10d cls_105b8bc4_delete @ 0x104b7822
 * name: verified (structural evidence: stores vtable 0x105b8bc4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 221_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b8bc4 (vtable 0x105b8bc4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b8bc4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b8bc4_delete(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DAT_105b8bc4/*ROM*/;
    cls_105b49ec_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
