/* @k10d compute_and_store_adjusted_value @ 0x000cc5e4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calculates a value based on flags and data, stores it, and calls a helper if non-zero.
 * summary:
 *   The function reads several global variables (DAT_0003f2d2, DAT_0003f2d3, DAT_0003ce03,
 *   DAT_0003ce01) to compute a result in uVar1. It applies conditional additions and
 *   subtractions based on bit flags in DAT_0003ce03 and DAT_0003ce01. If the result is non-
 *   zero, it stores it to _DAT_0003ce2a, calls update_flag_bits_based_on_param with a value
 *   derived from DAT_0003ce02, and sets bits 0-2 of DAT_0003ce01. It returns bits 2-4 of
 *   DAT_0003ce01.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_and_store_adjusted_value(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)DAT_0003f2d2;
  uVar2 = (DAT_0003f2d3 & 0xf0) >> 1;
  if ((DAT_0003ce03 & 2) != 0) {
    uVar1 = uVar1 + uVar2;
    if ((DAT_0003ce03 & 1) != 0) {
      uVar1 = uVar1 + uVar2;
    }
    if ((((DAT_0003ce03 & 0x10) == 0) && ((DAT_0003ce03 & 8) == 0)) && ((DAT_0003ce03 & 0x20) == 0))
    {
      uVar2 = (uint)_DAT_0003ce28;
      if ((DAT_0003ce01 & 2) == 0) {
        uVar2 = _DAT_0003ce24 - uVar2;
      }
      if ((((DAT_0003ce01 & 2) != 0) || (-1 < (int)uVar2)) &&
         (uVar1 = uVar1 - (uVar2 * (DAT_0003f2d3 & 0xf) >> 5), (int)uVar1 < 0)) {
        uVar1 = 0;
      }
    }
    else if ((DAT_0003ce03 & 0x10) != 0) {
      uVar1 = (uint)DAT_0003f2cc;
    }
  }
  if (uVar1 != 0) {
    _DAT_0003ce2a = (uint16_t)uVar1;
    update_flag_bits_based_on_param((DAT_0003ce02 & 0x1f) >> 4);
    DAT_0003ce01 = DAT_0003ce01 | 7;
  }
  return (DAT_0003ce01 & 7) >> 2;
}
