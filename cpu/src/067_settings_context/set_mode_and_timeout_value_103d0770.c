/* @k10d set_mode_and_timeout_value_103d0770 @ 0x103d0770
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 067_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d07b6) overlaps instruction at (ram,0x103d07b4)
    */

cls_10595e74 * set_mode_and_timeout_value_103d0770(cls_10595e74 *param_1,int param_2)

{
  int iVar1;
  cls_10595e74 *pcVar2;
  
  param_1->field_0x14 = param_2;
  if ((param_2 == 0xc) || (pcVar2 = param_1, param_2 == 0x11)) {
    pcVar2 = (cls_10595e74 *)init_singleton_object_103cc008();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595e74 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10595e74 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10595e74 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595e74 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10595e74 *)0x0;
  }
  if (param_1->field_0x14 == 0xb) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10595e74 *)0x0;
  }
  return pcVar2;
}
