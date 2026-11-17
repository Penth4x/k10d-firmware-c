/* @k10d count_short_sentinel_values @ 0x000ea2d2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Counts occurrences of -1 or -0x5aa6 in a short array and sets a flag if the count
 *   exceeds 1015.
 * summary:
 *   Iterates param_3 times over the short array at param_2, incrementing a global counter
 *   for each element equal to -1 or -0x5aa6. If the final count is greater than 0x3f7
 *   (1015), it writes 0x10 to DAT_0003f3e8. The function has no callees and only modifies
 *   two global variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void count_short_sentinel_values(uint32_t param_1,short *param_2,uint param_3)

{
  _DAT_0003c1e8 = 0;
  for (; param_3 != 0; param_3 = param_3 - 1 & 0xffff) {
    if ((*param_2 == -1) || (*param_2 == -0x5aa6)) {
      _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
    }
    param_2 = param_2 + 1;
  }
  if (0x3f7 < _DAT_0003c1e8) {
    DAT_0003f3e8 = 0x10;
  }
  return;
}
