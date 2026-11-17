/* @k10d FUN_000d10a0 @ 0x000d10a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000d10a0(void)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (((DAT_0003ce62 & 8) != 0) && ((DAT_0003cb80 & 1) == 0)) {
    iVar5 = (int)DAT_0003cd58;
    uVar3 = iVar5 >> 2;
    if ((DAT_0003c102 & 7) != 7) {
      uVar3 = (int)DAT_0003cd57 >> 2;
    }
    if ((DAT_0003c102 & 7) == 3) {
      uVar3 = 0xf;
    }
    uVar4 = (uint)(DAT_0003f4b1 >> 4);
    if ((uVar4 != 0) && ((DAT_0003c101 & 4) != 0)) {
      uVar1 = FUN_000d1156(uVar3,5);
      DAT_0003ce65 = (byte)uVar1;
      uVar2 = FUN_000d1156(uVar3,iVar5 >> 2);
      DAT_0003ce66 = (uint8_t)uVar2;
      if ((((DAT_0003ce65 < uVar4) && ((uVar2 & 0xff) < uVar4)) ||
          ((1 < (int)uVar3 && ((int)uVar3 < 4)))) &&
         (DAT_0003ce01 = DAT_0003ce01 & 0x7f, (DAT_0003f2d9 & 8) != 0)) {
        DAT_0003ce06 = DAT_0003ce06 | 2;
      }
    }
  }
  return;
}
