/* @k10d compute_adjusted_value_000cd0b8 @ 0x000cd0b8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calculates a modified value based on input and multiple global state flags.
 * summary:
 *   The function takes an input value and applies a series of conditional multiplications,
 *   shifts, and clamps based on numerous global variables (DAT_0003c021, DAT_0003cef2,
 *   etc.). It calls extract_and_pass_nibble once under specific conditions to check a state
 *   before modifying the result. The final result is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_adjusted_value_000cd0b8(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 << 1;
  uVar2 = param_1;
  if (((DAT_0003c021 & 1) != 0) && ((DAT_0003c127 & 8) != 0)) {
    if ((DAT_0003f2a6 != 0) &&
       (((1 < DAT_0003cef2 && (2 < DAT_0003cef3)) && ((DAT_0003cb80 & 8) == 0)))) {
      param_1 = (DAT_0003cef3 - 2) * (param_1 * DAT_0003f2a6 >> 8) + param_1;
      if ((byte)(&DAT_000fae4e)[DAT_0003cef2] <= param_1) {
        param_1 = (uint)(byte)(&DAT_000fae4e)[DAT_0003cef2];
      }
      uVar4 = param_1 << 1;
    }
    if ((((DAT_0003ce01 & 1) == 0) && ((DAT_0003ce06 & 2) != 0)) &&
       ((_DAT_0003cbf0 < 0 && ((DAT_0003f1b0 != 0 && ((DAT_0003cf0f & 0xf) == 0)))))) {
      param_1 = param_1 * DAT_0003f1b0 >> 5;
      uVar4 = param_1 << 1;
    }
    uVar2 = uVar4;
    if (((DAT_0003ce01 & 1) == 0) && (((DAT_0003c581 & 0x20) != 0 || ((DAT_0003f281 & 8) == 0)))) {
      uVar2 = param_1;
      if (((DAT_0003ce01 & 0x20) == 0) && ((DAT_0003ce62 & 8) == 0)) {
        if ((((DAT_0003f283 & 0x20) != 0) && ((DAT_0003ce06 & 2) != 0)) &&
           (((DAT_0003ce07 & 0x20) == 0 && (iVar1 = extract_and_pass_nibble(), iVar1 == 0)))) {
          DAT_0003ce07 = DAT_0003ce07 | 0x20;
          uVar2 = param_1 >> 1;
          uVar4 = param_1;
        }
      }
      else {
        uVar2 = uVar4;
        if ((((DAT_0003f281 & 4) != 0) && ((DAT_0003ce06 & 2) != 0)) && ((DAT_0003ce07 & 0x20) == 0)
           ) {
          DAT_0003ce07 = DAT_0003ce07 | 0x20;
          uVar2 = param_1;
          uVar4 = param_1;
        }
      }
    }
  }
  uVar3 = uVar2;
  if (((1 < (DAT_0003cf0f & 0xf)) && ((DAT_0003ce08 & 0x20) == 0)) &&
     ((uVar3 = uVar4, (DAT_0003f285 & 0xf) <= (DAT_0003cf0f & 0xf) && (-1 < _DAT_0003cbf0)))) {
    uVar3 = uVar2 + uVar4;
  }
  if ((DAT_0003ce01 & 1) == 0) {
    DAT_0003cef3 = DAT_0003cef3 + 1;
  }
  return uVar3;
}
