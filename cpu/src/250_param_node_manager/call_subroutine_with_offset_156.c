/* @k10d call_subroutine_with_offset_156 @ 0x104df3a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Passes the value of param_1 plus 0x9c to a single callee and returns.
 * summary:
 *   The function takes one integer argument, adds the constant 0x9c (156) to it, and passes
 *   the result to clear_flag_and_call_two_helpers_104d8346. It performs no other operations
 *   and returns void. The role of the callee is unknown, so the specific subsystem cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_156(int param_1)

{
  clear_flag_and_call_two_helpers_104d8346(param_1 + 0x9c);
  return;
}
