/* @k10d invoke_two_virtual_operations @ 0x103d08a4
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 067_settings_context (unit names are model-proposed)
 * purpose:
 *   Invokes two virtual methods on a sub-object with different parameters based on a
 *   setting value.
 * summary:
 *   The function reads setting 0xa9 and branches on whether it is less than 10. In both
 *   branches, it retrieves an object via menu_item_register, extracts a sub-object and
 *   offset, allocates a buffer via alloc_two_word_pair_1045bc2e, and invokes a virtual
 *   method (slot 2) on the sub-object. It then frees the buffer via
 *   free_heap_block_if_flagged_1045bc54 and calls another virtual method (slot 1) on the
 *   sub-object. The specific parameters (0x1e8/0x198 vs 0x1b8/0x198) suggest different
 *   configurations or states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_operations(int *param_1)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  iVar2 = setting_get(param_1[2],0xa9);
  if (iVar2 < 10) {
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x1e8,0x198);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x230,0x198);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else {
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x198);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x200,0x198);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  return;
}
