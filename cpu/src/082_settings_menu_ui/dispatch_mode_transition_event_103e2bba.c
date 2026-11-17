/* @k10d dispatch_mode_transition_event_103e2bba @ 0x103e2bba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Processes a mode-change event ID and returns the next state ID based on current object
 *   state and lookup tables.
 * summary:
 *   The function takes an event ID (param_2) and an object pointer (param_1). It first
 *   invokes a virtual method (slot 1) on a sub-object obtained via menu_item_register,
 *   likely to notify or reset a component. It then branches on the event ID: for 0x181002c,
 *   it resets state fields and queries get_setting_by_index to determine the next state
 *   (0x181002a or 0x181002b). For 0x181002a/0x181002b, it uses a lookup table in ROM
 *   (0x10596db8) or checks the current state (param_1[8]) to select the next state from a
 *   local array. For 0x181002d, it uses another lookup (0x10596dc1) to select between two
 *   states. The return value is the next state ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_transition_event_103e2bba(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t auStack_34 [11];
  
  iVar3 = menu_item_register(*param_1);
  uVar5 = 0x181000f;
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  iVar3 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  if (param_2 == 0x181002c) {
    *(uint8_t *)((int)param_1 + 0x26) = 0;
    param_1[8] = 0;
    iVar3 = get_setting_by_index((int)param_1,0x10);
    *(char *)(param_1 + 9) = (char)iVar3;
    if (iVar3 < 5) {
      uVar5 = 0x181002a;
    }
    else {
      uVar5 = 0x181002b;
    }
  }
  else if ((param_2 == 0x181002a) || (param_2 == 0x181002b)) {
    auStack_34[0] = 0x1810012;
    auStack_34[1] = 0x1810014;
    auStack_34[2] = 0x1810016;
    auStack_34[3] = 0x1810018;
    auStack_34[4] = 0x181001c;
    auStack_34[5] = 0x181001e;
    auStack_34[6] = 0x1810020;
    auStack_34[7] = 0x1810022;
    auStack_34[8] = 0x1810024;
    if (*(char *)((int)param_1 + 0x26) == '\0') {
      uVar4 = get_setting_by_index((int)param_1,0x10);
      uVar2 = 0xff;
      uVar1 = 0;
      iVar3 = 2;
      do {
        if (*(byte *)(uVar1 + 0x10596db8/*ROM*/) == uVar4) {
          uVar2 = uVar1 & 0xff;
        }
        if (*(byte *)(uVar1 + 0x10596db9/*ROM*/) == uVar4) {
          uVar2 = uVar1 + 1 & 0xff;
        }
        if (*(byte *)(uVar1 + 0x10596dba/*ROM*/) == uVar4) {
          uVar2 = uVar1 + 2 & 0xff;
        }
        iVar3 = iVar3 + -1;
        uVar1 = uVar1 + 3;
      } while (-1 < iVar3);
      uVar5 = auStack_34[uVar2];
    }
    else if (param_2 == 0x181002a) {
      if (param_1[8] == 0x1810024) {
        uVar5 = 0x1810012;
      }
      else {
        uVar5 = 0x181001c;
      }
    }
    else if (param_2 == 0x181002b) {
      if (param_1[8] == 0x1810012) {
        uVar5 = 0x1810024;
      }
      else {
        uVar5 = 0x181001e;
      }
    }
  }
  else if ((param_2 == 0x181002d) && (*(char *)((int)param_1 + 0x26) == '\0')) {
    auStack_34[9] = 0x1810030;
    auStack_34[10] = 0x181002f;
    uVar1 = get_setting_by_index((int)param_1,0x11);
    iVar3 = 0xff;
    if (bRam10596dc1 == uVar1) {
      iVar3 = 0;
    }
    if (bRam10596dc2 == uVar1) {
      iVar3 = 1;
    }
    uVar5 = auStack_34[iVar3 + 9];
  }
  return uVar5;
}
