/* @k10d cls_105b3928_delete @ 0x10489af0
 * name: verified (structural evidence: stores vtable 0x105b3928 to *this; heap_free(this) under (param_2 & 1))
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b3928 (vtable 0x105b3928): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b3928 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3928_delete(cls_105b3928 *param_1,uint param_2)

{
  if (param_1 != (cls_105b3928 *)0x0) {
    param_1->field_0x48 = (uint)(uint32_t *)&DAT_105b3928/*ROM*/;
    param_1->field_0x5c = (uint)(uint32_t *)&DAT_105b3958/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0x60,2);
    cls_105a2c1c_delete(&param_1->field_0x4c,0);
    classic_menu_reg((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
