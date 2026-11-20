/* @k10d clear_flag_and_call_helpers @ 0x000cbf1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally clears bit 1 of a global flag and calls two helpers, then always calls a
 *   third helper.
 * summary:
 *   Checks if bit 1 (value 2) is set in DAT_0003f504. If so, it clears bit 6 (value 0x40)
 *   in DAT_0000048c by ANDing with 0xbf, then calls poll_keypad_until_release and
 *   process_pending_event_flags_000d6bf2. Finally, it unconditionally calls
 *   poll_four_word_sequence. The specific roles of the global variables and callee
 *   functions are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_helpers(void)

{
  if ((DAT_0003f504 & 2) != 0) {
    DAT_0000048c = DAT_0000048c & 0xbf;
    poll_keypad_until_release();
    process_pending_event_flags_000d6bf2();
  }
  poll_four_word_sequence();
  return;
}
