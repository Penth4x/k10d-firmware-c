/* @k10d maybe_call_e3ae0 @ 0x000e3ac6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls toggle_state_bit_and_call_handler only if DAT_0003c3a6 is zero and bit 0 of
 *   DAT_0003c396 is clear.
 * summary:
 *   Checks two global flags: DAT_0003c3a6 must be 0 and the low bit of DAT_0003c396 must be
 *   0. If both conditions hold, it invokes toggle_state_bit_and_call_handler. No other side
 *   effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void maybe_call_e3ae0(void)

{
  if ((DAT_0003c3a6 == '\0') && ((DAT_0003c396 & 1) == 0)) {
    toggle_state_bit_and_call_handler();
  }
  return;
}
