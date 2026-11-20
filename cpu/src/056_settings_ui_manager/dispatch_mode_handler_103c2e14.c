/* @k10d dispatch_mode_handler_103c2e14 @ 0x103c2e14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c2ea6) overlaps instruction at (ram,0x103c2ea4)
    */

cls_1059514c * dispatch_mode_handler_103c2e14(cls_1059514c *param_1,int param_2)

{
  int iVar1;
  cls_1059514c *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    pcVar2 = (cls_1059514c *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_1059514c *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x25) {
    pcVar2 = (cls_1059514c *)get_or_init_sram_object_103c30bc();
    param_1->field_0x18 = 0x108002f;
  }
  if (param_1->field_0x14 == 0x26) {
    pcVar2 = (cls_1059514c *)get_or_init_sram_object_103c0f94();
    param_1->field_0x18 = 0x108002f;
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059514c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_1059514c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_1059514c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059514c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_1059514c *)0x0;
  }
  if (param_1->field_0x18 == 0x1080014) {
    if (param_1->field_0x14 == 0x10) {
      pcVar2 = (cls_1059514c *)get_or_init_sram_object_103c0f94();
    }
    if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_1059514c *)get_or_init_sram_object_103cca3a();
    }
  }
  if ((param_1->field_0x18 == 0x1080019) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_1059514c *)get_or_init_ram_object_103df9ec();
  }
  if ((param_1->field_0x18 == 0x108001e) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_1059514c *)get_or_init_sram_object_103d1cda();
  }
  if ((param_1->field_0x18 == 0x1080025) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_1059514c *)get_or_init_sram_object_103e393a();
  }
  if ((param_1->field_0x18 == 0x108002a) && (param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_1059514c *)get_or_init_sram_object_103f1b8a();
  }
  if (param_1->field_0x18 == 0x108002f) {
    if (param_1->field_0x14 == 0xf) {
      pcVar2 = (cls_1059514c *)get_or_init_sram_object_103c30bc();
    }
    else if (param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_1059514c *)get_or_init_sram_object_103cf5ae();
    }
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_1059514c *)0x0;
  }
  return pcVar2;
}
