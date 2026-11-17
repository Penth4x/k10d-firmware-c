/* @k10d call_subroutine_with_ten @ 0x000d5630
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes FUN_000d5642 with the constant argument 10 and returns.
 * summary:
 *   This is a one-line wrapper that passes the integer 10 to FUN_000d5642. No other
 *   operations, memory accesses, or side effects are visible in the pseudocode. The role of
 *   FUN_000d5642 is unknown, so the specific behavior of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_ten(void)

{
  FUN_000d5642(10);
  return;
}
