/* @k10d check_array_sum_is_zero @ 0x1046869c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_array_sum_is_zero(void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint32_t uVar4;
  int iVar5;
  
  iVar5 = param_2 * 4;
  if (*(int *)(*(int *)(&DAT_105a8028/*ROM*/ + iVar5) * 2 + _DAT_800042c0/*SDRAM*/) == -1) {
    uVar4 = 1;
  }
  else {
    uVar3 = 0;
    piVar2 = (int *)(*(int *)(&DAT_105a8030/*ROM*/ + iVar5) * 2 + _DAT_800042c0/*SDRAM*/);
    iVar1 = 0;
    if (*(uint *)(&DAT_105a8038/*ROM*/ + iVar5) != 0) {
      do {
        iVar1 = *piVar2 + iVar1;
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < *(uint *)(&DAT_105a8038/*ROM*/ + iVar5));
    }
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
