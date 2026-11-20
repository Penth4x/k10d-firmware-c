/* @k10d resolve_setting_value_index @ 0x103c5cf8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting ID and its current value to an index by comparing against RAM globals.
 * summary:
 *   The function takes an object pointer and a setting ID. If the ID is 0x10b0038, it maps
 *   a character at offset 0x21 to a different ID. Otherwise, it calls setting_get to
 *   retrieve the current value for the given ID. It then compares this value against a
 *   series of RAM globals (bRam10595324-bRam10595332) to determine an index (0-4). Finally,
 *   it uses this index to select a value from a local stack array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t resolve_setting_value_index(cls_10595334 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  char cVar4;
  uintptr_t sp;
  uint32_t auStack_44 [15];
  
  if (param_2 == 0x10b0038) {
    cVar4 = param_1->field_0x21;
    if (cVar4 == 'Z') {
      uVar2 = 0x10b0017;
    }
    else if (cVar4 == '[') {
      uVar2 = 0x10b001c;
    }
    else if (cVar4 == 'M') {
      uVar2 = 0x10b0021;
    }
    else if (cVar4 == 'N') {
      uVar2 = 0x10b0026;
    }
    else if (cVar4 == 'F') {
      uVar2 = 0x10b002b;
    }
    else if (cVar4 == 'O') {
      uVar2 = 0x10b0030;
    }
    else if (cVar4 == '\x17') {
      uVar2 = 0x10b0030;
    }
    else {
      uVar2 = 0x10b0017;
    }
  }
  else {
    if (param_2 == 0x10b0017) {
      uVar3 = setting_get(param_1->field_0x8,0xc9);
      iVar1 = 0xff;
      if (bRam10595324 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595325 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x3c;
    }
    else if (param_2 == 0x10b001c) {
      uVar3 = setting_get(param_1->field_0x8,0xca);
      iVar1 = 0xff;
      if (bRam10595326 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595327 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x34;
    }
    else if (param_2 == 0x10b0021) {
      uVar3 = setting_get(param_1->field_0x8,0xcb);
      iVar1 = 0xff;
      if (bRam10595328 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595329 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x2c;
    }
    else if (param_2 == 0x10b0026) {
      uVar3 = setting_get(param_1->field_0x8,0xcc);
      iVar1 = 0xff;
      if (bRam1059532a == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059532b == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x24;
    }
    else if (param_2 == 0x10b002b) {
      uVar3 = setting_get(param_1->field_0x8,0xcd);
      iVar1 = 0xff;
      if (bRam1059532c == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059532d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x1c;
    }
    else {
      if (param_2 != 0x10b0030) {
        return 0;
      }
      uVar3 = setting_get(param_1->field_0x8,0xce);
      iVar1 = 0xff;
      if (bRam1059532e == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059532f == uVar3) {
        iVar1 = 1;
      }
      if (bRam10595330 == uVar3) {
        iVar1 = 2;
      }
      if (bRam10595331 == uVar3) {
        iVar1 = 3;
      }
      if (bRam10595332 == uVar3) {
        iVar1 = 4;
      }
      cVar4 = -0x14;
    }
    uVar2 = *(uint32_t *)(&stack0xfffffff8 + (int)cVar4 + iVar1 * 4);
  }
  return uVar2;
}
