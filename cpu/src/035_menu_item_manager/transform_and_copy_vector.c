/* @k10d transform_and_copy_vector @ 0x10384a82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Computes a derived 8-byte vector from two parameter pairs and copies the result to a
 *   destination buffer.
 * summary:
 *   The function calls alloc_two_word_pair_1045c3dc with differences of fields at offsets
 *   0x90-0x98 and 0x94-0x9c of the object pointed to by param_2, storing the result in a
 *   local stack buffer. It then calls free_heap_if_flagged_1045c402 with the buffer and the
 *   constant 2. Finally, it copies the 8-byte result from the local buffer to the memory
 *   location specified by param_5. The specific mathematical operation performed by the
 *   callees is not visible in this pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_and_copy_vector(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(auStack_14 + 1,*(int *)(param_2 + 0x90) - *(int *)(param_2 + 0x98),
               *(int *)(param_2 + 0x94) - *(int *)(param_2 + 0x9c));
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar2) = *(uint32_t *)((int)auStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(auStack_14 + 1,2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
