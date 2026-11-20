/* @k10d wait_flag_and_return_masked_value @ 0x000d0ba4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Spins until bit 6 of DAT_00000079 is set, clears it, and returns the lower 10 bits of
 *   the inverted DAT_0000007e.
 * summary:
 *   The function busy-waits on a global flag (DAT_00000079) until bit 6 (0x40) is set. It
 *   then clears that bit and returns ((_DAT_0000007e ^ 0xffffffff) & 0x3ff), which is the
 *   10-bit two's complement of the value at DAT_0000007e. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wait_flag_and_return_masked_value(void)

{
  do {
  } while ((DAT_00000079 & 0x40) == 0);
  DAT_00000079 = DAT_00000079 & 0xbf;
  return (_DAT_0000007e ^ 0xffffffff) & 0x3ff;
}
