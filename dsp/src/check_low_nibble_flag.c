/* @k10d check_low_nibble_flag @ 0x000d5f68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns true if the low nibble of DAT_0003c319 is non-zero.
 * summary:
 *   Reads the global DAT_0003c319 and tests whether its lower 4 bits are set. No side
 *   effects or callees. The role of DAT_0003c319 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_low_nibble_flag(void)

{
  return (DAT_0003c319 & 0xf) != 0;
}
