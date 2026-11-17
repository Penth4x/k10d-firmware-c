/* @k10d decrement_and_call_helper @ 0x1047e4a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Subtracts one from the second argument and forwards both to find_last_byte_in_buffer,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that decrements param_2 by 1 and passes the adjusted value along
 *   with param_1 to find_last_byte_in_buffer. It returns whatever find_last_byte_in_buffer
 *   returns. No other side effects or memory accesses are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t decrement_and_call_helper(int *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = find_last_byte_in_buffer(param_1,param_2 + -1);
  return uVar1;
}
