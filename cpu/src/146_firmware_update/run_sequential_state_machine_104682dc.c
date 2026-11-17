/* @k10d run_sequential_state_machine_104682dc @ 0x104682dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Executes a multi-stage sequential process with error handling and infinite loops on
 *   success or failure.
 * summary:
 *   The function initiates a process by calling call_helper_with_string_arg_1046a482 and
 *   allocate_large_memory_pools, then proceeds through a series of conditional steps
 *   (check_table_entry_match, check_param2_or_offset_limit, poll_and_query_object_state,
 *   poll_object_state_until_change) that likely correspond to different phases of the
 *   operation. Each step checks for errors and calls specific error handlers
 *   (select_and_send_mode_config, select_and_call_two_variants, etc.) if a step fails. On
 *   successful completion of all steps, it enters an infinite loop, indicating the process
 *   has finished and the system is likely waiting for a reboot or further action. The
 *   module context 'firmware_update' suggests this is part of an update sequence, but the
 *   function itself is a generic state machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t run_sequential_state_machine_104682dc(void *param_1)

{
  uint uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  uVar1 = call_helper_with_string_arg_1046a482(param_1,auStack_c);
  if (uVar1 == 0) {
    return 0;
  }
  allocate_large_memory_pools(param_1);
  release_two_object_slots_10468866(param_1);
  deactivate_object_with_wait(param_1,1);
  set_flag_with_notify(*(void **)((int)param_1 + 0x238));
  iVar2 = call_helper_with_four(param_1,_DAT_800042c0/*SDRAM*/);
  if (iVar2 == 0) {
    select_and_send_mode_config(param_1,0);
  }
  else {
    populate_update_status_fields((int)param_1);
    iVar2 = check_table_entry_match(param_1,1);
    if (iVar2 == 0) {
      select_and_call_two_variants((int)param_1,0);
    }
    else {
      iVar2 = check_param2_or_offset_limit((int)param_1,1);
      if (iVar2 == 0) {
        write_three_entries_if_flag_not_one(param_1,0);
      }
      else {
        release_object_with_wait((int)param_1,0);
        clear_field_at_offset_0x240(param_1);
        wait_for_pointer_flag_clear_10468d2e(param_1);
        iVar2 = poll_and_query_object_state(param_1);
        if (iVar2 == 0) {
          write_two_config_blocks_10469cf0(param_1,0);
        }
        else {
          iVar2 = poll_object_state_until_change(param_1,1);
          if (iVar2 != 0) {
            wait_for_subobject_flag_clear_10468dce(param_1);
            iVar2 = loop_process_blocks_with_checks(param_1,1,0);
            if (iVar2 != 0) {
              call_subroutine_on_struct_field(param_1);
              deinit_subobject_at_offset_0x240(param_1);
              __halt();
            }
          }
        }
      }
    }
  }
  wait_and_release_subsystem(param_1);
  call_subroutine_on_struct_field(param_1);
  __halt();
}
