/* @k10d call_helper_with_flag_0x10007 @ 0x1047d780
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to a helper function with a third constant argument of
 *   0x10007.
 * summary:
 *   This is a thin wrapper that calls invoke_virtual_slot_two_1047d840, passing param_1 and
 *   param_2 through unchanged and supplying the constant 0x10007 as the third parameter. No
 *   other operations, side effects, or state changes are visible in this function itself.
 *   The role of the callee and the meaning of the 0x10007 flag are not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_0x10007(uint32_t param_1,int *param_2)

{
  invoke_virtual_slot_two_1047d840(param_1,param_2,0x10007);
  return;
}
