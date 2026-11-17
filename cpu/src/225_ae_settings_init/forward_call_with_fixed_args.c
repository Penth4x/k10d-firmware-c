/* @k10d forward_call_with_fixed_args @ 0x104bea0a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Forwards its four arguments to init_object_with_params_and_dispatch with a fixed second
 *   argument of 0 and a trailing null byte.
 * summary:
 *   This is a thin wrapper that calls init_object_with_params_and_dispatch, passing param_1
 *   as the first argument, 0 as the second, the upper two bytes of param_2 as the third,
 *   the lower byte of param_3 as the fourth, param_4 as the fifth, and 0 as the sixth. It
 *   returns the callee's result directly. The specific role of
 *   init_object_with_params_and_dispatch is unknown, so the wrapper's behavior is described
 *   mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_call_with_fixed_args(int param_1,uint32_t param_2,uint32_t param_3,uint8_t param_4)

{
  uint32_t uVar1;
  
  uVar1 = init_object_with_params_and_dispatch(param_1,0,((uint16_t)((uint64_t)(param_2) >> 16)),(uint8_t)param_3,param_4,'\0');
  return uVar1;
}
