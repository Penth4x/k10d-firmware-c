/* @k10d resolve_state_transition_id @ 0x103c6bc2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a state ID based on an input ID, a character field, and setting values compared
 *   against global RAM.
 * summary:
 *   The function acts as a state machine transition resolver. If the input ID is 0x10d002d,
 *   it maps a character at offset 0x21 to a specific ID. For other specific IDs, it reads a
 *   setting via setting_get and compares it to global RAM values (bRam105953c4-cb) to
 *   select between two possible next state IDs. It returns the resolved ID or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t resolve_state_transition_id(cls_105953cc *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  uint32_t *puVar5;
  uintptr_t sp;
  uint32_t auStack_28 [8];
  
  if (param_2 == 0x10d002d) {
    cVar1 = param_1->field_0x21;
    if (cVar1 == 'a') {
      uVar3 = 0x10d0016;
    }
    else if (cVar1 == 'b') {
      uVar3 = 0x10d001b;
    }
    else if (cVar1 == 'L') {
      uVar3 = 0x10d0020;
    }
    else if (cVar1 == 'f') {
      uVar3 = 0x10d0025;
    }
    else if (cVar1 == 'Q') {
      uVar3 = 0x10d002a;
    }
    else if (cVar1 == '\r') {
      uVar3 = 0x10d002a;
    }
    else {
      uVar3 = 0x10d0016;
    }
  }
  else {
    if (param_2 == 0x10d0016) {
      auStack_28[0] = 0x10d0018;
      auStack_28[1] = 0x10d0019;
      uVar4 = setting_get(param_1->field_0x8,0xcf);
      iVar2 = 0xff;
      if (bRam105953c4 == uVar4) {
        iVar2 = 0;
      }
      if (bRam105953c5 == uVar4) {
        iVar2 = 1;
      }
      puVar5 = auStack_28;
    }
    else if (param_2 == 0x10d001b) {
      auStack_28[2] = 0x10d001d;
      auStack_28[3] = 0x10d001e;
      uVar4 = setting_get(param_1->field_0x8,0xd0);
      iVar2 = 0xff;
      if (bRam105953c6 == uVar4) {
        iVar2 = 0;
      }
      if (bRam105953c7 == uVar4) {
        iVar2 = 1;
      }
      puVar5 = auStack_28 + 2;
    }
    else if (param_2 == 0x10d0020) {
      auStack_28[4] = 0x10d0022;
      auStack_28[5] = 0x10d0023;
      uVar4 = setting_get(param_1->field_0x8,0xd2);
      iVar2 = 0xff;
      if (bRam105953c8 == uVar4) {
        iVar2 = 0;
      }
      if (bRam105953c9 == uVar4) {
        iVar2 = 1;
      }
      puVar5 = auStack_28 + 4;
    }
    else {
      if (param_2 != 0x10d0025) {
        return 0;
      }
      auStack_28[6] = 0x10d0027;
      auStack_28[7] = 0x10d0028;
      uVar4 = setting_get(param_1->field_0x8,0xc1);
      iVar2 = 0xff;
      if (bRam105953ca == uVar4) {
        iVar2 = 0;
      }
      if (bRam105953cb == uVar4) {
        iVar2 = 1;
      }
      puVar5 = auStack_28 + 6;
    }
    uVar3 = puVar5[iVar2];
  }
  return uVar3;
}
