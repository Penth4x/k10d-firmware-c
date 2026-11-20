/* @k10d cls_105bd454_delete @ 0x104e1088
 * name: verified (structural evidence: stores vtable 0x105bd454 to *this; heap_free(this) under (param_2 & 1))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bd454 (vtable 0x105bd454): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bd454 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bd454_delete(cls_105bd454 *param_1,uint param_2)

{
  if (param_1 != (cls_105bd454 *)0x0) {
    param_1->field_0x14 = (uint32_t)0x105bd454/*ROM*/;
    reset_vtable_and_free_if_owned_104df8f6((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
