/* @k10d forward_params_to_subroutine @ 0x104ef27e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Passes its five arguments to dispatch_parameter_update with the second and fifth
 *   arguments swapped.
 * summary:
 *   This function is a thin wrapper that calls dispatch_parameter_update. It forwards
 *   param_1+0x10, param_3, param_4, param_5, and param_2 to the callee. No other operations
 *   or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_to_subroutine(int param_1,ushort *param_2,ushort *param_3,int param_4,int param_5)

{
  dispatch_parameter_update(param_1 + 0x10,param_3,param_4,param_5,param_2);
  return;
}
