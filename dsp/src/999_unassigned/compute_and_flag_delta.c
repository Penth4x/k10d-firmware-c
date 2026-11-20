/* @k10d compute_and_flag_delta @ 0x000c688c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes the difference between two globals and sets a status flag in a third global
 *   based on the input parameter.
 * summary:
 *   The function first masks the lower 6 bits of DAT_0003c580. It then checks if the
 *   difference between _DAT_0003c562 and DAT_0003c564 is not equal to DAT_0003c565. If they
 *   differ, it sets one of the upper three bits of DAT_0003c580 (0x80, 0x40, or 0xc0)
 *   depending on whether param_1 is 0, 1, or other. Finally, it returns the computed
 *   difference. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_and_flag_delta(int param_1)

{
  DAT_0003c580 = DAT_0003c580 & 0x3f;
  if ((uint)_DAT_0003c562 - (uint)DAT_0003c564 != (uint)DAT_0003c565) {
    if (param_1 == 0) {
      DAT_0003c580 = DAT_0003c580 | 0xc0;
    }
    else if (param_1 == 1) {
      DAT_0003c580 = DAT_0003c580 | 0x40;
    }
    else {
      DAT_0003c580 = DAT_0003c580 | 0x80;
    }
  }
  return ((uint)_DAT_0003c562 - (uint)DAT_0003c564) - (uint)DAT_0003c565;
}
