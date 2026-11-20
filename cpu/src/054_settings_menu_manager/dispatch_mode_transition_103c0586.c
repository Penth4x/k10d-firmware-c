/* @k10d dispatch_mode_transition_103c0586 @ 0x103c0586
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103c068e) overlaps instruction at (ram,0x103c068c)
    */

cls_10594f8c * dispatch_mode_transition_103c0586(cls_10594f8c *param_1,int param_2)

{
  int iVar1;
  cls_10594f8c *pcVar2;
  
  param_1->field_0x18 = param_2;
  iVar1 = param_1->field_0x1c;
  pcVar2 = param_1;
  if ((((((iVar1 != 0x1020014) && (iVar1 != 0x1020015)) && (iVar1 != 0x1020017)) &&
       ((iVar1 != 0x102001a && (iVar1 != 0x1020018)))) &&
      ((iVar1 != 0x102001b && ((iVar1 != 0x1020028 && (iVar1 != 0x102002a)))))) &&
     (iVar1 != 0x1020020)) {
    if (param_2 == 0x27) {
      pcVar2 = (cls_10594f8c *)get_or_init_singleton_object_103c74d0();
    }
    if (param_1->field_0x18 == 0x28) {
      iVar1 = setting_get(param_1->field_0x8,0xb0);
      if (iVar1 == 0) {
        pcVar2 = (cls_10594f8c *)initialize_singleton_object_103d4044();
      }
      else {
        pcVar2 = (cls_10594f8c *)get_or_init_sram_object_103c0f94();
      }
    }
    if (param_1->field_0x18 == 0x25) {
      pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
      param_1->field_0x1c = 0x1020046;
    }
    if (param_1->field_0x18 == 0x26) {
      pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
      param_1->field_0x1c = 0x1020046;
    }
  }
  iVar1 = param_1->field_0x18;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x33 = 0x8c;
    pcVar2 = (cls_10594f8c *)0x0;
  }
  if ((param_1->field_0x18 == 0x19) || (param_1->field_0x18 == 9)) {
    param_1->field_0x33 = 0x50;
    pcVar2 = (cls_10594f8c *)0x0;
  }
  if (param_1->field_0x18 == 0x18) {
    param_1->field_0x33 = 0xb4;
    pcVar2 = (cls_10594f8c *)0x0;
  }
  if (param_1->field_0x18 == 0x2c) {
    param_1->field_0x33 = 0x8c;
    pcVar2 = (cls_10594f8c *)0x0;
  }
  if (param_1->field_0x18 == 10) {
    param_1->field_0x33 = 200;
    pcVar2 = (cls_10594f8c *)0x0;
  }
  if ((param_1->field_0x1c == 0x1020011) && (param_1->field_0x18 == 0x10)) {
    pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
  }
  if ((param_1->field_0x1c == 0x1020025) && (param_1->field_0x18 == 0xf)) {
    pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
  }
  if (param_1->field_0x1c == 0x102002f) {
    if (param_1->field_0x18 == 0xf) {
      pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
    }
    else if (param_1->field_0x18 == 0xd) {
      pcVar2 = (cls_10594f8c *)get_or_create_singleton_object_103d7d42();
    }
  }
  if (param_1->field_0x1c == 0x1020037) {
    if (param_1->field_0x18 == 0xd) {
      pcVar2 = (cls_10594f8c *)get_or_init_sram_object_103e205e();
    }
    else if (param_1->field_0x18 == 0xf) {
      pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
    }
  }
  if (param_1->field_0x1c == 0x1020043) {
    if (param_1->field_0x18 == 0xd) {
      pcVar2 = (cls_10594f8c *)get_or_init_sram_object_103e111a();
    }
    else if (param_1->field_0x18 == 0xf) {
      pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
    }
  }
  if (param_1->field_0x1c == 0x1020046) {
    if (param_1->field_0x18 == 0xd) {
      pcVar2 = (cls_10594f8c *)get_manual_focal_length_list();
    }
    else if (param_1->field_0x18 == 0xf) {
      pcVar2 = (cls_10594f8c *)get_or_init_ram_object_103b95ee();
    }
  }
  if ((param_1->field_0x18 == 0xc) || (param_1->field_0x18 == 0x11)) {
    param_1->field_0x33 = 0x50;
    pcVar2 = (cls_10594f8c *)0x0;
  }
  return pcVar2;
}
