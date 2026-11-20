/* @k10d set_state_and_timeout_value @ 0x103d95b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d9612) overlaps instruction at (ram,0x103d9610)
    */

cls_1059656c * set_state_and_timeout_value(cls_1059656c *param_1,int param_2)

{
  int iVar1;
  cls_1059656c *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (((param_2 == 0xc) || (param_2 == 0x11)) &&
     ((param_1->field_0x18 == 0x180000e || (param_1->field_0x18 == 0x1800028)))) {
    pcVar2 = (cls_1059656c *)get_or_create_sram_object_103be36c();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x23 = 0x8c;
    pcVar2 = (cls_1059656c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x23 = 0x50;
    pcVar2 = (cls_1059656c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x23 = 0xb4;
    pcVar2 = (cls_1059656c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x23 = 0x8c;
    pcVar2 = (cls_1059656c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x23 = 200;
    pcVar2 = (cls_1059656c *)0x0;
  }
  return pcVar2;
}
