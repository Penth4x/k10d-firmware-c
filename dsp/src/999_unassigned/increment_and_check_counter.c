/* @k10d increment_and_check_counter @ 0x000ecb52
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Increments a global counter and clears a flag bit when the counter reaches a target
 *   value.
 * summary:
 *   The function increments the global variable _DAT_0003c1fc. If the counter is below
 *   DAT_0003f3df and DAT_0003c1ff is greater than 1, it decrements DAT_0003c1ff and updates
 *   DAT_00000144 and DAT_00000142. When the counter equals DAT_0003f3df, it clears bit 3 of
 *   DAT_00000425 and calls clear_bit2_of_dat_00000005. The specific roles of these globals
 *   and the callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void increment_and_check_counter(void)

{
  _DAT_0003c1fc = _DAT_0003c1fc + 1;
  if ((_DAT_0003c1fc < DAT_0003f3df) && (1 < DAT_0003c1ff)) {
    DAT_00000144 = DAT_0003c1ff - 1;
    DAT_00000142 = DAT_0003f3de;
    DAT_0003c1ff = DAT_00000144;
  }
  if (_DAT_0003c1fc == DAT_0003f3df) {
    DAT_00000425 = DAT_00000425 & 0xf7;
    clear_bit2_of_dat_00000005();
  }
  return;
}
