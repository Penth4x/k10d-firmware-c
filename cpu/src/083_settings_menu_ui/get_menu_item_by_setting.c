/* @k10d get_menu_item_by_setting @ 0x103e6ce6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Resolves a camera setting ID to its current option index by comparing the stored value
 *   against known constants.
 * summary:
 *   The function takes a setting ID (param_2) and a context object (param_1). It first
 *   performs two virtual calls via menu_item_register, likely for notification or state
 *   synchronization. It then branches on the setting ID (0x185001c, 0x185001d, or
 *   0x1850023). For each valid ID, it calls setting_get to retrieve the current value and
 *   compares it against a series of global constants (bRam1059720c-f, etc.) to determine
 *   the active option index (0-3 or 0-1). It returns the corresponding option ID from a
 *   local array. If the ID is not recognized, it returns 0x185000f.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_menu_item_by_setting(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t *puVar3;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 == 0x185001c) {
    uStack_28 = 0x1850012;
    uStack_24 = 0x1850014;
    uStack_20 = 0x1850016;
    uStack_1c = 0x1850018;
    uVar2 = setting_get(param_1[2],0x73);
    iVar1 = 0xff;
    if (bRam1059720c == uVar2) {
      iVar1 = 0;
    }
    if (bRam1059720d == uVar2) {
      iVar1 = 1;
    }
    if (bRam1059720e == uVar2) {
      iVar1 = 2;
    }
    if (bRam1059720f == uVar2) {
      iVar1 = 3;
    }
    puVar3 = &uStack_28;
  }
  else if (param_2 == 0x185001d) {
    uStack_18 = 0x1850020;
    uStack_14 = 0x185001f;
    uVar2 = setting_get(param_1[2],0x74);
    iVar1 = 0xff;
    if (bRam10597210 == uVar2) {
      iVar1 = 0;
    }
    if (bRam10597211 == uVar2) {
      iVar1 = 1;
    }
    puVar3 = &uStack_18;
  }
  else {
    if (param_2 != 0x1850023) {
      return 0x185000f;
    }
    uStack_10 = 0x1850026;
    uStack_c = 0x1850025;
    uVar2 = setting_get(param_1[2],0x75);
    iVar1 = 0xff;
    if (bRam10597212 == uVar2) {
      iVar1 = 0;
    }
    if (bRam10597213 == uVar2) {
      iVar1 = 1;
    }
    puVar3 = &uStack_10;
  }
  return puVar3[iVar1];
}
