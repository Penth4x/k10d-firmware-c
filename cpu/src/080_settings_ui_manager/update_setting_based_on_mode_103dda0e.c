/* @k10d update_setting_based_on_mode_103dda0e @ 0x103dda0e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Updates a specific setting (0xb4) and a status byte (0x22) based on the current mode
 *   and sub-mode values stored in the object.
 * summary:
 *   The function stores param_2 into the object at offset 0x14. It then checks this value
 *   and the value at offset 0x18 against specific constants. For certain combinations, it
 *   calls setting_set to update setting 0xb4 with values from global RAM variables
 *   (bRam105968d0-d3). It also sets the byte at offset 0x22 to various values (0x8c, 0x50,
 *   0xb4, 200) depending on the mode. It calls get_or_init_sram_object_103c0f94 in some
 *   branches, likely to trigger a refresh or notification.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ddbae) overlaps instruction at (ram,0x103ddbac)
    */

cls_105968d4 * update_setting_based_on_mode_103dda0e(cls_105968d4 *param_1,int param_2)

{
  int iVar1;
  cls_105968d4 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_105968d4 *)get_or_init_sram_object_103c0f94();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x199000a) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d0);
      pcVar2 = (cls_105968d4 *)get_or_init_sram_object_103c0f94();
    }
    if (param_1->field_0x18 == 0x199000f) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d1);
      pcVar2 = (cls_105968d4 *)get_or_init_sram_object_103c0f94();
    }
    if (param_1->field_0x18 == 0x1990014) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d2);
      pcVar2 = (cls_105968d4 *)get_or_init_sram_object_103c0f94();
    }
    if (param_1->field_0x18 == 0x1990019) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d3);
      pcVar2 = (cls_105968d4 *)get_or_init_sram_object_103c0f94();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x199000a) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d0);
    }
    if (param_1->field_0x18 == 0x199000f) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d1);
    }
    if (param_1->field_0x18 == 0x1990014) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d2);
    }
    if (param_1->field_0x18 == 0x1990019) {
      setting_set(param_1->field_0x8,0xb4,(uint)bRam105968d3);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105968d4 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105968d4 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105968d4 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105968d4 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105968d4 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105968d4 *)0x0;
  }
  return pcVar2;
}
