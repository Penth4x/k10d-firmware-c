/* @k10d compute_clamped_offset_000d3adc @ 0x000d3adc
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * purpose:
 *   Computes a clamped 16-bit value by adjusting param_1 with several conditional offsets
 *   and clamping the result to [0, 0xffff].
 * summary:
 *   The function reads multiple global state bytes and words (DAT_0003cbb7, DAT_0003cd43,
 *   DAT_0003cb80, DAT_0003ce01, DAT_0003cf0e, DAT_0003cc6f, DAT_0003cbef) to build an
 *   adjustment value. It conditionally halves or clears bit 3 of DAT_0003cd43, toggles bit
 *   3 of DAT_0003cb80, and adds DAT_0003f474 if bit 5 of DAT_0003ce01 is set. It subtracts
 *   this adjustment from param_1, clamps to non-negative, then applies a further +/-
 *   adjustment (DAT_0003f426/DAT_0003f427) gated by DAT_0003cf0e and DAT_0003cbef, finally
 *   clamping to 0xffff. No callees are invoked; all logic is local arithmetic on globals
 *   and the input parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_clamped_offset_000d3adc(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)_DAT_0003cd4a;
  if ((DAT_0003cbb7 & 0x40) != 0) {
    uVar3 = uVar3 - (_DAT_0003cd4a >> 2);
  }
  bVar1 = DAT_0003cd43;
  bVar2 = DAT_0003cb80 | 8;
  if (_DAT_0003ccd4 < uVar3) {
    bVar1 = DAT_0003cd43 >> 1;
    bVar2 = DAT_0003cb80 & 0xf7;
  }
  DAT_0003cb80 = bVar2;
  uVar3 = (uint)bVar1;
  if ((DAT_0003ce01 & 0x20) != 0) {
    uVar3 = uVar3 + DAT_0003f474;
  }
  uVar3 = param_1 - uVar3;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  if (((DAT_0003cf0e & 0xf) == 0) && (DAT_0003cc6f != '\0')) {
    if ((DAT_0003cbef & 0x40) == 0) {
      uVar3 = uVar3 - DAT_0003f426;
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = uVar3 + DAT_0003f427;
      if (0xffff < uVar3) {
        uVar3 = 0xffff;
      }
    }
  }
  return uVar3;
}
