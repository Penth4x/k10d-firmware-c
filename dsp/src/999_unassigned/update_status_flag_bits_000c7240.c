/* @k10d update_status_flag_bits_000c7240 @ 0x000c7240
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets or clears specific bits in two status byte variables based on other
 *   flag states.
 * summary:
 *   The function checks a combination of flags in DAT_0003c410, DAT_0003c3c3, DAT_0003c589,
 *   and DAT_0003c190. If these conditions are met, it manipulates bits in DAT_0003c4d2 and
 *   DAT_0003c4d7 based on the state of DAT_0003c022, DAT_0003c000, and DAT_0003c03b. No
 *   external calls are made, and the function only performs bitwise operations on these
 *   global variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000c7240(void)

{
  if (((DAT_0003c410 & 2) != 0) && (DAT_0003c3c3 == '\0')) {
    if (((DAT_0003c589 & 1) != 0) && ((DAT_0003c190 & 0x20) != 0)) {
      DAT_0003c4d2 = DAT_0003c4d2 | 0x80;
    }
    if ((DAT_0003c022 & 1) == 0) {
      if ((DAT_0003c000 & 0x80) == 0) {
        DAT_0003c4d7 = DAT_0003c4d7 | 2;
      }
      else {
        DAT_0003c4d7 = DAT_0003c4d7 & 0xfd;
      }
    }
    else {
      if (((DAT_0003c000 & 0x80) == 0) ||
         (((DAT_0003c03b & 0x80) == 0 && ((DAT_0003c4d7 & 2) != 0)))) {
        if ((DAT_0003c4d2 & 0x20) == 0) {
          DAT_0003c4d2 = DAT_0003c4d2 | 0xa0;
        }
      }
      else {
        DAT_0003c4d2 = DAT_0003c4d2 & 0xdf;
      }
      DAT_0003c4d7 = DAT_0003c4d7 & 0xfd;
    }
  }
  return;
}
