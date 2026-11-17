/* @k10d call_single_helper_with_two_args_1052d60c @ 0x1052d60c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards two pointer arguments to a single callee and returns.
 * summary:
 *   The function takes two undefined4* parameters and immediately calls copy_large_struct
 *   with them, then returns. No local state is modified and no other operations are
 *   performed. The role of the callee is unknown, so the wrapper's behavior is purely a
 *   pass-through.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_two_args_1052d60c(uint32_t *param_1,uint32_t *param_2)

{
  copy_large_struct(param_1,param_2);
  return;
}
