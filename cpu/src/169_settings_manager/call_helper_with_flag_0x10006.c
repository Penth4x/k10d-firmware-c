/* @k10d call_helper_with_flag_0x10006 @ 0x1047d770
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards two arguments to a helper function with a fixed third parameter of 0x10006.
 * summary:
 *   This function is a thin wrapper that calls invoke_virtual_slot_two_1047d840, passing
 *   param_1 and param_2 through unchanged and supplying the constant 0x10006 as the third
 *   argument. It performs no other operations or side effects. The specific role of the
 *   helper and the meaning of the constant are not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_0x10006(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10006);
  return;
}
