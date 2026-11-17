/* @k10d increment_and_call_helper @ 0x1047e496
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Adds one to the second argument and forwards both to find_byte_one_in_buffer, returning
 *   its result.
 * summary:
 *   This is a thin wrapper that increments param_2 by 1 and passes the adjusted value along
 *   with param_1 to find_byte_one_in_buffer. The return value of the callee is passed
 *   directly back to the caller. No other side effects or memory accesses are visible in
 *   this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t increment_and_call_helper(int *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = find_byte_one_in_buffer(param_1,param_2 + 1);
  return uVar1;
}
