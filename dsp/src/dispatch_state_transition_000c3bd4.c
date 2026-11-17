/* @k10d dispatch_state_transition_000c3bd4 @ 0x000c3bd4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Routes execution to different handler functions based on the value of a state variable.
 * summary:
 *   The function checks the value of DAT_0003c3ba and a flag in DAT_0003c4df to determine
 *   which code path to take. It calls one of several unverified functions (FUN_000c66b0,
 *   compute_and_check_range, update_byte_from_two_callees,
 *   clamp_value_and_set_flags_000c6682, update_state_pointer,
 *   compute_and_store_offset_pair, FUN_000c64ce) depending on the state. It also updates
 *   DAT_0003c564 and DAT_0003c565 with values from other globals or function returns.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_transition_000c3bd4(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c3ba == '\x02') || ((DAT_0003c4df & 8) != 0)) {
    if (((DAT_0003c004 & 2) == 0) || (_DAT_0003c57a == 0)) {
      uVar1 = FUN_000c66b0((uint)DAT_0003c564);
      DAT_0003c565 = (uint8_t)uVar1;
    }
    else {
      DAT_0003c565 = compute_and_check_range();
    }
    update_byte_from_two_callees();
  }
  else if (DAT_0003c3ba == '\x01') {
    DAT_0003c564 = DAT_0003c571;
    if ((DAT_0003c127 & 8) != 0) {
      DAT_0003c564 = clamp_value_and_set_flags_000c6682(DAT_0003c565,DAT_0003c570,DAT_0003c571);
    }
    update_state_pointer();
  }
  else {
    compute_and_store_offset_pair();
    FUN_000c64ce();
  }
  return;
}
