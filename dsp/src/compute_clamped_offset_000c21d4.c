/* @k10d compute_clamped_offset_000c21d4 @ 0x000c21d4
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Returns a non-negative value derived from a callee result plus a mode-dependent
 *   constant minus an input offset.
 * summary:
 *   Calls map_status_bits_to_code and, if the result is non-zero, adds either DAT_0003c568
 *   or DAT_0003c56a (selected by param_2 and the value of DAT_0003c492) then subtracts
 *   param_1. The result is clamped to zero if negative. The role of the DAT globals and the
 *   callee is not established, so the semantic meaning of the computed value is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_clamped_offset_000c21d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = map_status_bits_to_code();
  if (iVar1 != 0) {
    if (param_2 == 1) {
      iVar2 = (iVar1 + (uint)DAT_0003c568) - param_1;
    }
    else if (((DAT_0003c492 == '\x01') || (DAT_0003c492 == '\x02')) || (DAT_0003c492 == '\x03')) {
      iVar2 = (iVar1 + (uint)DAT_0003c56a) - param_1;
    }
    else {
      iVar2 = (iVar1 + (uint)DAT_0003c568) - param_1;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  return iVar2;
}
