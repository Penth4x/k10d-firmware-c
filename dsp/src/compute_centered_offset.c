/* @k10d compute_centered_offset @ 0x000c67be
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Returns a clamped offset value derived from a queried length and a fixed reference
 *   size.
 * summary:
 *   Calls compute_flag_based_value to obtain a value; if positive, calls
 *   divide_two_integers with argument 0x1086 and computes (0x157 - result) / 2. The result
 *   is clamped to a minimum of 0x6c (108). If the initial query is not positive, returns
 *   the default 0x7c (124). No MMIO or global state is touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_centered_offset(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x7c;
  iVar1 = compute_flag_based_value();
  if (0 < iVar1) {
    iVar1 = divide_two_integers(0x1086, __frv_reg_unset(5));
    iVar2 = (0x157 - iVar1) / 2;
    if (iVar2 < 0x6c) {
      iVar2 = 0x6c;
    }
  }
  return iVar2;
}
