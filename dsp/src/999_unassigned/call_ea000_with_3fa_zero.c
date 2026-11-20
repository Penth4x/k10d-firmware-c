/* @k10d call_ea000_with_3fa_zero @ 0x000ca660
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes check_and_run_two_routines with arguments 0x3fa and 0.
 * summary:
 *   The function is a one-line wrapper that calls check_and_run_two_routines(0x3fa, 0) and
 *   returns. No other operations, memory accesses, or side effects are visible in the
 *   pseudocode. The role of check_and_run_two_routines is unknown, so the semantic meaning
 *   of the 0x3fa argument cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_ea000_with_3fa_zero(void)

{
  check_and_run_two_routines(0x3fa,0);
  return;
}
