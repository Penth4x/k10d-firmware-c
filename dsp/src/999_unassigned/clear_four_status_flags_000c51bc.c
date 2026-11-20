/* @k10d clear_four_status_flags_000c51bc @ 0x000c51bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets one global to 0xff and clears specific bits in three other global variables.
 * summary:
 *   The function performs four simple memory writes to global variables in the 0x0003cxxx
 *   range. It sets DAT_0003c493 to 0xff, then clears bit 4 of DAT_0003c4de, bit 7 of
 *   DAT_0003c588, and bits 5-6 of DAT_0003c181. No callees are invoked, and the specific
 *   roles of these globals are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_four_status_flags_000c51bc(void)

{
  DAT_0003c493 = 0xff;
  DAT_0003c4de = DAT_0003c4de & 0xef;
  DAT_0003c588 = DAT_0003c588 & 0x9f;
  DAT_0003c181 = DAT_0003c181 & 0x3f;
  return;
}
