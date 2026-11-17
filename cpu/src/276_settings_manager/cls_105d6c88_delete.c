/* @k10d cls_105d6c88_delete @ 0x1051cdc8
 * name: verified (structural evidence: stores vtable 0x105d6c88 to *this; heap_free(this) under (param_2 & 1))
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6c88 (vtable 0x105d6c88): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6c88 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6c88_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x105d6c88/*ROM*/;
    cls_105b6174_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
