/* @k10d render_two_objects_by_setting_103bd7be @ 0x103bd7be
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual draw methods on two objects retrieved via menu_item_register, using
 *   setting 0xa9 to select parameter values.
 * summary:
 *   The function reads setting ID 0xa9 and branches on whether the value is less than 10.
 *   In both branches, it retrieves an object pointer via menu_item_register, allocates a
 *   temporary buffer using alloc_two_word_pair_1045bc2e, and calls a virtual method (slot
 *   2) on a sub-object to process the buffer. It then frees the buffer with
 *   free_heap_block_if_flagged_1045bc54 and calls another virtual method (slot 1) on the
 *   main object. The specific constants passed to the virtual calls differ between branches
 *   (0x1e8/0x230 vs 0x1b8/0x200).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void render_two_objects_by_setting_103bd7be(int *param_1)

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
