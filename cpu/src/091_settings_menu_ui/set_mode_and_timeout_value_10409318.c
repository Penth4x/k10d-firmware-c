/* @k10d set_mode_and_timeout_value_10409318 @ 0x10409318
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040935e) overlaps instruction at (ram,0x1040935c)
    */

cls_105999ec * set_mode_and_timeout_value_10409318(cls_105999ec *param_1,int param_2)

{
  int iVar1;
  cls_105999ec *pcVar2;
  
  param_1->field_0x14 = param_2;
  if ((param_2 == 0xc) || (pcVar2 = param_1, param_2 == 0x11)) {
    pcVar2 = (cls_105999ec *)get_or_init_singleton_object_103c74d0();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105999ec *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_105999ec *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_105999ec *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_105999ec *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_105999ec *)0x0;
  }
  return pcVar2;
}
