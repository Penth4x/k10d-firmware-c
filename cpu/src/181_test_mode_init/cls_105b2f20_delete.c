/* @k10d cls_105b2f20_delete @ 0x10486d68
 * name: verified (structural evidence: stores vtable 0x105b2f20 to *this; heap_free(this) under (param_2 & 1))
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b2f20 (vtable 0x105b2f20): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b2f20 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b2f20_delete(cls_105b2f20 *param_1,uint param_2)

{
  if (param_1 != (cls_105b2f20 *)0x0) {
    param_1->field_0x48 = (uint)(uint32_t *)&DAT_105b2f20/*ROM*/;
    param_1->field_0x50 = (uint)(uint32_t *)&DAT_105b2f50/*ROM*/;
    cls_105a2a8c_delete(&param_1->field_0x4c,0);
    classic_menu_reg((uint)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
