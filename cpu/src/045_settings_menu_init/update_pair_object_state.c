/* @k10d update_pair_object_state @ 0x103a5376
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Retrieves two objects, invokes virtual methods to update their state, and writes
 *   calculated values back to them.
 * summary:
 *   The function calls menu_item_register twice to obtain two object pointers. It invokes
 *   virtual methods (slot 5) on both objects to update internal state, then uses
 *   return_first_word_1045c514 and alloc_two_word_pair_1045bc2e to compute values which are
 *   written back to the objects via virtual methods (slot 2). Finally, it cleans up
 *   temporary stack structures using free_heap_block_if_flagged_1045bc54 and
 *   free_heap_if_flagged_1045c402. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_pair_object_state(void *param_1)

{
  short sVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint32_t *puVar7;
  int iVar8;
  int iVar9;
  uintptr_t sp;
  int iStack_5c;
  uint8_t auStack_58 [4];
  uint32_t auStack_54 [9];
  uint8_t auStack_30 [8];
  uint8_t auStack_28 [8];
  uint32_t auStack_20 [2];
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  iVar3 = (int)param_1 + 8;
  iVar4 = menu_item_register(iVar3);
  iVar5 = menu_item_register(iVar3);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0x2c))
            (auStack_10,*(short *)(*(int *)(iVar4 + 0xc) + 0x28) + iVar4);
  iVar6 = 8;
  do {
    iVar8 = iVar6 + -4;
    *(uint32_t *)((int)auStack_54 + iVar6) = *(uint32_t *)((int)&uStack_14 + iVar6);
    iVar6 = iVar8;
  } while (iVar8 != 0);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0x2c))
            (auStack_10,*(short *)(*(int *)(iVar5 + 0xc) + 0x28) + iVar5);
  iVar6 = 8;
  do {
    iVar8 = iVar6 + -4;
    *(uint32_t *)((int)auStack_54 + iVar6 + 8) = *(uint32_t *)((int)&uStack_14 + iVar6);
    iVar6 = iVar8;
  } while (iVar8 != 0);
  puVar2 = auStack_54 + 3;
  iVar6 = return_first_word_1045c514(puVar2);
  puVar7 = auStack_54 + 1;
  iVar8 = return_first_word_1045c514(puVar7);
  alloc_two_word_pair_1045bc2e(auStack_54 + 5,(0x260 - iVar6) - iVar8,0x198);
  iVar6 = return_first_word_1045c514(puVar2);
  alloc_two_word_pair_1045bc2e(auStack_54 + 7,0x260 - iVar6,0x198);
  iVar8 = *(int *)(iVar4 + 0xc);
  sVar1 = *(short *)(iVar8 + 0x10);
  iVar6 = 8;
  do {
    iVar9 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_54 + iVar6 + 0x10);
    iVar6 = iVar9;
  } while (iVar9 != 0);
  (**(code **)(iVar8 + 0x14))(sVar1 + iVar4,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  iVar4 = *(int *)(iVar5 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  iVar6 = 8;
  do {
    iVar8 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_54 + iVar6 + 0x18);
    iVar6 = iVar8;
  } while (iVar8 != 0);
  (**(code **)(iVar4 + 0x14))(sVar1 + iVar5,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  iVar4 = menu_item_register(iVar3);
  iVar5 = menu_item_register(iVar3);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0x2c))
            (auStack_30,*(short *)(*(int *)(iVar4 + 0xc) + 0x28) + iVar4);
  iStack_5c = -0x20;
  (**(code **)(*(int *)(iVar5 + 0xc) + 0x2c))
            (auStack_28,*(short *)(*(int *)(iVar5 + 0xc) + 0x28) + iVar5);
  iVar6 = return_first_word_1045c514(puVar2);
  iVar3 = return_first_word_1045c514(puVar7);
  alloc_two_word_pair_1045bc2e(auStack_20,(0x260 - iVar6) - iVar3,0x198);
  iVar6 = return_first_word_1045c514(puVar2);
  alloc_two_word_pair_1045bc2e(&uStack_18,0x260 - iVar6,0x198);
  iVar3 = *(int *)(iVar4 + 0xc);
  sVar1 = *(short *)(iVar3 + 0x10);
  iVar6 = 8;
  do {
    iVar8 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_54 + iVar6 + 0x10);
    iVar6 = iVar8;
  } while (iVar8 != 0);
  (**(code **)(iVar3 + 0x14))(iVar4 + sVar1,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  iVar3 = *(int *)(iVar5 + 0xc);
  sVar1 = *(short *)(iVar3 + 0x10);
  iVar6 = 8;
  do {
    iVar4 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_54 + iVar6 + 0x18);
    iVar6 = iVar4;
  } while (iVar4 != 0);
  (**(code **)(iVar3 + 0x14))(sVar1 + iVar5,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  free_heap_block_if_flagged_1045bc54(&uStack_18,2);
  free_heap_block_if_flagged_1045bc54(auStack_20,2);
  free_heap_if_flagged_1045c402(&stack0xfffffff8 + iStack_5c,2);
  free_heap_if_flagged_1045c402(auStack_30,2);
  free_heap_block_if_flagged_1045bc54(auStack_54 + 7,2);
  free_heap_block_if_flagged_1045bc54(auStack_54 + 5,2);
  free_heap_if_flagged_1045c402(puVar2,2);
  free_heap_if_flagged_1045c402(puVar7,2);
  return;
}
