/* @k10d update_mode_state_if_valid @ 0x10434272
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Validates a mode transition by checking state flags and updates the mode byte at offset
 *   0x50 if conditions are met.
 * summary:
 *   The function first calls read_virtual_property_field multiple times with different
 *   arguments (2, 0x14, 0) to check the value at param_1+0x1c, aborting if specific
 *   conditions are not met. It then compares the current value at param_1+0x50 with param_2
 *   (0x12) to determine if a state change is needed. If a change is required, it calls
 *   refresh_settings_if_changed_104343d8, updates the byte at param_1+0x50, and invokes
 *   clear_setting_flag_0x60 and forward_two_fields_to_helper_104341e4 before returning the
 *   result of apply_settings_and_dispatch. The logic suggests a guarded state machine
 *   transition, possibly related to camera mode or status flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_mode_state_if_valid(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  bool bVar4;
  
  iVar1 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(2));
  uVar3 = 0;
  if ((((iVar1 != 1) && (iVar1 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(0x14)), iVar1 != 1)) &&
      (iVar1 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(0)), iVar1 != 1)) &&
     (iVar1 = read_virtual_property_field((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(0)), iVar1 != 4)) {
    uVar2 = 0;
    if ((*(char *)(param_1 + 0x50) == '\x12') && (param_2 != 0x12)) {
      uVar2 = 0;
      bVar4 = true;
    }
    else if ((*(char *)(param_1 + 0x50) == '\x12') || (param_2 != 0x12)) {
      bVar4 = false;
    }
    else {
      refresh_settings_if_changed_104343d8(param_1);
      uVar2 = 1;
      bVar4 = true;
    }
    *(char *)(param_1 + 0x50) = (char)param_2;
    uVar3 = 0;
    if (bVar4) {
      clear_setting_flag_0x60(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xc),uVar2);
      forward_two_fields_to_helper_104341e4(param_1);
      uVar3 = apply_settings_and_dispatch(param_1,param_2,1);
    }
  }
  return uVar3;
}
