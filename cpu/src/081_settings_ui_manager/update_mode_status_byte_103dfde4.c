/* @k10d update_mode_status_byte_103dfde4 @ 0x103dfde4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode code in a struct and sets a status byte at offset 0x22 based on the mode
 *   and sub-state.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. Depending on the
 *   value at 0x14 and the value at 0x18, it calls setting_set to update setting 0xb7 with
 *   values from bRam10596b54 or bRam10596b55. It then sets the byte at offset 0x22 to
 *   specific values (0x8c, 0x50, 0xb4, 200) based on the mode code. Returns 0 or the result
 *   of get_or_init_sram_object_103c21d0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103dfee4) overlaps instruction at (ram,0x103dfee2)
    */

cls_10596b58 * update_mode_status_byte_103dfde4(cls_10596b58 *param_1,int param_2)

{
  int iVar1;
  cls_10596b58 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10596b58 *)get_or_init_sram_object_103c21d0();
  }
  if ((param_1->field_0x14 == 0xe) || (param_1->field_0x14 == 0x11)) {
    if (param_1->field_0x18 == 0x19a000a) {
      setting_set(param_1->field_0x8,0xb7,(uint)bRam10596b54);
      pcVar2 = (cls_10596b58 *)get_or_init_sram_object_103c21d0();
    }
    if (param_1->field_0x18 == 0x19a000f) {
      setting_set(param_1->field_0x8,0xb7,(uint)bRam10596b55);
      pcVar2 = (cls_10596b58 *)get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (param_1->field_0x18 == 0x19a000a) {
      setting_set(param_1->field_0x8,0xb7,(uint)bRam10596b54);
    }
    if (param_1->field_0x18 == 0x19a000f) {
      setting_set(param_1->field_0x8,0xb7,(uint)bRam10596b55);
    }
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596b58 *)0x0;
  }
  if (param_1->field_0x14 == 3) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596b58 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10596b58 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10596b58 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596b58 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10596b58 *)0x0;
  }
  return pcVar2;
}
