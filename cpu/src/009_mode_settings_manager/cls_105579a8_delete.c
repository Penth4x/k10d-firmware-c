/* @k10d cls_105579a8_delete @ 0x10367b32
 * name: verified (structural evidence: stores vtable 0x105579a8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105579a8 (vtable 0x105579a8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105579a8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105579a8_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105579a8/*ROM*/;
    destroy_five_member_objects(param_1 + 0x10,2);
    cls_10558da4_delete(param_1 + 6,2);
    cls_10557c88_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
