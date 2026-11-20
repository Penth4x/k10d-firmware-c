/* @k10d query_exposure_mode_state_103d9148 @ 0x103d9148
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns the current exposure mode or related camera state based on a mode ID parameter.
 * summary:
 *   The function dispatches on param_2 (values like 0x1800027, 0x1800034, 0x180005a) to
 *   determine which camera state to query. It calls get_setting_by_index to retrieve a
 *   state value and compares it against bytes in the 0x1059655c-0x10596569 range to select
 *   an index. It then returns a value from a local array of 0x18xxxxx constants, which
 *   likely represent exposure modes (P, Tv, Av, etc.) or related camera settings. The
 *   initial virtual calls appear to be cleanup or notification steps.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_exposure_mode_state_103d9148(cls_1059656c *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  char cVar6;
  uintptr_t sp;
  uint32_t auStack_44 [15];
  
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  uVar2 = get_setting_by_index((int)param_1,0xb);
  if (param_2 == 0x1800027) {
    iVar1 = 0xff;
    if (bRam1059655c == uVar2) {
      iVar1 = 0;
    }
    if (bRam1059655d == uVar2) {
      iVar1 = 1;
    }
    if (bRam1059655e == uVar2) {
      iVar1 = 2;
    }
    if (bRam1059655f == uVar2) {
      iVar1 = 3;
    }
    if (bRam10596560 == uVar2) {
      iVar1 = 4;
    }
    cVar6 = -0x50;
  }
  else {
    if (param_2 == 0x180005a) {
      auStack_44[0] = 0x180004c;
      auStack_44[1] = 0x180004e;
      auStack_44[2] = 0x1800050;
      auStack_44[3] = 0x1800052;
      auStack_44[4] = 0x1800054;
      auStack_44[5] = 0x1800056;
      uVar3 = get_setting_by_index((int)param_1,0xc);
      uVar4 = 0xff;
      uVar2 = 0;
      iVar1 = 1;
      do {
        if (*(byte *)(uVar2 + 0x10596561/*ROM*/) == uVar3) {
          uVar4 = uVar2 & 0xff;
        }
        if (*(byte *)(uVar2 + 0x10596562/*ROM*/) == uVar3) {
          uVar4 = uVar2 + 1 & 0xff;
        }
        if (*(byte *)(uVar2 + 0x10596563/*ROM*/) == uVar3) {
          uVar4 = uVar2 + 2 & 0xff;
        }
        iVar1 = iVar1 + -1;
        uVar2 = uVar2 + 3;
      } while (-1 < iVar1);
      uVar5 = auStack_44[uVar4];
      empty_virtual_method();
      return uVar5;
    }
    if (param_2 == 0x1800034) {
      auStack_44[6] = 0x180002f;
      auStack_44[7] = 0x180002d;
      auStack_44[8] = 0x180002b;
      uVar2 = get_setting_by_index((int)param_1,0xd);
      iVar1 = 0xff;
      if (bRam10596567 == uVar2) {
        iVar1 = 0;
      }
      if (bRam10596568 == uVar2) {
        iVar1 = 1;
      }
      if (bRam10596569 == uVar2) {
        iVar1 = 2;
      }
      cVar6 = -0x24;
    }
    else if (param_2 == 0x180003e) {
      auStack_44[9] = 0x1800039;
      auStack_44[10] = 0x1800037;
      auStack_44[0xb] = 0x1800035;
      uVar2 = get_setting_by_index((int)param_1,0xe);
      iVar1 = 0xff;
      if (bRam10596567 == uVar2) {
        iVar1 = 0;
      }
      if (bRam10596568 == uVar2) {
        iVar1 = 1;
      }
      if (bRam10596569 == uVar2) {
        iVar1 = 2;
      }
      cVar6 = -0x18;
    }
    else {
      if (param_2 != 0x1800048) {
        return 0x180000e;
      }
      auStack_44[0xc] = 0x1800043;
      auStack_44[0xd] = 0x1800041;
      auStack_44[0xe] = 0x180003f;
      uVar2 = get_setting_by_index((int)param_1,0xf);
      iVar1 = 0xff;
      if (bRam10596567 == uVar2) {
        iVar1 = 0;
      }
      if (bRam10596568 == uVar2) {
        iVar1 = 1;
      }
      if (bRam10596569 == uVar2) {
        iVar1 = 2;
      }
      cVar6 = -0xc;
    }
  }
  return *(uint32_t *)(&stack0xfffffff8 + (int)cVar6 + iVar1 * 4);
}
