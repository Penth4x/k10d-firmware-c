/* @k10d dispatch_virtual_call_on_param1_1051ad02 @ 0x1051ad02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Performs a chain of virtual method calls on objects referenced by param_1 and stores a
 *   result in param_2.
 * summary:
 *   The function first calls find_entry_by_ushort_key with param_3 and constant 0x8769,
 *   then read_array_element_by_index, and find_entry_by_ushort_key again with constant
 *   0x927c. It then executes a virtual call (slot 2) on an object pointer found at
 *   param_1+0x44 or param_1+0x54, passing a value from the first call and param_1+0x14. If
 *   successful, it stores the result in param_2+0xc and performs two more virtual calls on
 *   objects at param_1+0x4c and param_1+0x50, with the second call conditional on a flag at
 *   *(param_1+4)+0x1b0. The return value is the result of the last virtual call executed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_call_on_param1_1051ad02(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = find_entry_by_ushort_key(param_3,0x8769);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = read_array_element_by_index(iVar1,0);
    iVar1 = find_entry_by_ushort_key(uVar2,0x927c);
    if (iVar1 != 0) {
      iVar5 = 0x48;
      if (*(int *)(param_1 + 0x54) != -1) {
        iVar5 = 0x44;
      }
      iVar4 = **(int **)(iVar5 + param_1);
      iVar1 = (**(code **)(iVar4 + 0x14))
                        ((int)*(short *)(iVar4 + 0x10) + (int)*(int **)(iVar5 + param_1),
                         *(uint32_t *)(iVar1 + 8),param_1 + 0x14);
      if (iVar1 != 0) {
        *(int *)(param_2 + 0xc) = iVar1;
        iVar5 = **(int **)(param_1 + 0x4c);
        uVar3 = (**(code **)(iVar5 + 0x14))
                          ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar5 + 0x10),iVar1,
                           *(uint32_t *)(param_1 + 4));
        if (*(int *)(*(int *)(param_1 + 4) + 0x1b0) != 0) {
          iVar5 = **(int **)(param_1 + 0x50);
          uVar3 = (**(code **)(iVar5 + 0x14))
                            ((int)*(int **)(param_1 + 0x50) + (int)*(short *)(iVar5 + 0x10),iVar1);
        }
      }
    }
  }
  return uVar3;
}
