/* @k10d forward_two_args_to_helper_10438930 @ 0x10438930
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes its first argument and the dereferenced second argument to a single callee.
 * summary:
 *   This function is a thin wrapper that calls store_hashed_value_at_offset with param_1
 *   and *param_2. It performs no other operations, has no visible side effects beyond the
 *   callee, and returns void. The specific subsystem role cannot be determined from this
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_args_to_helper_10438930(uint32_t param_1,uint32_t *param_2)

{
  store_hashed_value_at_offset(param_1,*param_2);
  return;
}
