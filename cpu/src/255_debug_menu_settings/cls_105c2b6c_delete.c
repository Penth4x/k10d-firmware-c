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

void cls_105c2b6c_delete(cls_105c2b6c *param_1,uint param_2)

{
  if (param_1 != (cls_105c2b6c *)0x0) {
    param_1->field_0x0 = (uint32_t)((void *)0x105c2b6c/*ROM*/);
    param_1->field_0xf0 = 0x105c2b5c/*ROM*/;
    param_1->field_0xc8 = 0x105c2b5c/*ROM*/;
    param_1->field_0xa0 = 0x105c2b5c/*ROM*/;
    cls_105d5428_delete((cls_105d5428 *)&param_1->field_0x70,2);
    cls_105c2cdc_delete((cls_105c2cdc *)&param_1->field_0x64,2);
    cls_105c2c74_delete((cls_105c2c74 *)&param_1->field_0x58,2);
    cls_105c2c2c_delete((cls_105c2c2c *)&param_1->field_0x4c,2);
    cls_105c2be4_delete((cls_105c2be4 *)&param_1->field_0x40,2);
    cls_105c2a58_delete(&param_1->field_0x34,2);
    cls_105c29f8_delete(&param_1->field_0x28,2);
    cls_105c29b0_delete(&param_1->field_0x1c,2);
    cls_105c2968_delete(&param_1->field_0x10,2);
    cls_105c2720_delete(&param_1->field_0x4,2);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
