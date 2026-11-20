/* @k10d cls_105b4ad4_delete @ 0x1049480e
 * name: verified (structural evidence: stores vtable 0x105b4ad4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b4ad4 (vtable 0x105b4ad4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b4ad4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b4ad4_delete(cls_105b4ad4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (cls_105b4ad4 *)0x0) {
    param_1->field_0xc = (uintptr_t)(&DAT_105b4ad4/*ROM*/);
    iVar1 = param_1->field_0x48;
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[6].fn)
                (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[6].adj + iVar1,3);
    }
    cls_105b48dc_delete((cls_105b48dc *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
