/* @k10d accumulate_signed_offsets @ 0x000ce2b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sums two conditionally-signed offset values into a signed accumulator and stores the
 *   result and its absolute value.
 * summary:
 *   Reads a base value from DAT_0003cc30 and applies two gated corrections. The first
 *   correction, enabled by bit 5 of DAT_0003ce05, calls clamp_shifted_value_to_16_bits and
 *   negates the result if bit 5 of DAT_0003ce02 is set. The second correction, enabled by
 *   bit 6 of DAT_0003f282, calls clamp_product_to_16bit_000ce692, updates DAT_0003ce54 with
 *   a clamped value, and adds another clamp_shifted_value_to_16_bits result minus
 *   DAT_0003f2d6 (with a zero-to-one guard) to the accumulator. The final signed sum is
 *   written to DAT_0003ce60 and its absolute value to DAT_0003cc30.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_signed_offsets(void)

{
  uint uVar1;
  short sVar3;
  int iVar2;
  uint uVar4;
  
  uVar4 = (uint)_DAT_0003cc30;
  if (_DAT_0003cbf0 < 0) {
    uVar4 = -uVar4;
  }
  if ((DAT_0003ce05 & 0x20) != 0) {
    uVar1 = clamp_shifted_value_to_16_bits((uint)_DAT_0003ce2c);
    if ((DAT_0003ce02 & 0x20) != 0) {
      uVar1 = -uVar1;
    }
    uVar4 = uVar4 + uVar1;
  }
  if ((DAT_0003f282 & 0x40) != 0) {
    sVar3 = clamp_product_to_16bit_000ce692(_DAT_0003ce34,_DAT_0003ce56 & 0x7fff);
    if ((short)_DAT_0003ce56 < 0) {
      sVar3 = -sVar3;
    }
    _DAT_0003ce54 = _DAT_0003ce54 - sVar3;
    if ((int)((uint)_DAT_0003ce54 + (uint)_DAT_0003cd5a * -2) < (int)(uint)_DAT_0003cd5a) {
      _DAT_0003ce54 = _DAT_0003cd5a;
    }
    uVar1 = clamp_shifted_value_to_16_bits((uint)_DAT_0003f2d4);
    iVar2 = uVar1 - _DAT_0003f2d6;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    _DAT_0003ce52 = (uint16_t)iVar2;
    uVar4 = uVar4 + iVar2;
  }
  _DAT_0003ce60 = (short)uVar4;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  _DAT_0003cc30 = (short)uVar4;
  return;
}
