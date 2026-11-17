/* @k10d store_result_and_decrement_counter @ 0x1047ffb8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_decrement_counter(int param_1,uint32_t param_2,void *param_3,void *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = (*(code *)0x1053f53e/*ROM*/)(param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 4) = iVar1;
  if ((iVar1 == 0) && (1 < *param_5)) {
    *param_5 = *param_5 - 1;
  }
  return *(int *)(param_1 + 4) == 0;
}
