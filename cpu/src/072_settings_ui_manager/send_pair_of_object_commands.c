/* @k10d send_pair_of_object_commands @ 0x103d28fe
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 072_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Sends two sequential command payloads to a sub-object via virtual calls, selecting
 *   command IDs based on a setting value.
 * summary:
 *   Gates on param_2 == 0x1930014. Reads setting 0xa9 via setting_get; if <10 uses command
 *   IDs 0x1e8/0x230, else 0x1b8/0x200. For each, retrieves an object via
 *   menu_item_register, builds a payload with alloc_two_word_pair_1045bc2e, invokes virtual
 *   slot 2 on a sub-object, cleans up with free_heap_block_if_flagged_1045bc54, and
 *   triggers virtual slot 1. Returns 0x1930011.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d2916) overlaps instruction at (ram,0x103d2914)
    */

uint32_t send_pair_of_object_commands(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x1930014) {
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
  }
  return 0x1930011;
}
