/* @k10d conditional_call_two_routines @ 0x000ce5ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls sample_eight_channel_min_max_000e267a if bit 4 of DAT_0003f285 is set, then
 *   always calls poll_status_and_set_flags.
 * summary:
 *   The function checks bit 4 (0x10) of the global DAT_0003f285. If set, it invokes
 *   sample_eight_channel_min_max_000e267a. It then unconditionally invokes
 *   poll_status_and_set_flags. No other side effects or data manipulations are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void conditional_call_two_routines(void)

{
  if ((DAT_0003f285 & 0x10) != 0) {
    sample_eight_channel_min_max_000e267a();
  }
  poll_status_and_set_flags();
  return;
}
