/* @k10d dispatch_mode_parameter_update_1037e436 @ 0x1037e436
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Selects one of six parameter-update paths based on param_2 and applies it to two object
 *   instances.
 * summary:
 *   Retrieves two object pointers via menu_item_register, toggles a virtual slot (offset
 *   0xc) on each, and then branches on param_2 (0-5). Each branch calls a virtual method at
 *   offset 0xec with argument 2, gathers data via read_first_word_1045bd4c/56, passes it to
 *   store_two_words_to_memory with a distinct offset, copies 8 bytes to a local buffer,
 *   invokes a virtual method at offset 0x14, and finally calls
 *   free_heap_block_if_flagged_1045bc54. The function cleans up local objects via
 *   free_heap_block_if_flagged_1045bc54 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_parameter_update_1037e436(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t uStack_50;
  uint32_t auStack_4c [4];
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
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0x1c))
            (&uStack_50,iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 0x18));
  puVar2 = auStack_4c + 1;
  alloc_two_word_pair_1045bc2e(puVar2,0,0);
  switch(param_2) {
  case 0:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,2);
    iVar3 = read_first_word_1045bd4c(&uStack_50);
    iVar5 = get_second_word_of_struct(&uStack_50);
    store_two_words_to_memory(puVar2,iVar3 + 0x5e,iVar5 + 8);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_3c + iVar3) = *(uint32_t *)((int)auStack_4c + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (**(code **)(iVar5 + 0x14))(sVar1 + iVar4,local_38);
    free_heap_block_if_flagged_1045bc54(local_38,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 1:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,2);
    iVar3 = read_first_word_1045bd4c(&uStack_50);
    iVar5 = get_second_word_of_struct(&uStack_50);
    store_two_words_to_memory(puVar2,iVar3 + 0xbe,iVar5 + 8);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_1c + iVar3) = *(uint32_t *)((int)auStack_4c + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (**(code **)(iVar5 + 0x14))(sVar1 + iVar4,local_18);
    free_heap_block_if_flagged_1045bc54(local_18,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 2:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,2);
    iVar3 = read_first_word_1045bd4c(&uStack_50);
    iVar5 = get_second_word_of_struct(&uStack_50);
    store_two_words_to_memory(puVar2,iVar3 + 0xa6,iVar5 + 8);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_24 + iVar3) = *(uint32_t *)((int)auStack_4c + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (**(code **)(iVar5 + 0x14))(sVar1 + iVar4,local_20);
    free_heap_block_if_flagged_1045bc54(local_20,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 3:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,2);
    iVar3 = read_first_word_1045bd4c(&uStack_50);
    iVar5 = get_second_word_of_struct(&uStack_50);
    store_two_words_to_memory(puVar2,iVar3 + 0xd4,iVar5 + 8);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar3) = *(uint32_t *)((int)auStack_4c + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (**(code **)(iVar5 + 0x14))(sVar1 + iVar4,local_10);
    free_heap_block_if_flagged_1045bc54(local_10,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 4:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,2);
    iVar3 = read_first_word_1045bd4c(&uStack_50);
    iVar5 = get_second_word_of_struct(&uStack_50);
    store_two_words_to_memory(puVar2,iVar3 + 0x76,iVar5 + 8);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_34 + iVar3) = *(uint32_t *)((int)auStack_4c + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (**(code **)(iVar5 + 0x14))(sVar1 + iVar4,local_30);
    free_heap_block_if_flagged_1045bc54(local_30,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 5:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,2);
    iVar3 = read_first_word_1045bd4c(&uStack_50);
    iVar5 = get_second_word_of_struct(&uStack_50);
    store_two_words_to_memory(puVar2,iVar3 + 0x8e,iVar5 + 8);
    iVar5 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar5 + 0x10);
    iVar3 = 8;
    do {
      iVar6 = iVar3 + -4;
      *(uint32_t *)((int)&uStack_2c + iVar3) = *(uint32_t *)((int)auStack_4c + iVar3);
      iVar3 = iVar6;
    } while (iVar6 != 0);
    (**(code **)(iVar5 + 0x14))(sVar1 + iVar4,local_28);
    free_heap_block_if_flagged_1045bc54(local_28,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  default:
  }
  free_heap_block_if_flagged_1045bc54(puVar2,2);
  free_heap_block_if_flagged_1045bc54(&uStack_50,2);
  return;
}
