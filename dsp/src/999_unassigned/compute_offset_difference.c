/* @k10d compute_offset_difference @ 0x000c1664
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes the difference between a scaled value from update_mode_indexed_state and a
 *   value from compute_flag_based_value, storing the result in _DAT_0003c59a.
 * summary:
 *   Calls update_mode_indexed_state and compute_flag_based_value to obtain two integer
 *   values. The first value is right-shifted by 1 after adding 0xa0. If the scaled value is
 *   less than the second value, _DAT_0003c59a is set to 0; otherwise, it is set to the
 *   difference between the two values (cast to short).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_offset_difference(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = update_mode_indexed_state();
  uVar2 = iVar1 + 0xa0U >> 1;
  iVar1 = compute_flag_based_value();
  if ((int)uVar2 < iVar1) {
    iVar1 = 0;
  }
  else {
    iVar1 = uVar2 - iVar1;
  }
  _DAT_0003c59a = (short)iVar1;
  return iVar1;
}
