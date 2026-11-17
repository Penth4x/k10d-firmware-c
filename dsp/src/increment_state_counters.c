/* @k10d increment_state_counters @ 0x000e7356
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Increments four global counters and conditionally clears two status bits based on
 *   counter values.
 * summary:
 *   The function unconditionally increments four global variables (DAT_0003c199,
 *   DAT_0003c028, _DAT_0003c026, _DAT_0003c024). It also checks if DAT_0003c022 has bit 0
 *   set; if so, it clears bit 5 of DAT_0003c022 and bit 0 of DAT_0003c1eb when DAT_0003c028
 *   equals 0x17, and clears bit 7 of DAT_0003c022 and bit 0 of DAT_0003c1eb when
 *   DAT_0003c028 equals 0x0f. No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void increment_state_counters(void)

{
  if ((DAT_0003c022 & 1) != 0) {
    if (((DAT_0003c022 & 0x20) != 0) && (DAT_0003c028 == '\x17')) {
      DAT_0003c022 = DAT_0003c022 & 0xdf;
      DAT_0003c1eb = DAT_0003c1eb & 0xfe;
    }
    if (((DAT_0003c022 & 0x80) != 0) && (DAT_0003c028 == '\x0f')) {
      DAT_0003c022 = DAT_0003c022 & 0x7f;
      DAT_0003c1eb = DAT_0003c1eb & 0xfe;
    }
  }
  DAT_0003c199 = DAT_0003c199 + '\x01';
  DAT_0003c028 = DAT_0003c028 + '\x01';
  _DAT_0003c026 = _DAT_0003c026 + 1;
  _DAT_0003c024 = _DAT_0003c024 + 1;
  return;
}
