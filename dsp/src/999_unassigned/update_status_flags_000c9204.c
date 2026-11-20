/* @k10d update_status_flags_000c9204 @ 0x000c9204
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets a status byte based on a mode selector and combines it with a shifted flag.
 * summary:
 *   Checks DAT_0003c44c for values 1 or 2 to set DAT_0003c377 to 3 or 5 respectively,
 *   otherwise 0. Copies DAT_0003c569 to DAT_0003c380 in the first two cases. Finally ORs
 *   DAT_0003c377 with DAT_0003c041 shifted left by 4 bits. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_000c9204(void)

{
  if (DAT_0003c44c == '\x01') {
    DAT_0003c377 = 3;
    DAT_0003c380 = DAT_0003c569;
  }
  else if (DAT_0003c44c == '\x02') {
    DAT_0003c377 = 5;
    DAT_0003c380 = DAT_0003c569;
  }
  else {
    DAT_0003c377 = 0;
  }
  DAT_0003c377 = DAT_0003c377 | DAT_0003c041 << 4;
  return;
}
