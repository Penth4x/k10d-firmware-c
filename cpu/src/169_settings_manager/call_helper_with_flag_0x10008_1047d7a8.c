/* @k10d call_helper_with_flag_0x10008_1047d7a8 @ 0x1047d7a8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first two arguments and a constant third argument of
 *   0x10008.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   invoke_virtual_slot_two_1047d840, appending the constant 0x10008 as a third argument.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_0x10008_1047d7a8(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10008);
  return;
}
