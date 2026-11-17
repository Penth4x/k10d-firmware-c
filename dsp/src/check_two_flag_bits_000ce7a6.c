/* @k10d check_two_flag_bits_000ce7a6 @ 0x000ce7a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 1 if bit 1 of DAT_00000001 is clear or bit 1 of DAT_0003c330 is set, else 0.
 * summary:
 *   Reads two global byte-sized values and tests bit 1 of each. The result is 1 when the
 *   first bit is 0 or the second bit is 1, otherwise 0. No callees or side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_flag_bits_000ce7a6(void)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (((DAT_00000001 & 2) == 0) || ((DAT_0003c330 & 2) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}
