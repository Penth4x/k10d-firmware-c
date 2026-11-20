/* @k10d dispatch_two_virtual_calls_10499358 @ 0x10499358
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Performs two virtual method calls on objects retrieved from a struct, passing
 *   intermediate results as arguments.
 * summary:
 *   The function first calls find_entry_by_ushort_key with param_3 and constant 0x8769. If
 *   successful, it calls read_array_element_by_index and then find_entry_by_ushort_key
 *   again with constant 0x927c. It then executes a virtual call (slot 2) on an object
 *   pointer found at param_1+0x18 or param_1+0x1c, passing the result of the second
 *   find_entry_by_ushort_key call. If that call returns non-zero, it stores the result in
 *   param_2+0xc and performs a second virtual call (slot 2) on an object pointer at
 *   param_1+0x20, passing the stored result and a value from param_1+4. Returns 1 on
 *   success or 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_virtual_calls_10499358(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (uint32_t)(find_entry_by_ushort_key(param_3,0x8769));
  uVar3 = 1;
  if (iVar1 != 0) {
    uVar2 = read_array_element_by_index(iVar1,0);
    iVar1 = (uint32_t)(find_entry_by_ushort_key(uVar2,0x927c));
    if (iVar1 != 0) {
      iVar5 = 0x18;
      if (*(int *)(param_1 + 0x50) != -1) {
        iVar5 = 0x1c;
      }
      iVar4 = **(int **)(iVar5 + param_1);
      iVar1 = (((vtbl_entry*)(iVar4))[2].fn)
                        ((int)((vtbl_entry*)(iVar4))[2].adj + (int)*(int **)(iVar5 + param_1),
                         *(uint32_t *)(iVar1 + 8),param_1 + 0x24);
      if (iVar1 != 0) {
        *(int *)(param_2 + 0xc) = iVar1;
        iVar5 = **(int **)(param_1 + 0x20);
        uVar3 = (((vtbl_entry*)(iVar5))[2].fn)
                          ((int)*(int **)(param_1 + 0x20) + (int)((vtbl_entry*)(iVar5))[2].adj,iVar1,
                           *(uint32_t *)(param_1 + 4));
      }
    }
  }
  return uVar3;
}
