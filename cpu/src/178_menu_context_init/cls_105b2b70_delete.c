/* @k10d cls_105b2b70_delete @ 0x10485ff0
 * name: verified (structural evidence: stores vtable 0x105b2b70 to *this; heap_free(this) under (param_2 & 1))
 * unit: 178_menu_context_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b2b70 (vtable 0x105b2b70): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b2b70 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b2b70": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

void cls_105b2b70_delete(cls_105b2b70 *param_1,uint param_2)

{
  if (param_1 != (cls_105b2b70 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105b2b70/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)(&DAT_105b2c30/*ROM*/);
    param_1->field_0x18 = (uintptr_t)(&DAT_105b2c50/*ROM*/);
    param_1->field_0x2c = (uintptr_t)(&DAT_105b2c80/*ROM*/);
    ((uint32_t *)&(param_1->field_0x30))[0] = (uint32_t)(&DAT_105b2c98/*ROM*/);
    param_1->field_0x34 = (uintptr_t)(&DAT_105b2cb8/*ROM*/);
    param_1->field_0x44 = (uintptr_t)(&DAT_105b2cf8/*ROM*/);
    cls_105a8a1c_delete((cls_105a8a1c *)&param_1->field_0x5c,2);
    cls_105a2af8_delete(&param_1->field_0x48,2);
    cls_105a2a8c_delete(&param_1->field_0x40,0);
    cls_1059e128_delete((cls_1059e128 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
