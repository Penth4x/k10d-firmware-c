/* @k10d dispatch_mode_change_event @ 0x000c63d6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Routes a mode change event based on a state flag, storing parameters and calling
 *   specific handlers.
 * summary:
 *   Checks DAT_0003c3ba and DAT_0003c4df to determine the current state. If state is 2 or
 *   bit 3 of DAT_0003c4df is set, it processes param_1 via FUN_000c66b0 and calls
 *   update_byte_from_two_callees. If state is 1, it processes param_2 via
 *   call_callee_with_fixed_args and calls update_state_pointer. Otherwise, it calls
 *   compute_and_store_clamped_value and FUN_000c64ce. It also calls
 *   check_counter_delta_and_set_flag with a mode indicator (1 or 2) in the first two
 *   branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_event(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  if ((DAT_0003c3ba == '\x02') || ((DAT_0003c4df & 8) != 0)) {
    uVar1 = FUN_000c66b0(param_1);
    DAT_0003c565 = (uint8_t)uVar1;
    DAT_0003c564 = (uint8_t)param_1;
    update_byte_from_two_callees();
    check_counter_delta_and_set_flag(1);
  }
  else if (DAT_0003c3ba == '\x01') {
    uVar1 = call_callee_with_fixed_args(param_2);
    DAT_0003c564 = (uint8_t)uVar1;
    DAT_0003c565 = (uint8_t)param_2;
    update_state_pointer();
    check_counter_delta_and_set_flag(2);
  }
  else {
    compute_and_store_clamped_value();
    FUN_000c64ce();
  }
  return;
}
