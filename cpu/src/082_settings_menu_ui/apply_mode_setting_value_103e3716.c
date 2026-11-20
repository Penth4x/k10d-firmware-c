/* @k10d apply_mode_setting_value_103e3716 @ 0x103e3716
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally writes a related setting based on
 *   the mode and sub-mode.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x197000a, 0x197000f) and
 *   the value at offset 0x14 against various integers. If conditions match, it calls
 *   setting_set with the pointer at offset 8, the constant 0xc0, and a byte from RAM
 *   (bRam10596e54 or bRam10596e55). It also sets a byte at offset 0x22 to various values
 *   (0x8c, 0x50, 0xb4, 200) depending on the mode value. The function returns 0 or the
 *   result of get_or_init_sram_object_103c30bc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e3816) overlaps instruction at (ram,0x103e3814)
    */

cls_10596e58 * apply_mode_setting_value_103e3716(cls_10596e58 *param_1,int param_2)

{
  int iVar1;
  cls_10596e58 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10596e58 *)get_or_init_sram_object_103c30bc();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x197000a) {
      setting_set(param_1->field_0x8,0xc0,(uint)bRam10596e54);
      pcVar2 = (cls_10596e58 *)get_or_init_sram_object_103c30bc();
    }
    if (param_1->field_0x18 == 0x197000f) {
      setting_set(param_1->field_0x8,0xc0,(uint)bRam10596e55);
      pcVar2 = (cls_10596e58 *)get_or_init_sram_object_103c30bc();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x197000a) {
      setting_set(param_1->field_0x8,0xc0,(uint)bRam10596e54);
    }
    if (param_1->field_0x18 == 0x197000f) {
      setting_set(param_1->field_0x8,0xc0,(uint)bRam10596e55);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596e58 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596e58 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10596e58 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10596e58 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596e58 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10596e58 *)0x0;
  }
  return pcVar2;
}
