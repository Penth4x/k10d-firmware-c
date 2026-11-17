/* @k10d accumulate_three_fixed_point_values @ 0x000dc736
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Accumulates three separate fixed-point values using a shared helper and stores the
 *   results in global variables.
 * summary:
 *   The function performs three nearly identical blocks of arithmetic. In each block, it
 *   computes a delta from two global variables, adds it to an accumulator, calls
 *   divide_two_integers with the scaled accumulator and a parameter, and then performs a
 *   fixed-point multiplication and addition sequence. The final result of each block is
 *   stored in a distinct global variable (DAT_0003c81a, DAT_0003c81c, DAT_0003c81e). The
 *   function also updates several other global variables (DAT_0003c868, DAT_0003c870,
 *   DAT_0003c878, DAT_0003f570, DAT_0003f574, DAT_0003f578) as part of the state management
 *   for these calculations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_three_fixed_point_values(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = _DAT_0003c830 + _DAT_0003c814 * -0x100;
  _DAT_0003c868 = _DAT_0003c868 + iVar3;
  iVar2 = divide_two_integers(_DAT_0003c868 * 0x100,(int)_DAT_0003f3a2);
  iVar1 = (int)_DAT_0003f3a4 * (iVar3 - _DAT_0003c86c);
  iVar1 = (int)_DAT_0003f3a0 * (((int)(iVar1 + ((uint)(iVar1 >> 7) >> 0x18)) >> 8) + iVar3 + iVar2);
  iVar1 = iVar1 + ((uint)(iVar1 >> 7) >> 0x18);
  _DAT_0003c81a = (uint16_t)((iVar1 >> 8) + ((uint)(iVar1 >> 0xf) >> 0x18) >> 8);
  _DAT_0003c86c = _DAT_0003f570;
  iVar4 = _DAT_0003c834 + _DAT_0003c816 * -0x100;
  _DAT_0003c870 = _DAT_0003c870 + iVar4;
  _DAT_0003f570 = iVar3;
  iVar2 = divide_two_integers(_DAT_0003c870 * 0x100,(int)_DAT_0003f3a8);
  iVar1 = (int)_DAT_0003f3aa * (iVar4 - _DAT_0003c874);
  iVar1 = (int)_DAT_0003f3a6 * (((int)(iVar1 + ((uint)(iVar1 >> 7) >> 0x18)) >> 8) + iVar4 + iVar2);
  iVar1 = iVar1 + ((uint)(iVar1 >> 7) >> 0x18);
  _DAT_0003c81c = (uint16_t)((iVar1 >> 8) + ((uint)(iVar1 >> 0xf) >> 0x18) >> 8);
  _DAT_0003c874 = _DAT_0003f574;
  iVar3 = _DAT_0003c880 + _DAT_0003c818 * -0x100;
  _DAT_0003c878 = _DAT_0003c878 + iVar3;
  _DAT_0003f574 = iVar4;
  iVar2 = divide_two_integers(_DAT_0003c878 * 0x100,(int)_DAT_0003f3ae);
  iVar1 = (int)_DAT_0003f38e * (iVar3 - _DAT_0003c87c);
  iVar1 = (int)_DAT_0003f3ac * (((int)(iVar1 + ((uint)(iVar1 >> 7) >> 0x18)) >> 8) + iVar3 + iVar2);
  iVar1 = iVar1 + ((uint)(iVar1 >> 7) >> 0x18);
  _DAT_0003c81e = (short)((iVar1 >> 8) + ((uint)(iVar1 >> 0xf) >> 0x18) >> 8);
  _DAT_0003c87c = _DAT_0003f578;
  _DAT_0003f578 = iVar3;
  return;
}
