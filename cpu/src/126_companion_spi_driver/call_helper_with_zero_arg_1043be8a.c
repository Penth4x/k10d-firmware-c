/* @k10d call_helper_with_zero_arg_1043be8a @ 0x1043be8a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first parameter and a zero second argument, then
 *   returns 1.
 * summary:
 *   The function takes a single pointer argument and passes it along with the constant 0 to
 *   set_flag_via_helper. It unconditionally returns the integer 1 after the call. No other
 *   side effects or global state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */

uint32_t call_helper_with_zero_arg_1043be8a(cls_105a04cc *param_1)

{
  set_flag_via_helper(param_1,0);
  return 1;
}
