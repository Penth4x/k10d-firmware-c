/* @k10d store_result_of_helper_call_1047f986 @ 0x1047f986
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls call_kernel_with_zero_arg and writes its return value into the memory location
 *   pointed to by param_1.
 * summary:
 *   The function invokes the single callee call_kernel_with_zero_arg, captures the 32-bit
 *   return value in r4, and stores it into the first argument pointer. It acts as a simple
 *   wrapper or getter that exposes the result of call_kernel_with_zero_arg to the caller
 *   via an output parameter. No other side effects or global state modifications are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_of_helper_call_1047f986(uint32_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = call_kernel_with_zero_arg();
  *param_1 = uVar1;
  return;
}
