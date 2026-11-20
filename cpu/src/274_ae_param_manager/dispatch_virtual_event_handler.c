/* @k10d dispatch_virtual_event_handler @ 0x1051adba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Performs a chain of virtual method calls on objects stored in a struct, passing a
 *   result from the first call to subsequent ones.
 * summary:
 *   The function first calls find_entry_by_ushort_key with param_3 and a constant. If
 *   successful, it retrieves an object pointer from param_1 (offset 0x48 or 0x44) and
 *   invokes its virtual slot 2. If that returns non-zero, it stores the result in param_2
 *   and invokes virtual slot 2 on two other objects found in param_1 (offsets 0x4c and
 *   0x50), passing the previous result as an argument. The final return value is the result
 *   of the last virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_event_handler(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (uint32_t)(find_entry_by_ushort_key(param_3,0xc634));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar4 = 0x48;
    if (*(int *)(param_1 + 0x54) != -1) {
      iVar4 = 0x44;
    }
    iVar3 = **(int **)(iVar4 + param_1);
    iVar1 = (((vtbl_entry*)(iVar3))[2].fn)
                      ((int)((vtbl_entry*)(iVar3))[2].adj + (int)*(int **)(iVar4 + param_1),
                       *(uint32_t *)(iVar1 + 8),param_1 + 0x14);
    if (iVar1 != 0) {
      *(int *)(param_2 + 0xc) = iVar1;
      iVar4 = **(int **)(param_1 + 0x4c);
      uVar2 = (((vtbl_entry*)(iVar4))[2].fn)
                        ((int)*(int **)(param_1 + 0x4c) + (int)((vtbl_entry*)(iVar4))[2].adj,iVar1,
                         *(uint32_t *)(param_1 + 4));
      if (*(int *)(*(int *)(param_1 + 4) + 0x1b0) != 0) {
        iVar4 = **(int **)(param_1 + 0x50);
        uVar2 = (((vtbl_entry*)(iVar4))[2].fn)
                          ((int)*(int **)(param_1 + 0x50) + (int)((vtbl_entry*)(iVar4))[2].adj,iVar1);
      }
    }
  }
  return uVar2;
}
