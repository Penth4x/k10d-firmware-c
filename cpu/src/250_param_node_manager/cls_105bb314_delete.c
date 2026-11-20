/* @k10d cls_105bb314_delete @ 0x104df26e
 * name: verified (structural evidence: stores vtable 0x105bb314 to *this; heap_free(this) under (param_2 & 1))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bb314 (vtable 0x105bb314): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bb314 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

void cls_105bb314_delete(cls_105bb314 *param_1,uint param_2)

{
  if (param_1 != (cls_105bb314 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105bb314/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)((void *)0x105bb444/*ROM*/);
    param_1->field_0x18 = (uintptr_t)((void *)0x105bb464/*ROM*/);
    param_1->field_0x2c = (uintptr_t)((void *)0x105bb494/*ROM*/);
    ((uint32_t *)&(param_1->field_0x30))[0] = (uint32_t)((void *)0x105bb4ac/*ROM*/);
    param_1->field_0x34 = (uintptr_t)((void *)0x105bb4cc/*ROM*/);
    ((uint32_t *)&(param_1->field_0x40))[0] = 0x105bb50c/*ROM*/;
    param_1->field_0x98 = 0x105bb554/*ROM*/;
    cls_105f9f74_delete(&param_1->field_0x9c,2);
    cls_105d74ac_delete(&param_1->field_0x98,0);
    cls_105bb0ec_delete((cls_105bb0ec *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
