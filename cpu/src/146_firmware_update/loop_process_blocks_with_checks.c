/* @k10d loop_process_blocks_with_checks @ 0x1046851a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Loops up to a global count, calling a sequence of helper functions with early-exit
 *   conditions on each iteration.
 * summary:
 *   The function iterates while a counter is less than DAT_10547394. Each iteration calls
 *   dispatch_mode_config_sequence, then conditionally calls
 *   call_subroutine_on_struct_field, reset_two_subobjects, and clear_field_at_offset_0x240
 *   if the counter is non-zero. It then calls conditionally_call_helper_with_id and
 *   loop_write_32_blocks, returning 0 if the latter returns 0. If that check passes, it
 *   calls call_helper_when_flag_is_one and wait_for_pointer_flag_clear_1046908e, then
 *   checks wait_and_copy_buffer_block, returning 0 if false. Finally, it checks
 *   compare_two_sram_blocks; if non-zero, it calls drain_queue_at_offset_0x244 and
 *   send_sequential_command_blocks and returns 1, otherwise it increments the counter and
 *   continues. No specific subsystem is identifiable from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t loop_process_blocks_with_checks(void *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  
  pvVar3 = (void *)0x0;
  if (0 < DAT_10547394/*ROM*/) {
    do {
      dispatch_mode_config_sequence(param_1,pvVar3,param_2,param_3);
      if (0 < (int)pvVar3) {
        call_subroutine_on_struct_field(param_1);
        reset_two_subobjects(param_1,param_3);
        clear_field_at_offset_0x240(param_1);
      }
      conditionally_call_helper_with_id(param_1,param_3);
      iVar1 = loop_write_32_blocks(param_1,param_3);
      if (iVar1 == 0) {
        send_two_config_packets_10469dca(param_1,param_3);
        return 0;
      }
      call_helper_when_flag_is_one(param_1,param_3);
      wait_for_pointer_flag_clear_1046908e(param_1);
      bVar2 = wait_and_copy_buffer_block(param_1);
      if (!bVar2) {
        send_two_config_commands(param_1,param_3);
        return 0;
      }
      iVar1 = compare_two_sram_blocks();
      if (iVar1 != 0) {
        drain_queue_at_offset_0x244((int)param_1);
        send_sequential_command_blocks(param_1,param_2,param_3);
        return 1;
      }
      select_and_call_param_based_on_flag(param_1,param_3);
      pvVar3 = (void *)((int)pvVar3 + 1);
    } while ((int)pvVar3 < DAT_10547394/*ROM*/);
  }
  return 0;
}
