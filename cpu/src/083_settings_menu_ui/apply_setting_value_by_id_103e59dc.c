/* @k10d apply_setting_value_by_id_103e59dc @ 0x103e59dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a value into a struct field and conditionally writes it to the settings block
 *   based on the value and a second field.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x14 and offset 0x18 against specific constants (0xc, 0xe,
 *   0x11, 0x1a5000a, 0x1a5000f, etc.). For certain combinations, it calls setting_set to
 *   write a byte from global RAM (bRam105970e4 or bRam105970e5) to setting ID 0xcc. It also
 *   sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending on the
 *   value at offset 0x14. It returns 0 or the result of get_or_init_sram_object_103c531c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e5adc) overlaps instruction at (ram,0x103e5ada)
    */

cls_105970e8 * apply_setting_value_by_id_103e59dc(cls_105970e8 *param_1,int param_2)

{
  int iVar1;
  cls_105970e8 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_105970e8 *)get_or_init_sram_object_103c531c();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1a5000a) {
      setting_set(param_1->field_0x8,0xcc,(uint)bRam105970e4);
      pcVar2 = (cls_105970e8 *)get_or_init_sram_object_103c531c();
    }
    if (param_1->field_0x18 == 0x1a5000f) {
      setting_set(param_1->field_0x8,0xcc,(uint)bRam105970e5);
      pcVar2 = (cls_105970e8 *)get_or_init_sram_object_103c531c();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1a5000a) {
      setting_set(param_1->field_0x8,0xcc,(uint)bRam105970e4);
    }
    if (param_1->field_0x18 == 0x1a5000f) {
      setting_set(param_1->field_0x8,0xcc,(uint)bRam105970e5);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105970e8 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105970e8 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105970e8 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105970e8 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105970e8 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105970e8 *)0x0;
  }
  return pcVar2;
}
