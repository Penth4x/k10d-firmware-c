/* @k10d copy_three_words_if_flag_clear @ 0x000dcca0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies three 16-bit values from DAT_0003c814 into DAT_0003f558 when bit 4 of
 *   DAT_0003f55e is clear.
 * summary:
 *   Checks bit 4 (0x10) of the global DAT_0003f55e. If that bit is not set, it copies three
 *   consecutive 16-bit words from DAT_0003c814, DAT_0003c816, and DAT_0003c818 into
 *   DAT_0003f558, DAT_0003f55a, and DAT_0003f55c respectively. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_three_words_if_flag_clear(void)

{
  if ((DAT_0003f55e & 0x10) == 0) {
    _DAT_0003f558 = _DAT_0003c814;
    _DAT_0003f55a = _DAT_0003c816;
    _DAT_0003f55c = _DAT_0003c818;
  }
  return;
}
