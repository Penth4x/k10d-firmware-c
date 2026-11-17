/* @k10d run_sequential_check_chain @ 0x104681e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Executes a nested chain of conditional checks and actions on an object, looping forever
 *   on success.
 * summary:
 *   The function calls call_helper_with_string_arg_1046a44a to initialize or check the
 *   object. If successful, it proceeds through a series of setup calls
 *   (allocate_large_memory_pools, release_two_object_slots_10468866,
 *   deactivate_object_with_wait). It then performs a conditional check via
 *   call_helper_with_constant_three_1046a43e; if this fails, it calls
 *   select_and_send_mode_config. If it passes, it executes a nested sequence of checks
 *   (check_table_entry_match, check_param2_or_offset_limit, poll_object_state_until_change)
 *   and corresponding actions. On final success, it calls copy_564_bytes_to_sram,
 *   copy_rodata_to_sram_10008114, and a function at 0x8000067e, then enters an infinite
 *   loop. The specific subsystem is not identifiable from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t run_sequential_check_chain(void *param_1)

{
  uint uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  uVar1 = call_helper_with_string_arg_1046a44a(param_1,auStack_c);
  if (uVar1 != 0) {
    allocate_large_memory_pools(param_1);
    release_two_object_slots_10468866(param_1);
    deactivate_object_with_wait(param_1,0);
    set_flag_with_notify(*(void **)((int)param_1 + 0x238));
    iVar2 = call_helper_with_constant_three_1046a43e(param_1,_DAT_800042c0/*SDRAM*/);
    if (iVar2 == 0) {
      select_and_send_mode_config(param_1,0);
    }
    else {
      populate_update_status_fields((int)param_1);
      iVar2 = check_table_entry_match(param_1,0);
      if (iVar2 == 0) {
        select_and_call_two_variants((int)param_1,0);
      }
      else {
        iVar2 = check_param2_or_offset_limit((int)param_1,0);
        if (iVar2 == 0) {
          write_three_entries_if_flag_not_one(param_1,0);
        }
        else {
          release_object_with_wait((int)param_1,0);
          clear_field_at_offset_0x240(param_1);
          wait_for_pointer_flag_clear_10468d2e(param_1);
          iVar2 = poll_object_state_until_change(param_1,0);
          if (iVar2 != 0) {
            wait_for_subobject_flag_clear_10468dce(param_1);
            teardown_object_at_offset_0x240(param_1);
            copy_564_bytes_to_sram();
            copy_rodata_to_sram_10008114();
            (*(code *)&SUB_8000067e)(0,0);
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
