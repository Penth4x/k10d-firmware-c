/* @k10d fill_bayer_pattern_region @ 0x1048cef2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 188_memory_pattern_writer (unit names are model-proposed)
 * purpose:
 *   Writes a 3-byte Bayer pattern and a 0xee fill byte into a memory region defined by a
 *   descriptor struct.
 * summary:
 *   The function interprets param_1 as a descriptor containing width (0x14), height (0x16),
 *   and offset (0x4) fields. It calculates row pointers and writes three specific bytes
 *   (from DAT_105984dc) across the first half of the width, and a 0xee byte across the
 *   second half if a flag at 0x18 is set. This behavior is consistent with initializing a
 *   Bayer sensor buffer or test pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_bayer_pattern_region(int param_1,int param_2,int param_3,int param_4,ushort param_5)

{
  int iVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  int iVar5;
  uint uVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint8_t *puVar12;
  int iVar13;
  uint8_t *puVar14;
  uint8_t *puVar15;
  
  iVar11 = *(int *)(param_1 + 8);
  if ((iVar11 == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    iVar11 = (uint)*(ushort *)(param_1 + 0x14) * (uint)*(ushort *)(param_1 + 0x16) +
             *(int *)(param_1 + 4);
    iVar13 = ((int)(uint)*(ushort *)(param_1 + 0x14) >> 1) *
             ((int)(uint)*(ushort *)(param_1 + 0x16) >> 1);
    iVar10 = iVar11 + iVar13;
    iVar13 = iVar13 + iVar10;
  }
  else {
    iVar10 = *(int *)(param_1 + 0xc);
    iVar13 = *(int *)(param_1 + 0x10);
  }
  puVar8 = (uint8_t *)
           (param_3 * (uint)*(ushort *)(param_1 + 0x14) + *(int *)(param_1 + 4) + param_2);
  iVar9 = (int)(uint)*(ushort *)(param_1 + 0x14) >> 1;
  iVar1 = (param_3 >> 1) * iVar9;
  iVar5 = param_2 >> 1;
  puVar15 = (uint8_t *)(iVar11 + iVar1 + iVar5);
  puVar14 = (uint8_t *)(iVar1 + iVar10 + iVar5);
  puVar12 = (uint8_t *)(param_3 * iVar9 + iVar13 + iVar5);
  iVar11 = (uint)*(ushort *)(param_1 + 0x24) * 3;
  uVar2 = (DAT_105984dc/*ROM*/)[iVar11];
  uVar3 = (&DAT_105984de/*ROM*/)[iVar11];
  uVar4 = (&DAT_105984dd/*ROM*/)[iVar11];
  uVar6 = (uint)param_5;
  iVar11 = 0;
  if (uVar6 != 0) {
    do {
      iVar13 = 0;
      puVar7 = puVar8;
      if (0 < param_4) {
        do {
          *puVar7 = uVar2;
          iVar13 = iVar13 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar13 < param_4);
      }
      puVar8 = puVar8 + *(ushort *)(param_1 + 0x14);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)param_5);
  }
  iVar11 = 0;
  iVar13 = param_4 >> 1;
  if ((int)uVar6 >> 1 != 0) {
    do {
      iVar10 = 0;
      puVar8 = puVar15;
      puVar7 = puVar14;
      if (0 < iVar13) {
        do {
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          *puVar7 = uVar4;
          iVar10 = iVar10 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar10 < iVar13);
      }
      iVar11 = iVar11 + 1;
      iVar10 = (int)(uint)*(ushort *)(param_1 + 0x14) >> 1;
      puVar15 = puVar15 + iVar10;
      puVar14 = puVar14 + iVar10;
    } while (iVar11 < (int)uVar6 >> 1);
  }
  if ((*(char *)(param_1 + 0x18) != '\0') && (iVar11 = 0, uVar6 != 0)) {
    do {
      iVar10 = 0;
      puVar14 = puVar12;
      if (0 < iVar13) {
        do {
          *puVar14 = 0xee;
          iVar10 = iVar10 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar10 < iVar13);
      }
      puVar12 = puVar12 + ((int)(uint)*(ushort *)(param_1 + 0x14) >> 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar6);
  }
  return;
}
