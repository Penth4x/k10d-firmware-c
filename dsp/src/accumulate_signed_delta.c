/* @k10d accumulate_signed_delta @ 0x000d3c6c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a signed offset from two DAT values and adds it to a running accumulator.
 * summary:
 *   The function calculates the difference between _DAT_0003f24e and _DAT_0003cd78,
 *   adjusting the sign based on the state of DAT_0003f1b2. It applies scaling factors
 *   (DAT_0003cd48/49) and clamps the result using thresholds in DAT_0003f1b3-f1b5 before
 *   calling unsigned_divide. The final result is stored in _DAT_0003cc28 and added to the
 *   accumulator at _DAT_0003cbf0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_signed_delta(void)

{
  short sVar2;
  int iVar1;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  
  uVar4 = 0;
  if (DAT_0003f1b2 == 0) {
    sVar2 = _DAT_0003f24e - _DAT_0003cd78;
    uVar3 = 0x2a;
  }
  else {
    uVar3 = 1;
    sVar2 = _DAT_0003cd78 - _DAT_0003f24e;
  }
  iVar1 = (int)sVar2;
  if (iVar1 < 0) {
    iVar1 = (int)-sVar2;
    if (DAT_0003f1b2 != 0) {
      uVar3 = (uint)DAT_0003f1b3;
      sVar5 = (short)(uVar3 * 3 >> 1);
      if (sVar5 < iVar1) {
        iVar1 = (int)(short)(-sVar2 - sVar5);
        uVar3 = (uint)DAT_0003f1b2;
        uVar4 = (ushort)((uint)DAT_0003cd49 * 3 >> 2);
      }
      else {
        uVar4 = 0;
      }
    }
    _DAT_0003cc28 = unsigned_divide(iVar1 * (uint)DAT_0003cd49 >> 1,uVar3);
    _DAT_0003cc28 = uVar4 + _DAT_0003cc28;
  }
  else {
    if (DAT_0003f1b2 != 0) {
      uVar3 = (uint)DAT_0003f1b4;
      if (iVar1 < (short)(ushort)DAT_0003f1b4) {
        uVar4 = 0;
      }
      else {
        iVar1 = (int)(short)(sVar2 - (ushort)DAT_0003f1b4);
        uVar3 = (uint)DAT_0003f1b5;
        uVar4 = (ushort)(DAT_0003cd48 >> 1);
      }
    }
    sVar2 = unsigned_divide(iVar1 * (uint)DAT_0003cd48 >> 1,uVar3);
    _DAT_0003cc28 = -(uVar4 + sVar2);
  }
  _DAT_0003cbf0 = _DAT_0003cbf0 + _DAT_0003cc28;
  return;
}
