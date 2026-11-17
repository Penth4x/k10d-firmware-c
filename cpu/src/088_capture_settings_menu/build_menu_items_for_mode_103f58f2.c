/* @k10d build_menu_items_for_mode_103f58f2 @ 0x103f58f2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * purpose:
 *   Updates object state and executes a sequence of virtual calls based on the mode ID in
 *   param_2.
 * summary:
 *   The function branches on param_2 (0x18d000c, 0x18d000d, 0x18d0010, 0x18d005b) to update
 *   param_1[6] and specific settings (0x96, 0xa7, 0xa8). It then performs a series of
 *   virtual method calls (slots 2 and 1) on an object retrieved via menu_item_register,
 *   passing arguments derived from a lookup table at 0x10597e7c and object fields at
 *   offsets 0x22/0x23. The specific sequence of calls and arguments varies per mode ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103f5910) overlaps instruction at (ram,0x103f590e)
    */

void build_menu_items_for_mode_103f58f2(int *param_1,int param_2)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint32_t auStack_20 [2];
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x18d000c) {
    param_1[6] = 0x18d000c;
    setting_set(param_1[2],0x96,0);
    uVar2 = setting_get(param_1[2],0xa7);
    *(char *)(param_1 + 9) = (char)uVar2;
    update_object_fields_and_dispatch(param_1,*(uint8_t *)((int)param_1 + 0x22));
    iVar3 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,
                         *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18,
                         *(ushort *)
                          (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) - 0x18);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
    free_heap_block_if_flagged_1045bc54(auStack_28,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,
                         *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18,
                         *(ushort *)
                          (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) - 0x18);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
    free_heap_block_if_flagged_1045bc54(auStack_28,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,
                         *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18,
                         *(ushort *)
                          (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) - 0x18);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
    free_heap_block_if_flagged_1045bc54(auStack_28,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,
                         *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18,
                         *(ushort *)
                          (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) - 0x18);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
    free_heap_block_if_flagged_1045bc54(auStack_28,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,
                         *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18,
                         *(ushort *)
                          (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) - 0x18);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
    free_heap_block_if_flagged_1045bc54(auStack_28,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    iVar3 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,
                         *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18,
                         *(ushort *)
                          (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) - 0x18);
    (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
    free_heap_block_if_flagged_1045bc54(auStack_28,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  }
  else {
    param_1[6] = param_2;
    if (param_2 == 0x18d000d) {
      setting_set(param_1[2],0x96,1);
      uVar2 = setting_get(param_1[2],0xa8);
      *(char *)(param_1 + 9) = (char)uVar2;
      update_object_fields_and_dispatch(param_1,*(uint8_t *)((int)param_1 + 0x23));
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    }
    else if (param_2 == 0x18d0010) {
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
      uVar2 = setting_get(param_1[2],0xa8);
      *(char *)(param_1 + 9) = (char)uVar2;
      update_object_fields_and_dispatch(param_1,*(uint8_t *)((int)param_1 + 0x23));
    }
    else if (param_2 == 0x18d005b) {
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
      uVar2 = setting_get(param_1[2],0xa7);
      *(char *)(param_1 + 9) = (char)uVar2;
      update_object_fields_and_dispatch(param_1,*(uint8_t *)((int)param_1 + 0x22));
    }
  }
  return;
}
