/* @k10d cls_105ab468_delete @ 0x10480a0a
 * name: verified (structural evidence: stores vtable 0x105ab468 to *this; heap_free(this) under (param_2 & 1))
 * unit: 174_module_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ab468 (vtable 0x105ab468): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ab468 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab468_delete(cls_105ab468 *param_1,uint param_2)

{
  if (param_1 != (cls_105ab468 *)0x0) {
    *(uint32_t *)&param_1->field_0x1c = (uint32_t)&DAT_105ab468/*ROM*/;
    free_heap_if_flag_set_1045c56c(&param_1->field_0x14,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
