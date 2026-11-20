/* @k10d dispatch_mode_specific_handler_103c5074 @ 0x103c5074
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c5106) overlaps instruction at (ram,0x103c5104)
    */

cls_10595294 * dispatch_mode_specific_handler_103c5074(cls_10595294 *param_1,int param_2)

{
  int iVar1;
  cls_10595294 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    pcVar2 = (cls_10595294 *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_10595294 *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x25) {
    pcVar2 = (cls_10595294 *)get_or_init_sram_object_103c531c();
    param_1->field_0x18 = 0x10a003a;
  }
  if (param_1->field_0x14 == 0x26) {
    pcVar2 = (cls_10595294 *)get_or_init_sram_object_103c30bc();
    param_1->field_0x18 = 0x10a003a;
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595294 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595294 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595294 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595294 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595294 *)0x0;
  }
  if (param_1->field_0x18 == 0x10a0017) {
    if (param_1->field_0x14 == 0x10) {
      pcVar2 = (cls_10595294 *)get_or_init_sram_object_103c30bc();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_10595294 *)get_or_create_singleton_object_103d32fc((uint32_t)(pcVar2));
    }
  }
  if ((param_1->field_0x18 == 0x10a001c) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595294 *)get_or_init_sram_object_103e49e6();
  }
  if ((param_1->field_0x18 == 0x10a0024) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595294 *)get_or_init_sram_object_103eaa4a();
  }
  if ((param_1->field_0x18 == 0x10a002a) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595294 *)get_or_init_sram_object_103eb2e8();
  }
  if ((param_1->field_0x18 == 0x10a0032) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595294 *)get_or_init_sram_object_103ce9f8();
  }
  if (param_1->field_0x18 == 0x10a003a) {
    if (param_1->field_0x14 == 0xf) {
      pcVar2 = (cls_10595294 *)get_or_init_sram_object_103c531c();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_10595294 *)get_or_create_singleton_object_103da4b4();
    }
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595294 *)0x0;
  }
  return pcVar2;
}
