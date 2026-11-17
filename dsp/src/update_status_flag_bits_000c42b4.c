/* @k10d update_status_flag_bits_000c42b4 @ 0x000c42b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Modifies specific bit fields in several global status variables based on a condition
 *   bit.
 * summary:
 *   Checks bit 3 of DAT_0003c18f to determine which branch to execute. In both branches, it
 *   sets bit 3 of DAT_0003c4de and clears bit 0 of DAT_0003c493. The branches differ in how
 *   they modify DAT_0003c588 and DAT_0003c492, with the else branch also conditionally
 *   setting bit 5 of DAT_0003c589 based on the value of DAT_0003c46d.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000c42b4(void)

{
  if ((DAT_0003c18f & 8) == 0) {
    DAT_0003c588 = DAT_0003c588 & 0xdf;
    DAT_0003c492 = 0x16;
    DAT_0003c4de = DAT_0003c4de & 0xef | 8;
  }
  else {
    DAT_0003c492 = 0xf;
    DAT_0003c4de = DAT_0003c4de & 0xef | 8;
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
  DAT_0003c493 = 0xff;
  return;
}
