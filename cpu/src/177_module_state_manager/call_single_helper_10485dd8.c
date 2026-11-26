/* @k10d call_single_helper_10485dd8 @ 0x10485dd8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   This function is a one-line wrapper that calls render_dot_matrix_pattern and returns
 *   immediately. It has no local variables, no arguments, and no other side effects. The
 *   role of the callee is unknown, so the wrapper's specific purpose cannot be determined
 *   beyond forwarding the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_10485dd8(uint32_t param_x0, uint32_t param_x1, uint32_t param_x2)

{
  render_dot_matrix_pattern(param_x0, param_x1, param_x2);
  return;
}
