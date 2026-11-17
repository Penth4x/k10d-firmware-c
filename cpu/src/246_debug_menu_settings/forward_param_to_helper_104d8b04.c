/* @k10d forward_param_to_helper_104d8b04 @ 0x104d8b04
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Passes a pointer offset by 0xbc from param_1 and param_2 to a helper function.
 * summary:
 *   The function takes two parameters and calls copy_null_terminated_string with the first
 *   argument adjusted by an offset of 0xbc (188 bytes) and the second argument unchanged.
 *   It acts as a thin wrapper or thunk that redirects a field within a structure pointed to
 *   by param_1 to the callee. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_104d8b04(int param_1,void *param_2)

{
  copy_null_terminated_string((void *)(param_1 + 0xbc),param_2);
  return;
}
