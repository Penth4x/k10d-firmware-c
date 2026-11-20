/* @k10d apply_mode_setting_value_103e3d32 @ 0x103e3d32
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally updates a setting (0xb9) based on
 *   sub-mode and mode type.
 * summary:
 *   Writes param_2 to offset 0x14 of the object in param_1. If the value is 0xc, 0xe, or
 *   0x11, it calls get_or_init_sram_object_103c21d0 and potentially calls setting_set with
 *   ID 0xb9 using values from bRam10596ee8/9 depending on the value at offset 0x18. For
 *   various other mode values (7, 0, 1, 3, 0x19, 9, 0x18, 0x2c, 10), it writes specific
 *   constants (0x8c, 0x50, 0xb4, 200) to offset 0x22 and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e3e32) overlaps instruction at (ram,0x103e3e30)
    */

cls_10596eec * apply_mode_setting_value_103e3d32(cls_10596eec *param_1,int param_2)

{
  int iVar1;
  cls_10596eec *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10596eec *)get_or_init_sram_object_103c21d0();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1b0000a) {
      setting_set(param_1->field_0x8,0xb9,(uint)bRam10596ee8);
      pcVar2 = (cls_10596eec *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x1b0000f) {
      setting_set(param_1->field_0x8,0xb9,(uint)bRam10596ee9);
      pcVar2 = (cls_10596eec *)get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1b0000a) {
      setting_set(param_1->field_0x8,0xb9,(uint)bRam10596ee8);
    }
    if (param_1->field_0x18 == 0x1b0000f) {
      setting_set(param_1->field_0x8,0xb9,(uint)bRam10596ee9);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596eec *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596eec *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10596eec *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10596eec *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596eec *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10596eec *)0x0;
  }
  return pcVar2;
}
