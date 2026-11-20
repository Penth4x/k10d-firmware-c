/* @k10d render_two_objects_by_setting_103e703e @ 0x103e703e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Fetches an object, allocates a buffer, and invokes virtual draw/update slots twice
 *   based on a setting threshold.
 * summary:
 *   The function reads setting ID 0xa9 and branches on whether the value is less than 10.
 *   In both branches, it retrieves an object via menu_item_register, allocates a buffer
 *   using alloc_two_word_pair_1045bc2e with specific size parameters, and invokes virtual
 *   method slot 2 on a sub-object. It then releases the buffer via
 *   free_heap_block_if_flagged_1045bc54 and calls virtual method slot 1 to finalize the
 *   operation. The specific hex constants passed to the allocator likely correspond to
 *   resource handles or element identifiers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void render_two_objects_by_setting_103e703e(int *param_1)

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
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_18,0x1e8,0x198));
    (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_18,0x230,0x198));
    (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else {
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x198));
    (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x200,0x198));
    (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  return;
}
