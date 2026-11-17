/* @k10d attempt_operation_with_fallbacks_104d82e0 @ 0x104d82e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Attempts a primary operation, then two fallbacks, and finally a final check, returning
 *   success or failure.
 * summary:
 *   The function calls toggle_object_state_flag to initialize or set a state. It then calls
 *   initialize_object_with_params_104d695e with a pointer offset (param_1 + 0x2b1c) and two
 *   other parameters. If this fails, it tries dispatch_event_with_status_check, and if that
 *   also fails, it tries dispatch_virtual_method_on_param. If all three fail, it returns 0.
 *   If any succeed, it calls add_offset_by_flag, then calls an unknown function at
 *   0x104d7eda. If that final call returns non-zero, the function returns 0 (failure);
 *   otherwise it returns 1 (success).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t attempt_operation_with_fallbacks_104d82e0(int param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  toggle_object_state_flag(param_1,1);
  uVar1 = return_r4_passthrough_104d800e();
  iVar2 = initialize_object_with_params_104d695e(uVar1,param_1 + 0x2b1c,param_2,param_3);
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
