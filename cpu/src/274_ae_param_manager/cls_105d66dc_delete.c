/* @k10d cls_105d66dc_delete @ 0x1051af90
 * name: verified (structural evidence: stores vtable 0x105d66dc to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d66dc (vtable 0x105d66dc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d66dc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d66dc_delete(cls_105d66dc *param_1,uint param_2)

{
  if (param_1 != (cls_105d66dc *)0x0) {
    param_1->field_0x4 = 0x105d66dc/*ROM*/;
    cls_105d6dc8_delete((void *)&param_1->field_0x18,2);
    reset_vtable_and_free_if_flagged_104cee74(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
