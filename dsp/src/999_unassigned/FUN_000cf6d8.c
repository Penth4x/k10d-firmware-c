/* @k10d FUN_000cf6d8 @ 0x000cf6d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000cf6d8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = copy_entry_from_indexed_table(param_2);
  if (-1 < param_1) {
    param_1 = -1;
    if ((DAT_0003cf0e & 0xf) == 0) {
      if ((((DAT_0003f287 & 4) != 0) && ((DAT_0003ce09 & 0x80) == 0)) &&
         ((uint)DAT_0003cc6e != uVar1 + 1)) {
        if ((DAT_0003cb80 & 1) == 0) {
          if ((((DAT_0003ce08 & 0x80) != 0) && (uVar1 != 4)) || (DAT_0003ce2f != '\0')) {
            param_1 = 1;
          }
        }
        else if (((*(byte *)(uVar1 + 0x3cbb8) & 0x20) != 0) || (DAT_0003f48a < _DAT_0003cf2c)) {
          param_1 = 1;
        }
      }
    }
    else if (((DAT_0003f287 & 8) != 0) &&
            (((DAT_0003cf0c != uVar1 && (DAT_0003cf0d != uVar1)) ||
             (((uint)DAT_0003cc6e != uVar1 + 1 &&
              (((DAT_0003cb80 & 1) != 0 || (DAT_0003ce2f != '\0')))))))) {
      param_1 = 1;
    }
  }
  return param_1;
}
