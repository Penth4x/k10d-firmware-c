/* @k10d compute_signed_offset_from_tables @ 0x000c3182
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Selects two bytes from one of four lookup tables based on param_1 and param_2, then
 *   returns a signed 16-bit arithmetic result.
 * summary:
 *   The function uses param_1 as an index into four 16-byte tables
 *   (DAT_000f9c28..DAT_000f9c88) to retrieve two unsigned bytes. It treats the first byte
 *   as a signed 7-bit value and the second as a signed 8-bit value, subtracts the second
 *   from param_2 (clamped to zero), and multiplies the result by the first value and a
 *   derived constant from DAT_0003c10b. The final result is right-shifted by 10 and sign-
 *   corrected based on the signs of the input bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_signed_offset_from_tables(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if ((byte)s_0000000000000000_000f9c88[param_1] < param_2) {
    if ((byte)s_0000000000000000_000f9c88[param_1 + 0x10] < param_2) {
      uVar4 = (uint)(byte)(&DAT_000f9c68)[param_1];
      uVar2 = (uint)(byte)(&DAT_000f9c78)[param_1];
    }
    else {
      uVar4 = (uint)(byte)(&DAT_000f9c48)[param_1];
      uVar2 = (uint)(byte)(&DAT_000f9c58)[param_1];
    }
  }
  else {
    uVar4 = (uint)(byte)(&DAT_000f9c28)[param_1];
    uVar2 = (uint)(byte)(&DAT_000f9c38)[param_1];
  }
  bVar1 = 0x7f < uVar4;
  if (bVar1) {
    uVar4 = uVar4 & 0x7f;
  }
  iVar5 = ((DAT_0003c10b & 0x7c) >> 2) - 0x10;
  bVar6 = iVar5 < 0;
  if (bVar6) {
    iVar5 = -iVar5;
  }
  uVar2 = uVar2 * 2;
  if (0xff < uVar2) {
    uVar2 = -(uVar2 & 0xff);
  }
  if ((int)param_2 < (int)uVar2) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_2 - uVar2;
  }
  uVar2 = iVar5 * uVar4 * iVar3 >> 10;
  if ((char)(bVar1 + bVar6) == '\x01') {
    uVar2 = -uVar2;
  }
  return uVar2;
}
