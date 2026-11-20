/* @k10d cls_1059e3b0_delete @ 0x1042799a
 * name: verified (structural evidence: stores vtable 0x1059e3b0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 105_memory_block_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e3b0 (vtable 0x1059e3b0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e3b0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e3b0_delete(cls_1059e3b0 *param_1,uint param_2)

{
  if (param_1 != (cls_1059e3b0 *)0x0) {
    *(uint32_t *)&param_1->field_0x10 = (uint32_t)&DAT_1059e3b0/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0x8,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
