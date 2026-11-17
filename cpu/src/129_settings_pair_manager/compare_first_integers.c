/* @k10d compare_first_integers @ 0x1045bc6c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_first_integers(int *param_1,int *param_2)

{
  uint32_t uVar1;
  
  if ((*param_1 != *param_2) || (uVar1 = 1, *param_1 != *param_2)) {
    uVar1 = 0;
  }
  return uVar1;
}
