/* @k10d cls_105d6afc_delete @ 0x1051b9e0
 * name: verified (structural evidence: stores vtable 0x105d6afc to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6afc (vtable 0x105d6afc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6afc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6afc_delete(cls_105d6afc *param_1,uint param_2)

{
  if (param_1 != (cls_105d6afc *)0x0) {
    *(uint32_t *)&param_1->field_0x20 = (uint32_t)&DAT_105d6afc/*ROM*/;
    *(uint32_t *)&param_1->field_0x2c = (uint32_t)&DAT_105d6b3c/*ROM*/;
    reset_vtable_and_free_if_flagged_10428182((void *)&param_1->field_0x2c,0);
    cls_105b3d9c_delete((cls_105b3d9c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
