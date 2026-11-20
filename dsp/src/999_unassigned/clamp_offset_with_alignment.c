/* @k10d clamp_offset_with_alignment @ 0x000c1e12
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a clamped offset by adding an alignment-adjusted size to a base value.
 * summary:
 *   Reads a byte from DAT_000f90e0 indexed by the low 3 bits of DAT_0003c102. If the value
 *   is less than 0x38, it calls divide_two_integers with a size derived from the difference
 *   to 0x38 and param_2, then adds the result to param_1 and param_3. The final result is
 *   clamped to be non-negative. The role of DAT_0003c102 and divide_two_integers is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_offset_with_alignment(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(byte)(&DAT_000f90e0)[DAT_0003c102 & 7];
  if (uVar1 < 0x38) {
    if (uVar1 == 0) {
      iVar2 = ((DAT_0003c102 & 0xf8) >> 1) - 0x28;
      if (iVar2 < -8) {
        iVar2 = divide_two_integers(((-8 - iVar2) / 2 + 0x38) * param_2,8);
      }
      else {
        iVar2 = divide_two_integers(param_2 * 0x38,8);
      }
      param_1 = iVar2 + param_1 + param_3;
    }
    else {
      iVar2 = divide_two_integers((0x38 - uVar1) * param_2,8);
      param_1 = iVar2 + param_1 + param_3;
    }
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  return param_1;
}
