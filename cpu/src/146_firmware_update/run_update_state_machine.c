/* @k10d run_update_state_machine @ 0x10468070
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Executes a multi-stage update sequence with conditional branching and error handling,
 *   ending in an infinite loop.
 * summary:
 *   The function initializes a context via call_helper_with_offset_0x284 and, if
 *   successful, proceeds through a series of setup and verification steps
 *   (allocate_large_memory_pools, release_two_object_slots_10468866,
 *   call_helper_with_constant_two_1046a27c). It branches based on status checks
 *   (check_table_entry_match, poll_and_query_object_state), invoking error handlers
 *   (populate_update_status_fields, release_object_with_wait) or additional processing
 *   steps (write_sequential_data_entries, write_exposure_param_blocks) on failure. The
 *   function concludes with cleanup calls (wait_and_release_subsystem,
 *   call_subroutine_on_struct_field) and enters an infinite loop, indicating it is a
 *   dedicated task or state machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t run_update_state_machine(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = call_helper_with_offset_0x284((int)param_1,&uStack_c);
  if (iVar1 != 0) {
    allocate_large_memory_pools(param_1);
    release_two_object_slots_10468866(param_1);
    deactivate_object_with_wait(param_1,2);
    set_flag_with_notify(*(void **)((int)param_1 + 0x238));
    iVar1 = call_helper_with_constant_two_1046a27c(param_1,_DAT_800042c0/*SDRAM*/);
    if (iVar1 == 0) {
      select_and_send_mode_config(param_1,1);
    }
    else {
      populate_update_status_fields((int)param_1);
      iVar1 = check_table_entry_match(param_1,0);
      if ((iVar1 == 0) || (iVar1 = check_table_entry_match(param_1,1), iVar1 == 0)) {
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
          write_exposure_param_blocks(param_1,(uint)(ushort)(*(short *)((int)param_1 + 0x260) + 3),
                       (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),1);
          send_nowait_message_and_wait(param_1,(uint)(ushort)(*(short *)((int)param_1 + 0x260) + 6),
                       (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1));
          wait_for_subobject_flag_clear_10468dce(param_1);
          iVar1 = loop_process_blocks_with_checks(param_1,2,1);
          if (iVar1 != 0) {
            call_subroutine_on_struct_field(param_1);
            teardown_object_at_offset_0x240(param_1);
            copy_564_bytes_to_sram();
            copy_rodata_to_sram_10008114();
            (*(code *)&SUB_8000067e)(2,1);
          }
        }
      }
    }
    wait_and_release_subsystem(param_1);
    call_subroutine_on_struct_field(param_1);
    __halt();
  }
  return 0;
}
