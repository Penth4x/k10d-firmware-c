/* @k10d FUN_000c3688 @ 0x000c3688
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3688(uint32_t param_1)

{
  if (((DAT_0003c46d == '\x01') || (DAT_0003c46d == '\x03')) && ((DAT_0003c1eb & 2) != 0)) {
    if ((DAT_0003c1eb & 8) == 0) {
      set_flag_bits_in_dat_0003c58b(param_1);
    }
  }
  else if ((DAT_0003c4de & 4) != 0) {
    dispatch_state_handler_000c599c();
    if (DAT_0003c440 == '\a') {
      adjust_clamped_value_and_notify();
    }
    if (((DAT_0003c127 & 8) != 0) && (DAT_0003c565 <= DAT_0003c576)) {
      _DAT_0003c57c = quantize_value_to_steps();
      _DAT_0003c562 = _DAT_0003c562 + _DAT_0003c57c;
      dispatch_state_handler_000c599c();
      if (DAT_0003c440 == '\a') {
        adjust_clamped_value_and_notify();
      }
    }
    if ((DAT_0003c58c & 2) == 0) {
      set_flag_bits_in_dat_0003c58b(param_1);
    }
  }
  return;
}
