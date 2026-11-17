/* @k10d FUN_000ecd00 @ 0x000ecd00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ecd00(void)

{
  byte bVar2;
  uint uVar1;
  
  bVar2 = DAT_0003c564 + 3;
  uVar1 = divide_two_integers((uint)bVar2,8);
  _DAT_0003c1e2 =
       (short)(((uint)(byte)(&DAT_000fc6e8)[bVar2 & 7] << ((&DAT_000fc6ed)[uVar1 & 0xff] & 0xf)) <<
              1);
  if ((DAT_0003c4de & 1) == 0) {
    _DAT_0003c1e0 = *(uint16_t *)(&DAT_000fc704 + ((uVar1 & 0xff) - 3) * 2);
  }
  else {
    _DAT_0003c1e0 = 0;
  }
  _DAT_0003c1e4 = _DAT_0003f3e6 & 0x7fff;
  return;
}
