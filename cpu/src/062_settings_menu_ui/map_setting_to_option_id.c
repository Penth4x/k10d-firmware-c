/* @k10d map_setting_to_option_id @ 0x103cae8c
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 062_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Resolves a setting ID to a specific option or sub-ID based on the current setting
 *   value.
 * summary:
 *   This function dispatches on param_2 (a setting ID) to determine the current value via
 *   setting_get. It compares this value against constants in RAM (0x105958c8+) to select an
 *   index, which is then used to return a specific ID from a local lookup table. For ID
 *   0x1050080, it performs a virtual call on an object retrieved via menu_item_register and
 *   returns an ID based on a flag in param_1. The function effectively maps a general
 *   setting to a specific state or option identifier.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_setting_to_option_id(cls_105958e8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  char cVar6;
  uintptr_t sp;
  uint32_t auStack_6c [25];
  
  if (param_2 == 0x1050080) {
    if (param_1->field_0x21 == '\v') {
      uVar5 = 0x1050010;
    }
    else {
      uVar5 = 0x1050071;
    }
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    return uVar5;
  }
  if (param_2 == 0x105001a) {
    uVar3 = setting_get(param_1->field_0x8,0x9c);
    iVar2 = 0xff;
    if (bRam105958c8 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105958c9 == uVar3) {
      iVar2 = 1;
    }
    cVar6 = -0x80;
  }
  else if (param_2 == 0x1050027) {
    uVar3 = setting_get(param_1->field_0x8,0x99);
    iVar2 = 0xff;
    if (bRam105958ca == uVar3) {
      iVar2 = 0;
    }
    if (bRam105958cb == uVar3) {
      iVar2 = 1;
    }
    if (bRam105958cc == uVar3) {
      iVar2 = 2;
    }
    cVar6 = -0x78;
  }
  else if (param_2 == 0x1050032) {
    uVar3 = setting_get(param_1->field_0x8,0xaa);
    iVar2 = 0xff;
    if (bRam105958cd == uVar3) {
      iVar2 = 0;
    }
    if (bRam105958ce == uVar3) {
      iVar2 = 1;
    }
    cVar6 = -0x6c;
  }
  else {
    if (param_2 == 0x105005d) {
      uVar5 = setting_get(param_1->field_0x8,0x98);
      param_1->field_0x23 = (char)uVar5;
      return 0x1050037;
    }
    if (param_2 == 0x1050037) {
      auStack_6c[0] = 0x1050038;
      auStack_6c[1] = 0x105003a;
      auStack_6c[2] = 0x105003c;
      auStack_6c[3] = 0x105003e;
      auStack_6c[4] = 0x1050040;
      auStack_6c[5] = 0x1050042;
      auStack_6c[6] = 0x1050044;
      auStack_6c[7] = 0x1050046;
      auStack_6c[8] = 0x1050048;
      auStack_6c[9] = 0x105004a;
      auStack_6c[10] = 0x105004c;
      auStack_6c[0xb] = 0x105004e;
      auStack_6c[0xc] = 0x1050050;
      auStack_6c[0xd] = 0x1050052;
      auStack_6c[0xe] = 0x1050054;
      return auStack_6c[(byte)param_1->field_0x23];
    }
    if (param_2 == 0x1050070) {
      auStack_6c[0xf] = 0x1050062;
      auStack_6c[0x10] = 0x1050064;
      auStack_6c[0x11] = 0x1050066;
      auStack_6c[0x12] = 0x1050068;
      auStack_6c[0x13] = 0x105006a;
      auStack_6c[0x14] = 0x105006c;
      uVar4 = setting_get(param_1->field_0x8,0x9b);
      uVar1 = 0xff;
      uVar3 = 0;
      iVar2 = 1;
      do {
        if (*(byte *)(uVar3 + 0x105958cf/*ROM*/) == uVar4) {
          uVar1 = uVar3 & 0xff;
        }
        if (*(byte *)(uVar3 + 0x105958d0/*ROM*/) == uVar4) {
          uVar1 = uVar3 + 1 & 0xff;
        }
        if (*(byte *)(uVar3 + 0x105958d1/*ROM*/) == uVar4) {
          uVar1 = uVar3 + 2 & 0xff;
        }
        iVar2 = iVar2 + -1;
        uVar3 = uVar3 + 3;
      } while (-1 < iVar2);
      return auStack_6c[uVar1 + 0xf];
    }
    if (param_2 != 0x105007e) {
      return 0;
    }
    auStack_6c[0x15] = 0x1050075;
    auStack_6c[0x16] = 0x1050077;
    auStack_6c[0x17] = 0x1050079;
    auStack_6c[0x18] = 0x105007b;
    uVar3 = setting_get(param_1->field_0x8,0x97);
    iVar2 = 0xff;
    if (bRam105958d5 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105958d6 == uVar3) {
      iVar2 = 1;
    }
    if (bRam105958d7 == uVar3) {
      iVar2 = 2;
    }
    if (bRam105958d8 == uVar3) {
      iVar2 = 3;
    }
    cVar6 = -0x10;
  }
  return *(uint32_t *)(&stack0xfffffff8 + (int)cVar6 + iVar2 * 4);
}
