/* @k10d check_param_in_range_2_to_5 @ 0x104888da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_param_in_range_2_to_5(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) || (param_2 == 5)) {
    uVar1 = 1;
  }
  return uVar1;
}
