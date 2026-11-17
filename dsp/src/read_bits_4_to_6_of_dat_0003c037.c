/* @k10d read_bits_4_to_6_of_dat_0003c037 @ 0x000cea90
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Extracts bits 4-6 from the global variable DAT_0003c037 and returns the 3-bit value.
 * summary:
 *   The function performs a bitwise AND with 0x1f to isolate the lower 5 bits of
 *   DAT_0003c037, then right-shifts by 4 to return bits 4, 5, and 6. It has no callees and
 *   no side effects. The role of DAT_0003c037 is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_bits_4_to_6_of_dat_0003c037(void)

{
  return (DAT_0003c037 & 0x1f) >> 4;
}
