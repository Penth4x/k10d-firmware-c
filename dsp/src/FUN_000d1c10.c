/* @k10d FUN_000d1c10 @ 0x000d1c10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000d1c10(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  _DAT_0003ce38 = 0;
  iVar1 = check_two_flag_bits_000ce7a6();
  if (iVar1 == 0) {
    iVar1 = compute_offset_with_flag();
    _DAT_0003ce38 = (uint16_t)iVar1;
    if (param_2 < 0) {
      param_2 = param_2 + (uint)_DAT_0003ce18 + iVar1;
    }
    else {
      param_2 = (param_2 + (uint)_DAT_0003ce18) * 2 + iVar1;
    }
    if (((DAT_0003ce05 & 2) == 0) &&
       (DAT_0003ce05 = DAT_0003ce05 | 0x20, (DAT_0003f281 & 0x20) != 0)) {
      DAT_0003ce13 = 0x33;
    }
    uVar2 = compute_clamped_delta_value(param_1,param_2);
    uVar2 = FUN_000d1cf8(iVar1,param_1,uVar2);
    if ((DAT_0003c102 & 7) == 3) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
