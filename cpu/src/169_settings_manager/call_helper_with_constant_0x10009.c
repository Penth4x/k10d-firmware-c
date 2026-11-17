/* @k10d call_helper_with_constant_0x10009 @ 0x1047d790
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to invoke_virtual_slot_two_1047d840 with a third constant
 *   argument of 0x10009.
 * summary:
 *   This is a thin wrapper that calls invoke_virtual_slot_two_1047d840, passing param_1 and
 *   param_2 through unchanged and supplying the literal 0x10009 as the third parameter. No
 *   other operations, side effects, or state changes are visible in this function itself.
 *   The role of invoke_virtual_slot_two_1047d840 and the meaning of 0x10009 are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_0x10009(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10009);
  return;
}
