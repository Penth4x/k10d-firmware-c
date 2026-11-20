/* @k10d dispatch_mode_transition_103c3e10 @ 0x103c3e10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c3ea2) overlaps instruction at (ram,0x103c3ea0)
    */

cls_105951ec * dispatch_mode_transition_103c3e10(cls_105951ec *param_1,int param_2)

{
  int iVar1;
  cls_105951ec *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    pcVar2 = (cls_105951ec *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_105951ec *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x25) {
    pcVar2 = (cls_105951ec *)get_or_init_sram_object_103c40b8();
    param_1->field_0x18 = 0x1090031;
  }
  if (param_1->field_0x14 == 0x26) {
    pcVar2 = (cls_105951ec *)get_or_init_sram_object_103c21d0();
    param_1->field_0x18 = 0x1090031;
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105951ec *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105951ec *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105951ec *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105951ec *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105951ec *)0x0;
  }
  if (param_1->field_0x18 == 0x1090017) {
    if (param_1->field_0x14 == 0x10) {
      pcVar2 = (cls_105951ec *)get_or_init_sram_object_103c21d0();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_105951ec *)get_or_init_sram_object_103cd056((uint32_t)(pcVar2));
    }
  }
  if ((param_1->field_0x18 == 0x109001d) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105951ec *)get_or_init_sram_object_103dac02();
  }
  if ((param_1->field_0x18 == 0x1090022) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105951ec *)get_or_init_sram_object_103ea42e();
  }
  if ((param_1->field_0x18 == 0x1090027) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105951ec *)get_or_init_sram_object_103cd7a4();
  }
  if ((param_1->field_0x18 == 0x109002c) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_105951ec *)get_or_create_sram_object_103e331e();
  }
  if (param_1->field_0x18 == 0x1090031) {
    if (param_1->field_0x14 == 0xf) {
      pcVar2 = (cls_105951ec *)get_or_init_sram_object_103c40b8();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_105951ec *)get_or_init_sram_object_103d2cec();
    }
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105951ec *)0x0;
  }
  return pcVar2;
}
