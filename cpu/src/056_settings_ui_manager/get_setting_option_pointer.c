/* @k10d get_setting_option_pointer @ 0x103c2b0a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Reads a setting value via setting_get and returns a pointer from a local array indexed
 *   by that value.
 * summary:
 *   The function dispatches on param_2 to select a setting ID (0xb6-0xbb) and a local stack
 *   array. It calls setting_get with the object's field at offset 8 and the selected ID,
 *   then uses the returned value to index into the array and return the resulting pointer.
 *   If param_2 is 0x1080034, it maps a character at offset 0x21 to a different param_2
 *   value instead of reading a setting.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_option_pointer(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  char cVar4;
  uintptr_t sp;
  
  if (param_2 == 0x1080034) {
    cVar4 = *(char *)(param_1 + 0x21);
    if (cVar4 == 'E') {
      uVar2 = 0x1080014;
    }
    else if (cVar4 == 'C') {
      uVar2 = 0x1080019;
    }
    else if (cVar4 == 'T') {
      uVar2 = 0x108001e;
    }
    else if (cVar4 == 'Y') {
      uVar2 = 0x1080025;
    }
    else if (cVar4 == ']') {
      uVar2 = 0x108002a;
    }
    else if (cVar4 == '_') {
      uVar2 = 0x108002f;
    }
    else if (cVar4 == '\x11') {
      uVar2 = 0x108002f;
    }
    else {
      uVar2 = 0x1080014;
    }
  }
  else {
    if (param_2 == 0x1080014) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb6);
      iVar1 = 0xff;
      if (bRam1059513c == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059513d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x38;
    }
    else if (param_2 == 0x1080019) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb7);
      iVar1 = 0xff;
      if (bRam1059513e == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059513f == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x30;
    }
    else if (param_2 == 0x108001e) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb8);
      iVar1 = 0xff;
      if (bRam10595140 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595141 == uVar3) {
        iVar1 = 1;
      }
      if (bRam10595142 == uVar3) {
        iVar1 = 2;
      }
      if (bRam10595143 == uVar3) {
        iVar1 = 3;
      }
      cVar4 = -0x28;
    }
    else if (param_2 == 0x1080025) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xb9);
      iVar1 = 0xff;
      if (bRam10595144 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595145 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x18;
    }
    else if (param_2 == 0x108002a) {
      uVar3 = setting_get(*(int *)(param_1 + 8),0xba);
      iVar1 = 0xff;
      if (bRam10595146 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595147 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x10;
    }
    else {
      if (param_2 != 0x108002f) {
        return 0;
      }
      uVar3 = setting_get(*(int *)(param_1 + 8),0xbb);
      iVar1 = 0xff;
      if (bRam10595148 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595149 == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -8;
    }
    uVar2 = *(uint32_t *)(&stack0xfffffff8 + (int)cVar4 + iVar1 * 4);
  }
  return uVar2;
}
