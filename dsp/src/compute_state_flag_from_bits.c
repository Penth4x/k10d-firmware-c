/* @k10d compute_state_flag_from_bits @ 0x000c704e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes a value into DAT_0003c467 based on bit tests of several DAT globals and sets a
 *   high bit in DAT_0003c4de.
 * summary:
 *   The function performs a series of bitwise checks on DAT_0003c4dd, DAT_0003c464,
 *   DAT_0003c127, DAT_0003c114, DAT_0003c393, DAT_0003c3b8, and DAT_0003ce00. Depending on
 *   the results, it assigns either DAT_0003c468, 0, or 6 to DAT_0003c467. It then copies
 *   this value to DAT_0003c46a. Finally, if specific conditions are met (bit 4 of
 *   DAT_0003c393 clear, DAT_0003c3b8 zero, DAT_0003c464 != DAT_0003c465, and bits 5-7 of
 *   DAT_0003ce00 clear), it sets bit 7 of DAT_0003c4de. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_state_flag_from_bits(void)

{
  if (((DAT_0003c4dd & 1) == 0) || (DAT_0003c464 != '\x02')) {
    if ((((DAT_0003c127 & 2) == 0) && ((DAT_0003c127 & 4) == 0)) &&
       ((((((DAT_0003c127 & 0x10) == 0 && ((DAT_0003c127 & 0x40) == 0)) &&
          ((DAT_0003c127 & 0x80) == 0)) || ((DAT_0003c114 & 1) != 0)) && (DAT_0003c464 != '\x01'))))
    {
      if (DAT_0003c464 == '\x02') {
        DAT_0003c467 = DAT_0003c468;
      }
      else {
        DAT_0003c467 = 0;
      }
    }
    else {
      DAT_0003c467 = 6;
    }
  }
  else {
    DAT_0003c467 = DAT_0003c468;
  }
  DAT_0003c46a = DAT_0003c467;
  if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c3b8 == '\0')) &&
     ((DAT_0003c464 != DAT_0003c465 && ((DAT_0003ce00 & 0xe0) == 0)))) {
    DAT_0003c4de = DAT_0003c4de | 0x80;
  }
  return;
}
