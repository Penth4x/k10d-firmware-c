/* @k10d decode_rle_image_rows @ 0x1048e7b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Decodes a run-length encoded (RLE) stream into a 2D buffer using a palette/lookup
 *   table.
 * summary:
 *   The function iterates through rows of a destination buffer defined by param_1 (width,
 *   height, stride). It reads encoded tokens from three separate source streams (pointed to
 *   by offsets in the object returned by search_short_table_for_value). Each token consists
 *   of a value and a length; if the value matches a specific skip code ('i', 0xd4, 0xea),
 *   the destination pointer is advanced without writing, otherwise the value is repeated
 *   for the specified length. This is a standard RLE decompression routine, likely for a
 *   small UI graphic or icon given the byte-level operations and specific skip markers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1048e888) overlaps instruction at (ram,0x1048e886)
    */

void decode_rle_image_rows(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcStack_1c;
  char *pcStack_18;
  int iStack_14;
  
  iVar10 = (uintptr_t)(search_short_table_for_value((int)(param_1)/* B-3: stock r4 = param_1 */));
  uVar4 = (uint)*(ushort *)(iVar10 + 0x14);
  uVar2 = *(ushort *)(iVar10 + 0x16);
  iVar11 = *(int *)(iVar10 + 0x10);
  iVar13 = *(int *)(param_1 + 4);
  if ((iVar13 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iVar13 = (uint)param_1[10] * (uint)param_1[0xb] + *(int *)(param_1 + 2);
    iVar16 = ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1) + iVar13;
  }
  else {
    iVar16 = *(int *)(param_1 + 6);
  }
  pcVar19 = (char *)((uint)param_1[1] * (uint)param_1[10] + *(int *)(param_1 + 2) + (uint)*param_1);
  iVar1 = ((int)(uint)param_1[1] >> 1) * ((int)(uint)param_1[10] >> 1);
  iVar7 = (int)(uint)*param_1 >> 1;
  pcStack_18 = (char *)(iVar13 + iVar1 + iVar7);
  pcStack_1c = (char *)(iVar1 + iVar16 + iVar7);
  pcVar18 = (char *)(*(int *)(iVar10 + 4) +
                    *(int *)(iVar11 + (uint)*(ushort *)(iVar10 + 0x18) * 0xc));
  iVar13 = (uint)*(ushort *)(iVar10 + 0x18) * 3;
  pcVar17 = (char *)(*(int *)(iVar10 + 8) + *(int *)((iVar13 + 1) * 4 + iVar11));
  iStack_14 = 0;
  pcVar15 = (char *)(*(int *)(iVar10 + 0xc) + *(int *)(iVar11 + (iVar13 + 2) * 4));
  if (uVar2 != 0) {
    uVar5 = (int)uVar4 >> 1;
    do {
      uVar14 = 0;
      uVar12 = 0;
      pcVar8 = pcVar19 + param_1[10];
      pcVar9 = pcVar19;
      if (uVar4 != 0) {
        do {
          cVar3 = *pcVar18;
          uVar14 = uVar14 + 1 & 0xffff;
          uVar6 = (uint)(byte)pcVar18[1];
          if (uVar4 < 0x100) {
            pcVar18 = pcVar18 + 2;
            uVar14 = uVar14 + 1;
          }
          else {
            uVar6 = (uint)CONCAT11(pcVar18[1],pcVar18[2]);
            pcVar18 = pcVar18 + 3;
            uVar14 = uVar14 + 2;
          }
          uVar14 = uVar14 & 0xffff;
          if (cVar3 == 'i') {
            pcVar9 = pcVar9 + uVar6;
            pcVar8 = pcVar8 + uVar6;
          }
          else {
            iVar10 = 0;
            if (uVar6 != 0) {
              do {
                *pcVar9 = cVar3;
                *pcVar8 = cVar3;
                pcVar8 = pcVar8 + 1;
                iVar10 = iVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (iVar10 < (int)uVar6);
            }
          }
          uVar12 = uVar12 + uVar6 & 0xffff;
        } while (uVar12 < uVar4);
      }
      pcVar18 = pcVar18 + uVar14;
      pcVar19 = pcVar19 + (uint)param_1[10] * 2;
      uVar12 = 0;
      pcVar9 = pcStack_18;
      if (uVar5 != 0) {
        do {
          cVar3 = *pcVar17;
          uVar14 = (uint)(byte)pcVar17[1];
          if (uVar5 < 0x100) {
            pcVar17 = pcVar17 + 2;
          }
          else {
            uVar14 = (uint)CONCAT11(pcVar17[1],pcVar17[2]);
            pcVar17 = pcVar17 + 3;
          }
          if (cVar3 == -0x2c) {
            pcVar9 = pcVar9 + uVar14;
          }
          else {
            iVar10 = 0;
            if (uVar14 != 0) {
              do {
                *pcVar9 = cVar3;
                iVar10 = iVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (iVar10 < (int)uVar14);
            }
          }
          uVar12 = uVar12 + uVar14 & 0xffff;
        } while (uVar12 < uVar5);
      }
      pcStack_18 = pcStack_18 + ((int)(uint)param_1[10] >> 1);
      uVar12 = 0;
      pcVar9 = pcStack_1c;
      if (uVar5 != 0) {
        do {
          cVar3 = *pcVar15;
          uVar14 = (uint)(byte)pcVar15[1];
          if (uVar5 < 0x100) {
            pcVar15 = pcVar15 + 2;
          }
          else {
            uVar14 = (uint)CONCAT11(pcVar15[1],pcVar15[2]);
            pcVar15 = pcVar15 + 3;
          }
          if (cVar3 == -0x16) {
            pcVar9 = pcVar9 + uVar14;
          }
          else {
            iVar10 = 0;
            if (uVar14 != 0) {
              do {
                *pcVar9 = cVar3;
                iVar10 = iVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (iVar10 < (int)uVar14);
            }
          }
          uVar12 = uVar12 + uVar14 & 0xffff;
        } while (uVar12 < uVar5);
      }
      pcStack_1c = pcStack_1c + ((int)(uint)param_1[10] >> 1);
      iStack_14 = iStack_14 + 2;
    } while (iStack_14 < (int)(uint)uVar2);
  }
  return;
}
