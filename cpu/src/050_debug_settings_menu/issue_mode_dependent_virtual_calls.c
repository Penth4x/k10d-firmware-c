/* @k10d issue_mode_dependent_virtual_calls @ 0x103b4794
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Branches on a mode parameter to issue a sequence of virtual method calls with mode-
 *   specific offset constants.
 * summary:
 *   The function selects a set of integer offsets based on param_2 (0, 2, or 3) and
 *   param_3. It repeatedly calls menu_item_register to obtain an object pointer, then
 *   invokes virtual methods (via Cfront idiom) passing buffers prepared by
 *   alloc_two_word_pair_1045bc2e. free_heap_block_if_flagged_1045bc54 is called after each
 *   virtual invocation, likely to finalize or transmit the prepared data. The specific
 *   subsystem is not identifiable from the provided callees or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_mode_dependent_virtual_calls(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  uint32_t *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  int iStack_24;
  uint32_t auStack_20 [2];
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  uVar2 = 0x108 - uRam10569fc4 & 0xffff;
  if (param_2 == 0) {
    param_1 = param_1 + 8;
    iVar4 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)
              (iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),param_3);
    if (param_3 == 0) {
      iVar10 = 0x98;
      iVar8 = 0x110;
      iVar4 = 0x188;
      iVar3 = 0x200;
    }
    else {
      iVar10 = 0x80;
      iVar4 = 0x140;
      iVar8 = 0xe0;
      iVar3 = 0x1a0;
    }
    iVar5 = menu_item_register(param_1);
    iVar9 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar9 + 0x10);
    puVar7 = auStack_20;
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,0x20,0x108));
    (((vtbl_entry*)(iVar9))[2].fn)(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar5 = menu_item_register(param_1);
    iVar9 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar9 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar10,0x108));
    (((vtbl_entry*)(iVar9))[2].fn)(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar5 = menu_item_register(param_1);
    iVar9 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar9 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar8,0x108));
    (((vtbl_entry*)(iVar9))[2].fn)(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar5 = menu_item_register(param_1);
    iVar9 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar9 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar4,0x108));
    (((vtbl_entry*)(iVar9))[2].fn)(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar5 = menu_item_register(param_1);
    iVar9 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar9 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar3,0x108));
    (((vtbl_entry*)(iVar9))[2].fn)(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar5 = menu_item_register(param_1);
    iVar9 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar9 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,0x20 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar9))[2].fn)(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar5 = menu_item_register(param_1);
    iVar9 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar9 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar10 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar9))[2].fn)(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar10 = menu_item_register(param_1);
    iVar5 = *(int *)(iVar10 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar8 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar5))[2].fn)(iVar10 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar8 = menu_item_register(param_1);
    iVar10 = *(int *)(iVar8 + 0xc);
    sVar1 = *(short *)(iVar10 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar4 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar10))[2].fn)(iVar8 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar4 = menu_item_register(param_1);
    iVar8 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar8 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar3 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar8))[2].fn)(iVar4 + sVar1,uVar6);
  }
  else if (param_2 == 2) {
    param_1 = param_1 + 8;
    iVar4 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)
              (iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),param_3);
    iVar4 = 0x5c;
    if (param_3 == 0) {
      iVar4 = 0x98;
      iVar8 = 0x110;
      iVar10 = 0x188;
    }
    else {
      iVar10 = 0x14c;
      iVar8 = 0xd4;
    }
    iVar3 = menu_item_register(param_1);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    puVar7 = auStack_18;
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar4,0x108));
    (((vtbl_entry*)(iVar5))[2].fn)(iVar3 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar3 = menu_item_register(param_1);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar8,0x108));
    (((vtbl_entry*)(iVar5))[2].fn)(iVar3 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar3 = menu_item_register(param_1);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar10,0x108));
    (((vtbl_entry*)(iVar5))[2].fn)(iVar3 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar3 = menu_item_register(param_1);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar4 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar5))[2].fn)(iVar3 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar4 = menu_item_register(param_1);
    iVar3 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar8 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar3))[2].fn)(iVar4 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar4 = menu_item_register(param_1);
    iVar8 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar8 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar10 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar8))[2].fn)(iVar4 + sVar1,uVar6);
  }
  else {
    if (param_2 != 3) {
      return;
    }
    param_1 = param_1 + 8;
    iVar4 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)
              (iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),param_3);
    if (param_3 == 0) {
      iStack_24 = 200;
      iVar4 = 0x158;
    }
    else {
      iStack_24 = 0x98;
      iVar4 = 0x110;
    }
    iVar8 = menu_item_register(param_1);
    iVar10 = *(int *)(iVar8 + 0xc);
    sVar1 = *(short *)(iVar10 + 0x10);
    puVar7 = auStack_10;
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iStack_24,0x108));
    (((vtbl_entry*)(iVar10))[2].fn)(iVar8 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar8 = menu_item_register(param_1);
    iVar10 = *(int *)(iVar8 + 0xc);
    sVar1 = *(short *)(iVar10 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar4,0x108));
    (((vtbl_entry*)(iVar10))[2].fn)(iVar8 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar8 = menu_item_register(param_1);
    iVar10 = *(int *)(iVar8 + 0xc);
    sVar1 = *(short *)(iVar10 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iStack_24 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar10))[2].fn)(iVar8 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(puVar7,2);
    iVar8 = menu_item_register(param_1);
    iVar10 = *(int *)(iVar8 + 0xc);
    sVar1 = *(short *)(iVar10 + 0x10);
    uVar6 = (uintptr_t)(alloc_two_word_pair_1045bc2e(puVar7,iVar4 - (uint)uRam10569fc4,uVar2));
    (((vtbl_entry*)(iVar10))[2].fn)(iVar8 + sVar1,uVar6);
  }
  free_heap_block_if_flagged_1045bc54(puVar7,2);
  return;
}
