/* @k10d dispatch_mode_change_event_103d2ad8 @ 0x103d2ad8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 072_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode ID in a struct and dispatches to handlers or sets a status byte based on
 *   the new mode value.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object in param_1. It then checks
 *   this value against several constants (0x11, 0xc, 7, 0, 1, 3, 0x19, 9, 0x18, 0x2c, 10).
 *   For specific values, it calls helper functions (e.g., init_singleton_object_103cc008,
 *   get_or_init_sram_object_10422da6) or writes specific byte values (0xdc, 0x8c, 0x50,
 *   0xb4, 200) to offset 0x22 of the object. The logic suggests a state machine or event
 *   handler for changing application modes or states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d2bc6) overlaps instruction at (ram,0x103d2bc4)
    */

cls_105960c0 * dispatch_mode_change_event_103d2ad8(cls_105960c0 *param_1,int param_2)

{
  int iVar1;
  int extraout_r4;
  int iVar2;
  cls_105960c0 *pcVar3;
  
  param_1->field_0x14 = param_2;
  pcVar3 = param_1;
  if (param_2 == 0x11) {
    if (param_1->field_0x18 == 0x193000e) {
      iVar1 = get_or_init_singleton_104aa272();
      iVar1 = *(int *)(iVar1 + 8);
      send_command_and_wait_ack(iVar1);
      if (extraout_r4 != 0) {
        iVar2 = query_class_state_value_104aa82c(iVar1);
        if ((iVar2 == 4) || (iVar1 = dispatch_class_state_two_or_three(iVar1), iVar1 == 4)) {
          iVar1 = get_or_create_singleton_object_1050b118();
          for (iVar1 = get_field_at_offset_0x28(iVar1); iVar1 != 0; iVar1 = get_field_at_offset_0x28(iVar1)) {
            check_kernel_call_success_10459fea(0x32);
            iVar1 = get_or_create_singleton_object_1050b118();
          }
          param_1->field_0x22 = 0xdc;
          pcVar3 = (cls_105960c0 *)0x0;
        }
        else {
          pcVar3 = (cls_105960c0 *)get_or_init_sram_object_10422da6();
        }
      }
    }
    else if (param_1->field_0x18 == 0x1930011) {
      pcVar3 = (cls_105960c0 *)init_singleton_object_103cc008();
    }
  }
  if (param_1->field_0x14 == 0xc) {
    pcVar3 = (cls_105960c0 *)init_singleton_object_103cc008();
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar3 = (cls_105960c0 *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar3 = (cls_105960c0 *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar3 = (cls_105960c0 *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar3 = (cls_105960c0 *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar3 = (cls_105960c0 *)0x0;
  }
  return pcVar3;
}
