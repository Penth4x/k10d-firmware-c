/* @k10d update_sign_flag_and_dispatch @ 0x000ce45c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Normalizes a signed value, sets a status flag based on its sign, and calls two dispatch
 *   routines.
 * summary:
 *   The function checks the sign of _DAT_0003cc6a, negates it if negative and sets bit 3 of
 *   DAT_0003ce02, or sets bit 2 if positive. It then calls compute_state_offset_value and
 *   dispatch_state_machine_000cbc8e(0). Depending on bits in DAT_0003ce04, it either waits
 *   for a condition and calls negate_value_if_flag_set, or computes a difference and calls
 *   adjust_value_if_flag_set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_sign_flag_and_dispatch(void)

{
  if (_DAT_0003cc6a < 0) {
    _DAT_0003cc6a = -_DAT_0003cc6a;
    DAT_0003ce02 = DAT_0003ce02 | 8;
  }
  else {
    DAT_0003ce02 = DAT_0003ce02 | 4;
  }
  compute_state_offset_value();
  dispatch_state_machine_000cbc8e(0);
  if (((DAT_0003ce04 & 0x80) == 0) && ((DAT_0003ce04 & 8) == 0)) {
    do {
    } while ((DAT_0003ce01 & 7) != 0);
    _DAT_0003ce40 = (ushort)_DAT_0000005a ^ 0xffff;
    negate_value_if_flag_set();
  }
  else {
    _DAT_0003ce40 = _DAT_0003cc6a - (ushort)_DAT_0000005a;
    adjust_value_if_flag_set();
  }
  return;
}
