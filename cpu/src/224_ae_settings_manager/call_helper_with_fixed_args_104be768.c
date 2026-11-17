/* @k10d call_helper_with_fixed_args_104be768 @ 0x104be768
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls configure_mode_state_and_dispatch with param_1, param_2, 1, and 0xffffffff,
 *   returning its result.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to
 *   configure_mode_state_and_dispatch, appending the constant arguments 1 and 0xffffffff.
 *   It returns the callee's return value directly. No other side effects or globals are
 *   touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_fixed_args_104be768(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  uVar1 = configure_mode_state_and_dispatch(param_1,param_2,1,-1);
  return uVar1;
}
