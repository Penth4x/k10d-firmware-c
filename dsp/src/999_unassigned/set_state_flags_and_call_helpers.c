/* @k10d set_state_flags_and_call_helpers @ 0x000ec9fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears and sets specific bits in a global byte and calls two helper functions with
 *   fixed arguments.
 * summary:
 *   The function calls busy_wait_on_mode_flag with argument 3, then
 *   write_masked_field_and_call_two_routines with arguments 0x1b and 0. It clears bit 6 of
 *   bRam00000000. If specific conditions on DAT_0003c036, DAT_0003c58b, and DAT_0003c493
 *   are met, it sets bit 2 of bRam00000000 and DAT_0003c38c. It then calls
 *   busy_wait_on_mode_flag with arguments 1, 0xf, and 1, and finally sets bit 6 of
 *   bRam00000000.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_flags_and_call_helpers(void)

{
  busy_wait_on_mode_flag(3);
  write_masked_field_and_call_two_routines(0x1b,0);
  bRam00000000 = bRam00000000 & 0xbf;
  if ((((DAT_0003c036 & 1) == 0) && ((DAT_0003c58b & 0x40) != 0)) && (DAT_0003c493 != -1)) {
    bRam00000000 = bRam00000000 | 4;
    DAT_0003c38c = DAT_0003c38c | 4;
  }
  busy_wait_on_mode_flag(1);
  busy_wait_on_mode_flag(0xf);
  busy_wait_on_mode_flag(1);
  bRam00000000 = bRam00000000 | 0x40;
  return;
}
