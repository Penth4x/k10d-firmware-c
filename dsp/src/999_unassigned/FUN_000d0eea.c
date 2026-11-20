/* @k10d FUN_000d0eea @ 0x000d0eea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000d0eea(void)

{
  int iVar1;
  uint uVar2;
  
  DAT_0003ce67 = '\0';
  if ((DAT_0003ce62 & 4) != 0) {
    DAT_0003ce62 = DAT_0003ce62 & 0xfb;
    if ((DAT_0003c198 & 2) == 0) {
      iVar1 = ((uint)DAT_0003f50b - (uint)DAT_0003c19a) + -1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      uVar2 = unsigned_divide(iVar1,5);
      if (((DAT_0003f4b2 & 0xf) != 0) && (uVar2 < DAT_0003f4b2 >> 4)) {
        iVar1 = unsigned_divide(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = (iVar1 + 1) * (uint)DAT_0003f4b3;
        if (uVar2 < DAT_0003f2dd + 8) {
          DAT_0003ce67 = (char)uVar2;
        }
      }
      if (DAT_0003ce67 == '\0') {
        DAT_0003ce01 = DAT_0003ce01 & 0x7f;
      }
    }
    if (((DAT_0003c036 & 1) == 0) && ((DAT_0003c198 & 1) == 0)) {
      set_bit1_of_dat_0003ce62(0);
    }
  }
  DAT_0003ce62 = DAT_0003ce62 & 0xfe;
  return;
}
