/* @k10d init_timer_object_with_flags @ 0x103a61de
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Initializes a timer-like object by setting flags, computing a timeout value, and
 *   configuring associated sub-objects.
 * summary:
 *   The function calls two unknown initializers, performs a virtual call if a specific
 *   object state is null, and clears several fields. It stores param_2 into a flag field
 *   (offset 0x47) and calls compute_and_send_two_offsets_103a8936. Based on the flag bits,
 *   it calculates a timeout value (param_1[0xd]) using helpers
 *   get_setting_delay_ms_104f1868, check_setting_0x75_is_one, check_setting_0x77_is_one,
 *   check_setting_0x74_is_one, check_setting_0x76_is_one, and check_setting_0x81_is_one,
 *   defaulting to 60000 or 1000 in specific cases. It then dispatches to one of four
 *   handlers (activate_object_state_once, deactivate_mode_context_103a7c22,
 *   finalize_object_state_and_release) based on the computed state and finally configures a
 *   sub-object at param_1+2 using dispatch_event_to_object_10492252,
 *   request_ui_sync_and_set_flag, request_ui_sync_with_flag_10491f5c, and
 *   forward_params_to_helper_1049207a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103a62e4) overlaps instruction at (ram,0x103a62e2)
    */

void init_timer_object_with_flags(cls_10565040 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  *(uint16_t *)&param_1->field_0x118 = 0;
  param_1->field_0x11a = 0;
  param_1->field_0x11c = param_2;
  iVar2 = 1;
  compute_and_send_two_offsets_103a8936(param_1);
  if ((param_1->field_0x11c & 1) == 0) {
    if ((param_1->field_0x11c & 2) != 0) {
      param_1->field_0x34 = 60000;
    }
  }
  else {
    iVar1 = get_setting_delay_ms_104f1868(param_1->field_0x28);
    param_1->field_0x34 = iVar1;
    if ((iVar1 == 0) && ((param_1->field_0x11c & 4) != 0)) {
      param_1->field_0x34 = 1000;
    }
  }
  iVar1 = check_setting_0x75_is_one(param_1->field_0x28);
  if (((iVar1 != 0) && ((param_1->field_0x11c & 1) != 0)) ||
     ((iVar1 = check_setting_0x77_is_one(param_1->field_0x28), iVar1 != 0 && ((param_1->field_0x11c & 2) != 0))))
  {
    param_1->field_0x45 = 1;
  }
  iVar1 = check_setting_0x74_is_one(param_1->field_0x28);
  if (((iVar1 != 0) && ((param_1->field_0x11c & 1) != 0)) ||
     ((iVar1 = check_setting_0x76_is_one(param_1->field_0x28), iVar1 != 0 && ((param_1->field_0x11c & 2) != 0))))
  {
    param_1->field_0x44 = 1;
  }
  if (param_1->field_0x44 != 0) {
    iVar1 = check_setting_0x81_is_one(param_1->field_0x28);
    iVar2 = 3;
    if (iVar1 == 0) {
      iVar2 = 2;
    }
  }
  if (iVar2 == 1) {
    activate_object_state_once(param_1);
  }
  else if (iVar2 == 2) {
    deactivate_mode_context_103a7c22(param_1);
  }
  else if (iVar2 == 3) {
    finalize_object_state_and_release(param_1);
  }
  else {
    activate_object_state_once(param_1);
  }
  piVar3 = &param_1->field_0x8;
  dispatch_event_to_object_10492252((cls_105b4254 *)piVar3,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)piVar3);
  request_ui_sync_with_flag_10491f5c(piVar3,1);
  forward_params_to_helper_1049207a(piVar3,6,100);
  return;
}
