/* @k10d update_status_flag_bit3 @ 0x000f62f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets or clears bit 3 of DAT_0003c4b3 based on a complex combination of other status
 *   flags.
 * summary:
 *   The function evaluates a large boolean expression involving multiple DAT_0003cxxx
 *   globals. If the condition is true, it sets bit 3 (0x8) of DAT_0003c4b3. Otherwise, it
 *   may clear bit 3 under a secondary set of conditions. The result is written back to
 *   DAT_0003c4b3. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bit3(void)

{
  byte bVar1;
  
  if (((((DAT_0003c037 & 0x3f) >> 4 == 1) || ((DAT_0003c127 & 8) == 0)) ||
      (((DAT_0003c127 & 0x20) != 0 && ((DAT_0003c12c & 0x40) == 0)))) ||
     ((((((DAT_0003c126 & 0x20) != 0 && ((DAT_0003c143 & 0x40) != 0)) &&
        ((DAT_0003c143 & 0x20) != 0)) && ((DAT_0003c12d & 1) == 0)) ||
      (((((DAT_0003c127 & 8) != 0 && ((DAT_0003c143 & 0x20) == 0)) && ((DAT_0003c101 & 0x80) == 0))
       || ((((DAT_0003c127 & 8) != 0 && ((DAT_0003c030 & 8) == 0)) && (DAT_0003c3b3 == '\x01')))))))
     ) {
    bVar1 = DAT_0003c4b3 | 8;
  }
  else {
    bVar1 = DAT_0003c4b3;
    if (((((DAT_0003f326 & 0x80) != 0) && ((DAT_0003c127 & 8) != 0)) && (DAT_0003c3c2 == '\x01')) &&
       ((DAT_0003c3b3 == '\x01' && (bVar1 = DAT_0003c4b3 | 8, (DAT_0003c028 & 2) == 0)))) {
      bVar1 = DAT_0003c4b3 & 0xf7;
    }
  }
  DAT_0003c4b3 = bVar1;
  return;
}
