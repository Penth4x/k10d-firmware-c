/* @k10d check_call_result_is_zero_1045bc7e @ 0x1045bc7e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two pointers and returns true if the helper returns zero.
 * summary:
 *   Invokes compare_first_integers(param_1, param_2) and converts its integer return value
 *   into a boolean by testing equality with 0. No other side effects are visible in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_call_result_is_zero_1045bc7e(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = compare_first_integers(param_1,param_2);
  return iVar1 == 0;
}
