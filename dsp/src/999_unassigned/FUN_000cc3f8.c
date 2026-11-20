/* @k10d FUN_000cc3f8 @ 0x000cc3f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000cc3f8(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((DAT_0003c128 & 0x40) == 0) {
    if ((_DAT_0000005a < DAT_0003ce20) || ((DAT_0003ce01 & 0x10) != 0)) {
      if ((DAT_0003ce03 & 4) == 0) {
        iVar1 = update_state_counters();
        if (iVar1 == 0) {
          if ((DAT_0003ce01 & 0x10) != 0) {
            return 7;
          }
          FUN_000cc5a8();
        }
        FUN_000cc938();
      }
      if ((((DAT_0003ce06 & 4) == 0) || ((DAT_0003f280 & 0x10) == 0)) ||
         (_DAT_0000005a < DAT_0003f2d0)) {
        uVar2 = 7;
      }
      else if ((DAT_0003ce03 & 0x80) == 0) {
        uVar2 = 6;
      }
    }
    else if (((DAT_0003ce06 & 4) == 0) && ((DAT_0003ce06 & 8) == 0)) {
      FUN_000cce54();
      uVar2 = 6;
    }
    else if (_DAT_0000005a < (ushort)((ushort)DAT_0003ce20 + (ushort)DAT_0003f47b)) {
      uVar2 = 6;
    }
    else {
      FUN_000cce54();
    }
  }
  else {
    uVar2 = check_status_and_return_code();
  }
  return uVar2;
}
