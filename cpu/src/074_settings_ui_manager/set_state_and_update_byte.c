/* @k10d set_state_and_update_byte @ 0x103d3e9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 074_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d3f20) overlaps instruction at (ram,0x103d3f1e)
    */

cls_10596278 * set_state_and_update_byte(cls_10596278 *param_1,int param_2)

{
  int iVar1;
  cls_10596278 *pcVar2;
  
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x11) {
    if (param_1->field_0x18 == 0x1a8000f) {
      update_setting_and_refresh_copy_10485050((void *)(param_1->field_0x8),(uint32_t)(0));
      param_1->field_0x22 = 0x50;
      pcVar2 = (cls_10596278 *)0x0;
    }
    else if (param_1->field_0x18 == 0x1a80012) {
      pcVar2 = (cls_10596278 *)get_or_init_sram_object_103c63a0();
    }
  }
  if (param_1->field_0x14 == 0xc) {
    pcVar2 = (cls_10596278 *)get_or_init_sram_object_103c63a0();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596278 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10596278 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10596278 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10596278 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10596278 *)0x0;
  }
  return pcVar2;
}
