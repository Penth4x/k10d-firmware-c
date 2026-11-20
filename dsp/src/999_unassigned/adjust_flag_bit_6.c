/* @k10d adjust_flag_bit_6 @ 0x000f605a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally sets or clears bit 6 of the byte at DAT_0003c4b9 based on three other
 *   flag bytes.
 * summary:
 *   Reads DAT_0003c4b9 and conditionally modifies bit 6 (0x40). If DAT_0003c4d3 has bit 3
 *   set, DAT_0003c393 has bit 2 set, and DAT_0003c028 has bit 1 clear, bit 6 is set;
 *   otherwise, if the first two conditions hold, bit 6 is cleared. The result is written
 *   back to DAT_0003c4b9. No MMIO or known subsystem registers are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_flag_bit_6(void)

{
  byte bVar1;
  
  bVar1 = DAT_0003c4b9;
  if ((((DAT_0003c4d3 & 8) != 0) && (bVar1 = DAT_0003c4b9 | 0x40, (DAT_0003c393 & 4) != 0)) &&
     ((DAT_0003c028 & 2) == 0)) {
    bVar1 = DAT_0003c4b9 & 0xbf;
  }
  DAT_0003c4b9 = bVar1;
  return;
}
