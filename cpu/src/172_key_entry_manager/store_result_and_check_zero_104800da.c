/* @k10d store_result_and_check_zero_104800da @ 0x104800da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_104800da(int param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10540680/*ROM*/)(param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
