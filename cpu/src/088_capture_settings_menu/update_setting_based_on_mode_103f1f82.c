/* @k10d update_setting_based_on_mode_103f1f82 @ 0x103f1f82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a specific setting (0xba)
 *   based on sub-mode and mode value.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1b4000a, 0x1b4000f) and
 *   the mode value at offset 0x14. If conditions match, it calls setting_set to update
 *   setting ID 0xba with values from global variables bRam10597bec or bRam10597bed. It also
 *   sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending on the
 *   mode. The function returns 0 in most branches or the result of
 *   get_or_init_sram_object_103c21d0 in others.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103f2082) overlaps instruction at (ram,0x103f2080)
    */

cls_10597bf0 * update_setting_based_on_mode_103f1f82(cls_10597bf0 *param_1,int param_2)

{
  int iVar1;
  cls_10597bf0 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10597bf0 *)get_or_init_sram_object_103c21d0();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1b4000a) {
      setting_set(param_1->field_0x8,0xba,(uint)bRam10597bec);
      pcVar2 = (cls_10597bf0 *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x1b4000f) {
      setting_set(param_1->field_0x8,0xba,(uint)bRam10597bed);
      pcVar2 = (cls_10597bf0 *)get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1b4000a) {
      setting_set(param_1->field_0x8,0xba,(uint)bRam10597bec);
    }
    if (param_1->field_0x18 == 0x1b4000f) {
      setting_set(param_1->field_0x8,0xba,(uint)bRam10597bed);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597bf0 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597bf0 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10597bf0 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10597bf0 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597bf0 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10597bf0 *)0x0;
  }
  return pcVar2;
}
