/* @k10d initialize_several_globals @ 0x000d5b8a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets a small group of global variables to fixed initial values.
 * summary:
 *   Writes the constant 2 to DAT_000000c7, 3 to DAT_0003c31a, 0 to DAT_000000c0, and 3 to
 *   DAT_00000423. It also modifies the upper bytes of the 32-bit value at DAT_000000c1 by
 *   setting them to 0x13b203 while preserving the low byte. No callees are invoked and no
 *   MMIO or memory-mapped I/O is performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_several_globals(void)

{
  DAT_000000c7 = 2;
  DAT_0003c31a = 3;
  DAT_000000c0 = 0;
  _DAT_000000c1 = CONCAT13(DAT_000000c1,0x13b203);
  DAT_00000423 = 3;
  return;
}
