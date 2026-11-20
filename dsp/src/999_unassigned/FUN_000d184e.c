/* @k10d FUN_000d184e @ 0x000d184e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d184e(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_0003ce05 & 1) != 0) {
    _DAT_0003ce22 = 0;
    if ((DAT_0003ce05 & 2) == 0) {
      FUN_000cc4cc();
      _DAT_0003ce5e = _DAT_0003ce1c;
      DAT_0003ce05 = DAT_0003ce05 | 0x10;
    }
    else if ((DAT_0003c128 & 0x40) == 0) {
      iVar1 = FUN_000d1cb8(_DAT_0003ce30);
      iVar2 = FUN_000d1c10(_DAT_0003ce30,DAT_0003ce14);
      if (0 < (int)((iVar2 + iVar1) - (uint)_DAT_0003ce2c)) {
        DAT_0003ce05 = DAT_0003ce05 | 0x10;
      }
      call_with_shifted_dat_bit();
    }
    FUN_000cc938();
  }
  return;
}
