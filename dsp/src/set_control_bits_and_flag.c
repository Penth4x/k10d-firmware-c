/* @k10d set_control_bits_and_flag @ 0x000c43be
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Writes constants to two globals, sets a bit in a third, and sets or clears a bit in a
 *   fourth based on a character code.
 * summary:
 *   Writes 0xff to DAT_0003c493 and 0xc to DAT_0003c492. Sets bit 3 of DAT_0003c4de. Checks
 *   DAT_0003c46d against values 8, 9, and 10; if it matches any, sets bit 5 of
 *   DAT_0003c589, otherwise clears bit 5. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_control_bits_and_flag(void)

{
  DAT_0003c493 = 0xff;
  DAT_0003c492 = 0xc;
  DAT_0003c4de = DAT_0003c4de & 0xef | 8;
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
  return;
}
