/* @k10d fwupdate_check_wordsum_1046869c @ 0x1046869c
 * name: verified (structural evidence: passes if the word via 0x105a8028[section] is 0xFFFFFFFF; else 32-bit word sum over the range via 0x105a8030/0x105a8038[section] must be 0)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Word-sum check of one update-image section: the 32-bit sum over the section must be
 *   0. Skipped (passes) when the section's compensation word is 0xFFFFFFFF.
 * summary:
 *   VERIFIED: passes if the word via 0x105a8028[section] is 0xFFFFFFFF; else 32-bit word sum
 *   over the range via 0x105a8030/0x105a8038[section] must be 0
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t fwupdate_check_wordsum_1046869c(void *param_1,int param_2)

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
