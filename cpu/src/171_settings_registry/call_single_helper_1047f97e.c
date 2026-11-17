/* @k10d call_single_helper_1047f97e @ 0x1047f97e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   This function is a one-line wrapper that calls read_six_byte_fields_from_buffer with no
 *   arguments. It has no local variables, no side effects of its own, and returns void. The
 *   role of the callee is unknown, so the wrapper's specific subsystem role cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1047f97e(uint32_t param_x0)

{
  read_six_byte_fields_from_buffer((uint *)__frv_reg_unset(4));
  return;
}
