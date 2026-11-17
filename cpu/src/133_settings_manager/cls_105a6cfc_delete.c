/* @k10d cls_105a6cfc_delete @ 0x1045fc2c
 * name: verified (structural evidence: stores vtable 0x105a6cfc to *this; heap_free(this) under (param_2 & 1))
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a6cfc (vtable 0x105a6cfc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a6cfc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cls_105a6cfc_delete(uint32_t *param_1,uint param_2)

{
  uint32_t uVar1;
  uint32_t extraout_r4;
  
  uVar1 = 0;
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105a6cfc/*ROM*/;
    uVar1 = (uint32_t)reset_vtable_and_free_if_flagged_10496932(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
      uVar1 = extraout_r4;
    }
  }
  return uVar1;
}
