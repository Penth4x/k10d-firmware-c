/* @k10d apply_mode_setting_value_103cce32 @ 0x103cce32
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally updates a setting (0xb6) based on
 *   sub-mode and mode type.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. Depending on the
 *   value at 0x14 and the sub-mode at 0x18 (0x19c000a or 0x19c000f), it calls setting_set
 *   with ID 0xb6 and a value from bRam10595a60 or bRam10595a61. It also sets a byte at
 *   offset 0x22 to various constants (0x8c, 0x50, 0xb4, 200) based on the mode value. Calls
 *   get_or_init_sram_object_103c21d0 in some branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ccf32) overlaps instruction at (ram,0x103ccf30)
    */

cls_10595a64 * apply_mode_setting_value_103cce32(cls_10595a64 *param_1,int param_2)

{
  int iVar1;
  cls_10595a64 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10595a64 *)get_or_init_sram_object_103c21d0();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x19c000a) {
      setting_set(param_1->field_0x8,0xb6,(uint)bRam10595a60);
      pcVar2 = (cls_10595a64 *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x19c000f) {
      setting_set(param_1->field_0x8,0xb6,(uint)bRam10595a61);
      pcVar2 = (cls_10595a64 *)get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x19c000a) {
      setting_set(param_1->field_0x8,0xb6,(uint)bRam10595a60);
    }
    if (param_1->field_0x18 == 0x19c000f) {
      setting_set(param_1->field_0x8,0xb6,(uint)bRam10595a61);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595a64 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595a64 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595a64 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595a64 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595a64 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595a64 *)0x0;
  }
  return pcVar2;
}
