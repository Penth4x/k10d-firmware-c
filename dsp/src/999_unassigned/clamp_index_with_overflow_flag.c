/* @k10d clamp_index_with_overflow_flag @ 0x000f4a60
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a scaled index from param_1, clamps it to 0x27, and sets a high bit in
 *   DAT_0003c4d4 when clamping occurs.
 * summary:
 *   Calls divide_two_integers(param_1, 8) to get a base value, multiplies by 3, adds a per-
 *   lane offset from DAT_000fc8e8 indexed by param_1 & 7, and subtracts 0x1a. If the result
 *   exceeds 0x27, it is clamped to 0x27 and bit 7 of DAT_0003c4d4 is set. The clamped value
 *   is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_index_with_overflow_flag(uint param_1)

{
  int iVar1;
  
  iVar1 = divide_two_integers(param_1,8);
  iVar1 = iVar1 * 3 + (uint)(byte)(&DAT_000fc8e8)[param_1 & 7] + -0x1a;
  if (0x27 < iVar1) {
    iVar1 = 0x27;
    DAT_0003c4d4 = DAT_0003c4d4 | 0x80;
  }
  return iVar1;
}
