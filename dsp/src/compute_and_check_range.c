/* @k10d compute_and_check_range @ 0x000c3f2e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Computes a bit-shifted offset from a global value and checks it against a stored range.
 * summary:
 *   Reads a global value at 0x0003c57a and shifts it left until it reaches 0x100, adjusting
 *   a base offset (DAT_0003c568 + 0x34) by 8 per shift. If the resulting offset falls
 *   outside the bounds defined by DAT_0003c575 and DAT_0003c577, it sets bit 5 (0x20) in
 *   DAT_0003c58b. Finally, it calls clamp_value_to_range_000d9ac0 with the computed offset
 *   and two other globals, returning the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t compute_and_check_range(void)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (_DAT_0003c57a != 0) {
    uVar3 = (uint)_DAT_0003c57a;
    uVar2 = DAT_0003c568 + 0x34;
    if (_DAT_0003c57a < 0x100) {
      do {
        uVar3 = uVar3 << 1;
        uVar2 = uVar2 - 8;
      } while (uVar3 < 0x100);
    }
    if ((DAT_0003c577 < uVar2) || (uVar2 < DAT_0003c575)) {
      DAT_0003c58b = DAT_0003c58b | 0x20;
    }
    uVar1 = clamp_value_to_range_000d9ac0((int)(short)uVar2,DAT_0003c576,DAT_0003c577);
  }
  return uVar1;
}
