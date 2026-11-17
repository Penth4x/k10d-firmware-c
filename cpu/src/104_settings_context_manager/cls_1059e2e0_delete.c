/* @k10d cls_1059e2e0_delete @ 0x10427606
 * name: verified (structural evidence: stores vtable 0x1059e2e0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e2e0 (vtable 0x1059e2e0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e2e0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e2e0_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x1059e2e0/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x1059e308/*ROM*/;
    cls_1059e408_delete((void *)(param_1 + 8),0);
    cls_1059e2b8_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
