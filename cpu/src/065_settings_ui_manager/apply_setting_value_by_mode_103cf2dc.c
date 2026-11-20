/* @k10d apply_setting_value_by_mode_103cf2dc @ 0x103cf2dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally writes a specific setting ID based on
 *   that mode and a sub-parameter.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against several constants (0x1af000c-0x1af001c) and, if
 *   the mode at 0x14 is 0xe or 0x11, calls setting_set with ID 199 and values from global
 *   RAM variables. It also sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4,
 *   200) depending on the mode at 0x14. The return value is either 0 or the result of
 *   get_or_init_sram_object_103c40b8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cf484) overlaps instruction at (ram,0x103cf482)
    */

cls_10595d4c * apply_setting_value_by_mode_103cf2dc(cls_10595d4c *param_1,int param_2)

{
  int iVar1;
  cls_10595d4c *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10595d4c *)get_or_init_sram_object_103c40b8();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1af000c) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d44);
      pcVar2 = (cls_10595d4c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1af0010) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d45);
      pcVar2 = (cls_10595d4c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1af0014) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d46);
      pcVar2 = (cls_10595d4c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1af0018) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d47);
      pcVar2 = (cls_10595d4c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1af001c) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d48);
      pcVar2 = (cls_10595d4c *)get_or_init_sram_object_103c40b8();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1af000c) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d44);
    }
    if (param_1->field_0x18 == 0x1af0010) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d45);
    }
    if (param_1->field_0x18 == 0x1af0014) {
      setting_set(param_1->field_0x8,199,(uint)bRam10595d46);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595d4c *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595d4c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595d4c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595d4c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595d4c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595d4c *)0x0;
  }
  return pcVar2;
}
