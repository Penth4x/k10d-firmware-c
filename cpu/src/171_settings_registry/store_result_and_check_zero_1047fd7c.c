/* @k10d store_result_and_check_zero_1047fd7c @ 0x1047fd7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1047fd7c(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = run_seven_step_operation_sequence(param_2,param_3 & 0xff);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
