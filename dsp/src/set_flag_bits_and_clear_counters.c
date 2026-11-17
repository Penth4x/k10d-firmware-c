/* @k10d set_flag_bits_and_clear_counters @ 0x000daea2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 0x67 in two flag words and zeroes two adjacent data words.
 * summary:
 *   The function performs four simple memory operations: it ORs 0x67 into bRam00000000 and
 *   DAT_00000400, then writes 0 to DAT_00000062 and DAT_00000420. No callees are invoked.
 *   The specific meaning of these globals is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bits_and_clear_counters(void)

{
  bRam00000000 = bRam00000000 | 0x67;
  DAT_00000400 = DAT_00000400 | 0x67;
  DAT_00000062 = 0;
  DAT_00000420 = 0;
  return;
}
