/* @k10d cls_105a1c3c_delete @ 0x1044c214
 * name: verified (structural evidence: stores vtable 0x105a1c3c to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a1c3c (vtable 0x105a1c3c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a1c3c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a1c3c_delete(cls_105a1c3c *param_1,uint param_2)

{
  void *puVar1;
  
  if (param_1 != (cls_105a1c3c *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105a1c3c/*ROM*/);
    puVar1 = (void *)((uintptr_t)(param_1->field_0x4));
    if (puVar1 != 0) {
      (((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[1].fn)((char*)puVar1 + *(short *)(*(int *)((char*)puVar1 + 4) + 8),3);
    }
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
