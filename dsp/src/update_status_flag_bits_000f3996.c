/* @k10d update_status_flag_bits_000f3996 @ 0x000f3996
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates a status flag byte and a related state byte based on the value of a control
 *   variable.
 * summary:
 *   The function clears bit 2 of DAT_0003c4d6 and copies DAT_0003c449 to DAT_0003c447. It
 *   then conditionally sets bit 2 of DAT_0003c4d6 if DAT_0003c449 is 4 or 5, or clears
 *   DAT_0003c447 if DAT_0003c449 is 1 and a bit in DAT_0003c4de is set. Finally, it resets
 *   both variables if DAT_0003c390 is 2 and a specific bit pattern in DAT_0003c394 matches.
 *   No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000f3996(void)

{
  DAT_0003c4d6 = DAT_0003c4d6 & 0xfb;
  DAT_0003c447 = DAT_0003c449;
  if ((DAT_0003c449 == '\x04') || (DAT_0003c449 == '\x05')) {
    DAT_0003c4d6 = DAT_0003c4d6 | 4;
  }
  else if ((DAT_0003c449 == '\x01') && ((DAT_0003c4de & 1) != 0)) {
    DAT_0003c447 = '\0';
  }
  if ((DAT_0003c390 == '\x02') && ((DAT_0003c394 & 0xf) >> 2 == 2)) {
    DAT_0003c4d6 = DAT_0003c4d6 & 0xfb;
    DAT_0003c447 = '\0';
  }
  return;
}
