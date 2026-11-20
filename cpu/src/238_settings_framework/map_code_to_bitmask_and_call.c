/* @k10d map_code_to_bitmask_and_call @ 0x104ce826
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_code_to_bitmask_and_call(cls_105b9674 *param_1,int param_2,int *param_3)

{
  uint32_t uVar1;
  
  if (param_2 == 0x41000) {
    uVar1 = 1;
  }
  else if (param_2 == 0x41001) {
    uVar1 = 2;
  }
  else if (param_2 == 0x41002) {
    uVar1 = 4;
  }
  else {
    if (param_2 != 0x42001) {
      return 0;
    }
    uVar1 = 8;
  }
  uVar1 = set_flag_if_param2_zero_or_one((int)param_1,param_3,uVar1);
  return uVar1;
}
