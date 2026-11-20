/* @k10d cls_105b8354_delete @ 0x104b48a0
 * name: verified (structural evidence: stores vtable 0x105b8354 to *this; heap_free(this) under (param_2 & 1))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b8354 (vtable 0x105b8354): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b8354 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

void cls_105b8354_delete(cls_105b8354 *param_1,uint param_2)

{
  if (param_1 != (cls_105b8354 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105b8354/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)(&DAT_105b841c/*ROM*/);
    param_1->field_0x18 = (uintptr_t)(&DAT_105b843c/*ROM*/);
    param_1->field_0x2c = (uintptr_t)(&DAT_105b846c/*ROM*/);
    ((uint32_t *)&(param_1->field_0x30))[0] = (uint32_t)(&DAT_105b8484/*ROM*/);
    param_1->field_0x34 = (uintptr_t)(&DAT_105b84a4/*ROM*/);
    param_1->field_0x44 = (uintptr_t)(&DAT_105b84e4/*ROM*/);
    param_1->field_0x50 = (uintptr_t)(&DAT_105b84fc/*ROM*/);
    cls_105a2af8_delete(&param_1->field_0x64,2);
    cls_105a2ab0_delete(&param_1->field_0x48,0);
    cls_105a2a8c_delete(&param_1->field_0x40,0);
    cls_1059e128_delete((cls_1059e128 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
