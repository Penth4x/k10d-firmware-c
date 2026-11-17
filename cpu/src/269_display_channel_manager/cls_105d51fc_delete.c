/* @k10d cls_105d51fc_delete @ 0x10507246
 * name: verified (structural evidence: stores vtable 0x105d51fc to *this; heap_free(this) under (param_2 & 1))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d51fc (vtable 0x105d51fc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d51fc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d51fc_delete(uint32_t *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_14 [8];
  
  puVar1 = (uint32_t *)auStack_14;
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105d51fc/*ROM*/;
    param_1[1] = 0x105d5234/*ROM*/;
    param_1[6] = 0x105d524c/*ROM*/;
    cls_105a2af8_delete(param_1 + 0xca,2);
    cls_105a2be0_delete(param_1 + 0xc2,2);
    free_heap_if_flagged_104a2a0c(param_1 + 0xb9,2);
    cls_105aae7c_delete(param_1 + 0x71,2);
    cls_105aadf4_delete(param_1 + 0x25,2);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    cls_105a2b50_delete(param_1 + 2,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
