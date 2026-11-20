/* @k10d apply_setting_based_on_mode_103e52ca @ 0x103e52ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Updates a setting value and writes it to the settings block based on the current mode
 *   and sub-mode.
 * summary:
 *   Stores param_2 into the object at offset 0x14. Depending on the value at 0x14 and 0x18,
 *   it calls setting_set to write specific RAM bytes to setting ID 0xc4. It also sets a
 *   byte at offset 0x22 to various constants (0x8c, 0x50, 0xb4, 200) based on the mode
 *   value. Returns 0 or the result of get_or_init_sram_object_103c40b8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e54ba) overlaps instruction at (ram,0x103e54b8)
    */

cls_10597054 * apply_setting_based_on_mode_103e52ca(cls_10597054 *param_1,int param_2)

{
  int iVar1;
  cls_10597054 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10597054 *)get_or_init_sram_object_103c40b8();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1ac000c) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704c);
      pcVar2 = (cls_10597054 *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ac0010) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704d);
      pcVar2 = (cls_10597054 *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ac0014) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704e);
      pcVar2 = (cls_10597054 *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ac0018) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704f);
      pcVar2 = (cls_10597054 *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ac001c) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam10597050);
      pcVar2 = (cls_10597054 *)get_or_init_sram_object_103c40b8();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1ac000c) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704c);
    }
    if (param_1->field_0x18 == 0x1ac0010) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704d);
    }
    if (param_1->field_0x18 == 0x1ac0014) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704e);
    }
    if (param_1->field_0x18 == 0x1ac0018) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam1059704f);
    }
    if (param_1->field_0x18 == 0x1ac001c) {
      setting_set(param_1->field_0x8,0xc4,(uint)bRam10597050);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597054 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597054 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10597054 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10597054 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597054 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10597054 *)0x0;
  }
  return pcVar2;
}
