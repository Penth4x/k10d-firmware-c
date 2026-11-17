/* @k10d call_helper_with_0x10000 @ 0x1047d720
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function passing the two input arguments and the constant 0x10000.
 * summary:
 *   This function is a thin wrapper that forwards param_1 and param_2 to
 *   invoke_virtual_slot_two_1047d840, appending the constant 0x10000 as a third argument.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x10000(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10000);
  return;
}
