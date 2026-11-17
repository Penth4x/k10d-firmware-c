/* @k10d clear_flags_and_set_bits @ 0x000dd500
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Zeros eight global variables and sets specific bits in three other global variables.
 * summary:
 *   The function performs a series of direct memory writes to global variables. It clears
 *   eight 16-bit or 32-bit values at addresses 0x122 through 0x136. It then modifies three
 *   other globals by setting bits: ORing 7 into DAT_00000424, ANDing 0xc6 into DAT_00000008
 *   (clearing bits 0, 1, 5, 6), and ORing 0x39 into DAT_00000408. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flags_and_set_bits(void)

{
  DAT_00000122 = 0;
  DAT_00000124 = 0;
  DAT_00000126 = 0;
  DAT_0000012a = 0;
  DAT_0000012c = 0;
  DAT_0000012e = 0;
  DAT_00000132 = 0;
  DAT_00000134 = 0;
  DAT_00000136 = 0;
  DAT_00000424 = DAT_00000424 | 7;
  DAT_00000008 = DAT_00000008 & 0xc6;
  DAT_00000408 = DAT_00000408 | 0x39;
  return;
}
