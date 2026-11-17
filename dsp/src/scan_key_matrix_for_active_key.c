/* @k10d scan_key_matrix_for_active_key @ 0x000d0358
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Scans a 20-entry key matrix table and returns a code for the first active key found.
 * summary:
 *   The function iterates through 20 entries (0x14) in a table at 0x3cf10, checking bit 7
 *   of each entry. For active entries, it reads a byte from 0x3cb81 and calls
 *   check_mode_transition_allowed with the low bit of that byte and the index. It compares
 *   the result against a threshold from a table at 0x3cf30. If a valid key is found, it
 *   updates DAT_0003cbd2, sets bit 6 in DAT_0003ce01, clears bit 0 in DAT_0003cb80, and
 *   returns either 1 or 11 based on bit 1 of DAT_0003ce06. The initial guard checks
 *   specific bits in DAT_0003ce00 and DAT_0003ce01 to ensure the scan is enabled and not
 *   already in progress.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char scan_key_matrix_for_active_key(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  
  cVar4 = '\0';
  if ((((DAT_0003ce00 & 0x20) == 0) && ((DAT_0003ce01 & 0x80) != 0)) && ((DAT_0003ce01 & 0x40) == 0)
     ) {
    cVar7 = '\x03';
    iVar5 = 0;
    iVar6 = 0;
    do {
      bVar2 = DAT_0003f2dc;
      if (((&DAT_0003cf10)[iVar5] & 0x80) != 0) {
        bVar1 = *(byte *)(iVar5 + 0x3cb81);
        uVar3 = bVar1 & 1;
        if (((DAT_0003f286 & 0x80) == 0) || ((DAT_0003c588 & 8) == 0)) {
          cVar7 = '\x01';
          if ((bVar1 & 1) == 0) {
            bVar8 = false;
            if ((iVar5 != 0x10) && (iVar5 != 9)) {
              bVar8 = true;
            }
            if (!bVar8) {
              uVar3 = 0xffffffff;
            }
          }
        }
        bVar1 = DAT_0003f48c;
        if ((DAT_0003ce09 & 1) == 0) {
          cVar7 = -0x10;
          uVar3 = check_mode_transition_allowed(*(byte *)(iVar5 + 0x3cb81) & 1,iVar5);
          bVar1 = bVar2;
        }
        if (0 < (int)uVar3) {
          cVar4 = '\0';
          break;
        }
        if ((uVar3 == 0) && ((uint)bVar1 <= (uint)((int)(uint)*(ushort *)(iVar6 + 0x3cf30) >> 7))) {
          cVar4 = cVar7;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 2;
    } while (iVar5 < 0x14);
    DAT_0003cbd2 = cVar4 << 4 | DAT_0003cbd2 & 0xf;
    bVar8 = cVar4 != '\0';
    cVar4 = '\0';
    if (bVar8) {
      DAT_0003ce01 = DAT_0003ce01 | 0x40;
      DAT_0003cb80 = DAT_0003cb80 & 0xfe;
      if ((DAT_0003ce06 & 2) == 0) {
        cVar4 = '\x01';
      }
      else {
        cVar4 = '\v';
      }
    }
  }
  return cVar4;
}
