/* @k10d compute_offset_from_flag_bits @ 0x000c41f4
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes a value from bit fields of two globals and a lookup table, storing the result
 *   in a global.
 * summary:
 *   The function reads DAT_0003c191 and DAT_0003c192. It extracts bits 2-4 and 0-1 from
 *   DAT_0003c191 to index a table at 0x000f9ba0 and perform arithmetic to produce a base
 *   value. If bit 7 of DAT_0003c191 is set and bits 5-6 of DAT_0003c192 are clear, it adds
 *   a similar value derived from DAT_0003c192. The final result is stored in DAT_0003c567.
 *   The specific role of these globals is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_offset_from_flag_bits(void)

{
  DAT_0003c567 = ' ' - ((DAT_0003c191 & 0x1c) * '\x02' + (&DAT_000f9ba0)[DAT_0003c191 & 3]);
  if (((DAT_0003c191 & 0x80) != 0) && ((DAT_0003c192 & 0x60) == 0)) {
    DAT_0003c567 = DAT_0003c567 +
                   (' ' - ((DAT_0003c192 & 0x1c) * '\x02' + (&DAT_000f9ba0)[DAT_0003c192 & 3]));
  }
  return;
}
