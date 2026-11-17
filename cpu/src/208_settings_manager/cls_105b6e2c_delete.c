/* @k10d cls_105b6e2c_delete @ 0x104aa424
 * name: verified (structural evidence: stores vtable 0x105b6e2c to *this; heap_free(this) under (param_2 & 1))
 * unit: 208_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b6e2c (vtable 0x105b6e2c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b6e2c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b6e2c_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105b6e2c/*ROM*/;
    release_two_member_objects_104aa366(param_1);
    reset_vtable_and_free_if_owned_1042792a(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
