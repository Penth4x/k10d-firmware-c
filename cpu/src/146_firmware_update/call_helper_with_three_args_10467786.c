/* @k10d call_helper_with_three_args_10467786 @ 0x10467786
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls read_and_mask_byte_1046786c with param_1, 3, and 0xff, returning its result.
 * summary:
 *   A thin wrapper that forwards its single argument to read_and_mask_byte_1046786c along
 *   with the constants 3 and 0xff. The return value of the callee is passed directly back
 *   to the caller. The module context is firmware_update, but the specific role of the
 *   callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_three_args_10467786(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_and_mask_byte_1046786c(param_1,3,0xff);
  return uVar1;
}
