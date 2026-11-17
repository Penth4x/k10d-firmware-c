/* @k10d dispatch_mode_transition_event_103f502c @ 0x103f502c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * purpose:
 *   Handles state machine transitions for a UI object by dispatching virtual calls based on
 *   event ID and settings.
 * summary:
 *   The function acts as a virtual method (slot 8) that processes specific event IDs
 *   (0x18d00af, 0x18d000b). It lazily initializes cached settings (0xa5, 0xa6) from the
 *   settings manager. Depending on the event and setting values (0xa7, 0xa8, 0x96), it
 *   triggers a sequence of virtual calls on an object obtained via menu_item_register,
 *   passing computed values derived from cached bytes and a lookup table at 0x10597e7c. It
 *   returns a new event ID to continue the state machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103f53de) overlaps instruction at (ram,0x103f53dc)
    */

uint32_t dispatch_mode_transition_event_103f502c(int *param_1,int param_2)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t auStack_20 [2];
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  uVar5 = 0;
  if (*(char *)((int)param_1 + 0x23) == -1) {
    uVar2 = setting_get(param_1[2],0xa6);
    *(char *)((int)param_1 + 0x23) = (char)uVar2;
  }
  if (*(char *)((int)param_1 + 0x22) == -1) {
    uVar2 = setting_get(param_1[2],0xa5);
    *(char *)((int)param_1 + 0x22) = (char)uVar2;
  }
  if (param_2 == 0x18d00af) {
    iVar3 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    iVar3 = setting_get(param_1[2],0xa8);
    *(char *)(param_1 + 9) = (char)iVar3;
    if (iVar3 == 1) {
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    else {
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    }
    iVar3 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    iVar3 = setting_get(param_1[2],0xa7);
    *(char *)(param_1 + 9) = (char)iVar3;
    if (iVar3 == 1) {
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    else {
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    }
    if (*(char *)((int)param_1 + 0x21) == '8') {
      uVar5 = 0x18d0010;
    }
    else if (*(char *)((int)param_1 + 0x21) == '7') {
      uVar5 = 0x18d005b;
    }
    else {
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      uVar5 = 0x18d000b;
    }
  }
  else if (param_2 == 0x18d000b) {
    iVar3 = setting_get(param_1[2],0x96);
    if (iVar3 == 1) {
      uVar5 = setting_get(param_1[2],0xa8);
      *(char *)(param_1 + 9) = (char)uVar5;
      update_object_fields_and_dispatch(param_1,*(uint8_t *)((int)param_1 + 0x23));
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
      iVar4 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar4 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar4,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
      uVar5 = 0x18d000d;
    }
    else {
      uVar5 = setting_get(param_1[2],0xa7);
      *(char *)(param_1 + 9) = (char)uVar5;
      update_object_fields_and_dispatch(param_1,*(uint8_t *)((int)param_1 + 0x22));
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x22) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      iVar3 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,
                           *(ushort *)((uint)*(byte *)((int)param_1 + 0x23) * 4 + 0x10597e7c/*ROM*/) - 0x18
                           ,*(ushort *)
                             (((uint)*(byte *)((int)param_1 + 0x23) * 2 + 1) * 2 + 0x10597e7c/*ROM*/) -
                            0x18);
      uVar5 = 0x18d000c;
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar3,uVar2);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
  }
  return uVar5;
}
