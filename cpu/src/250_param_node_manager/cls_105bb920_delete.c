/* @k10d cls_105bb920_delete @ 0x104df800
 * name: verified (structural evidence: stores vtable 0x105bb920 to *this; heap_free(this) under (param_2 & 1))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bb920 (vtable 0x105bb920): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bb920 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bb920_delete(cls_105bb920 *param_1,uint param_2)

{
  if (param_1 != (cls_105bb920 *)0x0) {
    param_1->field_0x14 = (uint)(0x105bb920);
    reset_vtable_and_free_if_owned_104df8f6((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
