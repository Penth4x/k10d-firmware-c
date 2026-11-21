/* @k10d run_sequential_state_machine_10467f2c @ 0x10467f2c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Executes a linear sequence of state transitions on an object, halting in an infinite
 *   loop if any step fails.
 * summary:
 *   The function takes an object pointer and calls a series of helper functions in a
 *   specific order. It checks the return values of several steps
 *   (call_helper_with_offset_620, call_helper_with_flag_one_1046a298,
 *   fwupdate_check_markers_1046861c, poll_and_query_object_state, loop_process_blocks_with_checks).
 *   If a check fails, it calls a specific error handler (e.g.,
 *   populate_update_status_fields, select_and_call_two_variants) and enters an infinite
 *   loop. If all steps succeed, it calls a final handler (wait_and_release_subsystem) and
 *   also enters an infinite loop, suggesting this is a terminal state or a blocking wait
 *   after completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t run_sequential_state_machine_10467f2c(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  iVar1 = call_helper_with_offset_620((int)param_1,auStack_c);
  if (iVar1 == 0) {
    return 0;
  }
  allocate_large_memory_pools(param_1);
  release_two_object_slots_10468866(param_1);
  deactivate_object_with_wait(param_1,1);
  set_flag_with_notify(*(void **)((int)param_1 + 0x238));
  iVar1 = call_helper_with_flag_one_1046a298(param_1,_DAT_800042c0/*SDRAM*/);
  if (iVar1 == 0) {
    select_and_send_mode_config(param_1,1);
  }
  else {
    populate_update_status_fields((int)param_1);
    iVar1 = fwupdate_check_markers_1046861c(param_1,1);
    if (iVar1 == 0) {
      select_and_call_two_variants((int)param_1,1);
    }
    else {
      release_object_with_wait((int)param_1,1);
      clear_field_at_offset_0x240(param_1);
      wait_for_pointer_flag_clear_10468d2e(param_1);
      iVar1 = poll_and_query_object_state(param_1);
      if (iVar1 == 0) {
        write_two_config_blocks_10469cf0(param_1,1);
      }
      else {
        write_sequential_data_entries(param_1,(uint)*(ushort *)((int)param_1 + 0x260),
                     (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),1);
        send_nowait_message_and_wait(param_1,(uint)(ushort)(*(short *)((int)param_1 + 0x260) + 4),
                     (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1));
        wait_for_subobject_flag_clear_10468dce(param_1);
        iVar1 = loop_process_blocks_with_checks(param_1,1,1);
        if (iVar1 != 0) {
          call_subroutine_on_struct_field(param_1);
          deinit_subobject_at_offset_0x240(param_1);
          __halt();
        }
      }
    }
  }
  wait_and_release_subsystem(param_1);
  call_subroutine_on_struct_field(param_1);
  __halt();
}
