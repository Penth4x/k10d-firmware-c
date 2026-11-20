/* @k10d cls_105d67dc_delete @ 0x1051b8ca
 * name: verified (structural evidence: stores vtable 0x105d67dc to *this; heap_free(this) under (param_2 & 1))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d67dc (vtable 0x105d67dc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d67dc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d67dc_delete(cls_105d67dc *param_1,uint param_2)

{
  if (param_1 != (cls_105d67dc *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105d67dc/*ROM*/);
    cls_105a5c3c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
