/* @k10d clamp_and_store_short_value @ 0x000dcfac
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads a value, transforms it, clamps it to [10, 800], and stores the result as a short
 *   in DAT_0003c808.
 * summary:
 *   Calls compute_value_from_flag_bits to get an initial value, adds 4, and passes the
 *   result with a second argument of 8 to divide_two_integers. The return value is clamped
 *   to a minimum of 10 and a maximum of 800. The final clamped value is truncated to a
 *   short and written to the global variable DAT_0003c808. The specific meaning of the
 *   value or the global variable is not determinable from the provided pseudocode and
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_and_store_short_value(void)

{
  int iVar1;
  
  iVar1 = compute_value_from_flag_bits();
  iVar1 = divide_two_integers(iVar1 + 4,8);
  if (800 < iVar1) {
    iVar1 = 800;
  }
  if (iVar1 < 10) {
    iVar1 = 10;
  }
  _DAT_0003c808 = (short)iVar1;
  return;
}
