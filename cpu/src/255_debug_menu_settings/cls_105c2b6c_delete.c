/* @k10d cls_105c2b6c_delete @ 0x104ec762
 * name: verified (structural evidence: stores vtable 0x105c2b6c to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c2b6c (vtable 0x105c2b6c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c2b6c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c2b6c_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105c2b6c/*ROM*/;
    param_1[0x3c] = 0x105c2b5c/*ROM*/;
    param_1[0x32] = 0x105c2b5c/*ROM*/;
    param_1[0x28] = 0x105c2b5c/*ROM*/;
    cls_105d5428_delete(param_1 + 0x1c,2);
    cls_105c2cdc_delete(param_1 + 0x19,2);
    cls_105c2c74_delete(param_1 + 0x16,2);
    cls_105c2c2c_delete(param_1 + 0x13,2);
    cls_105c2be4_delete(param_1 + 0x10,2);
    cls_105c2a58_delete(param_1 + 0xd,2);
    cls_105c29f8_delete(param_1 + 10,2);
    cls_105c29b0_delete(param_1 + 7,2);
    cls_105c2968_delete(param_1 + 4,2);
    cls_105c2720_delete(param_1 + 1,2);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
