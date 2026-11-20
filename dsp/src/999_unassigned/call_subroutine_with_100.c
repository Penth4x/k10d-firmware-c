/* @k10d call_subroutine_with_100 @ 0x000d566e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes busy_wait_on_mode_flag with the constant argument 100.
 * summary:
 *   This function is a one-line wrapper that calls busy_wait_on_mode_flag passing the
 *   decimal value 100. No other operations, memory accesses, or state changes are visible
 *   in the pseudocode. The role of busy_wait_on_mode_flag is unknown, so the overall
 *   purpose cannot be determined beyond this single call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_100(void)

{
  busy_wait_on_mode_flag(100);
  return;
}
