/* @k10d call_helper_with_one_and_param @ 0x104af7b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls dispatch_by_type_field_104af7e6 with param_1, the constant 1, and param_2.
 * summary:
 *   A one-line wrapper that forwards its two arguments to dispatch_by_type_field_104af7e6,
 *   inserting the literal 1 as the second argument. No other operations, side effects, or
 *   globals are touched. The role of the callee is unknown, so the subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_one_and_param(int *param_1,uint32_t param_2)

{
  dispatch_by_type_field_104af7e6(param_1,1,param_2);
  return;
}
