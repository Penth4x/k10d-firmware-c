/* @k10d execute_power_off_sequence_10432a9c @ 0x10432a9c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Performs the camera power-off shutdown sequence, saving settings and entering an
 *   infinite sleep loop.
 * summary:
 *   The function checks a state flag (param_2 or a value from call_subroutine_with_arg3) to
 *   determine the shutdown path. It calls power_off_save_settings to persist configuration
 *   to flash, executes a series of cleanup calls on the object at param_1+0x30, and then
 *   enters an infinite loop calling check_kernel_call_success_10459fea(500) and
 *   forward_three_struct_fields, likely to put the system into a low-power state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_power_off_sequence_10432a9c(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  cls_1059f170 cStack_3c;
  cls_1059f170 cStack_28;
  uint32_t uStack_14;
  uint8_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = call_subroutine_with_arg3(*(uint32_t *)((int)param_1 + 0x34));
  if ((param_2 == 3) || (iVar1 == 3)) {
    invoke_virtual_method_with_id((uint32_t)(param_1));
  }
  iVar2 = poll_event_until_clear(param_1,(uint)(*(char *)((int)param_1 + 0x9c) == '\0'));
  if (iVar2 != 0) {
    invoke_virtual_method_with_zero(*(uint32_t *)((int)param_1 + 0x30));
    if ((param_2 == 2) || (iVar1 == 2)) {
      reset_settings_subblocks(*(uint32_t *)((int)param_1 + 0x30));
      update_settings_status_flags(*(uint32_t *)((int)param_1 + 0x30),1);
      dispatch_event_with_timeout_10435380(*(uint32_t *)((int)param_1 + 0x30),1,2000);
    }
    else {
      if ((((param_2 == 3) || (iVar1 == 3)) || (param_2 == 4)) || (iVar1 == 4)) {
        reset_settings_subblocks(*(uint32_t *)((int)param_1 + 0x30));
        update_settings_status_flags(*(uint32_t *)((int)param_1 + 0x30),1);
      }
      else {
        cls_1059f170_new(&cStack_3c);
        cls_1059f170_new(&cStack_28);
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        write_param_to_buffer(*(uint32_t *)((int)param_1 + 0x30),&cStack_3c,1);
        write_struct_field_with_optional_value(*(uint32_t *)((int)param_1 + 0x30),&cStack_3c,1);
        update_status_flags_from_params(*(int *)((int)param_1 + 0x30),&cStack_3c,0);
        iVar1 = read_field_at_offset_0x90(*(uint32_t *)((int)param_1 + 0x38));
        if (iVar1 == 1) {
          set_flag_and_call_helper_10435224(*(uint32_t *)((int)param_1 + 0x30),0);
        }
        set_flag_and_call_helper_10435224(*(uint32_t *)((int)param_1 + 0x30),1);
        update_settings_status_flags(*(uint32_t *)((int)param_1 + 0x30),0);
        compute_exposure_value_from_settings(*(uint32_t *)((int)param_1 + 0x30),8);
        cls_1059f170_destructor(&cStack_28,2);
        cls_1059f170_destructor(&cStack_3c,2);
      }
      process_mode_setting_updates(*(uint32_t *)((int)param_1 + 0x30),1);
      forward_two_fields_to_helper_104341e4(*(uint32_t *)((int)param_1 + 0x30));
      power_off_save_settings(*(uint32_t *)((int)param_1 + 0x30));
    }
    dispatch_event_with_timeout_10435380(*(uint32_t *)((int)param_1 + 0x30),0,0);
    forward_three_struct_fields(*(uint32_t *)((int)param_1 + 0x34));
    do {
      check_kernel_call_success_10459fea(0x1f4);
      forward_three_struct_fields(*(uint32_t *)((int)param_1 + 0x34));
    } while( true );
  }
  return 0;
}
