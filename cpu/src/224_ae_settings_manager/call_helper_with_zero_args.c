/* @k10d call_helper_with_zero_args @ 0x104be78a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Wraps a call to configure_state_block_and_dispatch by passing param_1 and param_2 with
 *   two zero arguments in between.
 * summary:
 *   The function takes two parameters and forwards them to
 *   configure_state_block_and_dispatch, inserting 0 as the second and fourth arguments. It
 *   returns the result of that call directly. No other operations or side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_zero_args(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = configure_state_block_and_dispatch(param_1,(void *)0x0,param_2,0);
  return uVar1;
}
