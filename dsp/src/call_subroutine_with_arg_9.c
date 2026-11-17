/* @k10d call_subroutine_with_arg_9 @ 0x000e7832
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes process_mode_transition with the constant argument 9 and returns.
 * summary:
 *   This is a one-line wrapper that passes the integer 9 to process_mode_transition. No
 *   other operations, memory accesses, or side effects are visible in the pseudocode. The
 *   role of process_mode_transition is unknown, so the specific behavior of this call
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_arg_9(void)

{
  uint32_t uVar1;
  
  uVar1 = process_mode_transition(9);
  return uVar1;
}
