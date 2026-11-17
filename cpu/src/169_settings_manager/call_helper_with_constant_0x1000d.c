/* @k10d call_helper_with_constant_0x1000d @ 0x1047d81c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards two arguments to a helper, appending the constant 0x1000d as a third
 *   parameter.
 * summary:
 *   This function is a thin wrapper that calls invoke_virtual_slot_two_1047d840 with
 *   param_1, param_2, and the immediate value 0x1000d. It performs no other operations and
 *   returns void. The role of the callee and the meaning of the constant are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_0x1000d(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x1000d);
  return;
}
