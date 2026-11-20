/* @k10d apply_mode_dependent_setting_103e9578 @ 0x103e9578
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a setting (0xd0) based on
 *   mode and sub-state.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. Depending on the
 *   value at 0x14 and the value at 0x18, it calls setting_set with ID 0xd0 and a value from
 *   bRam10597710 or bRam10597711. It also sets a byte at offset 0x22 to various constants
 *   (0x8c, 0x50, 0xb4, 200) based on the mode value. Returns 0 or the result of
 *   get_or_init_sram_object_103c63a0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e9678) overlaps instruction at (ram,0x103e9676)
    */

cls_10597714 * apply_mode_dependent_setting_103e9578(cls_10597714 *param_1,int param_2)

{
  int iVar1;
  cls_10597714 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10597714 *)get_or_init_sram_object_103c63a0();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1b9000a) {
      setting_set(param_1->field_0x8,0xd0,(uint)bRam10597711);
      pcVar2 = (cls_10597714 *)get_or_init_sram_object_103c63a0();
    }
    if (param_1->field_0x18 == 0x1b9000f) {
      setting_set(param_1->field_0x8,0xd0,(uint)bRam10597710);
      pcVar2 = (cls_10597714 *)get_or_init_sram_object_103c63a0();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1b9000a) {
      setting_set(param_1->field_0x8,0xd0,(uint)bRam10597711);
    }
    if (param_1->field_0x18 == 0x1b9000f) {
      setting_set(param_1->field_0x8,0xd0,(uint)bRam10597710);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597714 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597714 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10597714 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10597714 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597714 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10597714 *)0x0;
  }
  return pcVar2;
}
