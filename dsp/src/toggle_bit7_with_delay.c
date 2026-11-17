/* @k10d toggle_bit7_with_delay @ 0x000edfa2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 7 of a RAM byte, waits, clears bit 7, and waits again.
 * summary:
 *   The function checks if global _DAT_0003c1e8 is zero. If so, it sets bit 7 (0x80) of
 *   bRam00000000, calls busy_wait_on_mode_flag with argument 500, clears bit 7 (0x7f mask),
 *   and calls busy_wait_on_mode_flag with argument 500 again. This pattern suggests a timed
 *   pulse or toggle operation on a status or control flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit7_with_delay(void)

{
  if (_DAT_0003c1e8 == 0) {
    bRam00000000 = bRam00000000 | 0x80;
  }
  busy_wait_on_mode_flag(500);
  if (_DAT_0003c1e8 == 0) {
    bRam00000000 = bRam00000000 & 0x7f;
  }
  busy_wait_on_mode_flag(500);
  return;
}
