/* @k10d cls_105b7994_delete @ 0x104afad0
 * name: verified (structural evidence: stores vtable 0x105b7994 to *this; heap_free(this) under (param_2 & 1))
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7994 (vtable 0x105b7994): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7994 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7994_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x10) = 0x105b7994/*ROM*/;
    *(uint32_t *)((int)param_1 + 0x14) = 0x105b7a3c/*ROM*/;
    *(uint32_t *)((int)param_1 + 0x18) = 0x105b7a64/*ROM*/;
    *(uint32_t *)((int)param_1 + 0x1c) = 0x105b7ae4/*ROM*/;
    cls_105d8ae4_delete((void *)((int)param_1 + 0x1c),0);
    cls_105b827c_delete((void *)((int)param_1 + 0x18),0);
    reset_vtable_and_free_if_flagged_10428264((void *)((int)param_1 + 0x14),0);
    cls_105a2c1c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
