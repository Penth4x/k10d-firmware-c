/* @k10d dispatch_mode_transition_103cc674 @ 0x103cc674
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cc75a) overlaps instruction at (ram,0x103cc758)
    */

cls_105959b0 * dispatch_mode_transition_103cc674(cls_105959b0 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  cls_105959b0 *pcVar3;
  int extraout_r4;
  
  iVar1 = get_or_init_singleton_104aa272();
  iVar1 = *(int *)(iVar1 + 8);
  param_1->field_0x18 = param_2;
  pcVar3 = param_1;
  if (param_2 == 0x27) {
    iVar2 = setting_get(param_1->field_0x8,0xb0);
    if (iVar2 == 0) {
      pcVar3 = (cls_105959b0 *)initialize_singleton_object_103d4044();
    }
    else {
      pcVar3 = (cls_105959b0 *)get_or_init_sram_object_103c0f94();
    }
  }
  if (param_1->field_0x18 == 0x28) {
    pcVar3 = (cls_105959b0 *)get_or_init_singleton_object_103c74d0();
  }
  if (param_1->field_0x18 == 0x25) {
    get_or_create_singleton_object_104fb12e();
    iVar2 = debug_mode_wrapper();
    if (iVar2 == 0) {
      pcVar3 = (cls_105959b0 *)get_or_init_singleton_object_103c8200();
    }
    else {
      pcVar3 = (cls_105959b0 *)get_or_init_sram_object_104248cc();
    }
    param_1->field_0x1c = 0x1060019;
  }
  if (param_1->field_0x18 == 0x26) {
    pcVar3 = (cls_105959b0 *)init_singleton_object_103c9046();
    param_1->field_0x1c = 0x1060019;
  }
  iVar2 = param_1->field_0x18;
  if ((((iVar2 == 7) || (iVar2 == 0)) || (iVar2 == 1)) || (iVar2 == 3)) {
    param_1->field_0x26 = 0x8c;
    pcVar3 = (cls_105959b0 *)0x0;
  }
  if ((param_1->field_0x18 == 0x19) || (param_1->field_0x18 == 9)) {
    param_1->field_0x26 = 0x50;
    pcVar3 = (cls_105959b0 *)0x0;
  }
  if (param_1->field_0x18 == 0x18) {
    param_1->field_0x26 = 0xb4;
    pcVar3 = (cls_105959b0 *)0x0;
  }
  if (param_1->field_0x18 == 0x2c) {
    param_1->field_0x26 = 0x8c;
    pcVar3 = (cls_105959b0 *)0x0;
  }
  if (param_1->field_0x18 == 10) {
    param_1->field_0x26 = 200;
    pcVar3 = (cls_105959b0 *)0x0;
  }
  if (param_1->field_0x1c == 0x1060010) {
    if (param_1->field_0x18 == 0x10) {
      pcVar3 = (cls_105959b0 *)init_singleton_object_103c9046();
    }
    else if ((param_1->field_0x18 == 0xd) && (send_command_and_wait_ack(iVar1), extraout_r4 != 0)) {
      pcVar3 = (cls_105959b0 *)get_or_init_sram_object_103cfbca();
    }
  }
  if ((param_1->field_0x1c == 0x1060013) && (param_1->field_0x18 == 0xd)) {
    pcVar3 = (cls_105959b0 *)get_or_init_sram_object_103d255a();
  }
  if ((param_1->field_0x1c == 0x1060016) && (param_1->field_0x18 == 0xd)) {
    pcVar3 = (cls_105959b0 *)initialize_singleton_object_1040adb2();
  }
  if (param_1->field_0x1c == 0x1060019) {
    iVar1 = param_1->field_0x18;
    if (iVar1 == 0x10) {
      pcVar3 = (cls_105959b0 *)init_singleton_object_103c9046();
    }
    else if (iVar1 == 0xf) {
      get_or_create_singleton_object_104fb12e();
      iVar1 = debug_mode_wrapper();
      if (iVar1 == 0) {
        pcVar3 = (cls_105959b0 *)get_or_init_singleton_object_103c8200();
      }
      else {
        pcVar3 = (cls_105959b0 *)get_or_init_sram_object_104248cc();
      }
    }
    else if (iVar1 == 0xd) {
      pcVar3 = (cls_105959b0 *)get_or_init_object_at_8001c66c();
    }
  }
  if ((param_1->field_0x18 == 0xc) || (param_1->field_0x18 == 0x11)) {
    param_1->field_0x26 = 0x50;
    pcVar3 = (cls_105959b0 *)0x0;
  }
  return pcVar3;
}
