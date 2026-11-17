/* @k10d FUN_000cce54 @ 0x000cce54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cce54(void)

{
  uint uVar1;
  
  if (((DAT_0003f283 & 2) != 0) && ((DAT_0003c101 & 4) != 0)) {
    if ((DAT_0003ce03 & 4) == 0) {
      uVar1 = (uint)DAT_0003f49f;
    }
    else {
      uVar1 = 0;
    }
    if (((((DAT_0003ce02 & 0x10) != 0) &&
         (_DAT_0003ce5a - uVar1 < (uint)_DAT_0003ce5c + ((uint)_DAT_0003ce5e - _DAT_0000005a))) ||
        (((DAT_0003ce02 & 0x20) != 0 &&
         ((int)((uint)_DAT_0003ce5c - ((uint)_DAT_0003ce5e - _DAT_0000005a)) <
          (int)(_DAT_0003ce58 + uVar1))))) && ((DAT_0003ce03 & 4) == 0)) {
      FUN_000cc938();
    }
  }
  return;
}
