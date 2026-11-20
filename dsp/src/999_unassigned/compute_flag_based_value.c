/* @k10d compute_flag_based_value @ 0x000c15b6
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes a value from flag bits and a data word, or via callees, and stores it in
 *   DAT_0003c596.
 * summary:
 *   The function checks bits in DAT_0003c126 and DAT_0003c127 to select a calculation path.
 *   If specific flags are set, it computes a value from DAT_0003c108 using bit shifts and
 *   arithmetic; otherwise, it calls compute_signed_fixed_point_value and
 *   compute_bit_index_and_offset to derive the value. The result is stored in DAT_0003c596.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_flag_based_value(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)DAT_000f9deb;
  if ((DAT_0003c126 & 0x10) == 0) {
    if ((DAT_0003c127 & 8) != 0) {
      iVar2 = 0;
      for (uVar1 = (uint)(DAT_0003c108 >> 2) * 5; 0xf < uVar1; uVar1 = uVar1 >> 1) {
        iVar2 = iVar2 + 1;
      }
      uVar1 = (iVar2 << 3 | uVar1 & 7) + (DAT_0003c108 & 3) * 0x10 + 1;
    }
  }
  else {
    compute_signed_fixed_point_value();
    uVar1 = compute_bit_index_and_offset(__frv_reg_unset(4));
  }
  _DAT_0003c596 = (short)uVar1;
  return uVar1;
}
