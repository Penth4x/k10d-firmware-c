/* @k10d transform_and_write_point @ 0x1037a474
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Computes a 2D point transformation from a structure and writes the result to a
 *   destination buffer.
 * summary:
 *   The function calls alloc_two_word_pair_1045c3dc with two differences derived from
 *   fields at offsets 0x4c-0x58 of the structure pointed to by param_2. It then copies 8
 *   bytes of the result to a local stack area. Next, it calls free_heap_if_flagged_1045c402
 *   with the local area and the constant 2. Finally, it copies the 8-byte result from the
 *   local area to the memory location pointed to by param_5. The specific nature of the
 *   transformation (e.g., rotation, scaling) is not clear from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_and_write_point(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  alloc_two_word_pair_1045c3dc(auStack_14 + 1,*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x54),
               *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x58));
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
