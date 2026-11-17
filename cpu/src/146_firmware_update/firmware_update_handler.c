/* @k10d firmware_update_handler @ 0x10467a3e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_update_path_by_flag)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Selects one of two update paths based on a status flag and executes the corresponding
 *   sequence of helper calls.
 * summary:
 *   This function is a virtual method (slot 3) of class cls_105a8040. It first calls
 *   release_struct_fields_10466d8a on a member at offset 0x244, then queries a status via
 *   fwupdate_mode_flag_test. Depending on the result, it branches into two distinct paths:
 *   one involving rear_pathA_inner and populate_struct_with_obfuscated_bytes, and the other
 *   directly calling populate_struct_with_obfuscated_bytes. Both paths then call
 *   sd_file_lookup_locked with a member at offset 0x248 and a global pointer, and if
 *   successful, execute a series of four helper functions (call_helper_fifteen_times, and
 *   three others) before finalizing with call_helper_with_lock_10481298. The specific
 *   subsystem (firmware update, UI, etc.) is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t firmware_update_handler(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t r6_in;
  void *r7_in;
  
  release_struct_fields_10466d8a(*(void **)((int)param_1 + 0x244));
  uVar1 = fwupdate_mode_flag_test(param_1);
  if (uVar1 == 0) {
    iVar2 = rear_pathA_inner((int)param_1);
    if (iVar2 != 0) {
      populate_struct_with_obfuscated_bytes(param_1,extraout_r5_00,r6_in,r7_in);
      iVar2 = sd_file_lookup_locked(*(void **)((int)param_1 + 0x248),&DAT_1054739e/*ROM*/);
      if (iVar2 != 0) {
        call_helper_fifteen_times(param_1);
        firmware_flash_execute(param_1);
        run_sequential_check_chain(param_1);
        run_sequential_state_machine_104682dc(param_1);
        call_helper_with_lock_10481298(*(int *)((int)param_1 + 0x248),&DAT_1054739e/*ROM*/);
      }
    }
  }
  else {
    populate_struct_with_obfuscated_bytes(param_1,extraout_r5,r6_in,r7_in);
    iVar2 = sd_file_lookup_locked(*(void **)((int)param_1 + 0x248),&DAT_1054739e/*ROM*/);
    if (iVar2 != 0) {
      call_helper_fifteen_times(param_1);
      run_update_state_machine(param_1);
      run_update_task_loop(param_1);
      run_sequential_state_machine_10467f2c(param_1);
      call_helper_with_lock_10481298(*(int *)((int)param_1 + 0x248),&DAT_1054739e/*ROM*/);
    }
  }
  return 0;
}
