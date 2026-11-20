/* @k10d compute_clamped_index_000f4db6 @ 0x000f4db6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes a clamped integer value based on param_1 and a flag, using divide_two_integers
 *   and a lookup table.
 * summary:
 *   Checks DAT_0003c3ac to select between two calculation paths. In the first path, it
 *   calls divide_two_integers(param_1 + 1, 4), subtracts 7, and clamps the result to a
 *   minimum of 0x22. In the second path, it calls divide_two_integers(param_1, 8),
 *   multiplies by 3, adds a byte from a table at DAT_000fc8e8 indexed by param_1 & 7,
 *   subtracts 0xb, and clamps to a minimum of 0x33. Finally, it clamps the result to be
 *   non-negative and returns it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_clamped_index_000f4db6(uint param_1)

{
  int iVar1;
  
  if (DAT_0003c3ac == '\0') {
    iVar1 = divide_two_integers(param_1 + 1,4);
    iVar1 = iVar1 + -7;
    if (0x22 < iVar1) {
      iVar1 = 0x22;
    }
  }
  else {
    iVar1 = divide_two_integers(param_1,8);
    iVar1 = iVar1 * 3 + (uint)(byte)(&DAT_000fc8e8)[param_1 & 7] + -0xb;
    if (0x33 < iVar1) {
      iVar1 = 0x33;
    }
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}
