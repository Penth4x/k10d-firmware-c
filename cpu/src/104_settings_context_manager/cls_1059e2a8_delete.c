/* @k10d cls_1059e2a8_delete @ 0x104274d6
 * name: verified (structural evidence: stores vtable 0x1059e2a8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e2a8 (vtable 0x1059e2a8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e2a8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e2a8_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x14) = 0x1059e2a8/*ROM*/;
    cls_105a2bf8_delete(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
