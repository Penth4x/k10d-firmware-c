/* @k10d cls_105ab7d8_delete @ 0x104831d0
 * name: verified (structural evidence: stores vtable 0x105ab7d8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ab7d8 (vtable 0x105ab7d8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ab7d8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab7d8_delete(cls_105ab7d8 *param_1,uint param_2)

{
  if (param_1 != (cls_105ab7d8 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_105ab7d8/*ROM*/;
    reset_vtable_and_free_if_owned_1042792a((void *)&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
