/* @k10d invoke_virtual_slot_2_on_member @ 0x104e0290
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 of the object at offset 0x30 and returns 1 or 9 based on the call
 *   result.
 * summary:
 *   The function dereferences the pointer at param_1+0x30 to get an object pointer. It then
 *   performs a Cfront-style virtual call to slot 2 (offset 0x14) of that object, passing
 *   the this-adjusted pointer, a value from param_1+0x38, a value from param_1+0x54, and
 *   param_2. If the return value of the virtual call is 0, it returns 9; otherwise, it
 *   returns 1. No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_2_on_member(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = **(int **)(param_1 + 0x30);
  iVar1 = (((vtbl_entry*)(iVar1))[2].fn)
                    ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[2].adj,
                     *(uint32_t *)(*(int *)(param_1 + 0x38) + 8),*(uint32_t *)(param_1 + 0x54),
                     param_2);
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  return uVar2;
}
