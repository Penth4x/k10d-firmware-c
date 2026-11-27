/* @k10d call_helper_and_return_param_1045bafc @ 0x1045bafc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper function and returns the input parameter unchanged.
 * summary:
 *   The function invokes advance_pointer_to_next_1045b9d8 with no arguments and then
 *   returns param_1. The specific role of the helper is unknown, so the behavior is
 *   described mechanically as a wrapper that performs a side effect via the callee and
 *   passes through the input pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * call_helper_and_return_param_1045bafc(void *param_1)
{
  advance_pointer_to_next_1045b9d8((int *)(uint32_t)param_1);
  return param_1;
}
