/* @k10d resolve_setting_display_value @ 0x103c3a46
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting ID to a display value by comparing the current setting against known RAM
 *   constants.
 * summary:
 *   The function takes an object pointer and an ID. If the ID is 0x1090036, it returns a
 *   sub-ID based on a character at offset 0x21. Otherwise, it calls setting_get with the ID
 *   (or a derived value) and compares the result to a series of global RAM bytes
 *   (bRam105951dc..e8). Based on the match index, it returns a value from a local stack
 *   array. The specific meaning of the IDs and RAM bytes is not determinable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t resolve_setting_display_value(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  char cVar4;
  uintptr_t sp;
  
  if (param_2 == 0x1090036) {
    cVar4 = *(char *)(param_1 + 0x21);
    if (cVar4 == 'G') {
      uVar2 = 0x1090017;
    }
    else if (cVar4 == 'S') {
      uVar2 = 0x109001d;
    }
    else if (cVar4 == 'H') {
      uVar2 = 0x1090022;
    }
    else if (cVar4 == 'J') {
      uVar2 = 0x1090027;
    }
    else if (cVar4 == '@') {
      uVar2 = 0x109002c;
    }
    else if (cVar4 == 'P') {
      uVar2 = 0x1090031;
    }
    else if (cVar4 == '\x13') {
      uVar2 = 0x1090031;
    }
    else {
      uVar2 = 0x1090017;
    }
  }
  else {
    if (param_2 == 0x1090017) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xbc);
      iVar1 = 0xff;
      if (bRam105951dc == uVar3) {
        iVar1 = 0;
      }
      if (bRam105951dd == uVar3) {
        iVar1 = 1;
      }
      if (bRam105951de == uVar3) {
        iVar1 = 2;
      }
      cVar4 = -0x34;
    }
    else if (param_2 == 0x109001d) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xbd);
      iVar1 = 0xff;
      if (bRam105951df == uVar3) {
        iVar1 = 0;
      }
      if (bRam105951e0 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x28;
    }
    else if (param_2 == 0x1090022) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xbe);
      iVar1 = 0xff;
      if (bRam105951e1 == uVar3) {
        iVar1 = 0;
      }
      if (bRam105951e2 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x20;
    }
    else if (param_2 == 0x1090027) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xbf);
      iVar1 = 0xff;
      if (bRam105951e3 == uVar3) {
        iVar1 = 0;
      }
      if (bRam105951e4 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x18;
    }
    else if (param_2 == 0x109002c) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xc0);
      iVar1 = 0xff;
      if (bRam105951e5 == uVar3) {
        iVar1 = 0;
      }
      if (bRam105951e6 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x10;
    }
    else {
      if (param_2 != 0x1090031) {
        return 0;
      }
      uVar3 = get_setting_by_index(param_1,2);
      iVar1 = 0xff;
      if (bRam105951e7 == uVar3) {
        iVar1 = 0;
      }
      if (bRam105951e8 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -8;
    }
    uVar2 = *(uint32_t *)(&stack0xfffffff8 + (int)cVar4 + iVar1 * 4);
  }
  return uVar2;
}
