/* @k10d accumulate_ten_sample_values_000ece5c @ 0x000ece5c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads ten 16-bit values from a memory-mapped register, sums them, and passes the total
 *   to a helper function.
 * summary:
 *   The function sets a flag in DAT_0000042c and initializes a counter. It loops ten times,
 *   waiting for bit 6 of DAT_00000079 to be set, then reads the 16-bit value from
 *   DAT_00000081 and adds it to a running sum. Finally, it calls divide_two_integers with
 *   the sum and the count (10).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_ten_sample_values_000ece5c(void)

{
  DAT_0000042c = DAT_0000042c | 4;
  DAT_0000007a = 0x23;
  _DAT_0003c210 = 0;
  DAT_0003c20f = 0;
  do {
    DAT_00000078 = 0;
    do {
    } while ((DAT_00000079 & 0x40) == 0);
    DAT_00000079 = DAT_00000079 & 0xfd | 0x80;
    _DAT_0003c212 = (short)_DAT_00000081;
    _DAT_0003c210 = _DAT_0003c210 + _DAT_0003c212;
    DAT_0003c20f = DAT_0003c20f + 1;
  } while (DAT_0003c20f < 10);
  _DAT_0003c210 = divide_two_integers(_DAT_0003c210,10);
  return;
}
