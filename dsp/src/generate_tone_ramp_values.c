/* @k10d generate_tone_ramp_values @ 0x000d0bc6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Fills an array with a linearly interpolated ramp of 16-bit values based on a global
 *   counter and slope parameters.
 * summary:
 *   The function iterates param_1 times, waiting for bit 6 of DAT_00000079 to be set before
 *   clearing it and computing a value. It calculates a slope-adjusted increment using a
 *   counter difference (DAT_0000007e) and a multiplier (DAT_0003cfaa), clamps the result to
 *   a maximum (DAT_0003f252), and writes it to the output array. The multiplier changes at
 *   specific indices defined by DAT_0003cfc5 and DAT_0003cfc6, creating a piecewise linear
 *   ramp.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void generate_tone_ramp_values(uint param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  
  uVar2 = _DAT_0003f252;
  uVar8 = (uint)_DAT_0003f252;
  uVar7 = (uint)_DAT_0003cfaa;
  uVar13 = (uint)_DAT_0003cfa8;
  DAT_00000079 = DAT_00000079 & 0x3f;
  uVar3 = (uint)DAT_0003cfc5;
  uVar4 = (uint)DAT_0003cfc6;
  uVar5 = (uint)_DAT_0003cfac;
  uVar6 = (uint)_DAT_0003cfae;
  pbVar12 = (byte *)_DAT_0003cfcc;
  do {
    do {
    } while ((DAT_00000079 & 0x40) == 0);
    DAT_00000079 = DAT_00000079 & 0xbf;
    iVar9 = ((_DAT_0000007e ^ 0xffffffff) & 0x3ff) - uVar13;
    if (iVar9 < 1) {
      uVar10 = 0;
    }
    else {
      pbVar11 = pbVar12 + 1;
      uVar1 = (uint)*pbVar12 * iVar9 * uVar7;
      pbVar12 = pbVar11;
      uVar10 = (ushort)(uVar1 >> 0x10);
      if (uVar8 < uVar1 >> 0x10) {
        uVar10 = uVar2;
      }
    }
    *param_2 = uVar10;
    param_2 = param_2 + 1;
    param_1 = param_1 - 1;
    if (param_1 == uVar3) {
      uVar7 = uVar5;
    }
    if (param_1 == uVar4) {
      uVar7 = uVar6;
    }
  } while (param_1 != 0);
  return;
}
