/* @k10d store_result_and_check_zero_1048051a @ 0x1048051a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1048051a(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)0x1053f278/*ROM*/)(param_2);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
