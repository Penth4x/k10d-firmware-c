/* @k10d FUN_000d42d6 @ 0x000d42d6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000d42d6(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    bVar1 = DAT_0003c565;
    if (DAT_0003c565 == 0) {
      bVar1 = DAT_0003c576;
    }
    uVar3 = bVar1 - 0x4c;
    if (((int)uVar3 < 0) || ((DAT_0003f4ba != 0 && (uVar3 < DAT_0003f4ba)))) {
      uVar3 = 0;
    }
    else if (DAT_0003f4bb < uVar3) {
      uVar3 = (uint)_DAT_0003f4b8;
    }
    else {
      uVar3 = (param_1 * uVar3 >> 3) - (uint)DAT_0003f4bc >> 2;
    }
    iVar2 = -uVar3;
  }
  return iVar2;
}
