/* @k10d attempt_operation_with_fallbacks_104d827e @ 0x104d827e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Attempts a primary operation and falls back to two alternative operations before
 *   finalizing state.
 * summary:
 *   The function calls toggle_object_state_flag with a flag, then attempts
 *   invoke_virtual_slot_seven_104d69c8 using a value from return_r4_passthrough_104d800e
 *   and an offset (0x2b1c) into param_1. If that fails, it tries
 *   dispatch_event_with_status_check, and if that also fails, it tries
 *   dispatch_virtual_method_on_param. If all three fail, it returns 0. If any succeed, it
 *   calls add_offset_by_flag with a flag, invokes an unknown function at 0x104d7eda, and
 *   returns 1 if that call succeeds, otherwise 0. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t attempt_operation_with_fallbacks_104d827e(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  toggle_object_state_flag(param_1,1);
  uVar1 = return_r4_passthrough_104d800e();
  iVar2 = invoke_virtual_slot_seven_104d69c8(uVar1,param_1 + 0x2b1c,param_2);
  if (((iVar2 == 0) || (iVar2 = dispatch_event_with_status_check(param_1,param_1 + 0x2b1c), iVar2 == 0)) ||
     (iVar2 = dispatch_virtual_method_on_param(param_1), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = return_r4_passthrough_104d800e();
    add_offset_by_flag(uVar1,1);
    iVar2 = (*(code *)0x104d7eda/*ROM*/)();
    uVar1 = 1;
    if (iVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
