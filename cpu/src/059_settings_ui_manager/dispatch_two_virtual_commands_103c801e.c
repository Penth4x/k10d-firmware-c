/* @k10d dispatch_two_virtual_commands_103c801e @ 0x103c801e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 059_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a setting value, computes two derived parameters, and invokes virtual methods
 *   on an object twice with different arguments.
 * summary:
 *   The function reads a setting via setting_get and derives a value from a global byte. It
 *   obtains an object pointer via menu_item_register and accesses a sub-object at offset
 *   0xc. It calls alloc_two_word_pair_1045bc2e to prepare a stack buffer, then invokes
 *   virtual slot 2 (offset 0x14) on the sub-object with the derived value. It calls
 *   free_heap_block_if_flagged_1045bc54 and then virtual slot 1 (offset 0xc) on the sub-
 *   object. This sequence is repeated with a slightly different derived value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_virtual_commands_103c801e(int *param_1)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iVar2 = setting_get(param_1[2],0xa9);
  uVar4 = (uint)*(byte *)(iVar2 + 0x10595778/*ROM*/) * -0x18 + 0x278 & 0xffff;
  iVar2 = menu_item_register(*param_1);
  iVar5 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  uVar3 = alloc_two_word_pair_1045bc2e(auStack_10,uVar4 - 0x48,0x198);
  (**(code **)(iVar5 + 0x14))(sVar1 + iVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  iVar2 = menu_item_register(*param_1);
  iVar5 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  uVar3 = alloc_two_word_pair_1045bc2e(auStack_10,uVar4,0x198);
  (**(code **)(iVar5 + 0x14))(sVar1 + iVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
