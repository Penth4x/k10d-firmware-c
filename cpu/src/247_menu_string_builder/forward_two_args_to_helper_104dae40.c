/* @k10d forward_two_args_to_helper_104dae40 @ 0x104dae40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Passes the two incoming arguments (r4, r5) to try_two_step_operation and returns its
 *   result.
 * summary:
 *   A thin trampoline that forwards r4 and r5 to the callee try_two_step_operation and
 *   returns the callee's return value in r4. No local state, side effects, or camera-
 *   specific behavior are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_two_args_to_helper_104dae40(uint32_t r4_in, int *r5_in)

{
  uint32_t uVar1;
  
  uVar1 = try_two_step_operation(r4_in,r5_in);
  return uVar1;
}
