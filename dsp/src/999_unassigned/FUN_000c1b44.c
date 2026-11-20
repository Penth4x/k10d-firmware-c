/* @k10d FUN_000c1b44 @ 0x000c1b44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000c1b44(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (0x2f < param_1) {
    param_1 = 0x30;
  }
  iVar10 = (int)_DAT_0003c592;
  uVar8 = _DAT_0003c592 * 8;
  cVar1 = (&DAT_000f9eb6)[param_1];
  cVar2 = (&DAT_000f9f18)[param_1];
  cVar3 = (&DAT_000f9f49)[param_1];
  uVar7 = (uint)*(ushort *)(param_1 * 2 + 0xf9df2);
  uVar4 = (uint)*(ushort *)(param_1 * 2 + 0xf9e54);
  if (uVar4 == uVar7) {
    uVar4 = uVar4 + 4 >> 3;
  }
  else {
    uVar9 = uVar7;
    if (((int)uVar7 <= (int)uVar8) &&
       (uVar9 = uVar8, (int)uVar4 <= (int)uVar8 && uVar8 - uVar4 != 0)) {
      uVar9 = uVar4;
    }
    iVar5 = divide_two_integers(((int)(char)(&DAT_000f9ee7)[param_1] - (int)cVar1) * (uVar9 - uVar7),
                         uVar4 - uVar7);
    iVar6 = divide_two_integers(((int)cVar3 - (int)cVar2) * (uVar9 - uVar7),uVar4 - uVar7);
    uVar4 = clamp_offset_with_alignment(iVar10,cVar1 + iVar5,cVar2 + iVar6);
  }
  return uVar4;
}
