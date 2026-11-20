/* @k10d FUN_000cc938 @ 0x000cc938
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc938(void)

{
  if ((DAT_0003c128 & 0x40) == 0) {
    DAT_000000d7 = 0x17;
    DAT_000000ee = 0x31;
    if (((DAT_0003ce05 & 1) != 0) && (_DAT_0003ce24 = _DAT_0003ce30, (DAT_0003ce05 & 0x10) != 0)) {
      _DAT_0003ce24 = _DAT_0003ce30 >> 2;
    }
    if ((DAT_0003ce01 & 4) == 0) {
      _DAT_0003ce2a = extract_shifted_nibble();
    }
    update_byte_flags_and_counters(0);
    DAT_000000d0 = DAT_000000d0 & 0xdf;
    DAT_000000d1 = DAT_000000d1 | 0x20;
    DAT_0003ce03 = DAT_0003ce03 | 4;
  }
  return;
}
