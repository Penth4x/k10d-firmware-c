/* @k10d send_two_virtual_commands @ 0x1040b4c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 094_settings_menu (unit names are model-proposed)
 * purpose:
 *   Retrieves a setting value, computes two derived offsets, and invokes virtual methods on
 *   an object to send two commands.
 * summary:
 *   The function reads a setting (ID 0xa9) via setting_get and calculates a base value from
 *   a byte at a fixed offset. It then retrieves an object pointer via menu_item_register
 *   and accesses a sub-object at offset 0xc. It calls alloc_two_word_pair_1045bc2e twice
 *   with slightly different arguments (base-0x48 and base) and passes the result to a
 *   virtual method (slot 2) of the sub-object. After each call, it invokes
 *   free_heap_block_if_flagged_1045bc54 and another virtual method (slot 1) on the sub-
 *   object. The specific camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_virtual_commands(int *param_1)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iVar2 = setting_get(param_1[2],0xa9);
  uVar4 = (uint)*(byte *)(iVar2 + 0x10599b8e/*ROM*/) * -0x18 + 0x278 & 0xffff;
  iVar2 = menu_item_register(*param_1);
  iVar5 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uVar4 - 0x48,0x198));
  (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  iVar2 = menu_item_register(*param_1);
  iVar5 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uVar4,0x198));
  (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
