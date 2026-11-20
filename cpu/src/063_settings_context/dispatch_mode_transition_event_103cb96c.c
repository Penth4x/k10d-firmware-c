/* @k10d dispatch_mode_transition_event_103cb96c @ 0x103cb96c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 063_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cba56) overlaps instruction at (ram,0x103cba54)
    */

cls_105958e8 * dispatch_mode_transition_event_103cb96c(cls_105958e8 *param_1,int param_2)

{
  int iVar1;
  cls_105958e8 *pcVar2;
  
  param_1->field_0x14 = param_2;
  iVar1 = param_1->field_0x18;
  pcVar2 = param_1;
  if (((((iVar1 == 0x1050071) || (iVar1 == 0x1050033)) || (iVar1 == 0x1050028)) ||
      ((iVar1 == 0x105001b || (iVar1 == 0x105005e)))) || (iVar1 == 0x1050010)) {
    if (param_2 == 0x27) {
      iVar1 = setting_get(param_1->field_0x8,0xb0);
      if (iVar1 == 0) {
        pcVar2 = (cls_105958e8 *)initialize_singleton_object_103d4044();
      }
      else {
        pcVar2 = (cls_105958e8 *)get_or_init_sram_object_103c0f94();
      }
    }
    if (param_1->field_0x14 == 0x28) {
      pcVar2 = (cls_105958e8 *)get_or_init_singleton_object_103c74d0();
    }
    if (param_1->field_0x14 == 0x25) {
      pcVar2 = (cls_105958e8 *)init_singleton_object_103cc008();
      param_1->field_0x18 = 0x1050010;
    }
    if (param_1->field_0x14 == 0x26) {
      pcVar2 = (cls_105958e8 *)get_or_init_singleton_object_103c8200();
      param_1->field_0x18 = 0x1050010;
    }
  }
  iVar1 = param_1->field_0x14;
  if (((iVar1 == 7) || (iVar1 == 0)) || ((iVar1 == 1 || (iVar1 == 3)))) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105958e8 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105958e8 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105958e8 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105958e8 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105958e8 *)0x0;
  }
  if ((param_1->field_0x18 == 0x1050010) && (param_1->field_0x14 == 0xf)) {
    pcVar2 = (cls_105958e8 *)init_singleton_object_103cc008();
  }
  if ((param_1->field_0x18 == 0x1050071) && (param_1->field_0x14 == 0x10)) {
    pcVar2 = (cls_105958e8 *)get_or_init_singleton_object_103c8200();
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105958e8 *)0x0;
  }
  return pcVar2;
}
