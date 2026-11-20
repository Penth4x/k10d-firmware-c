/* @k10d cls_105576e0_delete @ 0x10365992
 * name: verified (structural evidence: stores vtable 0x105576e0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 004_settings_context (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105576e0 (vtable 0x105576e0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105576e0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105576e0_delete(cls_105576e0 *param_1,uint param_2)

{
  if (param_1 != (cls_105576e0 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_105576e0/*ROM*/;
    destroy_five_member_objects(&param_1->field_0x84,2);
    cls_10558990_delete((cls_10558990 *)&param_1->field_0x40,2);
    cls_10558b34_delete((cls_10558b34 *)&param_1->field_0x18,2);
    cls_10557c88_delete((cls_10557c88 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
