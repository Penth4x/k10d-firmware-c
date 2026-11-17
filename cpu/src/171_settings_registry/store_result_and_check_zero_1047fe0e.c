/* @k10d store_result_and_check_zero_1047fe0e @ 0x1047fe0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1047fe0e(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10543b54/*ROM*/)(param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
