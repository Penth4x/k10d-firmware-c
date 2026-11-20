/* @k10d dispatch_five_mode_variants @ 0x1040512a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Selects one of five code paths based on param_2, each performing a similar sequence of
 *   virtual calls and data copies.
 * summary:
 *   The function retrieves two object pointers via menu_item_register and initializes local
 *   structures. It then branches on param_2 (0-4), where each branch calls a virtual method
 *   with a specific argument (6 or 2), copies 8 bytes of data, and invokes another virtual
 *   method. Finally, it calls cleanup functions on the local structures. The specific
 *   camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_five_mode_variants(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint32_t *puVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t uStack_48;
  uint32_t auStack_44 [4];
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
  
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[3].fn)
            (&uStack_48,iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[3].adj);
  puVar4 = auStack_44 + 1;
  alloc_two_word_pair_1045bc2e(puVar4,0,0);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,6);
    iVar2 = read_first_word_1045bd4c(&uStack_48);
    iVar5 = get_second_word_of_struct(&uStack_48);
    store_two_words_to_memory(puVar4,iVar2 + 0x36,iVar5 + 0x18);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_34 + iVar2) = *(uint32_t *)((int)auStack_44 + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar3,local_30);
    free_heap_block_if_flagged_1045bc54(local_30,2);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,6);
    iVar2 = read_first_word_1045bd4c(&uStack_48);
    iVar5 = get_second_word_of_struct(&uStack_48);
    store_two_words_to_memory(puVar4,iVar2 + 0x48,iVar5 + 0x18);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_2c + iVar2) = *(uint32_t *)((int)auStack_44 + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar3,local_28);
    free_heap_block_if_flagged_1045bc54(local_28,2);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,2);
    iVar2 = read_first_word_1045bd4c(&uStack_48);
    iVar5 = get_second_word_of_struct(&uStack_48);
    store_two_words_to_memory(puVar4,iVar2 + 0x5a,iVar5 + 0x18);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_24 + iVar2) = *(uint32_t *)((int)auStack_44 + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar3,local_20);
    free_heap_block_if_flagged_1045bc54(local_20,2);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 3) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,6);
    iVar2 = read_first_word_1045bd4c(&uStack_48);
    iVar5 = get_second_word_of_struct(&uStack_48);
    store_two_words_to_memory(puVar4,iVar2 + 0x6c,iVar5 + 0x18);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_1c + iVar2) = *(uint32_t *)((int)auStack_44 + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar3,local_18);
    free_heap_block_if_flagged_1045bc54(local_18,2);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 4) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,6);
    iVar2 = read_first_word_1045bd4c(&uStack_48);
    iVar5 = get_second_word_of_struct(&uStack_48);
    store_two_words_to_memory(puVar4,iVar2 + 0x7e,iVar5 + 0x18);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar2) = *(uint32_t *)((int)auStack_44 + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar3,local_10);
    free_heap_block_if_flagged_1045bc54(local_10,2);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  free_heap_block_if_flagged_1045bc54(puVar4,2);
  free_heap_block_if_flagged_1045bc54(&uStack_48,2);
  return;
}
