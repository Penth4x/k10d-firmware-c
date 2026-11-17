/* @k10d call_helper_with_offset_arg_1045cb2a @ 0x1045cb2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1 and a pointer derived from param_1[1] minus 4.
 * summary:
 *   The function takes a single pointer argument and immediately calls pop_stack_element
 *   with two arguments: the original pointer and a second pointer computed as param_1[1] -
 *   4. No other operations, side effects, or state changes are visible in this function
 *   itself. The role of the callee is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_1045cb2a(int *param_1)

{
  pop_stack_element(param_1,(void *)(param_1[1] + -4));
  return;
}
