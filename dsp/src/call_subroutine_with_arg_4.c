/* @k10d call_subroutine_with_arg_4 @ 0x000d5638
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes FUN_000d5642 with the constant argument 4 and returns.
 * summary:
 *   This function is a one-line wrapper that calls FUN_000d5642 passing the integer 4. It
 *   has no other logic, side effects, or state manipulation. The role of FUN_000d5642 is
 *   unknown, so the specific behavior of this wrapper cannot be determined beyond the
 *   mechanical call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_4(void)

{
  FUN_000d5642(4);
  return;
}
