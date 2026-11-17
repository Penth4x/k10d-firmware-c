/* @k10d dispatch_on_flag_zero_000c830a @ 0x000c830a
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Branches to one of two handlers based on whether DAT_0003c3ac is zero.
 * summary:
 *   Reads the global DAT_0003c3ac and calls advance_buffer_pointer_by_param if it is zero,
 *   otherwise calls adjust_value_with_lut. No other side effects are visible in this
 *   function. The role of the flag and the two callees is not determinable from the given
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_zero_000c830a(void)

{
  if (DAT_0003c3ac == '\0') {
    advance_buffer_pointer_by_param(__frv_reg_unset(4));
  }
  else {
    adjust_value_with_lut(__frv_reg_unset(4));
  }
  return;
}
