/* @k10d cls_105d67fc_delete @ 0x1051b94a
 * name: verified (structural evidence: stores vtable 0x105d67fc to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d67fc (vtable 0x105d67fc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d67fc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d67fc_delete(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DAT_105d67fc/*ROM*/;
    cls_105b4bbc_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
