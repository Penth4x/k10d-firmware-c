/* @k10d cls_105d6684_delete @ 0x1051a8fc
 * name: verified (structural evidence: stores vtable 0x105d6684 to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6684 (vtable 0x105d6684): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6684 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6684_delete(cls_105d6684 *param_1,uint param_2)

{
  if (param_1 != (cls_105d6684 *)0x0) {
    param_1->field_0x10 = 0x105d6684/*ROM*/;
    destroy_and_free_object(&param_1->field_0x3c,2);
    cls_105d677c_delete((cls_105d677c *)&param_1->field_0x14,2);
    cls_105b56ec_delete((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
