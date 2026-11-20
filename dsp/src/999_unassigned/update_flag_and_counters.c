/* @k10d update_flag_and_counters @ 0x000dcfde
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets bits 4 and 5 in a status word based on paired bit conditions and threshold
 *   comparisons.
 * summary:
 *   The function checks if specific pairs of bits (0,1 and 2,3) are set in DAT_0003c805 and
 *   sets bit 4 (0x10) if so. It then compares values in DAT_0003f36e against differences of
 *   other globals, incrementing counters (DAT_0003c88a-d) and setting bit 5 (0x20) if the
 *   counter exceeds DAT_0003f36f. Finally, it updates two global pointers/values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_flag_and_counters(void)

{
  if (((DAT_0003c805 & 1) != 0) && ((DAT_0003c805 & 2) != 0)) {
    DAT_0003c805 = DAT_0003c805 | 0x10;
  }
  if (((DAT_0003c805 & 4) != 0) && ((DAT_0003c805 & 8) != 0)) {
    DAT_0003c805 = DAT_0003c805 | 0x10;
  }
  if (((short)(ushort)DAT_0003f36e < (short)(_DAT_0003c814 - _DAT_0003c890)) &&
     (DAT_0003c88b = DAT_0003c88b + 1, DAT_0003f36f < DAT_0003c88b)) {
    DAT_0003c805 = DAT_0003c805 | 0x20;
  }
  if (((short)(_DAT_0003c814 - _DAT_0003c890) < (short)-(ushort)DAT_0003f36e) &&
     (DAT_0003c88a = DAT_0003c88a + 1, DAT_0003f36f < DAT_0003c88a)) {
    DAT_0003c805 = DAT_0003c805 | 0x20;
  }
  if (((short)(ushort)DAT_0003f36e < (short)(_DAT_0003c816 - _DAT_0003c892)) &&
     (DAT_0003c88d = DAT_0003c88d + 1, DAT_0003f36f < DAT_0003c88d)) {
    DAT_0003c805 = DAT_0003c805 | 0x20;
  }
  if (((short)(_DAT_0003c816 - _DAT_0003c892) < (short)-(ushort)DAT_0003f36e) &&
     (DAT_0003c88c = DAT_0003c88c + 1, DAT_0003f36f < DAT_0003c88c)) {
    DAT_0003c805 = DAT_0003c805 | 0x20;
  }
  _DAT_0003c890 = _DAT_0003c814;
  _DAT_0003c892 = _DAT_0003c816;
  return;
}
