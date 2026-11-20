/* @k10d cls_105a5be8_delete @ 0x1045b6d6
 * name: verified (structural evidence: stores vtable 0x105a5be8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a5be8 (vtable 0x105a5be8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a5be8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a5be8_delete(cls_105a5be8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (cls_105a5be8 *)0x0) {
    param_1->field_0x10 = 0x105a5be8/*ROM*/;
    destroy_range_of_objects(param_1);
    iVar2 = *(uint32_t *)(param_1->field_0x4);
    (((vtbl_entry*)(iVar2))[3].fn)
              ((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[3].adj,param_1->field_0x0);
    if ((param_1->field_0xc != '\0') && (piVar1 = (int *)(param_1->field_0x4), piVar1 != (int *)0x0)) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
