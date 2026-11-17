/* @k10d cls_105aae7c_delete @ 0x1047e074
 * name: verified (structural evidence: stores vtable 0x105aae7c to *this; heap_free(this) under (param_2 & 1))
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aae7c (vtable 0x105aae7c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aae7c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aae7c_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x11c) = 0x105aae7c/*ROM*/;
    cls_105aae34_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
