/* @k10d set_mode_and_timeout_value_103e2f52 @ 0x103e2f52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e2fa4) overlaps instruction at (ram,0x103e2fa2)
    */

cls_10596dc4 * set_mode_and_timeout_value_103e2f52(cls_10596dc4 *param_1,int param_2)

{
  int iVar1;
  cls_10596dc4 *pcVar2;
  
  param_1->field_0x14 = param_2;
  if ((param_2 == 0xc) || (pcVar2 = param_1, param_2 == 0x11)) {
    param_1->field_0x26 = 0;
    pcVar2 = (cls_10596dc4 *)get_or_create_sram_object_103be36c();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x26 = 0;
    param_1->field_0x27 = 0x8c;
    pcVar2 = (cls_10596dc4 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x26 = 0;
    param_1->field_0x27 = 0x50;
    pcVar2 = (cls_10596dc4 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x26 = 0;
    param_1->field_0x27 = 0xb4;
    pcVar2 = (cls_10596dc4 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x26 = 0;
    param_1->field_0x27 = 0x8c;
    pcVar2 = (cls_10596dc4 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x26 = 0;
    param_1->field_0x27 = 200;
    pcVar2 = (cls_10596dc4 *)0x0;
  }
  return pcVar2;
}
