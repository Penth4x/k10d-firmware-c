/* @k10d store_result_and_check_zero_104804bc @ 0x104804bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_104804bc(int param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)0x1053f374/*ROM*/)(param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
