/* @k10d cls_105d7b7c_delete @ 0x105216da
 * name: verified (structural evidence: stores vtable 0x105d7b7c to *this; heap_free(this) under (param_2 & 1))
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d7b7c (vtable 0x105d7b7c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d7b7c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d7b7c_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0xc) = 0x105d7b7c/*ROM*/;
    *(uint32_t *)(param_1 + 0x10) = 0x105d7c44/*ROM*/;
    *(uint32_t *)(param_1 + 0x20) = 0x105d7c5c/*ROM*/;
    cls_105d786c_delete((void *)(param_1 + 0x20),0);
    cls_105d831c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
