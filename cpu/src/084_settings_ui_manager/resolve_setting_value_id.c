/* @k10d resolve_setting_value_id @ 0x103e9ed0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a specific setting ID and its current value to a corresponding resource ID via
 *   global lookup tables.
 * summary:
 *   The function performs two virtual calls (slot 2) on an object retrieved via
 *   menu_item_register, likely for UI notification or state update. It then checks if
 *   param_2 matches 0x187001c or 0x187001d. If so, it reads the setting value using
 *   setting_get and compares it against global bytes (bRam105977a4-a9) to determine an
 *   index. This index selects a value from a local array of IDs (0x1870012-0x1870020) to
 *   return; otherwise, it returns the default ID 0x187000f.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t resolve_setting_value_id(cls_105977ac *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t auStack_20 [6];
  
  iVar1 = menu_item_register((int)param_1->field_0x0);
  uVar3 = 0x187000f;
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 == 0x187001c) {
    auStack_20[0] = 0x1870012;
    auStack_20[1] = 0x1870014;
    auStack_20[2] = 0x1870016;
    auStack_20[3] = 0x1870018;
    uVar2 = setting_get(param_1->field_0x8,0x7f);
    iVar1 = 0xff;
    if (bRam105977a4 == uVar2) {
      iVar1 = 0;
    }
    if (bRam105977a5 == uVar2) {
      iVar1 = 1;
    }
    if (bRam105977a6 == uVar2) {
      iVar1 = 2;
    }
    if (bRam105977a7 == uVar2) {
      iVar1 = 3;
    }
    uVar3 = auStack_20[iVar1];
  }
  else if (param_2 == 0x187001d) {
    auStack_20[4] = 0x1870020;
    auStack_20[5] = 0x187001f;
    uVar2 = setting_get(param_1->field_0x8,0x80);
    iVar1 = 0xff;
    if (bRam105977a8 == uVar2) {
      iVar1 = 0;
    }
    if (bRam105977a9 == uVar2) {
      iVar1 = 1;
    }
    uVar3 = auStack_20[iVar1 + 4];
  }
  return uVar3;
}
