/* @k10d update_setting_based_on_mode_103e7cd6 @ 0x103e7cd6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a specific setting (0xcd)
 *   based on sub-mode and mode type.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x19d000a, 0x19d000f) and
 *   the mode value at offset 0x14. If conditions match, it calls setting_set to update
 *   setting ID 0xcd with values from global variables bRam10597338 or bRam10597339. It also
 *   sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending on the
 *   mode. Returns 0 or the result of get_or_init_sram_object_103c531c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e7dd6) overlaps instruction at (ram,0x103e7dd4)
    */

cls_1059733c * update_setting_based_on_mode_103e7cd6(cls_1059733c *param_1,int param_2)

{
  int iVar1;
  cls_1059733c *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_1059733c *)get_or_init_sram_object_103c531c();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x19d000a) {
      setting_set(param_1->field_0x8,0xcd,(uint)bRam10597338);
      pcVar2 = (cls_1059733c *)get_or_init_sram_object_103c531c();
    }
    if (param_1->field_0x18 == 0x19d000f) {
      setting_set(param_1->field_0x8,0xcd,(uint)bRam10597339);
      pcVar2 = (cls_1059733c *)get_or_init_sram_object_103c531c();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x19d000a) {
      setting_set(param_1->field_0x8,0xcd,(uint)bRam10597338);
    }
    if (param_1->field_0x18 == 0x19d000f) {
      setting_set(param_1->field_0x8,0xcd,(uint)bRam10597339);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059733c *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059733c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_1059733c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_1059733c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059733c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_1059733c *)0x0;
  }
  return pcVar2;
}
