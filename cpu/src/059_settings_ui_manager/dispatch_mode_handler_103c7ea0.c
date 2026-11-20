/* @k10d dispatch_mode_handler_103c7ea0 @ 0x103c7ea0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 059_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c7efa) overlaps instruction at (ram,0x103c7ef8)
    */

cls_10595788 * dispatch_mode_handler_103c7ea0(cls_10595788 *param_1,int param_2)

{
  int iVar1;
  cls_10595788 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    pcVar2 = (cls_10595788 *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_10595788 *)get_or_init_ram_object_103b95ee();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595788 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595788 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595788 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595788 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595788 *)0x0;
  }
  if ((param_1->field_0x14 == 0xe) && (param_1->field_0x18 == 0x103000b)) {
    pcVar2 = (cls_10595788 *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x14 == 0xd) {
    iVar1 = param_1->field_0x18;
    if (iVar1 == 0x103000b) {
      pcVar2 = (cls_10595788 *)get_or_init_singleton_object_103c8200();
    }
    else if (iVar1 == 0x1030010) {
      pcVar2 = (cls_10595788 *)get_or_init_sram_object_10408f34();
    }
    else if (iVar1 == 0x1030013) {
      pcVar2 = (cls_10595788 *)get_or_create_singleton_object_103e6480();
    }
    else if (iVar1 == 0x103001a) {
      pcVar2 = (cls_10595788 *)get_or_init_sram_object_103d701c();
    }
    else if (iVar1 == 0x103001d) {
      param_1->field_0x22 = 0x78;
      pcVar2 = (cls_10595788 *)0x0;
    }
    else if (iVar1 == 0x1030020) {
      pcVar2 = (cls_10595788 *)get_or_create_singleton_object_103e979c();
    }
  }
  if (param_1->field_0x14 == 0x11) {
    pcVar2 = (cls_10595788 *)0x0;
    if (param_1->field_0x18 == 0x1030020) {
      param_1->field_0x22 = 100;
    }
    else {
      param_1->field_0x22 = 0x50;
    }
  }
  if (param_1->field_0x14 == 0xc) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595788 *)0x0;
  }
  return pcVar2;
}
