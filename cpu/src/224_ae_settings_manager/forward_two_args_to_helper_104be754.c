/* @k10d forward_two_args_to_helper_104be754 @ 0x104be754
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes two arguments to configure_mode_state_and_dispatch with two zero arguments and
 *   returns its result.
 * summary:
 *   This is a thin wrapper that calls configure_mode_state_and_dispatch with param_1, 0, 0,
 *   and param_2, then returns the callee's return value unchanged. No other side effects or
 *   state modifications are visible in this function. The caller is
 *   poll_status_and_dispatch_event_104cbf40.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_two_args_to_helper_104be754(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = configure_mode_state_and_dispatch(param_1,(void *)0x0,0,param_2);
  return uVar1;
}
