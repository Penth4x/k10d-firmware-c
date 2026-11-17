/* @k10d check_status_is_zero_1045c432 @ 0x1045c432
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if the result of compare_two_int_pairs is zero.
 * summary:
 *   Calls compare_two_int_pairs and compares its return value to 0, returning a boolean. No
 *   other side effects are visible in this function. The role of compare_two_int_pairs is
 *   unknown, so the specific status being checked cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_status_is_zero_1045c432(void)

{
  int iVar1;
  
  iVar1 = compare_two_int_pairs((int *)__frv_reg_unset(4),(int *)__frv_reg_unset(5));
  return iVar1 == 0;
}
