/* @k10d update_short_at_offset_0x3cbf2 @ 0x000d45a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally reads and updates a 16-bit value at offset 0x3cbf2 of the object pointed
 *   to by param_1.
 * summary:
 *   The function checks several global flag bytes (DAT_0003cc90, DAT_0003cb80,
 *   DAT_0003ce07, DAT_0003ce08, DAT_0003f259) to determine if an update should occur. If
 *   conditions are met, it reads a short from param_1 + 0x3cbf2 into _DAT_0003cc82 and
 *   either copies it to _DAT_0003cc80 or computes an average with _DAT_0003cc80. Under
 *   specific sign-mismatch conditions, it writes the computed average back to param_1 +
 *   0x3cbf2. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_short_at_offset_0x3cbf2(int param_1)

{
  if ((DAT_0003cc90 == '\0') && (((DAT_0003cb80 & 8) == 0 || ((DAT_0003ce07 & 8) != 0)))) {
    param_1 = param_1 * 2;
    _DAT_0003cc82 = *(ushort *)(param_1 + 0x3cbf2);
    if (((DAT_0003ce07 & 8) == 0) || ((DAT_0003ce08 & 0x40) != 0)) {
      _DAT_0003cc80 = *(ushort *)(param_1 + 0x3cbf2);
    }
    else {
      _DAT_0003cc84 = (short)((int)(short)_DAT_0003cc80 + (int)(short)_DAT_0003cc82 >> 1);
      if ((((DAT_0003f259 & 8) != 0) && (_DAT_0003cc84 < 1)) &&
         ((short)(_DAT_0003cc80 ^ _DAT_0003cc82) < 0)) {
        *(short *)(param_1 + 0x3cbf2) = _DAT_0003cc84;
      }
    }
  }
  return;
}
