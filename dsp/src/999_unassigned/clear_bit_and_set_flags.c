/* @k10d clear_bit_and_set_flags @ 0x000ea2a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 2 of DAT_00000002, sets bit 0 of DAT_00000400, clears bit 1 of DAT_0000040a,
 *   and copies DAT_0003c274 to DAT_00000420.
 * summary:
 *   The function performs four simple memory operations: it clears bit 2 of the global at
 *   DAT_00000002, sets bit 0 of DAT_00000400, clears bit 1 of DAT_0000040a, and assigns the
 *   value of DAT_0003c274 to DAT_00000420. No callees are invoked. The roles of these
 *   specific global variables are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_bit_and_set_flags(void)

{
  DAT_00000002 = DAT_00000002 & 0xfb;
  DAT_00000420 = DAT_0003c274;
  DAT_00000400 = DAT_00000400 | 1;
  DAT_0000040a = DAT_0000040a & 0xfe;
  return;
}
