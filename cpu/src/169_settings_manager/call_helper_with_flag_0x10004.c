/* @k10d call_helper_with_flag_0x10004 @ 0x1047d750
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first two arguments and a fixed third argument of
 *   0x10004.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   invoke_virtual_slot_two_1047d840, appending the constant 0x10004 as the third argument.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_0x10004(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10004);
  return;
}
