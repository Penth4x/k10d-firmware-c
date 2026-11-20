/* @k10d apply_mode_setting_value_103d7b1e @ 0x103d7b1e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally writes a setting based on the mode
 *   and sub-state.
 * summary:
 *   Writes param_2 to offset 0x14 of the object in param_1. Depending on the value at 0x14
 *   and the value at 0x18, it calls setting_set with ID 0xb2 and a value from bRam105964c0
 *   or bRam105964c1. It also sets a byte at offset 0x22 to various constants (0x8c, 0x50,
 *   0xb4, 200) based on the mode value. Calls get_or_init_sram_object_103c0f94 in some
 *   branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d7c1e) overlaps instruction at (ram,0x103d7c1c)
    */

cls_105964c4 * apply_mode_setting_value_103d7b1e(cls_105964c4 *param_1,int param_2)

{
  int iVar1;
  cls_105964c4 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_105964c4 *)get_or_init_sram_object_103c0f94();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x198000a) {
      setting_set(param_1->field_0x8,0xb2,(uint)bRam105964c0);
      pcVar2 = (cls_105964c4 *)get_or_init_sram_object_103c0f94();
    }
    if (param_1->field_0x18 == 0x198000f) {
      setting_set(param_1->field_0x8,0xb2,(uint)bRam105964c1);
      pcVar2 = (cls_105964c4 *)get_or_init_sram_object_103c0f94();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x198000a) {
      setting_set(param_1->field_0x8,0xb2,(uint)bRam105964c0);
    }
    if (param_1->field_0x18 == 0x198000f) {
      setting_set(param_1->field_0x8,0xb2,(uint)bRam105964c1);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105964c4 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105964c4 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105964c4 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105964c4 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105964c4 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105964c4 *)0x0;
  }
  return pcVar2;
}
