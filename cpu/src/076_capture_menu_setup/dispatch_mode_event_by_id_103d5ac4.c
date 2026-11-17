/* @k10d dispatch_mode_event_by_id_103d5ac4 @ 0x103d5ac4
 * name: model (proposed by the local model from the decompile, confidence 0.88)
 * unit: 076_capture_menu_setup (unit names are model-proposed)
 * purpose:
 *   Dispatches on event ID to update two state bytes from settings and invoke virtual
 *   slot-2 calls with constructed arguments.
 * summary:
 *   Branches on param_2 (0x18c0066, 0x18c0011, 0x18c0018). For 0x18c0066, reads setting
 *   0xa9 to select between two pairs of virtual slot-2 calls (via
 *   alloc_two_word_pair_1045bc2e/free_heap_block_if_flagged_1045bc54), then sets state
 *   bytes at offsets 0x23 and 0x22 from settings 0xa3/0xa4 and calls one of three handlers
 *   based on byte 0x23, and one of two based on byte 0x22. For 0x18c0011, sets byte 0x23
 *   and returns a sub-event ID. For 0x18c0018, sets byte 0x22 and makes a single virtual
 *   slot-2 call. Returns a new event ID or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d5ade) overlaps instruction at (ram,0x103d5adc)
    */

uint32_t dispatch_mode_event_by_id_103d5ac4(int *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t auStack_20 [2];
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x18c0066) {
    iVar3 = setting_get(param_1[2],0xa9);
    if (iVar3 < 10) {
      iVar3 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,0x1e8,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      iVar3 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,0x230,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_20,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    else {
      iVar3 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x1b8,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      iVar3 = menu_item_register(*param_1);
      iVar6 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar5 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x200,0x198);
      (**(code **)(iVar6 + 0x14))(sVar1 + iVar3,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    copy_five_fields_from_subobject(param_1);
    if (*(char *)((int)param_1 + 0x23) == -1) {
      if (*(char *)((int)param_1 + 0x21) == '>') {
        *(uint8_t *)((int)param_1 + 0x23) = 2;
        iVar3 = setting_get(param_1[2],0xa9);
        if ((iVar3 == 0) || (iVar3 == 0xb)) {
          *(uint8_t *)((int)param_1 + 0x23) = 1;
        }
        else if (((iVar3 == 10) || (iVar3 == 0xc)) || (iVar3 == 0xd)) {
          *(uint8_t *)((int)param_1 + 0x23) = 0;
        }
      }
      else {
        uVar5 = setting_get(param_1[2],0xa3);
        *(char *)((int)param_1 + 0x23) = (char)uVar5;
      }
    }
    write_three_field_groups(param_1);
    cVar2 = *(char *)((int)param_1 + 0x23);
    if (cVar2 == '\0') {
      register_six_menu_items_103d69a2(param_1);
    }
    else if (cVar2 == '\x01') {
      register_six_menu_items_103d6b6a(param_1);
    }
    else if (cVar2 == '\x02') {
      register_six_menu_items_103d6a86(param_1);
    }
    uVar5 = setting_get(param_1[2],0xa4);
    *(char *)((int)param_1 + 0x22) = (char)uVar5;
    build_menu_with_dynamic_item(param_1);
    if (*(char *)((int)param_1 + 0x22) == '\0') {
      register_four_menu_items_103d6c4e(param_1);
    }
    else if (*(char *)((int)param_1 + 0x22) == '\x01') {
      dispatch_menu_item_by_range(param_1);
    }
    uVar5 = 0x18c000d;
  }
  else {
    uVar5 = 0;
    if (param_2 == 0x18c0011) {
      if (*(char *)((int)param_1 + 0x23) == -1) {
        if (*(char *)((int)param_1 + 0x21) == '>') {
          *(uint8_t *)((int)param_1 + 0x23) = 2;
          iVar3 = setting_get(param_1[2],0xa9);
          if ((iVar3 == 0) || (iVar3 == 0xb)) {
            *(uint8_t *)((int)param_1 + 0x23) = 1;
          }
          else if (((iVar3 == 10) || (iVar3 == 0xc)) || (iVar3 == 0xd)) {
            *(uint8_t *)((int)param_1 + 0x23) = 0;
          }
        }
        else {
          uVar5 = setting_get(param_1[2],0xa3);
          *(char *)((int)param_1 + 0x23) = (char)uVar5;
        }
      }
      cVar2 = *(char *)((int)param_1 + 0x23);
      if (cVar2 == '\0') {
        uVar5 = 0x18c0013;
      }
      else if (cVar2 == '\x01') {
        uVar5 = 0x18c0014;
      }
      else if (cVar2 == '\x02') {
        uVar5 = 0x18c0015;
      }
      else {
        uVar5 = 0;
      }
    }
    else if (param_2 == 0x18c0018) {
      if (*(char *)((int)param_1 + 0x22) == -1) {
        uVar5 = setting_get(param_1[2],0xa4);
        *(char *)((int)param_1 + 0x22) = (char)uVar5;
      }
      if (*(char *)((int)param_1 + 0x22) == '\x01') {
        uVar5 = 0x18c001a;
        iVar3 = menu_item_register(*param_1);
        iVar6 = *(int *)(iVar3 + 0xc);
        sVar1 = *(short *)(iVar6 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x218,0x138);
        (**(code **)(iVar6 + 0x14))(iVar3 + sVar1,uVar4);
      }
      else {
        if (*(char *)((int)param_1 + 0x22) != '\0') {
          return 0;
        }
        uVar5 = 0x18c001b;
        iVar3 = menu_item_register(*param_1);
        iVar6 = *(int *)(iVar3 + 0xc);
        sVar1 = *(short *)(iVar6 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x1d0,0x138);
        (**(code **)(iVar6 + 0x14))(iVar3 + sVar1,uVar4);
      }
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
    }
  }
  return uVar5;
}
