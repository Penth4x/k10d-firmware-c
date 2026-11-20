/* @k10d apply_mode_setting_value_103d2296 @ 0x103d2296
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 072_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally writes a related setting based on
 *   the mode and sub-mode.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1ab000a, 0x1ab000f,
 *   0x1ab0014, 0x1ab0019) and, if the mode at 0x14 is in a specific set (0xc, 0xe, 0x11, 7,
 *   0, 1), calls setting_set to write a byte from global RAM variables to setting ID 0xb8.
 *   It also sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending
 *   on the mode value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d2436) overlaps instruction at (ram,0x103d2434)
    */

cls_10596030 * apply_mode_setting_value_103d2296(cls_10596030 *param_1,int param_2)

{
  int iVar1;
  cls_10596030 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10596030 *)get_or_init_sram_object_103c21d0();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1ab000a) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602c);
      pcVar2 = (cls_10596030 *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x1ab000f) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602d);
      pcVar2 = (cls_10596030 *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x1ab0014) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602e);
      pcVar2 = (cls_10596030 *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x1ab0019) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602f);
      pcVar2 = (cls_10596030 *)get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1ab000a) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602c);
    }
    if (param_1->field_0x18 == 0x1ab000f) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602d);
    }
    if (param_1->field_0x18 == 0x1ab0014) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602e);
    }
    if (param_1->field_0x18 == 0x1ab0019) {
      setting_set(param_1->field_0x8,0xb8,(uint)bRam1059602f);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596030 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596030 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10596030 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10596030 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596030 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10596030 *)0x0;
  }
  return pcVar2;
}
