/* @k10d call_helper_with_two_and_ff @ 0x1046777a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls read_and_mask_byte_1046786c with param_1, 2, and 0xff, returning its result.
 * summary:
 *   A thin wrapper that forwards its single argument to read_and_mask_byte_1046786c along
 *   with the constants 2 and 0xff. The return value of the callee is passed through
 *   unchanged. The module context (firmware_update) suggests this may be part of an update
 *   routine, but the callee's role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_two_and_ff(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_and_mask_byte_1046786c(param_1,2,0xff);
  return uVar1;
}
