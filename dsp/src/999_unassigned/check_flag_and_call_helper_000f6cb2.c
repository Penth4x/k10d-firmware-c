/* @k10d check_flag_and_call_helper_000f6cb2 @ 0x000f6cb2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests bit 6 of DAT_0003c128 and calls poll_keypad_with_retry with arguments 0x80 and
 *   0x24 if set.
 * summary:
 *   The function reads the global DAT_0003c128 and checks if bit 6 (0x40) is set. If the
 *   condition is true, it invokes poll_keypad_with_retry with the constant arguments 0x80
 *   and 0x24. The role of DAT_0003c128 and poll_keypad_with_retry is not determinable from
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_helper_000f6cb2(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    poll_keypad_with_retry(0x80,0x24);
  }
  return;
}
