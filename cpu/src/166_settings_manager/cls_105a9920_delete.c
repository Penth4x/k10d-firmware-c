/* @k10d cls_105a9920_delete @ 0x10473108
 * name: verified (structural evidence: stores vtable 0x105a9920 to *this; heap_free(this) under (param_2 & 1))
 * unit: 166_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a9920 (vtable 0x105a9920): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a9920 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a9920_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x105a9920/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x105a9a90/*ROM*/;
    cls_1059e2e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
