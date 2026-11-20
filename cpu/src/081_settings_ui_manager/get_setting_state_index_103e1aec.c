/* @k10d get_setting_state_index_103e1aec @ 0x103e1aec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting ID and its current value to a small integer index (0, 1, or 0xff) based
 *   on two global state bytes.
 * summary:
 *   The function takes an object pointer and a setting ID (param_2). For specific IDs
 *   (0x182000f, 0x1820015, etc.), it calls setting_get to read the current value. It
 *   compares this value against two global bytes (bRam10596d1c and bRam10596d1d) to
 *   determine an index (0, 1, or 0xff). It then uses this index to select a value from a
 *   local stack array and returns it. The specific values in the stack array are not
 *   visible in the pseudocode, but the logic clearly performs a state-to-index mapping.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_state_index_103e1aec(cls_10596d20 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  char cVar4;
  uintptr_t sp;
  uint32_t auStack_38 [12];
  
  if (param_2 == 0x1820033) {
    if (param_1->field_0x21 == ',') {
      uVar2 = 0x182002d;
    }
    else {
      uVar2 = 0x182000f;
    }
  }
  else {
    if (param_2 == 0x182000f) {
      uVar3 = setting_get(param_1->field_0x8,0x39);
      iVar1 = 0xff;
      if (bRam10596d1c == uVar3) {
        iVar1 = 0;
      }
      if (bRam10596d1d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x30;
    }
    else if (param_2 == 0x1820015) {
      uVar3 = setting_get(param_1->field_0x8,0x38);
      iVar1 = 0xff;
      if (bRam10596d1c == uVar3) {
        iVar1 = 0;
      }
      if (bRam10596d1d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x28;
    }
    else if (param_2 == 0x182001b) {
      uVar3 = setting_get(param_1->field_0x8,0x3b);
      iVar1 = 0xff;
      if (bRam10596d1c == uVar3) {
        iVar1 = 0;
      }
      if (bRam10596d1d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x20;
    }
    else if (param_2 == 0x1820021) {
      uVar3 = setting_get(param_1->field_0x8,0x3a);
      iVar1 = 0xff;
      if (bRam10596d1c == uVar3) {
        iVar1 = 0;
      }
      if (bRam10596d1d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x18;
    }
    else if (param_2 == 0x1820027) {
      uVar3 = setting_get(param_1->field_0x8,0x3e);
      iVar1 = 0xff;
      if (bRam10596d1c == uVar3) {
        iVar1 = 0;
      }
      if (bRam10596d1d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -0x10;
    }
    else {
      if (param_2 != 0x182002d) {
        return 0;
      }
      uVar3 = setting_get(param_1->field_0x8,0x3f);
      iVar1 = 0xff;
      if (bRam10596d1c == uVar3) {
        iVar1 = 0;
      }
      if (bRam10596d1d == uVar3) {
        iVar1 = 1;
      }
      cVar4 = -8;
    }
    uVar2 = *(uint32_t *)(&stack0xfffffff8 + (int)cVar4 + iVar1 * 4);
  }
  return uVar2;
}
