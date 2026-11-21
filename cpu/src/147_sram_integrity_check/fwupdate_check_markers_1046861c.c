/* @k10d fwupdate_check_markers_1046861c @ 0x1046861c
 * name: verified (structural evidence: model word via table 0x105a8008[section] must equal obj+0x254; three marker pairs via 0x105a8010 must be model*0x10001 followed by 0xA55A5AA5; then calls the word-sum check)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Integrity check of one loaded update-image section (param_2: 0 = main, 1 = control
 *   CPU): model word, then three (model*0x10001, 0xA55A5AA5) marker pairs, then the
 *   section word-sum (fwupdate_check_wordsum_1046869c).
 * summary:
 *   VERIFIED: model word via table 0x105a8008[section] must equal obj+0x254; three marker
 *   pairs via 0x105a8010 must be model*0x10001 followed by 0xA55A5AA5; then calls the
 *   word-sum check
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t fwupdate_check_markers_1046861c(void *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  int *piVar5;
  
  bVar2 = false;
  if (*(int *)(_DAT_800042c0/*SDRAM*/ + *(int *)(&DAT_105a8008/*ROM*/ + param_2 * 4) * 2) ==
      *(int *)((int)param_1 + 0x254)) {
    bVar2 = true;
    iVar3 = param_2 * 0xc;
    iVar1 = iVar3 + 0xc;
    do {
      piVar5 = (int *)(_DAT_800042c0/*SDRAM*/ + *(int *)(&DAT_105a8010/*ROM*/ + iVar3) * 2);
      if (*piVar5 != *(int *)((int)param_1 + 0x254) * 0x10001) {
        bVar2 = false;
        break;
      }
      if (piVar5[1] != -0x5aa5a55b) {
        bVar2 = false;
        break;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < iVar1);
  }
  uVar4 = 0;
  if (bVar2) {
    uVar4 = fwupdate_check_wordsum_1046869c(param_1,param_2);
  }
  return uVar4;
}
