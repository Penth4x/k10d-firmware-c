/* @k10d handle_special_char_input @ 0x000c5526
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes specific control characters by clearing a flag and dispatching to a handler
 *   based on a state byte.
 * summary:
 *   Checks if DAT_0003c493 contains a tab, newline, or backspace character. If so, and if
 *   DAT_0003c492 matches a set of control characters, it clears bit 4 of DAT_0003c4de and
 *   sets DAT_0003c493 to -1. It then calls dispatch_on_state_value_000c3740 and branches to
 *   either update_clamped_value_and_flags or compute_clamped_offset_and_update_registers
 *   depending on whether DAT_0003c440 equals 7.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_special_char_input(void)

{
  if (((DAT_0003c493 == '\b') || (DAT_0003c493 == '\n')) || (DAT_0003c493 == '\t')) {
    if ((((DAT_0003c492 == '\v') || (DAT_0003c492 == '\r')) ||
        ((DAT_0003c492 == '\x0f' || ((DAT_0003c492 == '\x16' || (DAT_0003c492 == '\f')))))) ||
       (DAT_0003c492 == '\0')) {
      DAT_0003c493 = -1;
      DAT_0003c4de = DAT_0003c4de & 0xef;
    }
    dispatch_on_state_value_000c3740();
    if (DAT_0003c440 == '\a') {
      update_clamped_value_and_flags();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
  }
  return;
}
