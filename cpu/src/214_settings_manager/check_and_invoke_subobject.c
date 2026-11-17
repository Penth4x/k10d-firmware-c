/* @k10d check_and_invoke_subobject @ 0x104b337c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag at offset 0x44 and, if set, invokes virtual slot 3 of the object at
 *   offset 0x24.
 * summary:
 *   The function first calls eventflag_clr_flg with the value at param_1+0x44 and -1. If
 *   that returns 0, it returns 0. Otherwise, it checks if the pointer at param_1+0x24 is
 *   non-null. If so, it performs a virtual call to slot 3 (offset 0x1c) of that sub-object
 *   with argument 0. If the virtual call returns 0, the function returns 0; otherwise, it
 *   returns 1. The specific role of eventflag_clr_flg and the sub-object is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_invoke_subobject(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = eventflag_clr_flg((void *)(*(uint32_t *)(param_1 + 0x44)),0xffffffff);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
    if ((iVar1 != 0) &&
       (iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x1c))
                          (*(short *)(*(int *)(iVar1 + 4) + 0x18) + iVar1,0), iVar1 == 0)) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}
