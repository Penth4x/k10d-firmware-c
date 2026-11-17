/* @k10d count_flag_10_to_25 @ 0x000ea7c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Increments a counter when bit 4 of DAT_0003c1eb is set, and calls
 *   clear_bit_3_of_global_a once the counter reaches 25.
 * summary:
 *   Checks bit 4 (0x10) of the global flag word DAT_0003c1eb. If set, it increments the
 *   byte counter at DAT_0003c202. When the counter wraps to 0x19 (25), it invokes
 *   clear_bit_3_of_global_a and clears bit 4 of DAT_0003c1eb. The function is called from
 *   two other routines, suggesting it is part of a periodic or event-driven state machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void count_flag_10_to_25(void)

{
  if (((DAT_0003c1eb & 0x10) != 0) && (_DAT_0003c202 = _DAT_0003c202 + 1, _DAT_0003c202 == 0x19)) {
    clear_bit_3_of_global_a();
    DAT_0003c1eb = DAT_0003c1eb & 0xef;
  }
  return;
}
