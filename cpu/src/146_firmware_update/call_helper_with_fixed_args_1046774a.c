/* @k10d call_helper_with_fixed_args_1046774a @ 0x1046774a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls read_and_mask_byte_1046786c with the input, 1, and 0xff, returning its result.
 * summary:
 *   A thin wrapper that forwards param_1 to read_and_mask_byte_1046786c along with the
 *   constants 1 and 0xff, then returns the callee's return value unchanged. The module
 *   context is firmware_update, but the callee's role is unknown, so the specific subsystem
 *   behavior cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_fixed_args_1046774a(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_and_mask_byte_1046786c(param_1,1,0xff);
  return uVar1;
}
