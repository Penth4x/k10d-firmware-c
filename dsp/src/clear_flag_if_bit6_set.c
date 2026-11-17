/* @k10d clear_flag_if_bit6_set @ 0x000f6c5a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears DAT_0003ce1c and calls poll_keypad_with_retry(0x80,0x20) if bit 6 of
 *   DAT_0003c128 is set.
 * summary:
 *   Checks bit 6 (0x40) of the global DAT_0003c128. If set, it zeroes DAT_0003ce1c and
 *   invokes poll_keypad_with_retry with arguments 0x80 and 0x20. The roles of the globals
 *   and the callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_flag_if_bit6_set(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    _DAT_0003ce1c = 0;
    poll_keypad_with_retry(0x80,0x20);
  }
  return;
}
