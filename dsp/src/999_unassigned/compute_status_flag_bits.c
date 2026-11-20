/* @k10d compute_status_flag_bits @ 0x000c935e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a status word in DAT_0003c373 based on bit fields in DAT_0003c127 and
 *   DAT_0003c464.
 * summary:
 *   The function reads several byte-sized globals (DAT_0003c021, DAT_0003c126,
 *   DAT_0003c127, DAT_0003c461, DAT_0003c464) and uses their bit patterns to set
 *   DAT_0003c373 to 0, 1, or 2. It then conditionally ORs 0x10 or 0x20 into the result
 *   based on further checks of DAT_0003c127 and DAT_0003c464. No memory-mapped I/O or
 *   external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_status_flag_bits(void)

{
  if ((DAT_0003c021 & 1) == 0) {
    DAT_0003c373 = 0;
  }
  else if ((DAT_0003c127 & 1) == 0) {
    if (((DAT_0003c126 & 2) == 0) && (((DAT_0003c127 & 2) != 0 || ((DAT_0003c127 & 4) != 0)))) {
      DAT_0003c373 = 0;
    }
    else if (DAT_0003c461 == '\x02') {
      DAT_0003c373 = 2;
    }
    else {
      DAT_0003c373 = 1;
    }
  }
  else {
    DAT_0003c373 = 0;
  }
  if (DAT_0003c464 == '\0') {
    if ((((DAT_0003c127 & 4) != 0) || ((DAT_0003c127 & 2) != 0)) || ((DAT_0003c127 & 1) != 0)) {
      DAT_0003c373 = DAT_0003c373 | 0x20;
    }
  }
  else if (DAT_0003c464 == '\x01') {
    DAT_0003c373 = DAT_0003c373 | 0x20;
  }
  else if (((DAT_0003c127 & 4) == 0) && ((DAT_0003c127 & 2) == 0)) {
    DAT_0003c373 = DAT_0003c373 | 0x10;
  }
  else {
    DAT_0003c373 = DAT_0003c373 | 0x20;
  }
  return;
}
