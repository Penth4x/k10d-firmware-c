/* @k10d update_object_fields_and_dispatch @ 0x103f6388
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Updates fields in a struct based on a setting flag and dispatches virtual calls with
 *   computed parameters.
 * summary:
 *   The function reads a flag from param_1 and calls call_two_helpers_with_byte. It then
 *   reads two values via read_byte_at_offset_5/fc and stores them in param_1. Based on
 *   setting_get(param_1[2], 0xa4), it branches to send a series of virtual calls with
 *   different parameters (0x1e8, 0x230, etc.) and updates specific fields in param_1 (0x26,
 *   0x2a).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_fields_and_dispatch(int *param_1,uint32_t param_2)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  byte bVar6;
  uint32_t uVar5;
  int iVar7;
  uintptr_t sp;
  uint32_t auStack_14 [2];
  short sStack_a;
  
  sStack_a = 0;
  cVar3 = *(char *)(param_1 + 9);
  if (cVar3 != '\0') {
    iVar4 = get_or_create_singleton_object_1046d20c();
  }
  else {
    iVar4 = get_or_create_singleton_object_1046d20c();
  }
  call_two_helpers_with_byte(*(uint32_t *)(iVar4 + 4),(uint16_t *)((int)param_1 + 0x2a),param_2,cVar3 != '\0')
  ;
  bVar6 = read_byte_at_offset_5((void *)((int)param_1 + 0x2a));
  *(ushort *)((int)param_1 + 0x26) = (ushort)bVar6;
  bVar6 = read_byte_at_offset_six((void *)((int)param_1 + 0x2a));
  *(ushort *)(param_1 + 10) = (ushort)bVar6;
  iVar4 = setting_get(param_1[2],0xa4);
  *(char *)((int)param_1 + 0x25) = (char)iVar4;
  if (iVar4 == 0) {
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x1e8,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x218,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x260,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x260,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    uVar5 = (uint32_t)(uintptr_t)menu_item_register(*param_1);
    menu_list_build((void *)uVar5,(void *)((int)param_1 + 0x26),2,0);
    uVar5 = (uint32_t)(uintptr_t)menu_item_register(*param_1);
    menu_list_build((void *)uVar5,(void *)(param_1 + 10),2,0);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  }
  else if (iVar4 == 1) {
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x1b8,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x200,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x1e8,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)(uintptr_t)alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    uVar2 = *(ushort *)((int)param_1 + 0x26);
    if (uVar2 == 0) {
      sStack_a = 0xc;
      uVar5 = (uint32_t)(uintptr_t)menu_item_register(*param_1);
      menu_list_build((void *)uVar5,&sStack_a,2,0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    else if (uVar2 < 0xc) {
      uVar5 = (uint32_t)(uintptr_t)menu_item_register(*param_1);
      menu_list_build((void *)uVar5,(void *)((int)param_1 + 0x26),2,0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    else if (uVar2 == 0xc) {
      uVar5 = (uint32_t)(uintptr_t)menu_item_register(*param_1);
      menu_list_build((void *)uVar5,(void *)((int)param_1 + 0x26),2,0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    else {
      sStack_a = uVar2 - 0xc;
      uVar5 = (uint32_t)(uintptr_t)menu_item_register(*param_1);
      menu_list_build((void *)uVar5,&sStack_a,2,0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    uVar5 = (uint32_t)(uintptr_t)menu_item_register(*param_1);
    menu_list_build((void *)uVar5,(void *)(param_1 + 10),2,0);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  return;
}
