/* @k10d store_result_and_check_zero_10480426 @ 0x10480426
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_10480426(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = run_two_step_helper(param_2);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
