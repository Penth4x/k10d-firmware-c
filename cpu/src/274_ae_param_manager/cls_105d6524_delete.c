/* @k10d cls_105d6524_delete @ 0x10517dc4
 * name: verified (structural evidence: stores vtable 0x105d6524 to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6524 (vtable 0x105d6524): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6524 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6524_delete(cls_105d6524 *param_1,uint param_2)

{
  if (param_1 != (cls_105d6524 *)0x0) {
    param_1->field_0x0 = (uint8_t)&DAT_105d6524/*ROM*/;
    reset_vtable_and_free_if_owned_104a90ee((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
