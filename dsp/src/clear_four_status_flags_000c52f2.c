/* @k10d clear_four_status_flags_000c52f2 @ 0x000c52f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets one byte to 0xff and clears specific bits in three other global bytes.
 * summary:
 *   The function writes 0xff to DAT_0003c493 and performs bitwise AND operations on
 *   DAT_0003c4de (mask 0xef), DAT_0003c588 (mask 0x9f), and DAT_0003c181 (mask 0x3f). It
 *   has no callees and only modifies these four global variables. The specific roles of
 *   these globals are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_four_status_flags_000c52f2(void)

{
  DAT_0003c493 = 0xff;
  DAT_0003c4de = DAT_0003c4de & 0xef;
  DAT_0003c588 = DAT_0003c588 & 0x9f;
  DAT_0003c181 = DAT_0003c181 & 0x3f;
  return;
}
