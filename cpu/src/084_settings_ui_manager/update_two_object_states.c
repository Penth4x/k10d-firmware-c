/* @k10d update_two_object_states @ 0x103ea1aa
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Updates two object states via virtual calls based on a setting value threshold.
 * summary:
 *   Reads setting 0xa9 via setting_get. If the value is less than 10, it uses stack buffer
 *   auStack_18 and parameters 0x1e8/0x230; otherwise it uses auStack_10 and parameters
 *   0x1b8/0x200. For each of the two iterations, it retrieves an object via
 *   menu_item_register, prepares data via alloc_two_word_pair_1045bc2e, invokes a virtual
 *   method (slot 2) on a sub-object, cleans up via free_heap_block_if_flagged_1045bc54, and
 *   triggers a refresh via another virtual method (slot 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_object_states(int *param_1)

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
