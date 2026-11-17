/* @k10d select_entry_by_threshold_000d4884 @ 0x000d4884
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Scans a table of 17 entries to find the best match based on a threshold comparison.
 * summary:
 *   The function iterates through 17 items (indices 0x11 down to 0) in a table starting at
 *   0x3cb80. It checks specific bit flags (bit 0 and bit 3) in each entry's descriptor. For
 *   valid entries, it compares a value from a parallel table at 0x3cc30 against a threshold
 *   derived from param_1. It returns the index of the entry that best satisfies the
 *   condition, or the original param_1 if no better match is found. It also updates a
 *   global variable DAT_0003cc6c based on flags in DAT_0003ce05/06.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int select_entry_by_threshold_000d4884(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  
  DAT_0003cc6c = 0;
  iVar2 = param_1;
  if (((DAT_0003ce06 & 0x20) != 0) || ((DAT_0003ce05 & 1) != 0)) {
    if ((ushort)((ushort)DAT_0003ce12 + (ushort)DAT_0003ce13) < *(ushort *)(param_1 * 2 + 0x3cc32))
    {
      iVar1 = DAT_0003cc6f - 1;
      iVar4 = 0x11;
      iVar5 = 0x22;
      do {
        iVar3 = iVar4 + -1;
        if ((((&DAT_0003cb80)[iVar4] & 1) != 0) && (((&DAT_0003cb80)[iVar4] & 8) != 0)) {
          if ((iVar3 == iVar1) &&
             (iVar2 = iVar1,
             *(ushort *)(iVar1 * 2 + 0x3cc32) <=
             (ushort)((ushort)DAT_0003ce12 + (ushort)DAT_0003ce13))) break;
          if (*(ushort *)(&DAT_0003cc30 + iVar5) < *(ushort *)(param_1 * 2 + 0x3cc32)) {
            param_1 = iVar3;
          }
        }
        iVar2 = param_1;
        iVar4 = iVar3;
        iVar5 = iVar5 + -2;
      } while (iVar3 != 0);
    }
    DAT_0003cc6c = DAT_0003f470;
  }
  return iVar2;
}
