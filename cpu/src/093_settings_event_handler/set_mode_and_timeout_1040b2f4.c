/* @k10d set_mode_and_timeout_1040b2f4 @ 0x1040b2f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040b3a0) overlaps instruction at (ram,0x1040b39e)
    */

cls_10599b9c * set_mode_and_timeout_1040b2f4(cls_10599b9c *param_1,int param_2)

{
  cls_10599b9c *pcVar1;
  int iVar2;
  
  param_1->field_0x14 = param_2;
  pcVar1 = param_1;
  if (param_2 == 0xc) {
    pcVar1 = (cls_10599b9c *)init_singleton_object_103cc008();
  }
  if (param_1->field_0x14 == 0x11) {
    if (param_1->field_0x18 == 0x1bb000a) {
      iVar2 = get_or_create_singleton_object_1050b118();
      for (iVar2 = get_field_at_offset_0x28(iVar2); iVar2 != 0; iVar2 = get_field_at_offset_0x28(iVar2)) {
        check_kernel_call_success_10459fea();
        iVar2 = get_or_create_singleton_object_1050b118();
      }
      iVar2 = get_or_create_singleton_object_104bb22a();
      init_and_start_timer_object(*(uint32_t *)(iVar2 + 8));
    }
    pcVar1 = (cls_10599b9c *)init_singleton_object_103cc008();
  }
  iVar2 = param_1->field_0x14;
  if ((((iVar2 == 7) || (iVar2 == 0)) || (iVar2 == 1)) || (iVar2 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar1 = (cls_10599b9c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar1 = (cls_10599b9c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar1 = (cls_10599b9c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar1 = (cls_10599b9c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar1 = (cls_10599b9c *)0x0;
  }
  return pcVar1;
}
