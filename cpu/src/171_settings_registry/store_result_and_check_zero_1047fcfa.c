/* @k10d store_result_and_check_zero_1047fcfa @ 0x1047fcfa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1047fcfa(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10540d3c/*ROM*/)(param_2);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
