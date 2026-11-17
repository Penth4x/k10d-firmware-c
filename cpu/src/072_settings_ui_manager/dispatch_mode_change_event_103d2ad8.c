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

int dispatch_mode_change_event_103d2ad8(int param_1,int param_2)

{
  int iVar1;
  int extraout_r4;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0x11) {
    if (*(int *)(param_1 + 0x18) == 0x193000e) {
      iVar1 = get_or_init_singleton_104aa272();
      iVar1 = *(int *)(iVar1 + 8);
      send_command_and_wait_ack(iVar1);
      if (extraout_r4 != 0) {
        iVar2 = query_class_state_value_104aa82c(iVar1);
        if ((iVar2 == 4) || (iVar2 = dispatch_class_state_two_or_three(iVar1), iVar2 == 4)) {
          iVar2 = get_or_create_singleton_object_1050b118();
          for (iVar2 = get_field_at_offset_0x28(iVar2); iVar2 != 0; iVar2 = get_field_at_offset_0x28(iVar2)) {
            check_kernel_call_success_10459fea();
            iVar2 = get_or_create_singleton_object_1050b118();
          }
          *(uint8_t *)(param_1 + 0x22) = 0xdc;
          iVar2 = 0;
        }
        else {
          iVar2 = get_or_init_sram_object_10422da6();
        }
      }
    }
    else if (*(int *)(param_1 + 0x18) == 0x1930011) {
      iVar2 = init_singleton_object_103cc008();
    }
  }
  if (*(int *)(param_1 + 0x14) == 0xc) {
    iVar2 = init_singleton_object_103cc008();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x14) == 0x19) || (*(int *)(param_1 + 0x14) == 9)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x18) {
    *(uint8_t *)(param_1 + 0x22) = 0xb4;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x2c) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 10) {
    *(uint8_t *)(param_1 + 0x22) = 200;
    iVar2 = 0;
  }
  return iVar2;
}
