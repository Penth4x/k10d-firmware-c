/* @k10d check_two_flags_and_return_shifted_value @ 0x000e229a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests two specific bits in global flags and conditionally calls a helper, then returns
 *   a 2-bit value from another global.
 * summary:
 *   The function checks if bit 5 of DAT_0003c127 and bit 7 of DAT_0003c128 are both set. If
 *   so, it calls clear_bit2_and_bit7_flags. It then returns bits 2 and 3 of the global
 *   variable _DAT_0000000b. The role of the global variables and the callee is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint check_two_flags_and_return_shifted_value(void)

{
  if (((DAT_0003c127 & 0x20) != 0) && ((DAT_0003c128 & 0x80) != 0)) {
    clear_bit2_and_bit7_flags();
  }
  return (_DAT_0000000b & 7) >> 2;
}
