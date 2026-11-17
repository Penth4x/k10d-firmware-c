/* @k10d initialize_unknown_state_flags @ 0x000e0e08
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a fixed set of small integer constants to several low-address global variables.
 * summary:
 *   The function unconditionally sets DAT_00000063, DAT_00000062, DAT_00000060,
 *   DAT_00000420, and DAT_00000067 to specific values. It conditionally sets _DAT_00000064
 *   to either 0x1f or 3 based on the lower two bits of DAT_00000484. No memory-mapped I/O,
 *   function calls, or complex logic are present, suggesting a simple state or
 *   configuration initialization routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_unknown_state_flags(void)

{
  DAT_00000063 = 0xb2;
  DAT_00000062 = 0x13;
  DAT_00000060 = 4;
  if ((DAT_00000484 & 3) == 2) {
    _DAT_00000064 = 0x1f;
  }
  else {
    _DAT_00000064 = 3;
  }
  DAT_00000420 = 6;
  DAT_00000067 = 2;
  return;
}
