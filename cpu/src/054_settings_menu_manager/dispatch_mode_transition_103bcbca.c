/* @k10d dispatch_mode_transition_103bcbca @ 0x103bcbca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103bce5e) overlaps instruction at (ram,0x103bce5c)
    */

cls_10594e70 * dispatch_mode_transition_103bcbca(cls_10594e70 *param_1,int param_2)

{
  int iVar1;
  cls_10594e70 *pcVar2;
  
  param_1->field_0x18 = param_2;
  iVar1 = param_1->field_0x1c;
  pcVar2 = param_1;
  if ((((((iVar1 != 0x1010038) && (iVar1 != 0x101003a)) && (iVar1 != 0x101003c)) &&
       ((iVar1 != 0x1010045 && (iVar1 != 0x1010047)))) &&
      ((iVar1 != 0x1010049 && ((iVar1 != 0x1010052 && (iVar1 != 0x1010054)))))) &&
     (((iVar1 != 0x1010019 &&
       (((((iVar1 != 0x101001b && (iVar1 != 0x101001d)) && (iVar1 != 0x101001f)) &&
         (((iVar1 != 0x1010023 && (iVar1 != 0x1010025)) &&
          ((iVar1 != 0x1010027 && ((iVar1 != 0x1010029 && (iVar1 != 0x101002b)))))))) &&
        (iVar1 != 0x1010031)))) && ((iVar1 != 0x1010032 && (iVar1 != 0x1010033)))))) {
    if (param_2 == 0x27) {
      pcVar2 = (cls_10594e70 *)get_or_init_singleton_object_103c74d0();
    }
    if (param_1->field_0x18 == 0x28) {
      iVar1 = setting_get(param_1->field_0x8,0xb0);
      if (iVar1 == 0) {
        pcVar2 = (cls_10594e70 *)initialize_singleton_object_103d4044();
      }
      else {
        pcVar2 = (cls_10594e70 *)get_or_init_sram_object_103c0f94();
      }
    }
    if (param_1->field_0x18 == 0x25) {
      pcVar2 = (cls_10594e70 *)get_or_create_sram_object_103be36c();
      param_1->field_0x1c = 0x1010074;
    }
    if (param_1->field_0x18 == 0x26) {
      pcVar2 = (cls_10594e70 *)get_or_create_sram_object_103be36c();
      param_1->field_0x1c = 0x1010074;
    }
  }
  iVar1 = param_1->field_0x18;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x36 = 0x8c;
    pcVar2 = (cls_10594e70 *)0x0;
  }
  if ((param_1->field_0x18 == 0x19) || (param_1->field_0x18 == 9)) {
    param_1->field_0x36 = 0x50;
    pcVar2 = (cls_10594e70 *)0x0;
  }
  if (param_1->field_0x18 == 0x18) {
    param_1->field_0x36 = 0xb4;
    pcVar2 = (cls_10594e70 *)0x0;
  }
  if (param_1->field_0x18 == 0x2c) {
    param_1->field_0x36 = 0x8c;
    pcVar2 = (cls_10594e70 *)0x0;
  }
  if (param_1->field_0x18 == 10) {
    param_1->field_0x36 = 200;
    pcVar2 = (cls_10594e70 *)0x0;
  }
  if (param_1->field_0x1c == 0x101000f) {
    iVar1 = param_1->field_0x18;
    if (iVar1 == 0x10) {
      pcVar2 = (cls_10594e70 *)get_or_create_sram_object_103be36c();
    }
    else if (iVar1 == 0xd) {
      pcVar2 = (cls_10594e70 *)get_or_init_singleton_object_103c74d0();
    }
    else if (iVar1 == 0xe) {
      iVar1 = setting_get(param_1->field_0x8,0xb0);
      if (iVar1 == 0) {
        pcVar2 = (cls_10594e70 *)initialize_singleton_object_103d4044();
      }
      else {
        pcVar2 = (cls_10594e70 *)get_or_init_sram_object_103c0f94();
      }
    }
  }
  iVar1 = param_1->field_0x1c;
  if ((((iVar1 == 0x1010074) || (iVar1 == 0x1010077)) ||
      ((iVar1 == 0x1010078 ||
       ((((iVar1 == 0x1010079 || (iVar1 == 0x101007a)) || (iVar1 == 0x101007b)) ||
        ((iVar1 == 0x101007c || (iVar1 == 0x101007d)))))))) && (param_1->field_0x18 == 0xf)) {
    pcVar2 = (cls_10594e70 *)get_or_create_sram_object_103be36c();
  }
  if ((param_1->field_0x18 == 0xc) || (param_1->field_0x18 == 0x11)) {
    param_1->field_0x36 = 0x50;
    pcVar2 = (cls_10594e70 *)0x0;
  }
  return pcVar2;
}
