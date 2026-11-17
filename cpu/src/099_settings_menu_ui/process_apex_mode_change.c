/* @k10d process_apex_mode_change @ 0x104239b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Handles APEX mode transitions by updating exposure parameters and dispatching virtual
 *   calls for UI or sensor updates.
 * summary:
 *   The function initializes a static lookup table on first call and processes mode change
 *   events (param_1[5]). It adjusts exposure values (param_1[8] and param_1[9]) based on
 *   the new mode (e.g., 0xd/0xe for Tv/Av adjustments) and calls menu_list_build to send
 *   data. It also performs virtual calls via menu_item_register to update state, likely for
 *   the OSD or sensor controller, and sets specific flags in the object structure based on
 *   the mode ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10423b18) overlaps instruction at (ram,0x10423b16)
    */

int * process_apex_mode_change(int *param_1,int param_2)

{
  short sVar1;
  uint16_t uVar2;
  char cVar3;
  code *pcVar4;
  uint32_t uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t auStack_20 [8];
  ushort uStack_a;
  
  puVar9 = auStack_20;
  get_or_create_singleton_object_104fb12e();
  if (iRam8001d16c == 0) {
    iRam8001d16c = 1;
    uRam8001d134 = 0x38;
    uRam8001d136 = 0x4e;
    uRam8001d138 = 100;
    uRam8001d13a = 0x7a;
    uRam8001d13c = 0x90;
    uRam8001d13e = 0xa6;
    uRam8001d140 = 0xbc;
    uRam8001d142 = 0xd2;
    uRam8001d144 = 0xe8;
    uRam8001d146 = 0xfe;
    uRam8001d148 = 0x114;
    uRam8001d14a = 0x12a;
    uRam8001d14c = 0x14c;
    uRam8001d14e = 0x156;
    uRam8001d150 = 0x16c;
    uRam8001d152 = 0x182;
    uRam8001d154 = 0x198;
    uRam8001d156 = 0x1ae;
    uRam8001d158 = 0x1c4;
    uRam8001d15a = 0x1da;
    uRam8001d15c = 0x1f0;
    uRam8001d15e = 0x206;
    uRam8001d160 = 0x21c;
    uRam8001d162 = 0x232;
    uRam8001d164 = 0x248;
  }
  param_1[5] = param_2;
  uStack_a = 0;
  if (param_1[6] != 0x1bf0007) goto LAB_10423b02;
  if (param_1[5] == 0xd) {
    if (*(byte *)(param_1 + 8) < 3) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) + 1;
    }
    else {
      cVar3 = '\0';
LAB_10423ad8:
      *(char *)(param_1 + 8) = cVar3;
    }
  }
  else if (param_1[5] == 0xe) {
    if (*(char *)(param_1 + 8) == '\0') {
      cVar3 = '\x03';
    }
    else {
      cVar3 = *(char *)(param_1 + 8) + -1;
    }
    goto LAB_10423ad8;
  }
  uVar5 = menu_item_register(*param_1);
  uStack_a = (ushort)*(byte *)(param_1 + 8);
  menu_list_build((void *)uVar5,&uStack_a,1,0);
LAB_10423b02:
  if (param_1[6] == 0x1bf000c) {
    if (param_1[5] == 0xd) {
      if (param_1[9] < 0x78) {
        param_1[9] = param_1[9] + 10;
      }
      else {
        param_1[9] = 0x78;
      }
    }
    else if (param_1[5] == 0xe) {
      if (param_1[9] < -0x77) {
        param_1[9] = -0x78;
      }
      else {
        param_1[9] = param_1[9] + -10;
      }
    }
    if (param_1[9] < 0) {
      iVar6 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
      uStack_a = -(short)param_1[9];
    }
    else if (param_1[9] < 1) {
      iVar6 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
      iVar6 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
    }
    else {
      iVar6 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
      uStack_a = (ushort)param_1[9];
    }
    iVar8 = 0;
    uVar5 = menu_item_register(*param_1);
    menu_list_build((void *)uVar5,&uStack_a,3,1);
    iVar6 = 0;
    do {
      if ((int)*(short *)(iVar6 + 0x1059dcf0/*ROM*/) == param_1[9]) {
        iVar6 = menu_item_register(*param_1);
        uVar2 = *(uint16_t *)(iVar8 * 2 + -0x7ffe2ecc);
        pcVar4 = *(code **)(*(int *)(iVar6 + 0xc) + 0xf4);
        sVar1 = *(short *)(*(int *)(iVar6 + 0xc) + 0xf0);
        *(uint16_t *)(puVar9 + 2) = 0x18;
        *(uint16_t *)(puVar9 + 6) = 0x30;
        (*pcVar4)(sVar1 + iVar6,2,uVar2,0x120);
        (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
        break;
      }
      iVar6 = iVar6 + 2;
      iVar8 = iVar8 + 1;
    } while (iVar6 < 0x32);
  }
  piVar7 = param_1;
  if (param_1[5] == 0x11) {
    *(uint8_t *)((int)param_1 + 0x2a) = 1;
    *(uint8_t *)((int)param_1 + 0x29) = 0x50;
    piVar7 = (int *)0x0;
  }
  if (param_1[5] == 0xc) {
    piVar7 = (int *)get_or_init_sram_object_104248cc();
  }
  iVar6 = param_1[5];
  if ((((iVar6 == 7) || (iVar6 == 0)) || (iVar6 == 1)) || (iVar6 == 3)) {
    *(uint8_t *)((int)param_1 + 0x29) = 0x8c;
    piVar7 = (int *)0x0;
  }
  if ((param_1[5] == 0x19) || (param_1[5] == 9)) {
    *(uint8_t *)((int)param_1 + 0x29) = 0x50;
    piVar7 = (int *)0x0;
  }
  if (param_1[5] == 0x18) {
    *(uint8_t *)((int)param_1 + 0x29) = 0xb4;
    piVar7 = (int *)0x0;
  }
  if (param_1[5] == 0x2c) {
    *(uint8_t *)((int)param_1 + 0x29) = 0x8c;
    piVar7 = (int *)0x0;
  }
  if (param_1[5] == 10) {
    *(uint8_t *)((int)param_1 + 0x29) = 200;
    piVar7 = (int *)0x0;
  }
  return piVar7;
}
