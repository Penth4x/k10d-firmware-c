/* @k10d dispatch_on_byte_value @ 0x000dafae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks a byte global and calls a helper with an index 0-2 based on its value.
 * summary:
 *   Reads DAT_0003c493 and compares it to 0x08, 0x09, or 0x0a. If it matches, calls
 *   process_two_buffer_sequence with the corresponding index (0, 1, or 2) and DAT_0003c49e
 *   as the second argument. No other actions are taken.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_byte_value(void)

{
  if (DAT_0003c493 == '\b') {
    process_two_buffer_sequence(0,DAT_0003c49e);
  }
  else if (DAT_0003c493 == '\t') {
    process_two_buffer_sequence(1,DAT_0003c49e);
  }
  else if (DAT_0003c493 == '\n') {
    process_two_buffer_sequence(2,DAT_0003c49e);
  }
  return;
}
