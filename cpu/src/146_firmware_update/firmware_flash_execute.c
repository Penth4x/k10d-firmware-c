/* @k10d firmware_flash_execute @ 0x104683e2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed run_firmware_update_sequence)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Executes the multi-stage firmware update process and halts in an infinite loop on
 *   success.
 * summary:
 *   The function initiates a firmware update by calling
 *   call_helper_with_string_arg_1046a466 and, if successful, proceeds through a series of
 *   initialization and verification steps (allocate_large_memory_pools,
 *   release_two_object_slots_10468866, etc.). It performs conditional checks using
 *   check_table_entry_match and check_param2_or_offset_limit, likely verifying flash
 *   sectors or data integrity, before calling copy_564_bytes_to_sram and
 *   copy_rodata_to_sram_10008114 (likely boot ROM or reset handlers) and entering an
 *   infinite loop. The source module is identified as 'firmware_update', and the infinite
 *   loop suggests the system is left in a state waiting for a reset or external
 *   intervention after the update completes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t firmware_flash_execute(void *param_1)

{
  uint uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  uVar1 = call_helper_with_string_arg_1046a466(param_1,auStack_c);
  if (uVar1 != 0) {
    allocate_large_memory_pools(param_1);
    release_two_object_slots_10468866(param_1);
    deactivate_object_with_wait(param_1,2);
    set_flag_with_notify(*(void **)((int)param_1 + 0x238));
    iVar2 = call_helper_with_constant_five(param_1,_DAT_800042c0/*SDRAM*/);
    if (iVar2 == 0) {
      select_and_send_mode_config(param_1,0);
    }
    else {
      populate_update_status_fields((int)param_1);
      iVar2 = check_table_entry_match(param_1,0);
      if ((iVar2 == 0) || (iVar2 = check_table_entry_match(param_1,1), iVar2 == 0)) {
        select_and_call_two_variants((int)param_1,0);
      }
      else {
        iVar2 = check_param2_or_offset_limit((int)param_1,0);
        if ((iVar2 == 0) || (iVar2 = check_param2_or_offset_limit((int)param_1,1), iVar2 == 0)) {
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
            iVar2 = poll_object_state_until_change(param_1,2);
            if (iVar2 != 0) {
              wait_for_subobject_flag_clear_10468dce(param_1);
              iVar2 = loop_process_blocks_with_checks(param_1,2,0);
              if (iVar2 != 0) {
                call_subroutine_on_struct_field(param_1);
                teardown_object_at_offset_0x240(param_1);
                copy_564_bytes_to_sram();
                copy_rodata_to_sram_10008114();
                (*(code *)&SUB_8000067e)(2,0);
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
  return 0;
}
