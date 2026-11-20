/* @k10d update_status_flags_from_byte @ 0x000c3f8c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears specific bits in three status words and sets a timeout value and flag bits based
 *   on the value of DAT_0003c46d.
 * summary:
 *   The function first clears bit 1 of DAT_0003c4de, bit 5 of DAT_0003c588, and bit 5 of
 *   DAT_0003c589. It then checks if bit 0 of DAT_0003c198 is set. If so, it branches on the
 *   value of DAT_0003c46d (values 5-8) to set DAT_0003c493 to a specific timeout value (8,
 *   9, 10, or 0x15) and sets specific bits in DAT_0003c4de or DAT_0003c589. If DAT_0003c46d
 *   is not 5-8, it sets DAT_0003c493 to 0x15 or 0 based on bit 0 of DAT_0003c129. No MMIO
 *   writes are observed, only updates to global data variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_from_byte(void)

{
  DAT_0003c493 = 0xff;
  DAT_0003c4de = DAT_0003c4de & 0xef;
  DAT_0003c588 = DAT_0003c588 & 0xdf;
  DAT_0003c589 = DAT_0003c589 & 0x9f;
  if ((DAT_0003c198 & 1) != 0) {
    if (DAT_0003c46d == '\a') {
      DAT_0003c493 = 10;
      DAT_0003c4de = DAT_0003c4de | 0x10;
    }
    else if (DAT_0003c46d == '\x06') {
      DAT_0003c493 = 8;
      DAT_0003c4de = DAT_0003c4de | 0x10;
    }
    else if (DAT_0003c46d == '\x05') {
      DAT_0003c493 = 9;
      DAT_0003c4de = DAT_0003c4de | 0x10;
    }
    else if (DAT_0003c46d == '\b') {
      DAT_0003c493 = 0x15;
      DAT_0003c589 = DAT_0003c589 | 0x20;
    }
    else if (DAT_0003c46d == '\t') {
      DAT_0003c493 = 0x15;
      DAT_0003c589 = DAT_0003c589 | 0x20;
    }
    else if (DAT_0003c46d == '\n') {
      DAT_0003c493 = 0x15;
      DAT_0003c589 = DAT_0003c589 | 0x60;
    }
    else if ((DAT_0003c129 & 1) == 0) {
      DAT_0003c493 = 0x15;
    }
    else {
      DAT_0003c493 = 0;
    }
  }
  return;
}
