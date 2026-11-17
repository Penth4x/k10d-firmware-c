/* @k10d render_two_objects_by_setting_103c09ec @ 0x103c09ec
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Fetches an object, prepares two data buffers, and invokes virtual draw/update methods
 *   on it based on a setting threshold.
 * summary:
 *   Reads setting 0xa9 via setting_get. If the value is less than 10, it uses buffer IDs
 *   0x1e8 and 0x230; otherwise, it uses 0x1b8 and 0x200. For each ID, it calls
 *   alloc_two_word_pair_1045bc2e to prepare data, then performs a virtual call (slot 2) on
 *   an object obtained from menu_item_register, followed by a second virtual call (slot 1)
 *   on a sub-object. The specific nature of the 'rendering' or 'display' is not confirmed
 *   by the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void render_two_objects_by_setting_103c09ec(int *param_1)

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
