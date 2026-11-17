/* @k10d dispatch_on_flag_zero_000c8252 @ 0x000c8252
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Branches to one of two handlers based on whether DAT_0003c3ac is zero.
 * summary:
 *   Reads the global DAT_0003c3ac and calls adjust_dat_0003c48b_by_param if it is zero,
 *   otherwise calls adjust_clamped_value_by_table. No other side effects are visible in
 *   this function. The role of DAT_0003c3ac and the two callees is not determinable from
 *   the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_zero_000c8252(void)

{
  if (DAT_0003c3ac == '\0') {
    adjust_dat_0003c48b_by_param(__frv_reg_unset(4));
  }
  else {
    adjust_clamped_value_by_table(__frv_reg_unset(4));
  }
  return;
}
