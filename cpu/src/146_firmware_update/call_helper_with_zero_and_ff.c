/* @k10d call_helper_with_zero_and_ff @ 0x1046773e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls read_and_mask_byte_1046786c with param_1, 0, and 0xff, returning the result.
 * summary:
 *   This is a thin wrapper that forwards its single argument to read_and_mask_byte_1046786c
 *   along with two fixed constants (0 and 0xff). It returns the callee's return value
 *   directly. The module context is firmware_update, but the specific role of the callee is
 *   unknown, so the name reflects the mechanical forwarding behavior.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_zero_and_ff(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_and_mask_byte_1046786c(param_1,0,0xff);
  return uVar1;
}
