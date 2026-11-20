/* @k10d cls_105d67cc_delete @ 0x1051b7ec
 * name: verified (structural evidence: stores vtable 0x105d67cc to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d67cc (vtable 0x105d67cc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d67cc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d67cc_delete(cls_105d67cc *param_1,uint param_2)

{
  if (param_1 != (cls_105d67cc *)0x0) {
    param_1->field_0x28 = 0x105d67cc/*ROM*/;
    cls_105b9664_delete((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
