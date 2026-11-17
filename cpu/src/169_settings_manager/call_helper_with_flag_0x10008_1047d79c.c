/* @k10d call_helper_with_flag_0x10008_1047d79c @ 0x1047d79c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with the two input arguments and a fixed constant 0x10008.
 * summary:
 *   This function is a thin wrapper that forwards param_1 and param_2 to
 *   invoke_virtual_slot_two_1047d840, appending the constant 0x10008 as a third argument.
 *   No other operations, side effects, or state changes are visible in this function
 *   itself. The role of the underlying helper is not described, so the camera subsystem
 *   cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_0x10008_1047d79c(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10008);
  return;
}
