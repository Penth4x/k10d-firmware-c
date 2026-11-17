/* @k10d call_helper_with_constant_0x1000e @ 0x1047d828
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to invoke_virtual_slot_two_1047d840 with a third constant
 *   argument 0x1000e.
 * summary:
 *   This is a thin wrapper that calls invoke_virtual_slot_two_1047d840, passing param_1 and
 *   param_2 unchanged and appending the constant 0x1000e as a third parameter. No other
 *   operations, side effects, or state changes are visible in this function itself. The
 *   role of invoke_virtual_slot_two_1047d840 is unknown, so the camera subsystem cannot be
 *   determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_0x1000e(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x1000e);
  return;
}
