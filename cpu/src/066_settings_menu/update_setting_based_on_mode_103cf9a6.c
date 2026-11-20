/* @k10d update_setting_based_on_mode_103cf9a6 @ 0x103cf9a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 066_settings_menu (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a specific setting (0xbb)
 *   based on sub-mode and current state.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1b6000a, 0x1b6000f) and
 *   the value at offset 0x14 against various mode codes (0xc, 0xe, 0x11, 7, 0, 1, 3, 0x19,
 *   9, 0x18, 0x2c, 10). Depending on these conditions, it calls setting_set to update
 *   setting ID 0xbb with values from global variables bRam10595ddc or bRam10595ddd, and
 *   writes specific byte values (0x8c, 0x50, 0xb4, 200) to offset 0x22. It also calls
 *   get_or_init_sram_object_103c21d0 in certain branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cfaa6) overlaps instruction at (ram,0x103cfaa4)
    */

cls_10595de0 * update_setting_based_on_mode_103cf9a6(cls_10595de0 *param_1,int param_2)

{
  int iVar1;
  cls_10595de0 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10595de0 *)get_or_init_sram_object_103c21d0();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1b6000a) {
      setting_set(param_1->field_0x8,0xbb,(uint)bRam10595ddc);
      pcVar2 = (cls_10595de0 *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x1b6000f) {
      setting_set(param_1->field_0x8,0xbb,(uint)bRam10595ddd);
      pcVar2 = (cls_10595de0 *)get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1b6000a) {
      setting_set(param_1->field_0x8,0xbb,(uint)bRam10595ddc);
    }
    if (param_1->field_0x18 == 0x1b6000f) {
      setting_set(param_1->field_0x8,0xbb,(uint)bRam10595ddd);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595de0 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595de0 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595de0 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595de0 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595de0 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595de0 *)0x0;
  }
  return pcVar2;
}
