/* @k10d map_setting_to_state_id @ 0x1040996e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_setting_to_state_id(cls_10599a88 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  uVar1 = 0;
  if (param_2 == 0x183001b) {
    if (param_1->field_0x21 == '*') {
      uVar1 = 0x1830015;
    }
    else {
      uVar1 = 0x183000f;
    }
  }
  else if (param_2 == 0x183000f) {
    auStack_18[0] = 0x1830011;
    auStack_18[1] = 0x1830012;
    uVar3 = setting_get(param_1->field_0x8,0x3c);
    iVar2 = 0xff;
    if (bRam10599a84 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10599a85 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_18[iVar2];
  }
  else if (param_2 == 0x1830015) {
    auStack_18[2] = 0x1830017;
    auStack_18[3] = 0x1830018;
    uVar3 = setting_get(param_1->field_0x8,0x3d);
    iVar2 = 0xff;
    if (bRam10599a84 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10599a85 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_18[iVar2 + 2];
  }
  return uVar1;
}
