/* @k10d cls_10558e74_delete @ 0x1037fc6e
 * name: verified (structural evidence: stores vtable 0x10558e74 to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10558e74 (vtable 0x10558e74): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10558e74 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10558e74_delete(cls_10558e74 *param_1,uint param_2)

{
  if (param_1 != (cls_10558e74 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_10558e74/*ROM*/;
    *(uint32_t *)&param_1->field_0x4 = (uint32_t)&DAT_10558f8c/*ROM*/;
    *(uint32_t *)&param_1->field_0x8 = (uint32_t)&DAT_10558fb4/*ROM*/;
    cls_10559c4c_delete((cls_10559c4c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
