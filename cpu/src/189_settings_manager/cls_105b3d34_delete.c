/* @k10d cls_105b3d34_delete @ 0x1048d126
 * name: verified (structural evidence: stores vtable 0x105b3d34 to *this; heap_free(this) under (param_2 & 1))
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b3d34 (vtable 0x105b3d34): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b3d34 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3d34_delete(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(void **)(param_1 + 0x20) = &DAT_105b3d34/*ROM*/;
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(*(short *)(*(int *)(iVar1 + 0x20) + 8) + iVar1,3);
    }
    reset_vtable_and_free_if_owned_1048c4e4(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
