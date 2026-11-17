/* @k10d cls_105b2fd8_delete @ 0x10487222
 * name: verified (structural evidence: stores vtable 0x105b2fd8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 182_settings_context (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b2fd8 (vtable 0x105b2fd8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b2fd8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b2fd8_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 0x48) = &DAT_105b2fd8/*ROM*/;
    *(void **)(param_1 + 0x5c) = &DAT_105b3010/*ROM*/;
    *(void **)(param_1 + 0x60) = &DAT_105b3028/*ROM*/;
    cls_105a2af8_delete((void *)(param_1 + 100),2);
    reset_vtable_and_free_if_flagged_10428182((void *)(param_1 + 0x60),0);
    cls_105a2c1c_delete((void *)(param_1 + 0x4c),0);
    classic_menu_reg(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
