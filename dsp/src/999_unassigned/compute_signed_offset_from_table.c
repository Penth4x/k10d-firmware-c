/* @k10d compute_signed_offset_from_table @ 0x000c3422
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Reads a signed byte from a table indexed by param_1 and returns a scaled/adjusted
 *   offset value.
 * summary:
 *   The function clamps param_2 to a minimum of 0x10 and then branches based on a
 *   comparison with a byte at DAT_000f9d88+param_1. It performs arithmetic on signed bytes
 *   from several adjacent table entries (DAT_000f9d88 through DAT_000f9dc8), calling
 *   divide_two_integers in one path. The result is a signed integer derived from these
 *   table values and the input parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_signed_offset_from_table(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0x10) {
    param_2 = 0x10;
  }
  if ((byte)(&DAT_000f9d88)[param_1] < param_2) {
    iVar4 = (uint)(byte)(&DAT_000f9da8)[param_1] * 2;
    if (0x7f < (byte)(&DAT_000f9d98)[param_1]) {
      iVar4 = (uint)(byte)(&DAT_000f9da8)[param_1] * -2;
    }
    uVar2 = (byte)(&DAT_000f9dc8)[param_1] & 0x7f;
    iVar3 = uVar2 * 2;
    if (0x7f < (byte)(&DAT_000f9dc8)[param_1]) {
      iVar3 = uVar2 * -2;
    }
    uVar2 = (byte)(&DAT_000f9db8)[param_1] & 0x7f;
    if (0x7f < (byte)(&DAT_000f9db8)[param_1]) {
      uVar2 = -uVar2;
    }
    iVar1 = divide_two_integers(uVar2 * (param_2 - (byte)(&DAT_000f9d88)[param_1]),8);
    iVar1 = iVar1 + iVar4;
    if (iVar3 < 0) {
      if ((int)uVar2 < 0) {
        if (iVar1 < iVar3) {
          iVar1 = iVar3;
        }
      }
      else if (iVar3 < iVar1) {
        iVar1 = iVar3;
      }
    }
    else if ((int)uVar2 < 0) {
      if (iVar1 < iVar3) {
        iVar1 = iVar3;
      }
    }
    else if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    uVar2 = iVar1 / 2;
  }
  else {
    uVar2 = ((byte)(&DAT_000f9d98)[param_1] & 0x7f) * (param_2 - 0x10) >> 3;
    if ((uint)(byte)(&DAT_000f9da8)[param_1] * 2 < uVar2) {
      uVar2 = (uint)(byte)(&DAT_000f9da8)[param_1] * 2;
    }
    uVar2 = uVar2 / 2;
    if (0x7f < (byte)(&DAT_000f9d98)[param_1]) {
      uVar2 = -uVar2;
    }
  }
  return uVar2;
}
