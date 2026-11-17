/* @k10d cls_10621d20_delete @ 0x105367e0
 * name: verified (structural evidence: stores vtable 0x10621d20 to *this; heap_free(this) under (param_2 & 1))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10621d20 (vtable 0x10621d20): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10621d20 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10621d20_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 0x48) = &DAT_10621d20;
    *(void **)(param_1 + 0x4c) = &DAT_10621d50;
    cls_105a2af8_delete((void *)(param_1 + 0x70),2);
    reset_vtable_and_free_if_flagged_10428182((void *)(param_1 + 0x4c),0);
    classic_menu_reg(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
