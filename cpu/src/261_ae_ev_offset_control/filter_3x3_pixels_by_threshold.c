/* @k10d filter_3x3_pixels_by_threshold @ 0x104f8954
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Applies a 3x3 neighborhood filter to a 2D byte array, replacing pixels where the
 *   absolute difference from the mean of 8 neighbors is below a threshold.
 * summary:
 *   Iterates over rows and columns of a 2D byte buffer (param_2) with dimensions param_3 x
 *   param_4. For each interior pixel, it calculates the absolute difference between the
 *   pixel value times 8 and the sum of its 8 surrounding neighbors. If this difference is
 *   less than param_5, it calls insertion_sort_bytes with the 3x3 neighborhood data and
 *   updates the current pixel with the center value from the local stack buffer. This is a
 *   classic median or mean-based noise reduction or edge detection filter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void filter_3x3_pixels_by_threshold(uint32_t param_1,int param_2,int param_3,int param_4,short param_5)

{
  struct {
    byte bStack_11;
    byte bStack_10;
    byte bStack_f;
    byte bStack_e;
    byte bStack_d;
    byte bStack_c;
    byte bStack_b;
    byte bStack_a;
    byte bStack_9;
  } _cfg_11;
  bool bVar1;
  short sVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  int iStack_2c;
  int iStack_28;
  iStack_28 = 2;
  if (2 < param_4 + -1) {
    iStack_2c = param_3 << 1;
    do {
      pbVar3 = (byte *)(param_2 + iStack_2c + 2);
      if (2 < param_3 + -1) {
        pbVar4 = pbVar3 + -param_3;
        iVar5 = param_3 + -3;
        do {
          _cfg_11.bStack_11 = pbVar4[-1];
          sVar2 = (ushort)*pbVar3 * 8 -
                  ((ushort)pbVar4[1] + (ushort)_cfg_11.bStack_11 +
                   (ushort)pbVar3[param_3] + (ushort)pbVar3[1] +
                  (ushort)pbVar3[-1] + (ushort)*pbVar4 +
                  (ushort)pbVar3[param_3 + 1] + (ushort)pbVar3[param_3 + -1]);
          if (sVar2 < 0) {
            sVar2 = -sVar2;
          }
          if (sVar2 < param_5) {
            _cfg_11.bStack_10 = *pbVar4;
            _cfg_11.bStack_f = pbVar4[1];
            _cfg_11.bStack_e = pbVar3[-1];
            _cfg_11.bStack_d = *pbVar3;
            _cfg_11.bStack_c = pbVar3[1];
            _cfg_11.bStack_b = pbVar3[param_3 + -1];
            _cfg_11.bStack_a = pbVar3[param_3];
            _cfg_11.bStack_9 = pbVar3[param_3 + 1];
            insertion_sort_bytes(param_1,&_cfg_11.bStack_11,9);
            *pbVar3 = _cfg_11.bStack_d;
          }
          pbVar3 = pbVar3 + 1;
          iVar6 = iVar5 + -1;
          bVar1 = 0 < iVar5;
          pbVar4 = pbVar4 + 1;
          iVar5 = iVar6;
        } while (bVar1 && iVar6 != 0);
      }
      iStack_28 = iStack_28 + 1;
      iStack_2c = iStack_2c + param_3;
    } while (iStack_28 < param_4 + -1);
  }
  return;
}
