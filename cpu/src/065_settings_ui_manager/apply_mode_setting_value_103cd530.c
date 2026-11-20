/* @k10d apply_mode_setting_value_103cd530 @ 0x103cd530
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally writes a corresponding setting based
 *   on a sub-mode ID.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x19e000a, 0x19e000f,
 *   0x19e0014) and, if they match, calls setting_set to write a byte from global RAM
 *   variables into setting index 0xbc. It also sets a byte at offset 0x22 to various values
 *   (0x8c, 0x50, 0xb4, 200) depending on the value at offset 0x14. The return value is
 *   either 0 or the result of get_or_init_sram_object_103c30bc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cd680) overlaps instruction at (ram,0x103cd67e)
    */

cls_10595af8 * apply_mode_setting_value_103cd530(cls_10595af8 *param_1,int param_2)

{
  int iVar1;
  cls_10595af8 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10595af8 *)get_or_init_sram_object_103c30bc();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x19e000a) {
      setting_set(param_1->field_0x8,0xbc,(uint)bRam10595af4);
      pcVar2 = (cls_10595af8 *)get_or_init_sram_object_103c30bc();
    }
    if (param_1->field_0x18 == 0x19e000f) {
      setting_set(param_1->field_0x8,0xbc,(uint)bRam10595af5);
      pcVar2 = (cls_10595af8 *)get_or_init_sram_object_103c30bc();
    }
    if (param_1->field_0x18 == 0x19e0014) {
      setting_set(param_1->field_0x8,0xbc,(uint)bRam10595af6);
      pcVar2 = (cls_10595af8 *)get_or_init_sram_object_103c30bc();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x19e000a) {
      setting_set(param_1->field_0x8,0xbc,(uint)bRam10595af4);
    }
    if (param_1->field_0x18 == 0x19e000f) {
      setting_set(param_1->field_0x8,0xbc,(uint)bRam10595af5);
    }
    if (param_1->field_0x18 == 0x19e0014) {
      setting_set(param_1->field_0x8,0xbc,(uint)bRam10595af6);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595af8 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595af8 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595af8 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595af8 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595af8 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595af8 *)0x0;
  }
  return pcVar2;
}
