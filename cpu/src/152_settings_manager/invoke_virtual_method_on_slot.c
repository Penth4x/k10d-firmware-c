/* @k10d invoke_virtual_method_on_slot @ 0x1046c428
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual method call on an object pointer stored in an array, returning a
 *   status code.
 * summary:
 *   The function retrieves an object pointer from an array at offset 0x28 in param_1,
 *   indexed by param_2. It first calls virtual slot 2 (offset 0x14) to check a condition;
 *   if the result is non-zero, it calls virtual slot 3 (offset 0x1c) with param_3 and
 *   param_4. Returns 0x81 if the object is null, 0x82 if the first check fails, or the
 *   result of the second call otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_slot(int param_1,int param_2,uint32_t param_3,void *param_4)

{
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x28 + param_2 * 4);
  uVar1 = 0x81;
  if (piVar2 != (int *)0x0) {
    iVar3 = (((vtbl_entry*)(*piVar2))[2].fn)((int)((vtbl_entry*)(*piVar2))[2].adj + (int)piVar2);
    if (iVar3 == 0) {
      uVar1 = 0x82;
    }
    else {
      piVar2 = *(int **)(param_1 + 0x28 + param_2 * 4);
      iVar3 = *piVar2;
      uVar1 = (((vtbl_entry*)(iVar3))[3].fn)
                        ((int)piVar2 + (int)((vtbl_entry*)(iVar3))[3].adj,param_3,param_4);
    }
  }
  return uVar1;
}
