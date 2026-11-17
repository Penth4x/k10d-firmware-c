/* @k10d run_update_task_loop @ 0x10467e18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Runs a multi-step update sequence on a device object and then blocks in an infinite
 *   loop.
 * summary:
 *   The function takes a device object pointer, calls call_helper_with_offset_arg_1046a26c
 *   to check a condition, and if successful, proceeds through a series of initialization
 *   and update steps (allocate_large_memory_pools, release_two_object_slots_10468866,
 *   etc.). It handles different update paths based on the return value of
 *   call_helper_with_zero_arg_1046a260, potentially writing to memory or calling specific
 *   update routines. Finally, it calls wait_and_release_subsystem and enters an infinite
 *   do-while loop, indicating this is a dedicated task or thread for the update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t run_update_task_loop(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  iVar1 = call_helper_with_offset_arg_1046a26c((int)param_1,auStack_c);
  if (iVar1 != 0) {
    allocate_large_memory_pools(param_1);
    release_two_object_slots_10468866(param_1);
    deactivate_object_with_wait_loop(param_1,0);
    set_flag_with_notify(*(void **)((int)param_1 + 0x238));
    iVar1 = call_helper_with_zero_arg_1046a260(param_1,_DAT_800042c0/*SDRAM*/);
    if (iVar1 == 0) {
      select_and_send_mode_config(param_1,1);
    }
    else {
      populate_update_status_fields((int)param_1);
      iVar1 = check_table_entry_match(param_1,0);
      if (iVar1 == 0) {
        select_and_call_two_variants((int)param_1,1);
      }
      else {
        process_object_state_transition_10468c92((int)param_1,1);
        poll_subobject_until_idle_10468d6c(param_1);
        write_exposure_param_blocks(param_1,(uint)*(ushort *)((int)param_1 + 0x260),
                     (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),1);
        send_nowait_message_and_wait(param_1,(uint)(ushort)(*(short *)((int)param_1 + 0x260) + 4),
                     (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1));
        poll_subobject_until_idle_10468e0c(param_1);
        process_object_with_wait_loop(param_1);
        copy_564_bytes_to_sram();
        copy_rodata_to_sram_10008114();
        (*(code *)&SUB_8000067e)(0,1);
      }
    }
    wait_and_release_subsystem(param_1);
    __halt();
  }
  return 0;
}
