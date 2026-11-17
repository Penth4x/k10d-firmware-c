/* @k10d dispatch_mode_update_request_1038b660 @ 0x1038b660
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_update_request_1038b660(uint32_t param_1,int param_2,uint32_t *param_3,uint32_t param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint8_t *puVar4;
  uint32_t *puVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t auStack_4c [3];
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
  
  puVar5 = auStack_4c + 1;
  auStack_4c[0] = param_4;
  alloc_two_word_pair_1045bc2e(puVar5,0,0);
  switch(auStack_4c[0]) {
  case 0:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
              (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,6);
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    store_two_words_to_memory(puVar5,iVar2 + 0x36,iVar3 + 0x18);
    iVar3 = *(int *)(param_2 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)auStack_4c + iVar2 + 8) = *(uint32_t *)((int)auStack_4c + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    puVar4 = local_40;
    (**(code **)(iVar3 + 0x14))(sVar1 + param_2,puVar4);
    break;
  case 1:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
              (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,6);
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    store_two_words_to_memory(puVar5,iVar2 + 0x42,iVar3 + 0x18);
    iVar3 = *(int *)(param_2 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_3c + iVar2) = *(uint32_t *)((int)auStack_4c + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    puVar4 = local_38;
    (**(code **)(iVar3 + 0x14))(sVar1 + param_2,puVar4);
    break;
  case 2:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
              (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,6);
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    store_two_words_to_memory(puVar5,iVar2 + 0x4e,iVar3 + 0x18);
    iVar3 = *(int *)(param_2 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_34 + iVar2) = *(uint32_t *)((int)auStack_4c + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    puVar4 = local_30;
    (**(code **)(iVar3 + 0x14))(sVar1 + param_2,puVar4);
    break;
  case 3:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
              (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,2);
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    store_two_words_to_memory(puVar5,iVar2 + 0x5a,iVar3 + 0x18);
    iVar3 = *(int *)(param_2 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_2c + iVar2) = *(uint32_t *)((int)auStack_4c + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    puVar4 = local_28;
    (**(code **)(iVar3 + 0x14))(sVar1 + param_2,puVar4);
    break;
  case 4:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
              (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,6);
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    store_two_words_to_memory(puVar5,iVar2 + 0x66,iVar3 + 0x18);
    iVar3 = *(int *)(param_2 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_24 + iVar2) = *(uint32_t *)((int)auStack_4c + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    puVar4 = local_20;
    (**(code **)(iVar3 + 0x14))(sVar1 + param_2,puVar4);
    break;
  case 5:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
              (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,6);
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    store_two_words_to_memory(puVar5,iVar2 + 0x72,iVar3 + 0x18);
    iVar3 = *(int *)(param_2 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_1c + iVar2) = *(uint32_t *)((int)auStack_4c + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    puVar4 = local_18;
    (**(code **)(iVar3 + 0x14))(sVar1 + param_2,puVar4);
    break;
  case 6:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
              (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,6);
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    store_two_words_to_memory(puVar5,iVar2 + 0x7e,iVar3 + 0x18);
    iVar3 = *(int *)(param_2 + 0xc);
    sVar1 = *(short *)(iVar3 + 0x10);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar2) = *(uint32_t *)((int)auStack_4c + iVar2);
      iVar2 = iVar6;
    } while (iVar6 != 0);
    puVar4 = local_10;
    (**(code **)(iVar3 + 0x14))(sVar1 + param_2,puVar4);
    break;
  default:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xc))
              (*(short *)(*(int *)(param_2 + 0xc) + 8) + param_2,0);
    goto LAB_1038ba0c;
  }
  free_heap_block_if_flagged_1045bc54(puVar4,2);
LAB_1038ba0c:
  free_heap_block_if_flagged_1045bc54(puVar5,2);
  return;
}
