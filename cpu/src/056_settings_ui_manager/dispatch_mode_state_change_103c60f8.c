/* @k10d dispatch_mode_state_change_103c60f8 @ 0x103c60f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c618a) overlaps instruction at (ram,0x103c6188)
    */

cls_10595334 * dispatch_mode_state_change_103c60f8(cls_10595334 *param_1,int param_2)

{
  int iVar1;
  cls_10595334 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    pcVar2 = (cls_10595334 *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_10595334 *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x25) {
    pcVar2 = (cls_10595334 *)get_or_init_sram_object_103c63a0();
    param_1->field_0x18 = 0x10b0030;
  }
  if (param_1->field_0x14 == 0x26) {
    pcVar2 = (cls_10595334 *)get_or_init_sram_object_103c40b8();
    param_1->field_0x18 = 0x10b0030;
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595334 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595334 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595334 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595334 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595334 *)0x0;
  }
  if (param_1->field_0x18 == 0x10b0017) {
    if (param_1->field_0x14 == 0x10) {
      pcVar2 = (cls_10595334 *)get_or_init_sram_object_103c40b8();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_10595334 *)get_or_init_sram_object_103e72c2((uint32_t)(pcVar2));
    }
  }
  if ((param_1->field_0x18 == 0x10b001c) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595334 *)get_or_create_singleton_object_103df3d0();
  }
  if ((param_1->field_0x18 == 0x10b0021) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595334 *)get_or_create_singleton_object_103e7efa();
  }
  if ((param_1->field_0x18 == 0x10b0026) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595334 *)get_or_create_sram_object_103e55e4();
  }
  if ((param_1->field_0x18 == 0x10b002b) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_10595334 *)get_or_init_sram_object_103e78de();
  }
  if (param_1->field_0x18 == 0x10b0030) {
    if (param_1->field_0x14 == 0xf) {
      pcVar2 = (cls_10595334 *)get_or_init_sram_object_103c63a0();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_10595334 *)get_or_init_sram_object_103e0008();
    }
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595334 *)0x0;
  }
  return pcVar2;
}
