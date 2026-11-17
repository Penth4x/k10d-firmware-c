/* @k10d toggle_bit7_of_dat_ce09 @ 0x000ce428
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Sets or clears bit 7 of DAT_0003ce09 based on bit 0 of DAT_0003c21f, calls
 *   run_state_machine_loop, then clears bit 7.
 * summary:
 *   Reads bit 0 of DAT_0003c21f (inverted) to decide whether to clear or set bit 7 of
 *   DAT_0003ce09. Calls run_state_machine_loop unconditionally. After the call,
 *   unconditionally clears bit 7 of DAT_0003ce09. The net effect is that bit 7 is only set
 *   transiently before the call if the condition is met, and is always cleared afterward.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit7_of_dat_ce09(void)

{
  if (((DAT_0003c21f ^ 0xff) & 1) == 0) {
    DAT_0003ce09 = DAT_0003ce09 & 0x7f;
  }
  else {
    DAT_0003ce09 = DAT_0003ce09 | 0x80;
  }
  run_state_machine_loop();
  DAT_0003ce09 = DAT_0003ce09 & 0x7f;
  return;
}
