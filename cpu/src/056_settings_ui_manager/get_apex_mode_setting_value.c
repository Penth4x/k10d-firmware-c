/* @k10d get_apex_mode_setting_value @ 0x103c4bc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps an APEX mode character or setting ID to an integer index of the current setting
 *   value.
 * summary:
 *   The function is a virtual getter (slot 8) that retrieves the current value of an
 *   exposure parameter. If param_2 is 0x10a0040, it maps a mode character (e.g., 'U', 'V',
 *   'W', 'X', 'I') to a specific setting ID. Otherwise, it calls setting_get with IDs
 *   0xc3-0xc6, 199, or 200 to read the current value and compares it against a series of
 *   RAM bytes (bRam1059527c-0x10595292) to determine an index (0-4). It then returns the
 *   value from a local array indexed by this result, effectively returning the current
 *   setting's value or a related state code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_apex_mode_setting_value(cls_10595294 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  char cVar4;
  uintptr_t sp;
  
  if (param_2 == 0x10a0040) {
    cVar4 = param_1->field_0x21;
    if (cVar4 == '^') {
      uVar2 = 0x10a0017;
    }
    else if (cVar4 == 'U') {
      uVar2 = 0x10a001c;
    }
    else if (cVar4 == 'V') {
      uVar2 = 0x10a0024;
    }
    else if (cVar4 == 'W') {
      uVar2 = 0x10a002a;
    }
    else if (cVar4 == 'X') {
      uVar2 = 0x10a0032;
    }
    else if (cVar4 == 'I') {
      uVar2 = 0x10a003a;
    }
    else if (cVar4 == '\x15') {
      uVar2 = 0x10a003a;
    }
    else {
      uVar2 = 0x10a0017;
    }
  }
  else {
    if (param_2 == 0x10a0017) {
      uVar3 = setting_get(param_1->field_0x8,0xc3);
      iVar1 = 0xff;
      if (bRam1059527c == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059527d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x5c;
    }
    else if (param_2 == 0x10a001c) {
      uVar3 = setting_get(param_1->field_0x8,0xc4);
      iVar1 = 0xff;
      if (bRam1059527e == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059527f == uVar3) {
        iVar1 = 1;
      }
      if (bRam10595280 == uVar3) {
        iVar1 = 2;
      }
      if (bRam10595281 == uVar3) {
        iVar1 = 3;
      }
      if (bRam10595282 == uVar3) {
        iVar1 = 4;
      }
      cVar4 = -0x54;
    }
    else if (param_2 == 0x10a0024) {
      uVar3 = setting_get(param_1->field_0x8,0xc5);
      iVar1 = 0xff;
      if (bRam10595283 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595284 == uVar3) {
        iVar1 = 1;
      }
      if (bRam10595285 == uVar3) {
        iVar1 = 2;
      }
      cVar4 = -0x40;
    }
    else if (param_2 == 0x10a002a) {
      uVar3 = setting_get(param_1->field_0x8,0xc6);
      iVar1 = 0xff;
      if (bRam10595286 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595287 == uVar3) {
        iVar1 = 1;
      }
      if (bRam10595288 == uVar3) {
        iVar1 = 2;
      }
      if (bRam10595289 == uVar3) {
        iVar1 = 3;
      }
      if (bRam1059528a == uVar3) {
        iVar1 = 4;
      }
      cVar4 = -0x34;
    }
    else if (param_2 == 0x10a0032) {
      uVar3 = setting_get(param_1->field_0x8,199);
      iVar1 = 0xff;
      if (bRam1059528b == uVar3) {
        iVar1 = 0;
      }
      if (bRam1059528c == uVar3) {
        iVar1 = 1;
      }
      if (bRam1059528d == uVar3) {
        iVar1 = 2;
      }
      if (bRam1059528e == uVar3) {
        iVar1 = 3;
      }
      if (bRam1059528f == uVar3) {
        iVar1 = 4;
      }
      cVar4 = -0x20;
    }
    else {
      if (param_2 != 0x10a003a) {
        return 0;
      }
      uVar3 = setting_get(param_1->field_0x8,200);
      iVar1 = 0xff;
      if (bRam10595290 == uVar3) {
        iVar1 = 0;
      }
      if (bRam10595291 == uVar3) {
        iVar1 = 1;
      }
      if (bRam10595292 == uVar3) {
        iVar1 = 2;
      }
      cVar4 = -0xc;
    }
    uVar2 = *(uint32_t *)(&stack0xfffffff8 + (int)cVar4 + iVar1 * 4);
  }
  return uVar2;
}
