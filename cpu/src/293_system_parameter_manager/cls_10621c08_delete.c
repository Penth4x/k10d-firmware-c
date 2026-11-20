/* @k10d cls_10621c08_delete @ 0x10535d16
 * name: verified (structural evidence: stores vtable 0x10621c08 to *this; heap_free(this) under (param_2 & 1))
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10621c08 (vtable 0x10621c08): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10621c08 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10621c08_delete(cls_10621c08 *param_1,uint param_2)

{
  if (param_1 != (cls_10621c08 *)0x0) {
    *(uint32_t *)&param_1->field_0x14 = (uint32_t)&DAT_10621c08;
    reset_vtable_and_free_if_owned_104df8f6((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
