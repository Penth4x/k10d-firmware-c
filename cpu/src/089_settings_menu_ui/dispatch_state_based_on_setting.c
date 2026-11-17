/* @k10d dispatch_state_based_on_setting @ 0x103fd1d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Reads a setting flag and dispatches a series of virtual calls with computed arguments
 *   based on the flag value.
 * summary:
 *   The function reads a byte at offset 9 of param_1 and a setting (0xa4) to determine the
 *   execution path. It calls read_byte_at_offset_5 and read_byte_at_offset_six to compute
 *   values stored at offsets 0x26 and 0x2a. Depending on the setting value (0 or 1), it
 *   performs multiple virtual calls (slots 2 and 3) on objects retrieved via
 *   menu_item_register, passing arguments prepared by alloc_two_word_pair_1045bc2e and
 *   menu_list_build. The logic branches on the setting value and a computed ushort value to
 *   execute different sequences of virtual method invocations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_based_on_setting(int *param_1)

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
  call_two_helpers_with_byte(*(uint32_t *)(iVar4 + 4),(uint16_t *)((int)param_1 + 0x2a),
               (uint)*(byte *)((int)param_1 + 0x22),cVar3 != '\0');
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
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x1e8,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x218,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x260,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x260,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    uVar5 = (uint32_t)menu_item_register(*param_1);
    menu_list_build((void *)uVar5,(void *)((int)param_1 + 0x26),2,0);
    uVar5 = (uint32_t)menu_item_register(*param_1);
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
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x1b8,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x200,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x1e8,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar4 = menu_item_register(*param_1);
    iVar7 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198);
    (**(code **)(iVar7 + 0x14))(iVar4 + sVar1,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    uVar2 = *(ushort *)((int)param_1 + 0x26);
    if (uVar2 == 0) {
      sStack_a = 0xc;
      uVar5 = (uint32_t)menu_item_register(*param_1);
      menu_list_build((void *)uVar5,&sStack_a,2,0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    else if (uVar2 < 0xc) {
      uVar5 = (uint32_t)menu_item_register(*param_1);
      menu_list_build((void *)uVar5,(void *)((int)param_1 + 0x26),2,0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    else if (uVar2 == 0xc) {
      uVar5 = (uint32_t)menu_item_register(*param_1);
      menu_list_build((void *)uVar5,(void *)((int)param_1 + 0x26),2,0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    else {
      sStack_a = uVar2 - 0xc;
      uVar5 = (uint32_t)menu_item_register(*param_1);
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
    uVar5 = (uint32_t)menu_item_register(*param_1);
    menu_list_build((void *)uVar5,(void *)(param_1 + 10),2,0);
    iVar4 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  return;
}
