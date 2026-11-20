/* @k10d update_key_state_flags_000c40ae @ 0x000c40ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes key state transitions and updates a status byte based on specific key codes.
 * summary:
 *   Checks a global flag (bit 1 of DAT_0003c58b) to determine if key processing is active.
 *   If active, it resets a counter, handles specific key codes (0x09, 0x08, 0x0a) by
 *   calling set_bit5_and_clear_high_bits or updating state, and modifies bits 5 and 6 of
 *   DAT_0003c589 based on the value of DAT_0003c46d.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_key_state_flags_000c40ae(void)

{
  if ((DAT_0003c58b & 2) != 0) {
    DAT_0003c492 = 0;
    if (DAT_0003c493 == '\t') {
      set_bit5_and_clear_high_bits();
    }
    else if (DAT_0003c493 == '\b') {
      set_bit5_and_clear_high_bits();
    }
    else if (DAT_0003c493 == '\n') {
      DAT_0003c493 = '\b';
      set_bit5_and_clear_high_bits();
    }
    else {
      DAT_0003c493 = -1;
    }
    if (DAT_0003c46d == '\b') {
      DAT_0003c589 = DAT_0003c589 | 0x20;
    }
    else if (DAT_0003c46d == '\t') {
      DAT_0003c589 = DAT_0003c589 | 0x20;
    }
    else if (DAT_0003c46d == '\n') {
      DAT_0003c589 = DAT_0003c589 | 0x20;
    }
    else {
      DAT_0003c589 = DAT_0003c589 & 0xdf;
    }
  }
  return;
}
