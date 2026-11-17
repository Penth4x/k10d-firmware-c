/* @k10d call_helper_with_flag_0x10001 @ 0x1047d72c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the given parameters and a fixed flag value of 0x10001.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   invoke_virtual_slot_two_1047d840, appending the constant 0x10001 as a third parameter.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_0x10001(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10001);
  return;
}
