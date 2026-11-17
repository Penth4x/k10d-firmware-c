/* @k10d call_subroutine_with_0x1e @ 0x000d581c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls store_scaled_value_and_flag with the constant argument 0x1e.
 * summary:
 *   This function is a one-line wrapper that invokes store_scaled_value_and_flag passing
 *   the immediate value 0x1e. It has no other logic, local variables, or side effects of
 *   its own. The role of store_scaled_value_and_flag is unknown, so the specific behavior
 *   of this wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_0x1e(void)

{
  store_scaled_value_and_flag(0x1e);
  return;
}
