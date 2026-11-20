/* @k10d dispatch_state_transition_000e9812 @ 0x000e9812
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Dispatches to different handler functions based on the value of a state variable.
 * summary:
 *   The function checks the value of DAT_0003c219 and calls a specific sequence of
 *   functions depending on whether it equals 0x0b, 0x0c, 0x0d, 0x0e, or 0x0f. It modifies
 *   _DAT_0003c21e in some branches. The specific roles of the callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_transition_000e9812(void)

{
  if (DAT_0003c219 == '\v') {
    poll_status_bit_sequence();
    accumulate_ten_sample_values_000e9304();
    _DAT_0003c21e = _DAT_0003c210;
    FUN_000e9d46();
  }
  else if (DAT_0003c219 == '\f') {
    update_state_machine_flags();
    dispatch_state_transition_000dfe8e();
  }
  else if (DAT_0003c219 == '\r') {
    FUN_000d9e2c();
    process_camera_state_flags_000c4a56();
    call_subroutine_with_ten();
    dispatch_mode_transition_sequence();
    call_subroutine_with_ten();
    FUN_000d9e2c();
    process_camera_state_flags_000c4a56();
    call_subroutine_with_ten();
    dispatch_mode_transition_sequence();
  }
  else if (DAT_0003c219 == '\x0e') {
    dispatch_on_flag_state();
  }
  else if (DAT_0003c219 == '\x0f') {
    poll_status_bit_sequence();
    _DAT_0003c21e = dispatch_command_by_index(_DAT_0003c21e);
  }
  return;
}
