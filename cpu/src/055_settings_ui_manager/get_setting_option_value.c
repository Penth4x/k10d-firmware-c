/* @k10d get_setting_option_value @ 0x103c1a98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 055_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns the current option index for a given setting ID by comparing its value against
 *   known constants.
 * summary:
 *   The function takes a setting ID (param_2) and an object pointer (param_1). For specific
 *   IDs (0x107001a through 0x1070039), it calls setting_get to retrieve the current value
 *   and compares it against a series of global byte constants (bRam10595098-bRam105950a9)
 *   to determine an index (0-4). It then returns a value from a local array based on this
 *   index. For ID 0x107003f, it returns a different ID based on a character at offset 0x21.
 *   The mechanical behavior is mapping a setting's raw value to a discrete option index or
 *   related ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_option_value(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uintptr_t sp;
  
  uVar1 = 0;
  if (param_2 == 0x107003f) {
    cVar4 = *(char *)(param_1 + 0x21);
    if (cVar4 == '?') {
      uVar1 = 0x107001a;
    }
    else if (cVar4 == 'R') {
      uVar1 = 0x1070020;
    }
    else if (cVar4 == 'A') {
      uVar1 = 0x1070027;
    }
    else if (cVar4 == '\\') {
      uVar1 = 0x107002c;
    }
    else if (cVar4 == 'B') {
      uVar1 = 0x1070031;
    }
    else if (cVar4 == 'D') {
      uVar1 = 0x1070039;
    }
    else if (cVar4 == '\x18') {
      uVar1 = 0x1070016;
    }
    else if (cVar4 == '\x0f') {
      uVar1 = 0x1070039;
    }
  }
  else {
    if (param_2 == 0x107001a) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb0);
      iVar2 = 0xff;
      if (bRam10595098 == uVar3) {
        iVar2 = 0;
      }
      if (bRam10595099 == uVar3) {
        iVar2 = 1;
      }
      cVar4 = -0x48;
    }
    else if (param_2 == 0x1070020) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb1);
      iVar2 = 0xff;
      if (bRam1059509a == uVar3) {
        iVar2 = 0;
      }
      if (bRam1059509b == uVar3) {
        iVar2 = 1;
      }
      if (bRam1059509c == uVar3) {
        iVar2 = 2;
      }
      if (bRam1059509d == uVar3) {
        iVar2 = 3;
      }
      cVar4 = -0x40;
    }
    else if (param_2 == 0x1070027) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb2);
      iVar2 = 0xff;
      if (bRam1059509e == uVar3) {
        iVar2 = 0;
      }
      if (bRam1059509f == uVar3) {
        iVar2 = 1;
      }
      cVar4 = -0x30;
    }
    else if (param_2 == 0x107002c) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb3);
      iVar2 = 0xff;
      if (bRam105950a0 == uVar3) {
        iVar2 = 0;
      }
      if (bRam105950a1 == uVar3) {
        iVar2 = 1;
      }
      cVar4 = -0x28;
    }
    else if (param_2 == 0x1070031) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb4);
      iVar2 = 0xff;
      if (bRam105950a2 == uVar3) {
        iVar2 = 0;
      }
      if (bRam105950a3 == uVar3) {
        iVar2 = 1;
      }
      if (bRam105950a4 == uVar3) {
        iVar2 = 2;
      }
      if (bRam105950a5 == uVar3) {
        iVar2 = 3;
      }
      if (bRam105950a6 == uVar3) {
        iVar2 = 4;
      }
      cVar4 = -0x20;
    }
    else {
      if (param_2 != 0x1070039) {
        return 0;
      }
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb5);
      iVar2 = 0xff;
      if (bRam105950a7 == uVar3) {
        iVar2 = 0;
      }
      if (bRam105950a8 == uVar3) {
        iVar2 = 1;
      }
      if (bRam105950a9 == uVar3) {
        iVar2 = 2;
      }
      cVar4 = -0xc;
    }
    uVar1 = *(uint32_t *)(&stack0xfffffff8 + (int)cVar4 + iVar2 * 4);
  }
  return uVar1;
}
