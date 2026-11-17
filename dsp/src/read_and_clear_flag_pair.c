/* @k10d read_and_clear_flag_pair @ 0x000f6e2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns the value of bits 6-7 of DAT_0003c128 and conditionally calls
 *   poll_keypad_with_retry if bit 6 is set.
 * summary:
 *   Checks bit 6 (0x40) of the global DAT_0003c128. If set, it invokes
 *   poll_keypad_with_retry with arguments 0x80 and 0x10. It then returns the value of bits
 *   6 and 7 (masked with 0x7f and shifted right by 6) from the same global. The role of
 *   DAT_0003c128 and poll_keypad_with_retry is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_and_clear_flag_pair(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    poll_keypad_with_retry(0x80,0x10);
  }
  return (DAT_0003c128 & 0x7f) >> 6;
}
