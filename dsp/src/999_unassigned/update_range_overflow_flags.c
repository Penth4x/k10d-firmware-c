/* @k10d update_range_overflow_flags @ 0x000dd0c6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets bits 0x40 and 0x80 in a status word if input values exceed signed bounds, and
 *   toggles a related flag based on those results.
 * summary:
 *   The function compares two signed values (_DAT_0003f36a) against upper and lower bounds
 *   (_DAT_0003c820, _DAT_0003c824). If the value is outside the range, it sets bit 0x40 or
 *   0x80 in DAT_0003c80f. It then checks bit 0x10 of DAT_0003f362; if set, it sets or
 *   clears bit 0x40 of DAT_0003c805 depending on whether the overflow flags were triggered.
 *   No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_range_overflow_flags(void)

{
  if (_DAT_0003f36a < _DAT_0003c820) {
    DAT_0003c80f = DAT_0003c80f | 0x40;
  }
  if (_DAT_0003c820 < -(int)_DAT_0003f36a) {
    DAT_0003c80f = DAT_0003c80f | 0x40;
  }
  if (_DAT_0003f36a < _DAT_0003c824) {
    DAT_0003c80f = DAT_0003c80f | 0x80;
  }
  if (_DAT_0003c824 < -(int)_DAT_0003f36a) {
    DAT_0003c80f = DAT_0003c80f | 0x80;
  }
  if ((DAT_0003f362 & 0x10) != 0) {
    if (((DAT_0003c80f & 0x40) == 0) && ((DAT_0003c80f & 0x80) == 0)) {
      DAT_0003c805 = DAT_0003c805 | 0x40;
    }
    else {
      DAT_0003c805 = DAT_0003c805 & 0xbf;
    }
  }
  return;
}
