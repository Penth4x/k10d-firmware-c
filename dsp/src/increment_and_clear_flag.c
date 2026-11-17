/* @k10d increment_and_clear_flag @ 0x000efccc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Increments a counter and, upon reaching 0x19, clears bit 2 of a global and calls a
 *   helper.
 * summary:
 *   The function increments the global _DAT_0003c1fc. If the counter is below 0x19 and
 *   DAT_0003c1ff is greater than 1, it decrements DAT_0003c1ff and updates DAT_00000144 and
 *   DAT_00000142. When the counter equals 0x19, it clears bit 2 of DAT_00000425 and calls
 *   clear_bit2_of_dat_00000005. The specific roles of the globals and the callee are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void increment_and_clear_flag(void)

{
  _DAT_0003c1fc = _DAT_0003c1fc + 1;
  if ((_DAT_0003c1fc < 0x19) && (1 < DAT_0003c1ff)) {
    DAT_00000144 = DAT_0003c1ff - 1;
    DAT_00000142 = DAT_0003f3de;
    DAT_0003c1ff = DAT_00000144;
  }
  if (_DAT_0003c1fc == 0x19) {
    DAT_00000425 = DAT_00000425 & 0xf7;
    clear_bit2_of_dat_00000005();
  }
  return;
}
