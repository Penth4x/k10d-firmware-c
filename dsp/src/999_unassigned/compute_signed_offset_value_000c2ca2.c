/* @k10d compute_signed_offset_value_000c2ca2 @ 0x000c2ca2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Computes a signed byte value into DAT_0003c560 based on flag bits and arithmetic on
 *   nearby globals.
 * summary:
 *   The function branches on bits of DAT_0003c127 and DAT_0003c126. In one path it extracts
 *   a 3-bit signed value from DAT_000f9dea and subtracts it from a value derived from
 *   DAT_0003f580. In the other path it computes a shifted sum of DAT_0003f584,
 *   DAT_0003f590, and DAT_0003f58c. The result is stored in DAT_0003c560, which is zeroed
 *   if DAT_0003c440 equals 0x11. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_signed_offset_value_000c2ca2(void)

{
  char cVar1;
  
  if (((DAT_0003c127 & 8) == 0) && ((DAT_0003c126 & 2) == 0)) {
    if ((DAT_0003c127 & 4) == 0) {
      DAT_0003c560 = '\0';
    }
    else {
      cVar1 = (char)((DAT_000f9dea & 0x70) >> 4);
      if ((DAT_000f9dea & 0x80) != 0) {
        cVar1 = -cVar1;
      }
      DAT_0003c560 = ((char)_DAT_0003f580 + -8) - cVar1;
      if (DAT_0003c440 == '\x11') {
        DAT_0003c560 = '\0';
      }
    }
  }
  else {
    DAT_0003c560 = (char)((uint)((_DAT_0003f584 - _DAT_0003f590) + _DAT_0003f58c) >> 1) + -0x10;
    if (DAT_0003c440 == '\x11') {
      DAT_0003c560 = '\0';
    }
  }
  return;
}
