/* @k10d cls_105f91c0_delete_5 @ 0x105263be
 * name: verified (structural evidence: stores vtable 0x105f91c0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105f91c0 (vtable 0x105f91c0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105f91c0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105f91c0_delete_5(cls_105f91c0 *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint32_t uStack_18;
  uint32_t uStack_14;
  
  puVar1 = &uStack_18;
  if (param_1 != (cls_105f91c0 *)0x0) {
    param_1->field_0x208 = (uint32_t)&DAT_105f91c0/*ROM*/;
    uStack_18 = 0;
    uStack_14 = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
