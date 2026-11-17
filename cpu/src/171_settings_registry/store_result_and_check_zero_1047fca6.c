/* @k10d store_result_and_check_zero_1047fca6 @ 0x1047fca6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1047fca6(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = run_seven_step_state_sequence_105406f4(param_2);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
