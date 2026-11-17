/* @k10d step_linear_interpolation @ 0x000dcdfa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes the next point in a linear interpolation sequence and stores the result in
 *   global variables.
 * summary:
 *   The function maintains a state machine in DAT_0003f5d2. On the first call (param_1 ==
 *   0), it initializes the start point from globals and calculates the delta from the
 *   provided end point. On subsequent calls, it increments the step counter and calculates
 *   the current position using fixed-point arithmetic (multiplying the delta by the step
 *   index and dividing by 256). The resulting x, y, and z coordinates are stored in
 *   DAT_0003c830, DAT_0003c834, and DAT_0003c880 with an 8-bit left shift.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void step_linear_interpolation(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    DAT_0003f5d2 = 0;
    _DAT_0003f5c6 = _DAT_0003c814;
    _DAT_0003f5c8 = _DAT_0003c816;
    _DAT_0003f5ca = _DAT_0003c818;
    _DAT_0003f5cc = (short)param_2 - _DAT_0003c814;
    _DAT_0003f5ce = (short)param_3 - _DAT_0003c816;
    _DAT_0003f5d0 = (short)param_4 - _DAT_0003c818;
  }
  if (DAT_0003f5d2 < 0x22) {
    iVar1 = (int)(short)(&DAT_000fc484)[DAT_0003f5d2];
    param_2 = (int)(short)(_DAT_0003f5c6 +
                          (short)(_DAT_0003f5cc * iVar1 +
                                  ((uint)(_DAT_0003f5cc * iVar1 >> 7) >> 0x18) >> 8));
    param_3 = (int)(short)(_DAT_0003f5c8 +
                          (short)(_DAT_0003f5ce * iVar1 +
                                  ((uint)(_DAT_0003f5ce * iVar1 >> 7) >> 0x18) >> 8));
    param_4 = (int)(short)(_DAT_0003f5ca +
                          (short)(_DAT_0003f5d0 * iVar1 +
                                  ((uint)(_DAT_0003f5d0 * iVar1 >> 7) >> 0x18) >> 8));
    DAT_0003f5d2 = DAT_0003f5d2 + 1;
  }
  _DAT_0003c830 = param_2 << 8;
  _DAT_0003c834 = param_3 << 8;
  _DAT_0003c880 = param_4 << 8;
  return;
}
