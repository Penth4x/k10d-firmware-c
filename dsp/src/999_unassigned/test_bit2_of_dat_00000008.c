/* @k10d test_bit2_of_dat_00000008 @ 0x000e2378
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns true if bit 2 of the global DAT_00000008 is clear.
 * summary:
 *   The function performs a single bitwise test on the global variable DAT_00000008,
 *   checking if bit 2 (value 4) is zero. It returns a boolean result based on this
 *   condition. No other operations or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit2_of_dat_00000008(void)

{
  return (DAT_00000008 & 4) == 0;
}
