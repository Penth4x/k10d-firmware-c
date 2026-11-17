/* @k10d median_smooth_image_rows @ 0x104f673a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * purpose:
 *   Applies a 3x3 median-like smoothing filter to interior pixels of a 2D byte image
 *   buffer.
 * summary:
 *   Iterates over rows and columns of a byte array pointed to by *(param_2+4) with stride
 *   *(param_2+0x10). For each interior pixel, it computes the absolute difference between 8
 *   times the center value and the sum of its 8 neighbors. If the difference is below 0x30,
 *   it replaces the pixel with the integer average of the 3x3 neighborhood. The loop skips
 *   the first and last two rows and columns, processing two pixels per iteration in the
 *   inner loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f675e) overlaps instruction at (ram,0x104f675c)
    */

void median_smooth_image_rows(uint32_t param_1, int param_2, uint32_t param_x2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iStack_3c;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = *(int *)(param_2 + 4);
  uVar7 = (uint)*(ushort *)(param_2 + 0x10);
  iStack_18 = 2;
  iVar3 = *(ushort *)(param_2 + 0x12) - 1;
  if (2 < iVar3) {
    iStack_1c = uVar7 << 1;
    do {
      if (2 < (int)(uVar7 - 1)) {
        pbVar4 = (byte *)(iVar1 + iStack_1c + 2);
        pbVar6 = pbVar4 + -uVar7;
        iStack_3c = uVar7 - 5;
        if (1 < iStack_3c) {
          do {
            sVar2 = (ushort)*pbVar4 * 8 -
                    ((ushort)pbVar6[-1] + (ushort)pbVar6[1] +
                     (ushort)pbVar4[uVar7] + (ushort)pbVar4[1] +
                    (ushort)pbVar4[-1] + (ushort)*pbVar6 +
                    (ushort)pbVar4[uVar7 + 1] + (ushort)pbVar4[uVar7 - 1]);
            if (sVar2 < 0) {
              sVar2 = -sVar2;
            }
            if (sVar2 < 0x30) {
              *pbVar4 = (byte)(((uint)pbVar6[-1] + (uint)*pbVar6 + (uint)pbVar6[1] +
                                (uint)pbVar4[-1] + (uint)*pbVar4 + (uint)pbVar4[1] +
                                (uint)pbVar4[uVar7 - 1] + (uint)pbVar4[uVar7] +
                               (uint)pbVar4[uVar7 + 1]) / 9);
            }
            pbVar5 = pbVar4 + 1;
            sVar2 = (ushort)*pbVar5 * 8 -
                    ((ushort)*pbVar6 + (ushort)pbVar6[2] + (ushort)pbVar5[uVar7] + (ushort)pbVar4[2]
                    + (ushort)*pbVar4 + (ushort)pbVar6[1] +
                      (ushort)pbVar5[uVar7 + 1] + (ushort)pbVar5[uVar7 - 1]);
            if (sVar2 < 0) {
              sVar2 = -sVar2;
            }
            if (sVar2 < 0x30) {
              *pbVar5 = (byte)(((uint)*pbVar6 + (uint)pbVar6[1] + (uint)pbVar6[2] + (uint)*pbVar4 +
                                (uint)*pbVar5 + (uint)pbVar4[2] + (uint)pbVar5[uVar7 - 1] +
                                (uint)pbVar5[uVar7] + (uint)pbVar5[uVar7 + 1]) / 9);
            }
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
            iStack_3c = iStack_3c + -2;
          } while (-1 < iStack_3c);
        }
        for (iStack_3c = iStack_3c + 1; -1 < iStack_3c; iStack_3c = iStack_3c + -1) {
          sVar2 = (ushort)*pbVar4 * 8 -
                  ((ushort)pbVar6[-1] + (ushort)pbVar6[1] +
                   (ushort)pbVar4[uVar7] + (ushort)pbVar4[1] +
                  (ushort)pbVar4[-1] + (ushort)*pbVar6 +
                  (ushort)pbVar4[uVar7 + 1] + (ushort)pbVar4[uVar7 - 1]);
          if (sVar2 < 0) {
            sVar2 = -sVar2;
          }
          if (sVar2 < 0x30) {
            *pbVar4 = (byte)(((uint)pbVar6[-1] + (uint)*pbVar6 + (uint)pbVar6[1] + (uint)pbVar4[-1]
                              + (uint)*pbVar4 + (uint)pbVar4[1] + (uint)pbVar4[uVar7 - 1] +
                              (uint)pbVar4[uVar7] + (uint)pbVar4[uVar7 + 1]) / 9);
          }
          pbVar4 = pbVar4 + 1;
          pbVar6 = pbVar6 + 1;
        }
      }
      iStack_18 = iStack_18 + 1;
      iStack_1c = iStack_1c + uVar7;
    } while (iStack_18 < iVar3);
  }
  return;
}
