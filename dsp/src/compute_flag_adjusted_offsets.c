/* @k10d compute_flag_adjusted_offsets @ 0x000c16b2
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes and stores four derived values into DAT_0003c566 through DAT_0003c56b based on
 *   flag bits and offset constants.
 * summary:
 *   The function reads a base value from DAT_0003c483 and stores it in DAT_0003c566. It
 *   computes a second value in DAT_0003c568 by adding either DAT_0003c48a or 0x40 to the
 *   base, depending on bit 5 of DAT_0003c4de. This value is copied to DAT_0003c56a and
 *   DAT_0003c56b. If bit 6 of DAT_0003c4de is clear, DAT_0003c56a and DAT_0003c56b are
 *   adjusted by subtracting DAT_0003c48d, and DAT_0003c56a may be further incremented by
 *   DAT_0003c567 if bit 0 of DAT_0003c589 is set. No MMIO writes or function calls are
 *   observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_flag_adjusted_offsets(void)

{
  DAT_0003c566 = DAT_0003c483;
  if ((DAT_0003c4de & 0x20) == 0) {
    DAT_0003c568 = DAT_0003c483 + DAT_0003c48a;
  }
  else {
    DAT_0003c568 = DAT_0003c483 + '@';
  }
  DAT_0003c56a = DAT_0003c568;
  DAT_0003c56b = DAT_0003c568;
  if ((DAT_0003c4de & 0x40) == 0) {
    DAT_0003c56a = DAT_0003c568 - DAT_0003c48d;
    DAT_0003c56b = DAT_0003c568 - DAT_0003c48d;
    if ((DAT_0003c589 & 1) != 0) {
      DAT_0003c56a = DAT_0003c56a + DAT_0003c567;
    }
  }
  return;
}
