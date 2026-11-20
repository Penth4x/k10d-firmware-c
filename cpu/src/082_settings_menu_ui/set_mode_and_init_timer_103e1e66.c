/* @k10d set_mode_and_init_timer_103e1e66 @ 0x103e1e66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e1f34) overlaps instruction at (ram,0x103e1f32)
    */

cls_10596d20 * set_mode_and_init_timer_103e1e66(cls_10596d20 *param_1,int param_2)

{
  int iVar1;
  cls_10596d20 *pcVar2;
  
  param_1->field_0x14 = param_2;
  if ((param_2 == 0x25) || (pcVar2 = param_1, param_2 == 0x26)) {
    pcVar2 = (cls_10596d20 *)initialize_sram_object();
    param_1->field_0x18 = 0x182002d;
  }
  if ((param_1->field_0x14 == 0xf) &&
     (((iVar1 = param_1->field_0x18, iVar1 == 0x182002d || (iVar1 == 0x1820030)) ||
      (iVar1 == 0x182002f)))) {
    pcVar2 = (cls_10596d20 *)initialize_sram_object();
  }
  if ((param_1->field_0x14 == 0x10) &&
     (((iVar1 = param_1->field_0x18, iVar1 == 0x182000f || (iVar1 == 0x1820012)) ||
      (iVar1 == 0x1820011)))) {
    pcVar2 = (cls_10596d20 *)initialize_sram_object();
  }
  if ((param_1->field_0x14 == 0xc) || (param_1->field_0x14 == 0x11)) {
    pcVar2 = (cls_10596d20 *)get_or_create_sram_object_103be36c();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596d20 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10596d20 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10596d20 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596d20 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10596d20 *)0x0;
  }
  return pcVar2;
}
