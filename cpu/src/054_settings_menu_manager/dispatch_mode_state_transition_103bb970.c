/* @k10d dispatch_mode_state_transition_103bb970 @ 0x103bb970
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Handles state machine transitions for a camera mode object based on event codes and
 *   updates internal status fields.
 * summary:
 *   The function acts as a virtual method (slot 8) that processes specific event codes
 *   (param_2) to update the state of the object pointed to by param_1. It reads
 *   configuration values via get_setting_by_index, compares them against global constants,
 *   and sets internal flags (e.g., at offset 0x37 and 0x35) or calls helper functions
 *   (map_key_code_to_event_id, map_key_code_to_stack_index, map_byte_to_seven_values) to
 *   apply changes. It returns a new state code or event ID based on the current
 *   configuration and input event.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_state_transition_103bb970(cls_10594e70 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  int iVar4;
  uint uVar5;
  uint32_t uVar6;
  uintptr_t sp;
  uint uStack_50;
  uint32_t auStack_4c [17];
  
  uVar6 = 0;
  uVar3 = get_or_init_heap_block();
  if (param_2 == 0x101008a) {
    if (param_1->field_0x35 == '\x03') {
      uVar6 = 0x1010074;
    }
    else {
      uVar6 = 0x101000f;
    }
    iVar4 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
    iVar4 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  }
  iVar4 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  iVar4 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  if (param_2 == 0x1010033) {
    param_1->field_0x37 = 0;
    param_1->field_0x24 = 0;
    uVar6 = get_setting_by_index((int)param_1,0x48);
    iVar4 = map_mode_index_to_code_1045b524(uVar3,uVar6);
    param_1->field_0x34 = (char)iVar4;
    if (iVar4 < 5) {
      uVar6 = 0x1010031;
    }
    else {
      uVar6 = 0x1010032;
    }
  }
  else if ((param_2 == 0x1010031) || (param_2 == 0x1010032)) {
    auStack_4c[0] = 0x1010019;
    auStack_4c[1] = 0x101001b;
    auStack_4c[2] = 0x101001d;
    auStack_4c[3] = 0x101001f;
    auStack_4c[4] = 0x1010023;
    auStack_4c[5] = 0x1010025;
    auStack_4c[6] = 0x1010027;
    auStack_4c[7] = 0x1010029;
    auStack_4c[8] = 0x101002b;
    if (param_1->field_0x37 == '\0') {
      uVar6 = get_setting_by_index((int)param_1,0x48);
      uVar5 = map_mode_index_to_code_1045b524(uVar3,uVar6);
      uVar2 = 0xff;
      uVar1 = 0;
      iVar4 = 2;
      do {
        if (*(byte *)(uVar1 + 0x10594e61/*ROM*/) == uVar5) {
          uVar2 = uVar1 & 0xff;
        }
        if (*(byte *)(uVar1 + 0x10594e62/*ROM*/) == uVar5) {
          uVar2 = uVar1 + 1 & 0xff;
        }
        if (*(byte *)(uVar1 + 0x10594e63/*ROM*/) == uVar5) {
          uVar2 = uVar1 + 2 & 0xff;
        }
        iVar4 = iVar4 + -1;
        uVar1 = uVar1 + 3;
      } while (-1 < iVar4);
      uVar6 = auStack_4c[uVar2];
    }
    else if (param_2 == 0x1010031) {
      if (param_1->field_0x24 == 0x101002b) {
        uVar6 = 0x1010019;
      }
      else {
        uVar6 = 0x1010023;
      }
    }
    else if (param_2 == 0x1010032) {
      if (param_1->field_0x24 == 0x1010019) {
        uVar6 = 0x101002b;
      }
      else {
        uVar6 = 0x1010025;
      }
    }
  }
  else if (param_2 == 0x101003f) {
    auStack_4c[9] = 0x1010038;
    auStack_4c[10] = 0x101003a;
    auStack_4c[0xb] = 0x101003c;
    uVar1 = get_setting_by_index((int)param_1,6);
    iVar4 = 0xff;
    if (DAT_10594e44/*ROM*/ == uVar1) {
      iVar4 = 0;
    }
    if (DAT_10594e45/*ROM*/ == uVar1) {
      iVar4 = 1;
    }
    if (DAT_10594e46/*ROM*/ == uVar1) {
      iVar4 = 2;
    }
    uVar6 = auStack_4c[iVar4 + 9];
  }
  else if (param_2 == 0x101004c) {
    auStack_4c[0xc] = 0x1010045;
    auStack_4c[0xd] = 0x1010047;
    auStack_4c[0xe] = 0x1010049;
    uVar1 = get_setting_by_index((int)param_1,7);
    iVar4 = 0xff;
    if (DAT_10594e47/*ROM*/ == uVar1) {
      iVar4 = 0;
    }
    if (DAT_10594e48/*ROM*/ == uVar1) {
      iVar4 = 1;
    }
    if (DAT_10594e49/*ROM*/ == uVar1) {
      iVar4 = 2;
    }
    uVar6 = auStack_4c[iVar4 + 0xc];
  }
  else if (param_2 == 0x101005a) {
    auStack_4c[0xf] = 0x1010054;
    auStack_4c[0x10] = 0x1010052;
    uVar1 = get_setting_by_index((int)param_1,8);
    iVar4 = 0xff;
    if (bRam10594e4a == uVar1) {
      iVar4 = 0;
    }
    if (bRam10594e4b == uVar1) {
      iVar4 = 1;
    }
    uVar6 = auStack_4c[iVar4 + 0xf];
    if (uVar1 == 0) {
      uStack_50 = get_setting_by_index((int)param_1,0);
      uVar1 = get_setting_by_index((int)param_1,3);
      iVar4 = 9;
    }
    else {
      uStack_50 = get_setting_by_index((int)param_1,1);
      uVar1 = get_setting_by_index((int)param_1,4);
      iVar4 = 10;
    }
    uVar2 = get_setting_by_index((int)param_1,iVar4);
    map_key_code_to_event_id(param_1,uStack_50);
    map_key_code_to_stack_index(param_1,uVar1);
    map_byte_to_seven_values(param_1,uVar2);
  }
  else if (param_2 == 0x101005c) {
    iVar4 = get_setting_by_index((int)param_1,8);
    uVar3 = get_setting_by_index((int)param_1,(uint)(iVar4 != 0));
    param_1->field_0x34 = (char)uVar3;
    uVar6 = map_key_code_to_event_id(param_1,(uint)(byte)param_1->field_0x34);
  }
  else if (param_2 == 0x1010068) {
    iVar4 = get_setting_by_index((int)param_1,8);
    if (iVar4 == 0) {
      iVar4 = 3;
    }
    else {
      iVar4 = 4;
    }
    uVar3 = get_setting_by_index((int)param_1,iVar4);
    param_1->field_0x34 = (char)uVar3;
    uVar6 = map_key_code_to_stack_index(param_1,(uint)(byte)param_1->field_0x34);
  }
  else if (param_2 == 0x1010074) {
    iVar4 = get_setting_by_index((int)param_1,8);
    if (iVar4 == 0) {
      iVar4 = 9;
    }
    else {
      iVar4 = 10;
    }
    uVar3 = get_setting_by_index((int)param_1,iVar4);
    param_1->field_0x34 = (char)uVar3;
    uVar6 = map_byte_to_seven_values(param_1,(uint)(byte)param_1->field_0x34);
  }
  return uVar6;
}
