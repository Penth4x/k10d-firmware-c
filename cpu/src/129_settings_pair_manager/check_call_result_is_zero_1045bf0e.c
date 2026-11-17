/* @k10d check_call_result_is_zero_1045bf0e @ 0x1045bf0e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two pointers and returns true if the helper returns zero.
 * summary:
 *   The function forwards param_1 and param_2 to compare_two_struct_fields, then compares
 *   the integer return value to 0. It returns a boolean indicating success (zero return) or
 *   failure (non-zero return). No other side effects are visible in this wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_call_result_is_zero_1045bf0e(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = compare_two_struct_fields((int)param_1,(int)param_2);
  return iVar1 == 0;
}
