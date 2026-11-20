/* @k10d dispatch_apex_mode_transition @ 0x103bf978
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Handles APEX mode change events by updating UI state and returning the next mode ID.
 * summary:
 *   The function processes specific event codes (param_2) related to camera exposure modes.
 *   It uses get_setting_by_index to query internal state and maps results to specific mode
 *   identifiers (e.g., 0x102002f, 0x1020037). It invokes virtual methods via
 *   menu_item_register to update object state, likely reflecting the current APEX mode (P,
 *   Tv, Av, etc.) in the UI or internal logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103bfdd6) overlaps instruction at (ram,0x103bfdd4)
    */

uint32_t dispatch_apex_mode_transition(cls_10594f8c *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  char cVar7;
  uintptr_t sp;
  uint32_t auStack_40 [14];
  
  uVar6 = 0;
  if (param_2 == 0x1020053) {
    cVar7 = param_1->field_0x31;
    if (cVar7 == '(') {
      uVar6 = 0x102002f;
    }
    else if (cVar7 == ')') {
      uVar6 = 0x1020037;
    }
    else if ((((cVar7 == '*') || (cVar7 == '+')) || (cVar7 == ',')) || (cVar7 == '-')) {
      uVar6 = 0x1020043;
    }
    else if (cVar7 == '.') {
      uVar6 = 0x1020046;
    }
    else if (cVar7 == '\x01') {
      if (param_1->field_0x35 == '\0') {
        uVar1 = param_1->field_0xc;
        if ((uVar1 & 1) == 1) {
          if (param_1->field_0x32 == '\0') {
            uVar6 = 0x1020025;
          }
          else if (((uVar1 & 2) == 2) || ((uVar1 & 4) == 4)) {
            uVar6 = 0x102002f;
          }
          else {
            uVar6 = 0x1020037;
          }
        }
        else {
          uVar6 = 0x1020043;
        }
      }
      else {
        uVar6 = 0x1020046;
      }
    }
    else {
      uVar6 = 0x1020011;
    }
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    iVar3 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  }
  iVar3 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  iVar3 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  if (param_2 == 0x1020020) {
    iVar3 = get_setting_by_index((int)param_1,0x47);
    if (iVar3 == 0) {
      uVar6 = 0x102001e;
    }
    else {
      uVar6 = 0x102001f;
    }
  }
  else {
    if (param_2 == 0x102001e) {
      uVar4 = get_setting_by_index((int)param_1,5);
      iVar3 = 0xff;
      if (DAT_10594f70/*ROM*/ == uVar4) {
        iVar3 = 0;
      }
      if (DAT_10594f71/*ROM*/ == uVar4) {
        iVar3 = 1;
      }
      if (DAT_10594f72/*ROM*/ == uVar4) {
        iVar3 = 2;
      }
      cVar7 = -0x58;
    }
    else if (param_2 == 0x102001f) {
      uVar4 = get_setting_by_index((int)param_1,5);
      iVar3 = 0xff;
      if (DAT_10594f70/*ROM*/ == uVar4) {
        iVar3 = 0;
      }
      if (DAT_10594f71/*ROM*/ == uVar4) {
        iVar3 = 1;
      }
      if (DAT_10594f72/*ROM*/ == uVar4) {
        iVar3 = 2;
      }
      cVar7 = -0x4c;
    }
    else {
      if (param_2 != 0x102002d) {
        if (param_2 == 0x102002f) {
          auStack_40[0] = 0x1020036;
          auStack_40[1] = 0x1020032;
          auStack_40[2] = 0x1020033;
          auStack_40[3] = 0x1020034;
          auStack_40[4] = 0x1020035;
          uVar4 = get_setting_by_index((int)param_1,0xb);
          iVar3 = 0xff;
          if (bRam10594f75 == uVar4) {
            iVar3 = 0;
          }
          if (bRam10594f76 == uVar4) {
            iVar3 = 1;
          }
          if (bRam10594f77 == uVar4) {
            iVar3 = 2;
          }
          if (bRam10594f78 == uVar4) {
            iVar3 = 3;
          }
          if (bRam10594f79 == uVar4) {
            iVar3 = 4;
          }
          uVar6 = auStack_40[iVar3];
          iVar3 = menu_item_register((int)param_1->field_0x0);
          if (param_1->field_0x32 == '\0') {
            (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].fn)
                      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].adj + iVar3,0);
            return 0x1020036;
          }
          (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].fn)
                    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].adj + iVar3,1);
          return uVar6;
        }
        if (param_2 != 0x1020037) {
          return uVar6;
        }
        auStack_40[5] = 0x102003a;
        auStack_40[6] = 0x102003b;
        auStack_40[7] = 0x102003c;
        auStack_40[8] = 0x102003d;
        auStack_40[9] = 0x102003e;
        auStack_40[10] = 0x102003f;
        auStack_40[0xb] = 0x1020040;
        auStack_40[0xc] = 0x1020041;
        auStack_40[0xd] = 0x1020042;
        uVar5 = get_setting_by_index((int)param_1,0x10);
        uVar2 = 0xff;
        uVar4 = 0;
        iVar3 = 2;
        do {
          if (*(byte *)(uVar4 + 0x10594f7a/*ROM*/) == uVar5) {
            uVar2 = uVar4 & 0xff;
          }
          if (*(byte *)(uVar4 + 0x10594f7b/*ROM*/) == uVar5) {
            uVar2 = uVar4 + 1 & 0xff;
          }
          if (*(byte *)(uVar4 + 0x10594f7c/*ROM*/) == uVar5) {
            uVar2 = uVar4 + 2 & 0xff;
          }
          iVar3 = iVar3 + -1;
          uVar4 = uVar4 + 3;
        } while (-1 < iVar3);
        uVar6 = auStack_40[uVar2 + 5];
        iVar3 = menu_item_register((int)param_1->field_0x0);
        if (((param_1->field_0x32 != '\0') && ((param_1->field_0xc & 2) != 2)) &&
           ((param_1->field_0xc & 4) != 4)) {
          (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].fn)
                    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].adj + iVar3,1);
          return uVar6;
        }
        (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].fn)
                  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[14].adj + iVar3,0);
        return uVar6;
      }
      uVar4 = get_setting_by_index((int)param_1,0x47);
      iVar3 = 0xff;
      if (DAT_10594f73/*ROM*/ == uVar4) {
        iVar3 = 0;
      }
      if (DAT_10594f74/*ROM*/ == uVar4) {
        iVar3 = 1;
      }
      cVar7 = -0x40;
    }
    uVar6 = *(uint32_t *)(&stack0xfffffff8 + (int)cVar7 + iVar3 * 4);
  }
  return uVar6;
}
