/* @k10d call_helper_with_fixed_args_1044a9a0 @ 0x1044a9a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the input pointer and fixed constants 1 and 0x1f, then returns 1.
 * summary:
 *   The function forwards param_1 to forward_three_args_to_helper_10459d64 along with the
 *   literal arguments 1 and 0x1f. It ignores the return value of the callee and
 *   unconditionally returns 1. No other side effects or globals are touched in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_fixed_args_1044a9a0(void *param_1)

{
  forward_three_args_to_helper_10459d64(param_1,1,0x1f);
  return 1;
}
