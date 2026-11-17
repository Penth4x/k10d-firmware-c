/* @k10d call_helper_with_fixed_args_10467806 @ 0x10467806
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the input parameter and two fixed constants (6 and
 *   0x10).
 * summary:
 *   This function is a thin wrapper that forwards its single argument to
 *   read_and_mask_byte_1046786c along with the constants 6 and 0x10. It performs no other
 *   operations. The specific role of the helper and the meaning of the constants are not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_10467806(uint32_t param_1)

{
  read_and_mask_byte_1046786c(param_1,6,0x10);
  return;
}
