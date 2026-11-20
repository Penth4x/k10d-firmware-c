/* @k10d update_mode_state_and_timeout @ 0x103d1b32
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 070_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a new mode value in a struct, triggers mode-specific helpers, and sets a timeout
 *   byte based on the mode.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. If the object's
 *   field at 0x18 is 0x18b000d and the new mode is 0xd or 0xe, it calls setting_set and
 *   get_or_init_sram_object_103d0b28. If the new mode is 0xc or 0x11, it calls
 *   get_or_init_singleton_object_103c8200. Finally, it sets the byte at offset 0x22 to a
 *   specific value (0x8c, 0x50, 0xb4, or 200) depending on the mode value, returning 0 in
 *   those cases.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d1bb0) overlaps instruction at (ram,0x103d1bae)
    */

cls_10595f9c * update_mode_state_and_timeout(cls_10595f9c *param_1,int param_2)

{
  int iVar1;
  cls_10595f9c *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if ((param_1->field_0x18 == 0x18b000d) && ((param_2 == 0xd || (param_2 == 0xe)))) {
    setting_set(param_1->field_0x8,0x90,(uint)bRam10595f99);
    pcVar2 = (cls_10595f9c *)get_or_init_sram_object_103d0b28();
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    pcVar2 = (cls_10595f9c *)get_or_init_singleton_object_103c8200();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595f9c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595f9c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595f9c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595f9c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595f9c *)0x0;
  }
  return pcVar2;
}
