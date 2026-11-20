/* @k10d update_state_flags_from_globals @ 0x000c411a
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Conditionally updates several global state bytes and calls a helper based on their
 *   current values.
 * summary:
 *   The function checks if bit 1 of DAT_0003c58b is set. If so, it clears DAT_0003c492 and
 *   then sets DAT_0003c493 to a specific value (0, -1, or a character) based on the current
 *   values of DAT_0003c493 and DAT_0003c46e. It calls set_bit5_and_clear_high_bits in some
 *   branches. Finally, it sets or clears bit 5 of DAT_0003c589 based on the value of
 *   DAT_0003c46d.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flags_from_globals(void)

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
    else if (((DAT_0003c46e == '\x05') || (DAT_0003c46e == '\x06')) || (DAT_0003c46e == '\a')) {
      DAT_0003c493 = '\0';
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
