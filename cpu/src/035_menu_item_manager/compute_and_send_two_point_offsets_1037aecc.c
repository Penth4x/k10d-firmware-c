/* @k10d compute_and_send_two_point_offsets_1037aecc @ 0x1037aecc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Extracts two object pairs, computes relative offsets against a 0x260 baseline, and
 *   dispatches the results via virtual calls.
 * summary:
 *   The function retrieves two objects via menu_item_register and invokes virtual methods
 *   (slots at +0x2c and +0x1c) to populate local buffers. It processes these buffers using
 *   return_first_word_1045c514 and get_second_word_of_struct, passing the results to
 *   alloc_two_word_pair_1045bc2e with a constant 0x260 (608) as a reference value. Finally,
 *   it copies the computed data into a local array and sends it to both objects via virtual
 *   calls at offset +0x14, followed by cleanup calls to free_heap_block_if_flagged_1045bc54
 *   and free_heap_if_flagged_1045c402.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_send_two_point_offsets_1037aecc(cls_10558990 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  int iVar8;
  uintptr_t sp;
  int iStack_54;
  uint8_t local_50 [8];
  uint32_t auStack_48 [2];
  uint32_t auStack_40 [2];
  uint8_t auStack_38 [8];
  uint8_t auStack_30 [4];
  uint32_t auStack_2c [9];
  
  iVar3 = menu_item_register((int)param_1);
  iVar4 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[5].fn)
            (auStack_48,((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[5].adj + iVar3);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].fn)
            (auStack_40,((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].adj + iVar4);
  iStack_54 = 0x18;
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[3].fn)
            (auStack_38,((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[3].adj + iVar3);
  psVar2 = (short *)(*(int *)(iVar4 + 0xc) + iStack_54);
  (**(code **)(psVar2 + 2))(auStack_30,*psVar2 + iVar4);
  iVar5 = return_first_word_1045c514(auStack_40);
  iVar6 = return_first_word_1045c514(auStack_48);
  uVar7 = get_second_word_of_struct(auStack_38);
  alloc_two_word_pair_1045bc2e(auStack_2c + 1,(0x260 - iVar5) - iVar6,uVar7);
  iVar5 = return_first_word_1045c514(auStack_40);
  uVar7 = get_second_word_of_struct(auStack_30);
  alloc_two_word_pair_1045bc2e(auStack_2c + 3,0x260 - iVar5,uVar7);
  iVar6 = *(int *)(iVar3 + 0xc);
  sVar1 = *(short *)(iVar6 + 0x10);
  iVar5 = 8;
  do {
    iVar8 = iVar5 + -4;
    *(uint32_t *)(local_50 + iVar5 + -4) = *(uint32_t *)((int)auStack_2c + iVar5);
    iVar5 = iVar8;
  } while (iVar8 != 0);
  (((vtbl_entry*)(iVar6))[2].fn)(iVar3 + sVar1,local_50);
  free_heap_block_if_flagged_1045bc54(local_50,2);
  iVar6 = *(int *)(iVar4 + 0xc);
  sVar1 = *(short *)(iVar6 + 0x10);
  iVar5 = 8;
  do {
    iVar3 = iVar5 + -4;
    *(uint32_t *)(local_50 + iVar5 + -4) = *(uint32_t *)((int)auStack_2c + iVar5 + 8);
    iVar5 = iVar3;
  } while (iVar3 != 0);
  (((vtbl_entry*)(iVar6))[2].fn)(sVar1 + iVar4,local_50);
  free_heap_block_if_flagged_1045bc54(local_50,2);
  free_heap_block_if_flagged_1045bc54(auStack_2c + 3,2);
  free_heap_block_if_flagged_1045bc54(auStack_2c + 1,2);
  free_heap_block_if_flagged_1045bc54(auStack_30,2);
  free_heap_block_if_flagged_1045bc54(auStack_38,2);
  free_heap_if_flagged_1045c402(auStack_40,2);
  free_heap_if_flagged_1045c402(auStack_48,2);
  return;
}
