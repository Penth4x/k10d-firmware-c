/* @k10d FUN_000d1cb8 @ 0x000d1cb8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000d1cb8(uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar1 = _DAT_0000005a;
  if ((DAT_0003c128 & 0x40) != 0) {
    iVar1 = FUN_000f7078();
  }
  uVar2 = compute_clamped_delta_value(param_1,_DAT_0003ce18);
  iVar3 = FUN_000d1cf8((uint)_DAT_0003ce18,param_1,uVar2);
  return iVar3 - ((uint)_DAT_0003ce1c - iVar1);
}
