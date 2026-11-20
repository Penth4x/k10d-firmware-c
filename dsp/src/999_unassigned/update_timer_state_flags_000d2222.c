/* @k10d update_timer_state_flags_000d2222 @ 0x000d2222
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates internal state variables based on flag bits and a counter value.
 * summary:
 *   Checks bit 4 of DAT_0003ce02 and the value of DAT_0003cd5c. If bit 4 is clear or the
 *   counter is below 26, it may reset a timer-like structure (DAT_0003cd50, DAT_0003cd5c,
 *   DAT_0003ce5a, DAT_0003ce5c, DAT_0003ce58) if bit 5 is set and the counter is below 4.
 *   Otherwise, it calls clamp_and_scale_value_000d21a6 with DAT_0003cd58 and updates
 *   DAT_0003ce5a if the result is less than DAT_0003cd50.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_timer_state_flags_000d2222(void)

{
  uint uVar1;
  
  if (((DAT_0003ce02 & 0x10) == 0) || (DAT_0003cd5c < '\x1a')) {
    if (((DAT_0003ce02 & 0x20) != 0) && (DAT_0003cd5c < '\x04')) {
      _DAT_0003cd50 = _DAT_0003cd54;
      DAT_0003cd5c = '\0';
      if (0 < _DAT_0003ce5a) {
        _DAT_0003ce5a = _DAT_0003ce5a - _DAT_0003ce5c;
      }
      _DAT_0003ce5c = 0;
      _DAT_0003ce58 = 0;
    }
  }
  else {
    uVar1 = clamp_and_scale_value_000d21a6((int)DAT_0003cd58);
    if (uVar1 >> 1 < (uint)_DAT_0003cd50) {
      _DAT_0003ce5a = _DAT_0003ce5c;
    }
  }
  return;
}
