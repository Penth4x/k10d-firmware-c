/* @k10d check_two_flag_bits_clear @ 0x000e63ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns 1 if bit 0 of DAT_0003c066 and bit 1 of DAT_0003c067 are both clear, else 0.
 * summary:
 *   Reads two global bytes and tests specific bits: bit 0 of DAT_0003c066 and bit 1 of
 *   DAT_0003c067. Returns 1 when both bits are zero, otherwise 0. No callees or side
 *   effects; the role of the underlying flags is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_flag_bits_clear(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((DAT_0003c066 & 1) == 0) && ((DAT_0003c067 & 2) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
