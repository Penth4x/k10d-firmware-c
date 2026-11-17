/* @k10d compute_indexed_sized_value @ 0x000c3264
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Selects four per-index byte values and two sub-function results based on two threshold
 *   comparisons, then combines them into a single integer.
 * summary:
 *   The function indexes into six byte arrays at param_1, choosing which set of values and
 *   which pair of helper functions (compute_weighted_average_000c3374/aa, FUN_000c33be/f8,
 *   or return_zero_stub_000c340c/10) to use based on whether two of the bytes are less than
 *   param_2. It applies sign-extension-like corrections to the byte values and helper
 *   results, calls divide_two_integers with a scaled sum and a constant of 0x10 (16), and
 *   returns a composite integer. The specific meaning of the indexed data and the helper
 *   functions is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_indexed_sized_value(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_20;
  
  if ((byte)(&DAT_000f9d58)[param_1] < param_2) {
    if ((byte)(&DAT_000f9d68)[param_1] < param_2) {
      uStack_20 = (uint)(byte)(&DAT_000f9ce8)[param_1];
      uVar6 = (uint)(byte)(&DAT_000f9d18)[param_1];
      uVar2 = return_zero_stub_000c340c(param_1);
      uVar5 = (uint)(byte)(&DAT_000f9d48)[param_1];
      uVar3 = compute_byte_difference(param_1);
    }
    else {
      uStack_20 = (uint)(byte)(&DAT_000f9cd8)[param_1];
      uVar6 = (uint)(byte)(&DAT_000f9d08)[param_1];
      uVar2 = FUN_000c33be(param_1);
      uVar5 = (uint)(byte)((byte *)LAB_000f9d38)[param_1];
      uVar3 = negate_double_of_callee(param_1);
    }
  }
  else {
    uStack_20 = (uint)(byte)(&DAT_000f9cc8)[param_1];
    uVar6 = (uint)(byte)(&DAT_000f9cf8)[param_1];
    uVar2 = compute_weighted_average_000c3374(param_1);
    uVar5 = (uint)(byte)(&DAT_000f9d28)[param_1];
    uVar3 = negate_callee_result(param_1);
  }
  if (0x7f < uStack_20) {
    uStack_20 = -(uStack_20 & 0x7f);
  }
  iVar1 = param_2 * param_2 * uStack_20;
  if (0x7f < uVar6) {
    uVar6 = -(uVar6 & 0x7f);
  }
  if (7 < (int)uVar2) {
    uVar2 = -(uVar2 & 7);
  }
  iVar4 = divide_two_integers((uVar6 + uVar2) * param_2,0x10);
  if (0x7f < uVar5) {
    uVar5 = -(uVar5 & 0x7f);
  }
  if (0xf < (int)uVar3) {
    uVar3 = -(uVar3 & 0xf);
  }
  return iVar4 + ((int)(iVar1 + ((uint)(iVar1 >> 7) >> 0x18)) >> 8) + uVar5 + uVar3;
}
