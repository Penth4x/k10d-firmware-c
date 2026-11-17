/* @k10d conditional_call_gate @ 0x000e3b34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls manage_flag_8_state only when DAT_0003c3a6 is zero and bit 0 of DAT_0003c396 is
 *   clear.
 * summary:
 *   Checks two global flags: DAT_0003c3a6 must be 0 and the least significant bit of
 *   DAT_0003c396 must be 0. If both conditions hold, it invokes manage_flag_8_state. No
 *   other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void conditional_call_gate(void)

{
  if ((DAT_0003c3a6 == '\0') && ((DAT_0003c396 & 1) == 0)) {
    manage_flag_8_state();
  }
  return;
}
