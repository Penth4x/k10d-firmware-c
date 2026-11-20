/* @k10d compute_signed_fixed_point_value @ 0x000c14f0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Decodes a packed fixed-point value from DAT_0003c108 and optional offset bytes into two
 *   16-bit results.
 * summary:
 *   The function extracts a base value from DAT_0003c108 using a shift-and-multiply pattern
 *   typical of Q-format fixed-point decoding. If bit 4 of DAT_0003c126 is set, it decodes
 *   three additional signed values from DAT_0003c144, DAT_0003c145, and DAT_0003c146 using
 *   similar bit-field extraction and sign-extension logic. It calls divide_two_integers
 *   with a computed index and the third decoded value, then stores the final accumulated
 *   results as 16-bit shorts in DAT_0003c590 and DAT_0003c592, returning the first result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_signed_fixed_point_value(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (uint)(DAT_0003c108 >> 2) * 5 << ((DAT_0003c108 & 3) << 1);
  iVar5 = iVar4;
  if ((DAT_0003c126 & 0x10) != 0) {
    uVar1 = (DAT_0003c144 & 0x7e) >> 1;
    if ((DAT_0003c144 & 1) != 0) {
      uVar1 = uVar1 << 2;
    }
    if ((DAT_0003c144 & 0x80) != 0) {
      uVar1 = -uVar1;
    }
    iVar5 = iVar4 + uVar1;
    uVar1 = (DAT_0003c145 & 0x7e) >> 1;
    if ((DAT_0003c145 & 1) != 0) {
      uVar1 = uVar1 << 2;
    }
    if ((DAT_0003c145 & 0x80) != 0) {
      uVar1 = -uVar1;
    }
    uVar2 = (DAT_0003c146 & 0x7e) >> 1;
    if ((DAT_0003c146 & 1) != 0) {
      uVar2 = uVar2 << 3;
    }
    if ((DAT_0003c146 & 0x80) != 0) {
      uVar2 = -uVar2;
    }
    iVar3 = divide_two_integers((0x38 - (uint)(byte)(&DAT_000f90e0)[DAT_0003c102 & 7]) * uVar2,8);
    iVar4 = iVar4 + uVar1 + iVar3;
  }
  _DAT_0003c592 = (short)iVar4;
  _DAT_0003c590 = (short)iVar5;
  return iVar5;
}
