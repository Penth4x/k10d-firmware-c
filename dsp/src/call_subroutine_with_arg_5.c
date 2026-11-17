/* @k10d call_subroutine_with_arg_5 @ 0x000d5634
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes FUN_000d5642 with the constant argument 5.
 * summary:
 *   The function is a one-line wrapper that calls FUN_000d5642 passing the integer 5. No
 *   other operations, memory accesses, or side effects are visible in the pseudocode. The
 *   role of FUN_000d5642 is unknown, so the semantic meaning of the argument 5 cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_5(void)

{
  FUN_000d5642(5);
  return;
}
