/* @k10d update_flag_bytes_on_state_bit @ 0x000c41a2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Conditionally clears and sets bits in several byte globals when bit 1 of a state byte
 *   is set.
 * summary:
 *   Checks bit 1 of DAT_0003c58b. If set, it resets DAT_0003c492, sets DAT_0003c493 to
 *   0xff, and clears specific bits in DAT_0003c4de and DAT_0003c588. It then sets or clears
 *   bit 5 of DAT_0003c589 depending on whether DAT_0003c46d contains a whitespace character
 *   (tab, newline, or backspace). No MMIO writes or function calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bytes_on_state_bit(void)

{
  if ((DAT_0003c58b & 2) != 0) {
    DAT_0003c492 = 0;
    DAT_0003c493 = 0xff;
    DAT_0003c4de = DAT_0003c4de & 0xe7;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
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
