/* @k10d compute_signed_offset_value_000d1668 @ 0x000d1668
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes and returns a signed offset value based on flag bits and a call to
 *   extract_and_pass_nibble.
 * summary:
 *   The function manipulates flag bits in DAT_0003ce05 (bits 3, 1, and 2) based on
 *   comparisons with DAT_0003ce12 and DAT_0003ce02. It calls FUN_000f7164 and
 *   extract_and_pass_nibble, using the return value of the latter to determine the final
 *   returned value, which is derived from differences between DAT_0003ce1a, DAT_0003ce1c,
 *   and DAT_0003ce32. The function updates DAT_0003ce32 with the value of DAT_0003cc6a
 *   (negated if bit 2 of DAT_0003ce05 is set) before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_signed_offset_value_000d1668(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  if ((ushort)((ushort)DAT_0003ce12 << 1) < _DAT_0003cc30) {
    DAT_0003ce05 = DAT_0003ce05 & 0xf7;
  }
  else {
    DAT_0003ce05 = DAT_0003ce05 | 8;
  }
  uVar2 = (uint)_DAT_0003cc6a;
  if (((DAT_0003ce05 & 2) != 0) || ((DAT_0003ce02 & 0x80) != 0)) {
    FUN_000f7164();
    iVar1 = (uint)_DAT_0003ce1a - (uint)_DAT_0003ce1c;
    iVar3 = iVar1;
    if (-1 < iVar1) {
      iVar3 = iVar1 - (uint)_DAT_0003ce32;
      iVar1 = extract_and_pass_nibble();
    }
    if (iVar1 == 0) {
      DAT_0003ce05 = DAT_0003ce05 & 0xfb;
      uVar2 = uVar2 + iVar3;
    }
    else if ((iVar1 == 3) && (DAT_0003ce05 = DAT_0003ce05 | 4, (DAT_0003ce06 & 0x20) != 0)) {
      uVar2 = iVar3 - uVar2;
    }
    else {
      iVar1 = -1;
      uVar2 = 0xffffffff;
    }
  }
  if (-1 < iVar1) {
    _DAT_0003ce32 = _DAT_0003cc6a;
    if ((DAT_0003ce05 & 4) != 0) {
      _DAT_0003ce32 = -_DAT_0003cc6a;
    }
    if (((int)uVar2 < 1) && ((DAT_0003ce02 & 0x10) != 0)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
