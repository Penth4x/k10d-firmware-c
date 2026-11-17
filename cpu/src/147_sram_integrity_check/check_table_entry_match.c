/* @k10d check_table_entry_match @ 0x1046861c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Checks if a table entry at param_2 matches a value in param_1 and calls a handler if
 *   so.
 * summary:
 *   The function indexes into a table of pointers (DAT_105a8008) using param_2 to find a
 *   base address in SDRAM (DAT_800042c0). It compares the first word of that entry against
 *   a field at offset 0x254 in param_1. If they match, it iterates through three subsequent
 *   words, checking for a specific pattern (0x5aa5a55b). If the pattern is valid, it calls
 *   check_array_sum_is_zero with the original arguments; otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_table_entry_match(void *param_1,int param_2)

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
    uVar4 = check_array_sum_is_zero(param_1,param_2);
  }
  return uVar4;
}
