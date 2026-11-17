/* @k10d sr_enable_channels @ 0x1048f9ac
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed call_helper_with_offset_0x14)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x14 to call_two_param_helpers and returns.
 * summary:
 *   The function dereferences the 4-byte field at offset 0x14 of the object pointed to by
 *   param_1 and passes it as the sole argument to call_two_param_helpers. No other
 *   operations, side effects, or state changes are visible in the pseudocode. The role of
 *   call_two_param_helpers is unknown, so the specific subsystem cannot be determined from
 *   this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* SR channel enable (0x7fff = all). */

void sr_enable_channels(int param_1, uint32_t param_x1)

{
  call_two_param_helpers(*(uint32_t *)(param_1 + 0x14));
  return;
}
