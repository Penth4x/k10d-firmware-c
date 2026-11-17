/* @k10d compute_indexed_status_word @ 0x000d01d8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a 16-bit word from an index and table lookups, storing it in a per-index
 *   array.
 * summary:
 *   The function takes an index (param_1) and determines a base value and a count based on
 *   whether the index is less than 4, less than 7, or greater. It iterates through a table
 *   of bytes, comparing them against a target value stored in DAT_0003cf0c/d. It tracks the
 *   minimum value found in a secondary table and updates a global state array. Finally, it
 *   combines the base value with a bit derived from a global counter and the minimum value
 *   to form a 16-bit word, which is stored at 0x3cfb0 + index*2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_indexed_status_word(int param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint16_t uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort uStack_1a;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  
  if (param_1 < 4) {
    uStack_1a = (ushort)((param_1 + 1U & 3) << 4) | 0xf843;
    iStack_10 = 3;
    bVar2 = DAT_0003cf0c;
  }
  else {
    uStack_1a = 0xf84b;
    bVar2 = DAT_0003cf0d;
    if (param_1 < 7) {
      iStack_10 = 2;
    }
    else {
      iStack_10 = 1;
    }
  }
  uStack_14 = (uint)bVar2;
  uVar3 = 0xffff;
  uStack_18 = 0;
  if ((param_1 != 3) && (param_1 != 7)) {
    DAT_0003cfc4 = *(uint8_t *)(param_1 + 0x3f288);
    iVar8 = 0;
    DAT_0003cfc5 = DAT_0003cfc4;
    DAT_0003cfc6 = DAT_0003cfc4;
    if (iStack_10 != 0) {
      iVar9 = 0;
      iVar6 = -1;
      do {
        iVar4 = iVar8 + param_1 * 3;
        uVar7 = (uint)(byte)(&DAT_000fb048)[iVar4];
        bVar2 = (&DAT_0003cf10)[uVar7];
        uVar5 = _DAT_0003f218;
        if ((bVar2 & 0x3f) == 0) {
          uVar5 = *(uint16_t *)(uVar7 * 2 + 0x3f210);
        }
        if (uVar7 == uStack_14) {
          uStack_18 = bVar2 & 0xf;
          _DAT_0003cfaa = uVar5;
          break;
        }
        if ((((bVar2 & 0x80) != 0) && (uVar1 = *(ushort *)(uVar7 * 2 + 0x3cf30), uVar1 < uVar3)) &&
           (uStack_18 = bVar2 & 0xf, uVar3 = uVar1, (_DAT_0003cf0a & 0x70) != 0x70)) {
          _DAT_0003cfaa = uVar5;
        }
        if (((_DAT_0003cf0a & 0x70) == 0x70) &&
           (*(uint16_t *)(&DAT_0003cfaa + iVar9) = uVar5, iVar8 != 0)) {
          (&DAT_0003cfc4)[iVar8] =
               (&DAT_0003cfc4)[iVar6] -
               (&DAT_0003f274)[(byte)(&DAT_000fb348)[(byte)(&DAT_000fb047)[iVar4]]];
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 2;
      } while (iVar8 < iStack_10);
    }
  }
  if ((DAT_0003f285 & 0xf) <= uStack_18) {
    uStack_18 = (DAT_0003f285 & 0xf) - 1;
  }
  *(ushort *)(param_1 * 2 + 0x3cfb0) =
       uStack_1a | (ushort)(((*(byte *)(param_1 + 0x3f2b0) & 0xf) >> (uStack_18 & 0xf)) << 7);
  return;
}
