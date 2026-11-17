/* @k10d render_apex_mode_indicator @ 0x1037ea9a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Draws the current APEX exposure mode symbol on the OSDC display based on the mode
 *   index.
 * summary:
 *   The function retrieves UI object handles via menu_item_register and uses virtual calls
 *   to configure display layers. It branches on param_2 (0-16) to select specific
 *   coordinates and virtual method calls, likely corresponding to P, Tv, Av, Sv, TAv, M, B,
 *   and X modes. It calls store_two_words_to_memory to set position and virtual methods to
 *   render the indicator, then cleans up local UI state objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void render_apex_mode_indicator(int param_1,int param_2)

{
  short sVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t uStack_38;
  uint32_t auStack_34 [4];
  uint32_t uStack_24;
  uint8_t local_20 [4];
  uint32_t uStack_1c;
  uint8_t local_18 [4];
  uint32_t uStack_14;
  uint8_t local_10 [8];
  
  iVar3 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0x1c))
            (&uStack_38,*(short *)(*(int *)(iVar3 + 0xc) + 0x18) + iVar3);
  puVar2 = auStack_34 + 1;
  alloc_two_word_pair_1045bc2e(puVar2,0,0);
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,6);
    iVar5 = read_first_word_1045bd4c(&uStack_38);
    iVar6 = get_second_word_of_struct(&uStack_38);
    store_two_words_to_memory(puVar2,iVar5 + ((8 - param_2) * -8 + 0x9eU & 0xffff),iVar6 + 0x14);
    iVar6 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar6 + 0x10);
    iVar5 = 8;
    do {
      iVar7 = iVar5 + -4;
      *(uint32_t *)((int)&uStack_24 + iVar5) = *(uint32_t *)((int)auStack_34 + iVar5);
      iVar5 = iVar7;
    } while (iVar7 != 0);
    (**(code **)(iVar6 + 0x14))(sVar1 + iVar4,local_20);
    free_heap_block_if_flagged_1045bc54(local_20,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 8:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,2);
    iVar5 = read_first_word_1045bd4c(&uStack_38);
    iVar6 = get_second_word_of_struct(&uStack_38);
    store_two_words_to_memory(puVar2,iVar5 + 0x9c,iVar6 + 0x14);
    iVar6 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar6 + 0x10);
    iVar5 = 8;
    do {
      iVar7 = iVar5 + -4;
      *(uint32_t *)((int)&uStack_1c + iVar5) = *(uint32_t *)((int)auStack_34 + iVar5);
      iVar5 = iVar7;
    } while (iVar7 != 0);
    (**(code **)(iVar6 + 0x14))(sVar1 + iVar4,local_18);
    free_heap_block_if_flagged_1045bc54(local_18,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xec))(*(short *)(*(int *)(iVar4 + 0xc) + 0xe8) + iVar4,6);
    iVar5 = read_first_word_1045bd4c(&uStack_38);
    iVar6 = get_second_word_of_struct(&uStack_38);
    store_two_words_to_memory(puVar2,iVar5 + ((param_2 + -8) * 8 + 0x9aU & 0xffff),iVar6 + 0x14);
    iVar6 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar6 + 0x10);
    iVar5 = 8;
    do {
      iVar7 = iVar5 + -4;
      *(uint32_t *)((int)&uStack_14 + iVar5) = *(uint32_t *)((int)auStack_34 + iVar5);
      iVar5 = iVar7;
    } while (iVar7 != 0);
    (**(code **)(iVar6 + 0x14))(sVar1 + iVar4,local_10);
    free_heap_block_if_flagged_1045bc54(local_10,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  default:
  }
  free_heap_block_if_flagged_1045bc54(puVar2,2);
  free_heap_block_if_flagged_1045bc54(&uStack_38,2);
  return;
}
