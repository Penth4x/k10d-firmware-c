/* @k10d dispatch_on_state_byte_000e9924 @ 0x000e9924
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Branches on the value of DAT_0003c219 to call one of two handler routines.
 * summary:
 *   Checks the byte at DAT_0003c219. If it equals 0x1d, calls
 *   dispatch_mode_transition_000e8fc0. If it equals 0x1f, calls
 *   sample_eight_channel_min_max_000e267a and process_camera_state_flags_000c4a56, copies
 *   DAT_0003c520 to DAT_0003c21f, clears DAT_0003c21e, and calls FUN_000e9d46. No other
 *   values are handled.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_byte_000e9924(void)

{
  if (DAT_0003c219 == '\x1d') {
    dispatch_mode_transition_000e8fc0();
  }
  else if (DAT_0003c219 == '\x1f') {
    sample_eight_channel_min_max_000e267a();
    process_camera_state_flags_000c4a56();
    DAT_0003c21f = DAT_0003c520;
    DAT_0003c21e = 0;
    FUN_000e9d46();
  }
  return;
}
