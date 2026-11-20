/* @k10d cls_105c1218_delete @ 0x104e6842
 * name: verified (structural evidence: stores vtable 0x105c1218 to *this; heap_free(this) under (param_2 & 1))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c1218 (vtable 0x105c1218): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c1218 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c1218_delete(cls_105c1218 *param_1,uint param_2)

{
  if (param_1 != (cls_105c1218 *)0x0) {
    param_1->field_0x4 = 0x105c1218/*ROM*/;
    cls_105a1838_delete((cls_105a1838 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
