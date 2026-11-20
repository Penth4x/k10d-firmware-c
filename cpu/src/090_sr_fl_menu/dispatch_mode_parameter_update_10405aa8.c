/* @k10d dispatch_mode_parameter_update_10405aa8 @ 0x10405aa8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Selects one of seven parameter sets based on param_2 and updates an object via virtual
 *   calls.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and performs a virtual
 *   call to initialize or reset state. It then switches on param_2 (0-6) to select specific
 *   offsets for a virtual method call, copies data from a stack buffer, and invokes another
 *   virtual method to apply the changes. Finally, it cleans up local resources using
 *   free_heap_block_if_flagged_1045bc54.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_parameter_update_10405aa8(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t uStack_58;
  uint32_t auStack_54 [4];
  uint32_t uStack_44;
  uint8_t local_40 [4];
  uint32_t uStack_3c;
  uint8_t local_38 [4];
  uint32_t uStack_34;
  uint8_t local_30 [4];
  uint32_t uStack_2c;
  uint8_t local_28 [4];
  uint32_t uStack_24;
  uint8_t local_20 [4];
  uint32_t uStack_1c;
  uint8_t local_18 [4];
  uint32_t uStack_14;
  uint8_t local_10 [8];
  
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[3].fn)
            (&uStack_58,iVar3 + ((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[3].adj);
  puVar2 = auStack_54 + 1;
  alloc_two_word_pair_1045bc2e(puVar2,0,0);
  switch(param_2) {
  case 0:
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,6);
    iVar3 = read_first_word_1045bd4c(&uStack_58);
    iVar5 = get_second_word_of_struct(&uStack_58);
    store_two_words_to_memory(puVar2,iVar3 + 0x36,iVar5 + 0x18);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_44 + iVar3) = *(uint32_t *)((int)auStack_54 + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar4,local_40);
    free_heap_block_if_flagged_1045bc54(local_40,2);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 1:
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,6);
    iVar3 = read_first_word_1045bd4c(&uStack_58);
    iVar5 = get_second_word_of_struct(&uStack_58);
    store_two_words_to_memory(puVar2,iVar3 + 0x42,iVar5 + 0x18);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_3c + iVar3) = *(uint32_t *)((int)auStack_54 + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar4,local_38);
    free_heap_block_if_flagged_1045bc54(local_38,2);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 2:
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,6);
    iVar3 = read_first_word_1045bd4c(&uStack_58);
    iVar5 = get_second_word_of_struct(&uStack_58);
    store_two_words_to_memory(puVar2,iVar3 + 0x4e,iVar5 + 0x18);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_34 + iVar3) = *(uint32_t *)((int)auStack_54 + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar4,local_30);
    free_heap_block_if_flagged_1045bc54(local_30,2);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 3:
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,2);
    iVar3 = read_first_word_1045bd4c(&uStack_58);
    iVar5 = get_second_word_of_struct(&uStack_58);
    store_two_words_to_memory(puVar2,iVar3 + 0x5a,iVar5 + 0x18);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_2c + iVar3) = *(uint32_t *)((int)auStack_54 + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar4,local_28);
    free_heap_block_if_flagged_1045bc54(local_28,2);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 4:
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,6);
    iVar3 = read_first_word_1045bd4c(&uStack_58);
    iVar5 = get_second_word_of_struct(&uStack_58);
    store_two_words_to_memory(puVar2,iVar3 + 0x66,iVar5 + 0x18);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_24 + iVar3) = *(uint32_t *)((int)auStack_54 + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar4,local_20);
    free_heap_block_if_flagged_1045bc54(local_20,2);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 5:
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,6);
    iVar3 = read_first_word_1045bd4c(&uStack_58);
    iVar5 = get_second_word_of_struct(&uStack_58);
    store_two_words_to_memory(puVar2,iVar3 + 0x72,iVar5 + 0x18);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_1c + iVar3) = *(uint32_t *)((int)auStack_54 + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar4,local_18);
    free_heap_block_if_flagged_1045bc54(local_18,2);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 6:
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,6);
    iVar3 = read_first_word_1045bd4c(&uStack_58);
    iVar5 = get_second_word_of_struct(&uStack_58);
    store_two_words_to_memory(puVar2,iVar3 + 0x7e,iVar5 + 0x18);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar3) = *(uint32_t *)((int)auStack_54 + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar4,local_10);
    free_heap_block_if_flagged_1045bc54(local_10,2);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  default:
  }
  free_heap_block_if_flagged_1045bc54(puVar2,2);
  free_heap_block_if_flagged_1045bc54(&uStack_58,2);
  return;
}
