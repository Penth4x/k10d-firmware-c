/* @k10d cls_105bb0ec_delete @ 0x104deb24
 * name: verified (structural evidence: stores vtable 0x105bb0ec to *this; heap_free(this) under (param_2 & 1))
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bb0ec (vtable 0x105bb0ec): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bb0ec to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

void cls_105bb0ec_delete(cls_105bb0ec *param_1,uint param_2)

{
  if (param_1 != (cls_105bb0ec *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105bb0ec/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)((void *)0x105bb1d4/*ROM*/);
    param_1->field_0x18 = (uintptr_t)((void *)0x105bb1f4/*ROM*/);
    param_1->field_0x2c = (uintptr_t)((void *)0x105bb224/*ROM*/);
    ((uint32_t *)&(param_1->field_0x30))[0] = (uint32_t)((void *)0x105bb23c/*ROM*/);
    param_1->field_0x34 = (uintptr_t)((void *)0x105bb25c/*ROM*/);
    ((uint32_t *)&(param_1->field_0x40))[0] = 0x105bb29c/*ROM*/;
    release_slot4_object_ref(param_1);
    cls_105b8234_delete(&param_1->field_0x40,0);
    cls_1059e128_delete((cls_1059e128 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
