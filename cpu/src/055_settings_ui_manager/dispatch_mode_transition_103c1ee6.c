/* @k10d dispatch_mode_transition_103c1ee6 @ 0x103c1ee6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 055_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c200e) overlaps instruction at (ram,0x103c200c)
    */

cls_105950ac * dispatch_mode_transition_103c1ee6(cls_105950ac *param_1,int param_2)

{
  int iVar1;
  cls_105950ac *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    pcVar2 = (cls_105950ac *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_105950ac *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x25) {
    pcVar2 = (cls_105950ac *)get_or_init_sram_object_103c21d0();
    param_1->field_0x18 = 0x1070039;
  }
  if (param_1->field_0x14 == 0x26) {
    pcVar2 = (cls_105950ac *)get_or_init_sram_object_103c63a0();
    param_1->field_0x18 = 0x1070039;
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105950ac *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105950ac *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105950ac *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105950ac *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105950ac *)0x0;
  }
  if (param_1->field_0x18 == 0x107000e) {
    iVar1 = param_1->field_0x14;
    if (iVar1 == 0x10) {
      pcVar2 = (cls_105950ac *)get_or_init_sram_object_103c63a0();
    }
    else if (iVar1 == 0xd) {
      pcVar2 = (cls_105950ac *)get_or_init_ram_object_103b95ee();
    }
    else if (iVar1 == 0xe) {
      pcVar2 = (cls_105950ac *)get_or_init_singleton_object_103c8200();
    }
  }
  if ((param_1->field_0x18 == 0x107001a) &&
     ((param_1->field_0x14 == 0xd || (param_1->field_0x14 == 0xe)))) {
    setting_set(param_1->field_0x8,0xb0,0);
    pcVar2 = (cls_105950ac *)initialize_singleton_object_103d4044();
  }
  if ((param_1->field_0x18 == 0x1070020) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105950ac *)get_or_init_sram_object_103e5c00();
  }
  if ((param_1->field_0x18 == 0x1070027) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105950ac *)get_or_create_sram_object_103d7726();
  }
  if ((param_1->field_0x18 == 0x1070031) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105950ac *)get_or_create_sram_object_103dd452();
  }
  if ((param_1->field_0x18 == 0x107002c) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105950ac *)get_or_init_sram_object_103ddcd2();
  }
  if (param_1->field_0x18 == 0x1070039) {
    if (param_1->field_0x14 == 0xf) {
      pcVar2 = (cls_105950ac *)get_or_init_sram_object_103c21d0();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_105950ac *)get_or_init_sram_object_103e09d0();
    }
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105950ac *)0x0;
  }
  return pcVar2;
}
