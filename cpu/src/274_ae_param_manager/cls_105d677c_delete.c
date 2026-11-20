/* @k10d cls_105d677c_delete @ 0x1051b310
 * name: verified (structural evidence: stores vtable 0x105d677c to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d677c (vtable 0x105d677c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d677c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d677c_delete(cls_105d677c *param_1,uint param_2)

{
  if (param_1 != (cls_105d677c *)0x0) {
    param_1->field_0x0 = 0x105d677c/*ROM*/;
    cls_105b999c_delete((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
