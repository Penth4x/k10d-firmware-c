/* @k10d step_3d_offset_by_table @ 0x000dcb8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Steps a 3D offset vector by a table-indexed factor and stores the scaled result.
 * summary:
 *   When param_1 is zero, it initializes a counter and three offset deltas from globals at
 *   0x0003c814-0x0003c818 minus the input parameters. It then increments the counter up to
 *   0x3d, looks up a short factor from a table at 0x000fc390, and applies a fixed-point
 *   multiplication (factor/256) to each delta, accumulating the result. The final
 *   accumulated values are left-shifted by 8 and written to globals at 0x0003c830,
 *   0x0003c834, and 0x0003c880. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void step_3d_offset_by_table(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    DAT_0003f5b6 = 0;
    _DAT_0003f5aa = _DAT_0003c814;
    _DAT_0003f5ac = _DAT_0003c816;
    _DAT_0003f5ae = _DAT_0003c818;
    _DAT_0003f5b0 = (short)((_DAT_0003c814 - param_2) / 2);
    _DAT_0003f5b2 = (short)((_DAT_0003c816 - param_3) / 2);
    _DAT_0003f5b4 = (short)((_DAT_0003c818 - param_4) / 2);
  }
  if (DAT_0003f5b6 < 0x3d) {
    iVar1 = (int)(short)(&DAT_000fc390)[DAT_0003f5b6];
    param_2 = (int)(short)(_DAT_0003f5b0 +
                          (short)(_DAT_0003f5b0 * iVar1 +
                                  ((uint)(_DAT_0003f5b0 * iVar1 >> 7) >> 0x18) >> 8));
    param_3 = (int)(short)(_DAT_0003f5b2 +
                          (short)(_DAT_0003f5b2 * iVar1 +
                                  ((uint)(_DAT_0003f5b2 * iVar1 >> 7) >> 0x18) >> 8));
    param_4 = (int)(short)(_DAT_0003f5b4 +
                          (short)(_DAT_0003f5b4 * iVar1 +
                                  ((uint)(_DAT_0003f5b4 * iVar1 >> 7) >> 0x18) >> 8));
    DAT_0003f5b6 = DAT_0003f5b6 + 1;
  }
  _DAT_0003c830 = param_2 << 8;
  _DAT_0003c834 = param_3 << 8;
  _DAT_0003c880 = param_4 << 8;
  return;
}
