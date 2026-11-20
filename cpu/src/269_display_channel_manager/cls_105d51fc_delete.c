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

void cls_105d51fc_delete(cls_105d51fc *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_14 [8];
  
  puVar1 = (uint32_t *)auStack_14;
  if (param_1 != (cls_105d51fc *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105d51fc/*ROM*/);
    param_1->field_0x4 = 0x105d5234/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[4] = (uint32_t)((void *)0x105d524c/*ROM*/);
    cls_105a2af8_delete(&param_1->field_0x328,2);
    cls_105a2be0_delete(&param_1->field_0x308,2);
    free_heap_if_flagged_104a2a0c(&param_1->field_0x2e4,2);
    cls_105aae7c_delete(&param_1->field_0x1c4,2);
    cls_105aadf4_delete((cls_105aadf4 *)&param_1->field_0x94,2);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    cls_105a2b50_delete(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
