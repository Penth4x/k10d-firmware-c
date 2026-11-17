/* @k10d iterate_vtable_entries_104e506e @ 0x104e506e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of objects, calling a virtual method on each and storing the
 *   results into an output buffer.
 * summary:
 *   The function dereferences a pointer array at param_1+0x40 using param_4-25 as an index
 *   to find a list head. It then traverses a singly-linked list (next pointer at offset
 *   0xc) and invokes virtual slot 10 (offset 0x54) on each node. The return value of each
 *   virtual call is written sequentially to the memory block pointed to by param_2. It
 *   returns 1 if the list was non-empty, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_vtable_entries_104e506e(int param_1,int param_2,uint32_t param_3,int param_4)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + (param_4 + -100) * 4);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    uVar4 = 1;
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        uVar2 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x54))
                          (*(short *)(*(int *)(iVar1 + 0x18) + 0x50) + iVar1);
        *(uint32_t *)(param_2 + iVar3) = uVar2;
        iVar1 = *(int *)(iVar1 + 0xc);
        iVar3 = iVar3 + 4;
      } while (iVar1 != 0);
    }
  }
  return uVar4;
}
