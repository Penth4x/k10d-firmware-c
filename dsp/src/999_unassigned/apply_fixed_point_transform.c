/* @k10d apply_fixed_point_transform @ 0x000dccd4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Applies a fixed-point arithmetic transform to three input values using a lookup table
 *   and stores the results.
 * summary:
 *   The function performs a series of fixed-point multiplications and additions on param_2,
 *   param_3, and param_4. It uses a lookup table at 0xfc40a indexed by a counter in
 *   _DAT_0003f5c4. The results are stored in _DAT_0003c830, _DAT_0003c834, and
 *   _DAT_0003c880, each shifted left by 8 bits. It also updates a state flag in
 *   DAT_0003f55e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void apply_fixed_point_transform(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    _DAT_0003f5c4 = 0;
    _DAT_0003f5b8 = _DAT_0003c814;
    _DAT_0003f5ba = _DAT_0003c816;
    _DAT_0003f5bc = _DAT_0003c818;
    _DAT_0003f5be = (short)param_2 - _DAT_0003c814;
    _DAT_0003f5c0 = (short)param_3 - _DAT_0003c816;
    _DAT_0003f5c2 = (short)param_4 - _DAT_0003c818;
    DAT_0003f55e = DAT_0003f55e | 0x20;
  }
  if (_DAT_0003f5c4 < 0x3c) {
    _DAT_0003f5c4 = _DAT_0003f5c4 + _DAT_0003c884;
    iVar1 = (int)*(short *)(&DAT_000fc40a + (uint)_DAT_0003f5c4 * 2);
    param_2 = (int)(short)(_DAT_0003f5b8 +
                          (short)(_DAT_0003f5be * iVar1 +
                                  ((uint)(_DAT_0003f5be * iVar1 >> 7) >> 0x18) >> 8));
    param_3 = (int)(short)(_DAT_0003f5ba +
                          (short)(_DAT_0003f5c0 * iVar1 +
                                  ((uint)(_DAT_0003f5c0 * iVar1 >> 7) >> 0x18) >> 8));
    param_4 = (int)(short)(_DAT_0003f5bc +
                          (short)(_DAT_0003f5c2 * iVar1 +
                                  ((uint)(_DAT_0003f5c2 * iVar1 >> 7) >> 0x18) >> 8));
  }
  else {
    DAT_0003f55e = DAT_0003f55e & 0xcf;
  }
  _DAT_0003c830 = param_2 << 8;
  _DAT_0003c834 = param_3 << 8;
  _DAT_0003c880 = param_4 << 8;
  return;
}
