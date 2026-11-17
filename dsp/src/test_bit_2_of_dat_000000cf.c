/* @k10d test_bit_2_of_dat_000000cf @ 0x000f8254
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns true if bit 2 of the global DAT_000000cf is set.
 * summary:
 *   The function reads the global variable DAT_000000cf and tests bit 2 (via the Ghidra
 *   idiom `(int)(x << 0x1d) < 0`). It returns a boolean result. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bit_2_of_dat_000000cf(void)

{
  return _DAT_000000cf << 0x1d < 0;
}
