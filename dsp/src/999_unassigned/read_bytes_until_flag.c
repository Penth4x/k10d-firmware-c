/* @k10d read_bytes_until_flag @ 0x000e1870
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Reads bytes from wait_for_flag_and_return_state into a buffer until a count is met or a
 *   flag is set, then adjusts a global counter.
 * summary:
 *   Sets bit 3 of bRam00000000. Loops calling wait_for_flag_and_return_state to fill
 *   param_1 for param_2 iterations, breaking early if DAT_0003c122 is non-zero. Calls
 *   poll_status_flag_and_set_ready or busy_wait_on_mode_flag based on DAT_0003c128 and
 *   DAT_0003c121. Finally increments DAT_0003c122 by 0x40 if non-zero and returns it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char read_bytes_until_flag(uint8_t *param_1,short param_2)

{
  uint8_t uVar1;
  
  bRam00000000 = bRam00000000 | 8;
  do {
    uVar1 = wait_for_flag_and_return_state();
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
    if (param_2 == 0) break;
  } while (DAT_0003c122 == '\0');
  if (((DAT_0003c128 & 0x80) == 0) || (DAT_0003c121 < 0xf0)) {
    poll_status_flag_and_set_ready();
  }
  else {
    busy_wait_on_mode_flag(0x500);
  }
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + '@';
  }
  return DAT_0003c122;
}
