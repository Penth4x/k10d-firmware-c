/* @k10d update_setting_based_on_mode_103cdb9c @ 0x103cdb9c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally updates a specific setting (0xbf)
 *   based on the mode and a sub-state field.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against constants 0x1a1000a and 0x1a1000f. If these
 *   match and the mode at 0x14 is one of several specific values (0xc, 0xe, 0x11, 7, 0, 1),
 *   it calls setting_set to write a byte from global RAM (bRam10595b88 or bRam10595b89)
 *   into setting index 0xbf. It also sets a byte at offset 0x22 to various values (0x8c,
 *   0x50, 0xb4, 200) depending on the mode. The role of setting 0xbf and the specific modes
 *   is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cdc9c) overlaps instruction at (ram,0x103cdc9a)
    */

cls_10595b8c * update_setting_based_on_mode_103cdb9c(cls_10595b8c *param_1,int param_2)

{
  int iVar1;
  cls_10595b8c *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10595b8c *)get_or_init_sram_object_103c30bc();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1a1000a) {
      setting_set(param_1->field_0x8,0xbf,(uint)bRam10595b88);
      pcVar2 = (cls_10595b8c *)get_or_init_sram_object_103c30bc();
    }
    if (param_1->field_0x18 == 0x1a1000f) {
      setting_set(param_1->field_0x8,0xbf,(uint)bRam10595b89);
      pcVar2 = (cls_10595b8c *)get_or_init_sram_object_103c30bc();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1a1000a) {
      setting_set(param_1->field_0x8,0xbf,(uint)bRam10595b88);
    }
    if (param_1->field_0x18 == 0x1a1000f) {
      setting_set(param_1->field_0x8,0xbf,(uint)bRam10595b89);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595b8c *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595b8c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595b8c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595b8c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595b8c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595b8c *)0x0;
  }
  return pcVar2;
}
