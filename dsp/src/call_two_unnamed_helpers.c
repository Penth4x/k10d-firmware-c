/* @k10d call_two_unnamed_helpers @ 0x000dc710
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes two unnamed helper functions, passing three consecutive 16-bit values to the
 *   second.
 * summary:
 *   The function has no local logic. It calls accumulate_three_fixed_point_values with no
 *   arguments, then calls dispatch_three_subcalls with three 16-bit values loaded from
 *   DAT_0003c81a, DAT_0003c81c, and DAT_0003c81e. No side effects or flags are visible in
 *   this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_two_unnamed_helpers(void)

{
  accumulate_three_fixed_point_values();
  dispatch_three_subcalls((int)_DAT_0003c81a,(int)_DAT_0003c81c,(int)_DAT_0003c81e);
  return;
}
