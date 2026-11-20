/* @k10d apply_setting_value_by_mode_103ebbcc @ 0x103ebbcc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 085_sr_settings_menu (unit names are model-proposed)
 * purpose:
 *   Stores a value into a struct field and conditionally writes it to the settings block
 *   based on mode and sub-mode.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1ae000c through
 *   0x1ae001c) and, if the mode at 0x14 is 0xe or 0x11, calls setting_set to persist values
 *   from global RAM variables. For other mode values (7, 0, 1, 3, 0x19, 9, 0x18, 0x2c, 10),
 *   it sets a byte at offset 0x22 to specific values (0x8c, 0x50, 0xb4, 200) and returns 0.
 *   It also calls get_or_init_sram_object_103c40b8 in certain branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ebd74) overlaps instruction at (ram,0x103ebd72)
    */

cls_1059796c * apply_setting_value_by_mode_103ebbcc(cls_1059796c *param_1,int param_2)

{
  int iVar1;
  cls_1059796c *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_1059796c *)get_or_init_sram_object_103c40b8();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x1ae000c) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597964);
      pcVar2 = (cls_1059796c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ae0010) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597965);
      pcVar2 = (cls_1059796c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ae0014) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597966);
      pcVar2 = (cls_1059796c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ae0018) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597967);
      pcVar2 = (cls_1059796c *)get_or_init_sram_object_103c40b8();
    }
    if (param_1->field_0x18 == 0x1ae001c) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597968);
      pcVar2 = (cls_1059796c *)get_or_init_sram_object_103c40b8();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x1ae000c) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597964);
    }
    if (param_1->field_0x18 == 0x1ae0010) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597965);
    }
    if (param_1->field_0x18 == 0x1ae0014) {
      setting_set(param_1->field_0x8,0xc6,(uint)bRam10597966);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059796c *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059796c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_1059796c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_1059796c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059796c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_1059796c *)0x0;
  }
  return pcVar2;
}
