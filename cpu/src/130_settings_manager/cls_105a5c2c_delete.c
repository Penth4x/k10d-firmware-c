/* @k10d cls_105a5c2c_delete @ 0x1045ca06
 * name: verified (structural evidence: stores vtable 0x105a5c2c to *this; heap_free(this) under (param_2 & 1))
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a5c2c (vtable 0x105a5c2c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a5c2c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a5c2c_delete(cls_105a5c2c *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (cls_105a5c2c *)0x0) {
    param_1->field_0x14 = (uintptr_t)(&DAT_105a5c2c/*ROM*/);
    iVar2 = *(int *)param_1->field_0xc;
    (((vtbl_entry*)(iVar2))[3].fn)
              (param_1->field_0xc + (int)((vtbl_entry*)(iVar2))[3].adj,param_1->field_0x0);
    if ((param_1->field_0x10 != '\0') && (piVar1 = (int *)param_1->field_0xc, piVar1 != (int *)0x0))
    {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
