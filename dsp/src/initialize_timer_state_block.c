/* @k10d initialize_timer_state_block @ 0x000ea78e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears a flag bit and initializes a block of timer/counter state variables to specific
 *   defaults.
 * summary:
 *   Calls set_three_byte_flags_000ecda8, then clears bit 2 of DAT_0003c1e7. Sets
 *   DAT_0003c1f8 to 5000, DAT_0003c1f4 and DAT_0003c1fe to 0, and DAT_0003c1f5 to 4.
 *   Finally calls FUN_000ed88e. The specific meaning of these globals is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_timer_state_block(void)

{
  set_three_byte_flags_000ecda8();
  DAT_0003c1e7 = DAT_0003c1e7 & 0xfb;
  _DAT_0003c1f8 = 5000;
  DAT_0003c1f4 = 0;
  DAT_0003c1fe = 0;
  DAT_0003c1f5 = 4;
  FUN_000ed88e();
  return;
}
