/* @k10d read_shifted_status_field @ 0x000c14c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns a 5-bit value extracted from DAT_0003c10c or a full byte from DAT_0003c561
 *   based on flag bits in DAT_0003c126/127.
 * summary:
 *   The function checks bit 3 of DAT_0003c127 and bit 3 of DAT_0003c126; if the former is
 *   set and the latter is clear, it returns bits 2-6 of DAT_0003c10c. If bit 1 of
 *   DAT_0003c126 is set, it overrides the result with the full value of DAT_0003c561.
 *   Otherwise it returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000c14ec) */

uint read_shifted_status_field(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((DAT_0003c127 & 8) != 0) && ((DAT_0003c126 & 8) == 0)) {
    uVar1 = (DAT_0003c10c & 0x7c) >> 2;
  }
  if ((DAT_0003c126 & 2) != 0) {
    uVar1 = (uint)DAT_0003c561;
  }
  return uVar1;
}
