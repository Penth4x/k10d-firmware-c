/* @k10d set_mode_and_timeout_103ea0ba @ 0x103ea0ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ea100) overlaps instruction at (ram,0x103ea0fe)
    */

cls_105977ac * set_mode_and_timeout_103ea0ba(cls_105977ac *param_1,int param_2)

{
  int iVar1;
  cls_105977ac *pcVar2;
  
  param_1->field_0x14 = param_2;
  if ((param_2 == 0xc) || (pcVar2 = param_1, param_2 == 0x11)) {
    pcVar2 = (cls_105977ac *)get_or_init_singleton_object_103c74d0();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105977ac *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105977ac *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105977ac *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105977ac *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105977ac *)0x0;
  }
  return pcVar2;
}
