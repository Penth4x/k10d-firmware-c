/* @k10d decode_rle_pattern_to_buffer @ 0x1048e538
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decode_rle_pattern_to_buffer(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcStack_24;
  byte *pbStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  int iStack_14;
  
  iVar12 = search_short_table_for_value(__frv_reg_unset(4));
  uVar4 = (uint)*(ushort *)(iVar12 + 0x14);
  uVar2 = *(ushort *)(iVar12 + 0x16);
  iVar19 = *(int *)(iVar12 + 0x10);
  iVar17 = *(int *)(param_1 + 4);
  if ((iVar17 == 0) && (*(int *)(param_1 + 6) == 0)) {
    iVar17 = (uint)param_1[10] * (uint)param_1[0xb] + *(int *)(param_1 + 2);
    iVar21 = ((int)(uint)param_1[10] >> 1) * ((int)(uint)param_1[0xb] >> 1);
    iVar9 = iVar17 + iVar21;
    iVar21 = iVar21 + iVar9;
  }
  else {
    iVar9 = *(int *)(param_1 + 6);
    iVar21 = *(int *)(param_1 + 8);
  }
  uVar14 = (uint)param_1[1];
  iVar7 = (int)(uint)param_1[10] >> 1;
  iVar1 = ((int)uVar14 >> 1) * iVar7;
  pcStack_24 = (char *)(uVar14 * param_1[10] + *(int *)(param_1 + 2) + (uint)*param_1);
  iVar6 = (int)(uint)*param_1 >> 1;
  pcStack_1c = (char *)(iVar1 + iVar9 + iVar6);
  pcStack_18 = (char *)(iVar17 + iVar1 + iVar6);
  pbStack_20 = (byte *)(uVar14 * iVar7 + iVar21 + iVar6);
  pcVar22 = (char *)(*(int *)(iVar12 + 4) +
                    *(int *)(iVar19 + (uint)*(ushort *)(iVar12 + 0x18) * 0xc));
  iVar17 = (uint)*(ushort *)(iVar12 + 0x18) * 3;
  pcVar20 = (char *)(*(int *)(iVar12 + 8) + *(int *)((iVar17 + 1) * 4 + iVar19));
  pcVar23 = (char *)(*(int *)(iVar12 + 0xc) + *(int *)(iVar19 + (iVar17 + 2) * 4));
  iStack_14 = 0;
  if (uVar2 != 0) {
    uVar14 = (int)uVar4 >> 1;
    do {
      uVar18 = 0;
      pcVar10 = pcStack_24 + param_1[10];
      uVar15 = 0;
      pcVar8 = pcStack_24;
      if (uVar4 != 0) {
        do {
          cVar3 = *pcVar22;
          uVar18 = uVar18 + 1 & 0xffff;
          uVar13 = (uint)(byte)pcVar22[1];
          if (uVar4 < 0x100) {
            pcVar22 = pcVar22 + 2;
            uVar18 = uVar18 + 1;
          }
          else {
            uVar13 = (uint)CONCAT11(pcVar22[1],pcVar22[2]);
            pcVar22 = pcVar22 + 3;
            uVar18 = uVar18 + 2;
          }
          uVar18 = uVar18 & 0xffff;
          iVar12 = 0;
          if (uVar13 != 0) {
            do {
              *pcVar8 = cVar3;
              *pcVar10 = cVar3;
              pcVar10 = pcVar10 + 1;
              iVar12 = iVar12 + 1;
              pcVar8 = pcVar8 + 1;
            } while (iVar12 < (int)uVar13);
          }
          uVar15 = uVar15 + uVar13 & 0xffff;
        } while (uVar15 < uVar4);
      }
      pbVar11 = pbStack_20 + ((int)(uint)param_1[10] >> 1);
      iVar12 = 0;
      pcVar8 = pcStack_24;
      pbVar16 = pbStack_20;
      if (uVar14 != 0) {
        do {
          pcVar10 = pcVar8 + 1;
          if (*pcVar8 == 'i') {
            bVar5 = 0;
          }
          else {
            bVar5 = 0xe0;
          }
          pcVar8 = pcVar8 + 2;
          if (*pcVar10 != 'i') {
            bVar5 = bVar5 | 0xe;
          }
          *pbVar16 = bVar5;
          *pbVar11 = bVar5;
          pbVar11 = pbVar11 + 1;
          iVar12 = iVar12 + 1;
          pbVar16 = pbVar16 + 1;
        } while (iVar12 < (int)uVar14);
      }
      pcVar22 = pcVar22 + uVar18;
      pcStack_24 = pcStack_24 + (uint)param_1[10] * 2;
      pbStack_20 = pbStack_20 + param_1[10];
      uVar15 = 0;
      pcVar8 = pcStack_18;
      if (uVar14 != 0) {
        do {
          cVar3 = *pcVar20;
          uVar18 = (uint)(byte)pcVar20[1];
          if (uVar14 < 0x100) {
            pcVar20 = pcVar20 + 2;
          }
          else {
            uVar18 = (uint)CONCAT11(pcVar20[1],pcVar20[2]);
            pcVar20 = pcVar20 + 3;
          }
          if (cVar3 == -0x2c) {
            pcVar8 = pcVar8 + uVar18;
          }
          else {
            iVar12 = 0;
            if (uVar18 != 0) {
              do {
                *pcVar8 = cVar3;
                iVar12 = iVar12 + 1;
                pcVar8 = pcVar8 + 1;
              } while (iVar12 < (int)uVar18);
            }
          }
          uVar15 = uVar15 + uVar18 & 0xffff;
        } while (uVar15 < uVar14);
      }
      pcStack_18 = pcStack_18 + ((int)(uint)param_1[10] >> 1);
      uVar15 = 0;
      pcVar8 = pcStack_1c;
      if (uVar14 != 0) {
        do {
          cVar3 = *pcVar23;
          uVar18 = (uint)(byte)pcVar23[1];
          if (uVar14 < 0x100) {
            pcVar23 = pcVar23 + 2;
          }
          else {
            uVar18 = (uint)CONCAT11(pcVar23[1],pcVar23[2]);
            pcVar23 = pcVar23 + 3;
          }
          if (cVar3 == -0x16) {
            pcVar8 = pcVar8 + uVar18;
          }
          else {
            iVar12 = 0;
            if (uVar18 != 0) {
              do {
                *pcVar8 = cVar3;
                iVar12 = iVar12 + 1;
                pcVar8 = pcVar8 + 1;
              } while (iVar12 < (int)uVar18);
            }
          }
          uVar15 = uVar15 + uVar18 & 0xffff;
        } while (uVar15 < uVar14);
      }
      pcStack_1c = pcStack_1c + ((int)(uint)param_1[10] >> 1);
      iStack_14 = iStack_14 + 2;
    } while (iStack_14 < (int)(uint)uVar2);
  }
  return;
}
