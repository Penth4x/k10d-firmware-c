/* @k10d call_helper_with_flag_0x10002 @ 0x1047d738
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with the two input arguments and a fixed constant 0x10002.
 * summary:
 *   The function is a thin wrapper that forwards param_1 and param_2 to
 *   invoke_virtual_slot_two_1047d840, appending the constant 0x10002 as a third argument.
 *   No local state is modified and no other side effects are visible. The role of the
 *   callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_0x10002(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10002);
  return;
}
