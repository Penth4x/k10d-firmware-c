/* @k10d cls_105590b8_delete @ 0x103836d4
 * name: verified (structural evidence: stores vtable 0x105590b8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105590b8 (vtable 0x105590b8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105590b8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105590b8_delete(cls_105590b8 *param_1,uint param_2)

{
  if (param_1 != (cls_105590b8 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_105590b8/*ROM*/;
    *(uint32_t *)&param_1->field_0x4 = (uint32_t)&DAT_105591d0/*ROM*/;
    *(uint32_t *)&param_1->field_0x8 = (uint32_t)&DAT_105591f8/*ROM*/;
    cls_10559c4c_delete((cls_10559c4c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
