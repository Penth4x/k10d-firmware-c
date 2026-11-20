/* @k10d call_helper_with_zero_arg_1043c4a8 @ 0x1043c4a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first parameter and zero, then returns 1.
 * summary:
 *   The function takes a single pointer argument, passes it along with the constant 0 to
 *   set_two_byte_state_flag, and returns the integer 1. The specific role of the callee is
 *   unknown, so the behavior is described mechanically as a wrapper call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a05a0": ignoring multiple overlapping fields */

uint32_t call_helper_with_zero_arg_1043c4a8(cls_105a05a0 *param_1)

{
  set_two_byte_state_flag(param_1,0);
  return 1;
}
