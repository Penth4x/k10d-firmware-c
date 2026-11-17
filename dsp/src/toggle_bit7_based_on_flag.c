/* @k10d toggle_bit7_based_on_flag @ 0x000e9f88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets or clears bit 7 of DAT_0003c018 based on whether DAT_0003f3f0 equals 0xffffa55a.
 * summary:
 *   The function checks if the global _DAT_0003f3f0 is equal to -0x5aa6 (0xffffa55a). If it
 *   is, bit 7 of DAT_0003c018 is cleared; otherwise, bit 7 is set. It returns true if the
 *   condition was met (i.e., bit 7 was cleared). No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool toggle_bit7_based_on_flag(void)

{
  if (_DAT_0003f3f0 != -0x5aa6) {
    DAT_0003c018 = DAT_0003c018 | 0x80;
  }
  else {
    DAT_0003c018 = DAT_0003c018 & 0x7f;
  }
  return _DAT_0003f3f0 == -0x5aa6;
}
