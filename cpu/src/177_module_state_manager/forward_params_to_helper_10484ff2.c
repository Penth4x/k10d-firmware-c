/* @k10d forward_params_to_helper_10484ff2 @ 0x10484ff2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Passes four parameters to a helper, offsetting the first by 0x14.
 * summary:
 *   The function takes four parameters and immediately calls copy_channel_bytes_from_struct
 *   with the first parameter offset by 0x14 (param_1 + 0x14) and the remaining three
 *   parameters unchanged. It acts as a thin wrapper or thunk that adjusts the first
 *   argument before delegating to the callee. No other operations or side effects are
 *   visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_to_helper_10484ff2(int param_1,void *param_2,int param_3,int param_4)

{
  copy_channel_bytes_from_struct((void *)(param_1 + 0x14),param_2,param_3,param_4);
  return;
}
