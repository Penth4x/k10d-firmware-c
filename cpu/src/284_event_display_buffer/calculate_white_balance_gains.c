/* @k10d calculate_white_balance_gains @ 0x10527f60
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Computes white balance gain coefficients by averaging valid pixel values from sensor
 *   data.
 * summary:
 *   The function iterates through sensor data pointers (param_2 + 0x20..0x2c) to sum pixel
 *   values that exceed a threshold (0x80). It calculates averages for three channels and
 *   derives gain factors using reference values from param_2. The results are written to
 *   param_3 if they fall within a valid range (0x581), setting a validity flag at param_3 +
 *   0x1026. This behavior is consistent with auto white balance (AWB) gain calculation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10527fd6) overlaps instruction at (ram,0x10527fd4)
    */

void calculate_white_balance_gains(int param_1,void *param_2,uint16_t *param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  ushort uVar3;
  uint16_t uVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  uint16_t uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint16_t uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uStack_50;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar12 = *(int *)((int)param_2 + 0x20);
  iVar13 = *(int *)((int)param_2 + 0x24);
  iVar14 = *(int *)((int)param_2 + 0x28);
  iVar21 = *(int *)((int)param_2 + 0x2c);
  uVar1 = *(uint16_t *)((int)param_2 + 0x1a);
  uVar2 = *(uint16_t *)((int)param_2 + 0x1c);
  uVar3 = *(ushort *)((int)param_2 + 0x1e);
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  iVar9 = *(int *)((int)param_2 + 0x10);
  uVar20 = 0;
  iVar11 = iVar9 * *(int *)((int)param_2 + 0x14);
  uStack_50 = 0;
  uVar19 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar18 = 0;
    if (0 < iVar11) {
      iVar11 = iVar11 + -3;
      iVar9 = 0;
      if (2 < iVar11) {
        do {
          if (((0x80 < *(ushort *)(iVar9 + iVar12)) || (0x80 < *(ushort *)(iVar9 + iVar13))) ||
             ((0x80 < *(ushort *)(iVar9 + iVar14) || (0x80 < *(ushort *)(iVar9 + iVar21))))) {
            uVar20 = uVar20 + *(ushort *)(iVar9 + iVar12);
            uVar18 = *(ushort *)(iVar9 + iVar13) + uVar18 + (uint)*(ushort *)(iVar9 + iVar14);
            uVar19 = uVar19 + *(ushort *)(iVar9 + iVar21);
            uStack_50 = uStack_50 + 1 & 0xffff;
          }
          iVar17 = iVar9 + 2;
          if (((0x80 < *(ushort *)(iVar17 + iVar12)) || (0x80 < *(ushort *)(iVar17 + iVar13))) ||
             ((0x80 < *(ushort *)(iVar17 + iVar14) || (0x80 < *(ushort *)(iVar17 + iVar21))))) {
            uVar20 = uVar20 + *(ushort *)(iVar17 + iVar12);
            uVar18 = *(ushort *)(iVar17 + iVar13) + uVar18 + (uint)*(ushort *)(iVar17 + iVar14);
            uVar19 = uVar19 + *(ushort *)(iVar17 + iVar21);
            uStack_50 = uStack_50 + 1 & 0xffff;
          }
          iVar17 = iVar9 + 4;
          if ((((0x80 < *(ushort *)(iVar17 + iVar12)) || (0x80 < *(ushort *)(iVar17 + iVar13))) ||
              (0x80 < *(ushort *)(iVar17 + iVar14))) || (0x80 < *(ushort *)(iVar17 + iVar21))) {
            uVar20 = uVar20 + *(ushort *)(iVar17 + iVar12);
            uVar18 = *(ushort *)(iVar17 + iVar13) + uVar18 + (uint)*(ushort *)(iVar17 + iVar14);
            uVar19 = uVar19 + *(ushort *)(iVar17 + iVar21);
            uStack_50 = uStack_50 + 1 & 0xffff;
          }
          iVar11 = iVar11 + -3;
          iVar9 = iVar9 + 6;
        } while (-1 < iVar11);
      }
      for (iVar11 = iVar11 + 2; -1 < iVar11; iVar11 = iVar11 + -1) {
        if (((0x80 < *(ushort *)(iVar9 + iVar12)) || (0x80 < *(ushort *)(iVar9 + iVar13))) ||
           ((0x80 < *(ushort *)(iVar9 + iVar14) || (0x80 < *(ushort *)(iVar9 + iVar21))))) {
          uVar20 = uVar20 + *(ushort *)(iVar9 + iVar12);
          uVar18 = *(ushort *)(iVar9 + iVar13) + uVar18 + (uint)*(ushort *)(iVar9 + iVar14);
          uVar19 = uVar19 + *(ushort *)(iVar9 + iVar21);
          uStack_50 = uStack_50 + 1 & 0xffff;
        }
        iVar9 = iVar9 + 2;
      }
    }
    if (uStack_50 < 0x79) {
      uVar20 = 0;
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      uVar20 = uVar20 / uStack_50;
      uVar18 = uVar18 / (uStack_50 << 1);
      uVar19 = uVar19 / uStack_50;
    }
  }
  else {
    uVar18 = 0;
    iStack_38 = 0;
    iStack_34 = (*(int *)((int)param_2 + 0x70) * iVar9 + *(int *)((int)param_2 + 0x6c)) * 2;
    do {
      iStack_3c = 1;
      iVar11 = iStack_34;
      iVar17 = iStack_38;
      do {
        if ((((0x80 < *(ushort *)(iVar11 + iVar12)) || (0x80 < *(ushort *)(iVar11 + iVar13))) ||
            (0x80 < *(ushort *)(iVar11 + iVar14))) || (0x80 < *(ushort *)(iVar11 + iVar21))) {
          uVar15 = (uint)*(byte *)(iVar17 + 0x105f92e2/*ROM*/);
          uVar20 = uVar15 * *(ushort *)(iVar11 + iVar12) + uVar20;
          uVar18 = uVar15 * *(ushort *)(iVar11 + iVar13) + uVar18 +
                   uVar15 * *(ushort *)(iVar11 + iVar14);
          uVar19 = uVar15 * *(ushort *)(iVar11 + iVar21) + uVar19;
          uStack_50 = uStack_50 + 1 & 0xffff;
        }
        iVar10 = iVar11 + 2;
        if (((0x80 < *(ushort *)(iVar10 + iVar12)) || (0x80 < *(ushort *)(iVar10 + iVar13))) ||
           ((0x80 < *(ushort *)(iVar10 + iVar14) || (0x80 < *(ushort *)(iVar10 + iVar21))))) {
          uVar15 = (uint)*(byte *)(iVar17 + 0x105f92ea/*ROM*/);
          uVar20 = uVar15 * *(ushort *)(iVar10 + iVar12) + uVar20;
          uVar18 = uVar15 * *(ushort *)(iVar10 + iVar13) + uVar18 +
                   uVar15 * *(ushort *)(iVar10 + iVar14);
          uVar19 = uVar15 * *(ushort *)(iVar10 + iVar21) + uVar19;
          uStack_50 = uStack_50 + 1 & 0xffff;
        }
        iVar10 = iVar11 + 4;
        if (((0x80 < *(ushort *)(iVar10 + iVar12)) || (0x80 < *(ushort *)(iVar10 + iVar13))) ||
           ((0x80 < *(ushort *)(iVar10 + iVar14) || (0x80 < *(ushort *)(iVar10 + iVar21))))) {
          uVar15 = (uint)*(byte *)(iVar17 + 0x105f92f2/*ROM*/);
          uVar20 = uVar15 * *(ushort *)(iVar10 + iVar12) + uVar20;
          uVar18 = uVar15 * *(ushort *)(iVar10 + iVar13) + uVar18 +
                   uVar15 * *(ushort *)(iVar10 + iVar14);
          uVar19 = uVar15 * *(ushort *)(iVar10 + iVar21) + uVar19;
          uStack_50 = uStack_50 + 1 & 0xffff;
        }
        iVar10 = iVar11 + 6;
        if ((((0x80 < *(ushort *)(iVar10 + iVar12)) || (0x80 < *(ushort *)(iVar10 + iVar13))) ||
            (0x80 < *(ushort *)(iVar10 + iVar14))) || (0x80 < *(ushort *)(iVar10 + iVar21))) {
          uVar15 = (uint)*(byte *)(iVar17 + 0x105f92fa/*ROM*/);
          uVar20 = uVar15 * *(ushort *)(iVar10 + iVar12) + uVar20;
          uVar18 = uVar15 * *(ushort *)(iVar10 + iVar13) + uVar18 +
                   uVar15 * *(ushort *)(iVar10 + iVar14);
          uVar19 = uVar15 * *(ushort *)(iVar10 + iVar21) + uVar19;
          uStack_50 = uStack_50 + 1 & 0xffff;
        }
        iVar17 = iVar17 + 0x20;
        iVar11 = iVar11 + 8;
        iStack_3c = iStack_3c + -1;
      } while (-1 < iStack_3c);
      iStack_38 = iStack_38 + 1;
      iStack_34 = iStack_34 + iVar9 * 2;
    } while (iStack_38 < 4);
    if (uStack_50 < 0x11) {
      uVar20 = 0;
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      uVar20 = uVar20 / uStack_50;
      uVar18 = uVar18 / (uStack_50 << 1);
      uVar19 = uVar19 / uStack_50;
    }
  }
  if (((uVar20 == 0) || (uVar19 == 0)) || (uVar18 == 0)) {
    param_3[4] = uVar4;
    param_3[5] = uVar5;
    param_3[6] = uVar6;
    param_3[7] = uVar7;
    *(uint8_t *)(param_3 + 0x1026) = 0;
  }
  else {
    uVar8 = (uint16_t)((*(ushort *)((int)param_2 + 0x18) * uVar18) / uVar20);
    param_3[4] = uVar8;
    param_3[5] = uVar1;
    param_3[6] = uVar2;
    uVar19 = (uVar3 * uVar18) / uVar19;
    uVar16 = (uint16_t)uVar19;
    param_3[7] = uVar16;
    if (((((ushort)param_3[4] < 0x581) && ((ushort)param_3[5] < 0x581)) &&
        ((ushort)param_3[6] < 0x581)) && ((uVar19 & 0xffff) < 0x581)) {
      *param_3 = uVar8;
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar16;
      *(uint8_t *)(param_3 + 0x1026) = 1;
    }
    else {
      *(uint8_t *)(param_3 + 0x1026) = 0;
      param_3[4] = uVar4;
      param_3[5] = uVar5;
      param_3[6] = uVar6;
      param_3[7] = uVar7;
    }
  }
  *(uint8_t *)(param_1 + 4) = 0;
  return;
}
