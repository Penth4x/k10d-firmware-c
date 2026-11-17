/* @k10d cls_105aadf4_delete @ 0x1047dcd8
 * name: verified (structural evidence: stores vtable 0x105aadf4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aadf4 (vtable 0x105aadf4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aadf4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aadf4_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x11c) = 0x105aadf4/*ROM*/;
    free_heap_if_flag_set_1045c56c((void *)((int)param_1 + 0x124),2);
    cls_105aae34_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
