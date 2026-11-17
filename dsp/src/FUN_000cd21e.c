/* @k10d FUN_000cd21e @ 0x000cd21e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000cd21e(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0x10;
  if ((((DAT_0003cb80 & 8) == 0) || (((DAT_0003cb80 & 8) != 0 && (31999 < _DAT_0003cf2e)))) &&
     (iVar1 = compute_clamped_offset_value_000cd256(), iVar1 != 0)) {
    DAT_0003ce10 = 0;
    uVar2 = 0x12;
  }
  return uVar2;
}
