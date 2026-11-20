/* @k10d cls_105d6608_delete @ 0x10519eba
 * name: verified (structural evidence: stores vtable 0x105d6608 to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6608 (vtable 0x105d6608): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6608 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6608_delete(cls_105d6608 *param_1,uint param_2)

{
  if (param_1 != (cls_105d6608 *)0x0) {
    param_1->field_0x4 = 0x105d6608/*ROM*/;
    cls_105d6c2c_delete((cls_105d6c2c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
