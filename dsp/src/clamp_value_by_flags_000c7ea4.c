/* @k10d clamp_value_by_flags_000c7ea4 @ 0x000c7ea4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns param_1 or a global limit value based on several flag and state byte
 *   conditions.
 * summary:
 *   The function checks a series of global bytes (DAT_0003c58b, DAT_0003c492, DAT_0003c493,
 *   DAT_0003c181). If specific flag bits are set and state bytes are not 0x06, 0x0d, or
 *   0x0a, it compares param_1 against DAT_0003c571. Depending on bits 0x40 and 0x80 of
 *   DAT_0003c181, it may return the minimum of param_1 and DAT_0003c571, or return param_1
 *   unchanged. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_by_flags_000c7ea4(uint param_1)

{
  if (((((DAT_0003c58b & 1) != 0) && (DAT_0003c492 != '\x06')) && (DAT_0003c492 != '\r')) &&
     (DAT_0003c493 != '\n')) {
    if (((DAT_0003c181 & 0x40) == 0) && ((DAT_0003c181 & 0x80) == 0)) {
      if (DAT_0003c571 < param_1) {
        param_1 = (uint)DAT_0003c571;
      }
    }
    else if (DAT_0003c571 < param_1) {
      param_1 = (uint)DAT_0003c571;
    }
  }
  return param_1;
}
