/* @k10d call_helper_with_fixed_args_10467812 @ 0x10467812
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the input plus two fixed constants (6 and 0xff).
 * summary:
 *   Thin wrapper that forwards param_1 to read_and_mask_byte_1046786c along with the
 *   literal arguments 6 and 0xff. No other logic, state, or side effects are visible in
 *   this function. The role of the callee is unknown, so the camera subsystem cannot be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10467812(uint32_t param_1)

{
  read_and_mask_byte_1046786c(param_1,6,0xff);
  return;
}
