/* @k10d update_setting_based_on_mode_103df7c8 @ 0x103df7c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a specific setting (0xca)
 *   based on sub-mode and mode value.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1b2000a, 0x1b2000f) and
 *   the mode value at offset 0x14. If conditions are met, it calls setting_set to update
 *   setting ID 0xca with values from global bytes bRam10596ac0 or bRam10596ac1. It also
 *   sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending on the
 *   mode value. The return value is either 0 or the result of
 *   get_or_init_sram_object_103c531c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103df8c8) overlaps instruction at (ram,0x103df8c6)
    */

cls_10596ac4 * update_setting_based_on_mode_103df7c8(cls_10596ac4 *param_1,int param_2)

{
  int iVar1;
  cls_10596ac4 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10596ac4 *)get_or_init_sram_object_103c531c();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1b2000a) {
      setting_set(param_1->field_0x8,0xca,(uint)bRam10596ac0);
      pcVar2 = (cls_10596ac4 *)get_or_init_sram_object_103c531c();
    }
    if (param_1->field_0x18 == 0x1b2000f) {
      setting_set(param_1->field_0x8,0xca,(uint)bRam10596ac1);
      pcVar2 = (cls_10596ac4 *)get_or_init_sram_object_103c531c();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1b2000a) {
      setting_set(param_1->field_0x8,0xca,(uint)bRam10596ac0);
    }
    if (param_1->field_0x18 == 0x1b2000f) {
      setting_set(param_1->field_0x8,0xca,(uint)bRam10596ac1);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596ac4 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596ac4 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10596ac4 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10596ac4 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596ac4 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10596ac4 *)0x0;
  }
  return pcVar2;
}
