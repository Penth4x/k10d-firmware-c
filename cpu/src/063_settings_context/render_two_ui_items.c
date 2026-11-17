/* @k10d render_two_ui_items @ 0x103cbd80
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 063_settings_context (unit names are model-proposed)
 * purpose:
 *   Invokes virtual draw methods for two UI items, selecting item IDs based on a setting
 *   value.
 * summary:
 *   Reads setting index 0xa9 via setting_get. If the value is less than 10, it uses item
 *   IDs 0x1e8 and 0x230; otherwise, it uses 0x1b8 and 0x200. For each ID, it retrieves an
 *   object via menu_item_register, prepares a parameter block with
 *   alloc_two_word_pair_1045bc2e, invokes a virtual method (slot 2) to render the item,
 *   cleans up with free_heap_block_if_flagged_1045bc54, and calls another virtual method
 *   (slot 1) to update state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void render_two_ui_items(int *param_1)

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
